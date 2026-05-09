#include "UIWorldMenuGameInstance.h"

#include "Blueprint/UserWidget.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/PlayerState.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "MoviePlayer.h"
#include "OnlineSessionSettings.h"
#include "OnlineSubsystem.h"
#include "SocketSubsystem.h"
#include "UI/ZonefallLoadingScreenWidget.h"
#include "UI/ZonefallPauseMenuWidget.h"
#include "UI/ZonefallShaderLoadingWidget.h"
#include "HAL/FileManager.h"
#include "HAL/PlatformFileManager.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Misc/App.h"
#include "ShaderCompiler.h"

DEFINE_LOG_CATEGORY_STATIC(LogUIWorldStartupFlow, Log, All);

UUIWorldMenuGameInstance::UUIWorldMenuGameInstance()
	: bAutoShowMenuOnStart(true)
	, bShowShaderLoadingOnStartup(true)
	, StartupShaderLoadingDuration(3.5f)
	, bUseAdaptiveStartupShaderDelay(true)
	, StartupShaderMaxDuration(20.0f)
	, bCacheWidgetsByScreen(true)
	, MenuZOrder(100)
	, MainMenuLevelName(TEXT("Menu"))
	, OnlineHostMapName(TEXT("Menu"))
	, OnlineServerName(TEXT("UIWorld Server"))
	, LoadingScreenDelayBeforeOpenLevel(0.12f)
	, bUseAdaptiveLoadingDelay(true)
	, AdaptiveDelayMinSeconds(0.12f)
	, AdaptiveDelayMaxSeconds(1.25f)
	, bUseMapComplexityDelay(true)
	, MapDelayPer100MB(1.25f)
	, MapDelayMaxSeconds(8.0f)
	, bUseMoviePlayerLoadingScreen(true)
	, CurrentMenuScreen(EUIWorldMenuScreen::MainMenu)
	, LastNonSettingsMenuScreen(EUIWorldMenuScreen::MainMenu)
	, PinnedMenuWidget(nullptr)
	, ActiveLoadingScreenWidget(nullptr)
	, ActiveStartupShaderWidget(nullptr)
	, bStartupShaderPhaseActive(false)
	, bStartupShaderPhaseCompleted(false)
	, bApplyGameFocusOnNextMapLoad(false)
	, PendingLevelNameToLoad(NAME_None)
	, bPendingLevelAbsolute(true)
	, StartupShaderPhaseStartSeconds(0.0f)
	, StartupInitialShaderJobs(0)
{
}

namespace
{
	static IOnlineSessionPtr UIWorldGetSessionInterface()
	{
		if (IOnlineSubsystem* OSS = IOnlineSubsystem::Get())
		{
			return OSS->GetSessionInterface();
		}
		return nullptr;
	}

	static TSharedPtr<const FUniqueNetId> UIWorldGetLocalUserId(UWorld* World)
	{
		if (!World)
		{
			return nullptr;
		}
		APlayerController* PC = UGameplayStatics::GetPlayerController(World, 0);
		if (!PC || !PC->PlayerState)
		{
			return nullptr;
		}
		return PC->PlayerState->GetUniqueId().GetUniqueNetId();
	}

	static FString UIWorldResolveLocalLanIp()
	{
		ISocketSubsystem* SocketSubsystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
		if (!SocketSubsystem)
		{
			return TEXT("Unknown");
		}

		bool bCanBindAll = false;
		TSharedRef<FInternetAddr> LocalAddr = SocketSubsystem->GetLocalHostAddr(*GLog, bCanBindAll);
		return LocalAddr->IsValid() ? LocalAddr->ToString(false) : TEXT("Unknown");
	}

	static FUIWorldOnlineSessionResult UIWorldConvertSearchResult(const FOnlineSessionSearchResult& Result)
	{
		FUIWorldOnlineSessionResult Out;
		Out.SessionId = Result.GetSessionIdStr();
		Out.OwningUserName = Result.Session.OwningUserName;
		Out.PingMs = Result.PingInMs;
		Out.MaxPlayers = Result.Session.SessionSettings.NumPublicConnections;
		Out.CurrentPlayers = FMath::Max(0, Out.MaxPlayers - Result.Session.NumOpenPublicConnections);
		Out.bIsLAN = Result.Session.SessionSettings.bIsLANMatch;

		FString ServerName;
		if (Result.Session.SessionSettings.Get(FName(TEXT("SERVER_NAME")), ServerName))
		{
			Out.ServerName = ServerName;
		}
		else
		{
			Out.ServerName = Out.OwningUserName.IsEmpty() ? TEXT("Session") : Out.OwningUserName;
		}
		return Out;
	}
}

void UUIWorldMenuGameInstance::Init()
{
	Super::Init();
	FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &UUIWorldMenuGameInstance::HandlePostLoadMap);
}

void UUIWorldMenuGameInstance::OnStart()
{
	Super::OnStart();

	bStartupShaderPhaseActive = false;
	bStartupShaderPhaseCompleted = false;

	UE_LOG(
		LogUIWorldStartupFlow,
		Log,
		TEXT("OnStart: bShowShaderLoadingOnStartup=%d ShaderLoadingWidgetClass=%s bAutoShowMenuOnStart=%d"),
		bShowShaderLoadingOnStartup,
		*GetNameSafe(ShaderLoadingWidgetClass.Get()),
		bAutoShowMenuOnStart
	);

	if (bShowShaderLoadingOnStartup && ShaderLoadingWidgetClass)
	{
		BeginStartupShaderPhase();
		return;
	}

	if (bAutoShowMenuOnStart)
	{
		ShowMenuFromList(EUIWorldMenuScreen::MainMenu, false);
	}
}

void UUIWorldMenuGameInstance::Shutdown()
{
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(StartupShaderTimerHandle);
	}
	if (ActiveStartupShaderWidget)
	{
		ActiveStartupShaderWidget->RemoveFromParent();
		ActiveStartupShaderWidget = nullptr;
	}

	FCoreUObjectDelegates::PostLoadMapWithWorld.RemoveAll(this);
	Super::Shutdown();
}

TSubclassOf<UUserWidget> UUIWorldMenuGameInstance::ResolveMenuClass(EUIWorldMenuScreen MenuScreen) const
{
	switch (MenuScreen)
	{
	case EUIWorldMenuScreen::MainMenu:
		UE_LOG(LogUIWorldStartupFlow, Verbose, TEXT("[MenuFlow] ResolveMenuClass -> MainMenu (%s)"), *GetNameSafe(MainMenuWidgetClass.Get()));
		return MainMenuWidgetClass;
	case EUIWorldMenuScreen::OnlineMenu:
		UE_LOG(LogUIWorldStartupFlow, Verbose, TEXT("[MenuFlow] ResolveMenuClass -> OnlineMenu (%s)"), *GetNameSafe((OnlineMenuWidgetClass ? OnlineMenuWidgetClass : MainMenuWidgetClass).Get()));
		return OnlineMenuWidgetClass ? OnlineMenuWidgetClass : MainMenuWidgetClass;
	case EUIWorldMenuScreen::PauseMenu:
		if (PauseMenuWidgetClass)
		{
			UE_LOG(LogUIWorldStartupFlow, Verbose, TEXT("[MenuFlow] ResolveMenuClass -> PauseMenu (%s)"), *GetNameSafe(PauseMenuWidgetClass.Get()));
			return PauseMenuWidgetClass;
		}
		UE_LOG(LogUIWorldStartupFlow, Warning, TEXT("ResolveMenuClass(PauseMenu): PauseMenuWidgetClass is null, using UZonefallPauseMenuWidget fallback."));
		return UZonefallPauseMenuWidget::StaticClass();
	case EUIWorldMenuScreen::SettingsMenu:
		if (LastNonSettingsMenuScreen == EUIWorldMenuScreen::PauseMenu && PauseSettingsMenuWidgetClass)
		{
			UE_LOG(LogUIWorldStartupFlow, Verbose, TEXT("[MenuFlow] ResolveMenuClass -> PauseSettingsMenu (%s)"), *GetNameSafe(PauseSettingsMenuWidgetClass.Get()));
			return PauseSettingsMenuWidgetClass;
		}
		UE_LOG(LogUIWorldStartupFlow, Verbose, TEXT("[MenuFlow] ResolveMenuClass -> SettingsMenu (%s)"), *GetNameSafe((SettingsMenuWidgetClass ? SettingsMenuWidgetClass : MainMenuWidgetClass).Get()));
		return SettingsMenuWidgetClass ? SettingsMenuWidgetClass : MainMenuWidgetClass;
	default:
		UE_LOG(LogUIWorldStartupFlow, Warning, TEXT("[MenuFlow] ResolveMenuClass -> Default fallback to MainMenu (%s)"), *GetNameSafe(MainMenuWidgetClass.Get()));
		return MainMenuWidgetClass;
	}
}

UUserWidget* UUIWorldMenuGameInstance::ResolveOrCreateWidget(APlayerController* PlayerController, TSubclassOf<UUserWidget> WidgetClass, bool bForceRebuild)
{
	if (!PlayerController || !WidgetClass)
	{
		UE_LOG(
			LogUIWorldStartupFlow,
			Warning,
			TEXT("[MenuFlow] ResolveOrCreateWidget aborted. PlayerController=%d WidgetClass=%s"),
			PlayerController != nullptr,
			*GetNameSafe(WidgetClass.Get())
		);
		return nullptr;
	}

	UUserWidget* CachedWidget = nullptr;
	if (bCacheWidgetsByScreen)
	{
		if (TObjectPtr<UUserWidget>* FoundWidget = MenuWidgetCache.Find(CurrentMenuScreen))
		{
			CachedWidget = FoundWidget->Get();
		}
	}

	const bool bNeedNewWidget = bForceRebuild || !CachedWidget || !CachedWidget->IsA(WidgetClass);
	UUserWidget* FinalWidget = CachedWidget;
	if (bNeedNewWidget)
	{
		UE_LOG(
			LogUIWorldStartupFlow,
			Log,
			TEXT("[MenuFlow] Creating widget. Screen=%d Class=%s Force=%d CachedValid=%d"),
			static_cast<int32>(CurrentMenuScreen),
			*GetNameSafe(WidgetClass.Get()),
			bForceRebuild ? 1 : 0,
			CachedWidget != nullptr
		);
		FinalWidget = CreateWidget<UUserWidget>(PlayerController, WidgetClass);
		if (!FinalWidget)
		{
			UE_LOG(LogUIWorldStartupFlow, Error, TEXT("[MenuFlow] CreateWidget failed for class=%s"), *GetNameSafe(WidgetClass.Get()));
			return nullptr;
		}
		if (bCacheWidgetsByScreen)
		{
			MenuWidgetCache.Add(CurrentMenuScreen, FinalWidget);
		}
	}
	else
	{
		UE_LOG(
			LogUIWorldStartupFlow,
			Verbose,
			TEXT("[MenuFlow] Reusing cached widget. Screen=%d Widget=%s"),
			static_cast<int32>(CurrentMenuScreen),
			*GetNameSafe(FinalWidget)
		);
	}
	return FinalWidget;
}

void UUIWorldMenuGameInstance::ApplyMenuInputMode(APlayerController* PlayerController, UUserWidget* WidgetToFocus) const
{
	if (!PlayerController || !WidgetToFocus)
	{
		return;
	}

	FInputModeUIOnly UiOnlyInputMode;
	if (WidgetToFocus->IsFocusable())
	{
		UiOnlyInputMode.SetWidgetToFocus(WidgetToFocus->TakeWidget());
	}
	UiOnlyInputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);

	PlayerController->SetInputMode(UiOnlyInputMode);
	PlayerController->SetShowMouseCursor(true);
	PlayerController->SetIgnoreMoveInput(true);
	PlayerController->SetIgnoreLookInput(true);
}

void UUIWorldMenuGameInstance::HideCurrentMenuWidget()
{
	if (PinnedMenuWidget && PinnedMenuWidget->IsInViewport())
	{
		PinnedMenuWidget->RemoveFromParent();
	}
}

UUserWidget* UUIWorldMenuGameInstance::ShowMenuFromList(EUIWorldMenuScreen MenuScreen, bool bForceRebuild)
{
	UE_LOG(
		LogUIWorldStartupFlow,
		Log,
		TEXT("[MenuFlow] ShowMenuFromList start. Screen=%d Force=%d StartupActive=%d StartupDone=%d"),
		static_cast<int32>(MenuScreen),
		bForceRebuild ? 1 : 0,
		bStartupShaderPhaseActive ? 1 : 0,
		bStartupShaderPhaseCompleted ? 1 : 0
	);
	if (bShowShaderLoadingOnStartup && ShaderLoadingWidgetClass && !bStartupShaderPhaseCompleted)
	{
		if (!bStartupShaderPhaseActive)
		{
			BeginStartupShaderPhase();
		}
		return nullptr;
	}

	UWorld* World = GetWorld();
	if (!World)
	{
		return nullptr;
	}

	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(World, 0);
	if (!PlayerController)
	{
		UE_LOG(LogUIWorldStartupFlow, Warning, TEXT("[MenuFlow] ShowMenuFromList failed: PlayerController is null."));
		return nullptr;
	}

	if (MenuScreen == EUIWorldMenuScreen::SettingsMenu)
	{
		// Keep track of where settings were opened from for reliable Back behavior.
		if (CurrentMenuScreen != EUIWorldMenuScreen::SettingsMenu)
		{
			LastNonSettingsMenuScreen = CurrentMenuScreen;
		}
	}
	else
	{
		LastNonSettingsMenuScreen = MenuScreen;
	}

	CurrentMenuScreen = MenuScreen;
	TSubclassOf<UUserWidget> SelectedWidgetClass = ResolveMenuClass(MenuScreen);
	UUserWidget* WorkingWidget = ResolveOrCreateWidget(PlayerController, SelectedWidgetClass, bForceRebuild);
	if (!WorkingWidget)
	{
		UE_LOG(LogUIWorldStartupFlow, Error, TEXT("[MenuFlow] ShowMenuFromList failed: ResolveOrCreateWidget returned null."));
		return nullptr;
	}

	HideCurrentMenuWidget();
	if (!WorkingWidget->IsInViewport())
	{
		WorkingWidget->AddToViewport(MenuZOrder);
		UE_LOG(LogUIWorldStartupFlow, Log, TEXT("[MenuFlow] Widget added to viewport. Widget=%s Z=%d"), *GetNameSafe(WorkingWidget), MenuZOrder);
	}
	else
	{
		UE_LOG(LogUIWorldStartupFlow, Verbose, TEXT("[MenuFlow] Widget already in viewport. Widget=%s"), *GetNameSafe(WorkingWidget));
	}

	ApplyMenuInputMode(PlayerController, WorkingWidget);
	PinnedMenuWidget = WorkingWidget;
	UE_LOG(
		LogUIWorldStartupFlow,
		Log,
		TEXT("[MenuFlow] ShowMenuFromList success. Screen=%d Widget=%s"),
		static_cast<int32>(CurrentMenuScreen),
		*GetNameSafe(PinnedMenuWidget)
	);
	OnMenuWidgetChanged.Broadcast(WorkingWidget);
	OnMenuScreenChanged.Broadcast(CurrentMenuScreen);
	return WorkingWidget;
}

void UUIWorldMenuGameInstance::CloseMenuUI(bool bRemoveFromParentOnly)
{
	HideCurrentMenuWidget();
	if (!bRemoveFromParentOnly)
	{
		PinnedMenuWidget = nullptr;
		MenuWidgetCache.Empty();
	}

	if (UWorld* World = GetWorld())
	{
		if (APlayerController* PlayerController = UGameplayStatics::GetPlayerController(World, 0))
		{
			PlayerController->ResetIgnoreMoveInput();
			PlayerController->ResetIgnoreLookInput();
			FInputModeGameOnly GameOnlyInputMode;
			PlayerController->SetInputMode(GameOnlyInputMode);
			PlayerController->SetShowMouseCursor(false);
		}
	}
	OnMenuWidgetChanged.Broadcast(nullptr);
}

bool UUIWorldMenuGameInstance::LoadLevelAndFocusGame(FName LevelName, bool bAbsolute)
{
	if (LevelName.IsNone())
	{
		return false;
	}
	UWorld* World = GetWorld();
	if (!World)
	{
		return false;
	}

	CloseMenuUI(false);
	bApplyGameFocusOnNextMapLoad = true;
	UGameplayStatics::OpenLevel(World, LevelName, bAbsolute);
	return true;
}

bool UUIWorldMenuGameInstance::LoadLevelWithLoadingScreen(FName LevelName, bool bAbsolute)
{
	if (LevelName.IsNone())
	{
		return false;
	}
	UWorld* World = GetWorld();
	if (!World)
	{
		return false;
	}

	ShowSimpleTravelLoadingScreen();
	CloseMenuUI(false);
	bApplyGameFocusOnNextMapLoad = true;
	PendingLevelNameToLoad = LevelName;
	bPendingLevelAbsolute = bAbsolute;

	World->GetTimerManager().ClearTimer(PendingLoadLevelTimerHandle);
	float Delay = bUseAdaptiveLoadingDelay
		? EstimateAdaptiveLoadingDelay()
		: FMath::Clamp(LoadingScreenDelayBeforeOpenLevel, 0.0f, 2.0f);
	if (bUseMapComplexityDelay)
	{
		Delay += EstimateMapComplexityDelay(LevelName);
	}
	Delay = FMath::Clamp(Delay, 0.0f, 30.0f);
	if (Delay <= KINDA_SMALL_NUMBER)
	{
		World->GetTimerManager().SetTimerForNextTick(this, &UUIWorldMenuGameInstance::ExecutePendingLevelLoad);
	}
	else
	{
		World->GetTimerManager().SetTimer(
			PendingLoadLevelTimerHandle,
			this,
			&UUIWorldMenuGameInstance::ExecutePendingLevelLoad,
			Delay,
			false
		);
	}
	return true;
}

void UUIWorldMenuGameInstance::ExecutePendingLevelLoad()
{
	UWorld* World = GetWorld();
	if (!World || PendingLevelNameToLoad.IsNone())
	{
		return;
	}

	const FName LevelToOpen = PendingLevelNameToLoad;
	const bool bAbsolute = bPendingLevelAbsolute;
	PendingLevelNameToLoad = NAME_None;
	if (UZonefallLoadingScreenWidget* TypedLoading = Cast<UZonefallLoadingScreenWidget>(ActiveLoadingScreenWidget))
	{
		TypedLoading->EnterFinalizingPhase(82.0f);
	}
	if (bUseMoviePlayerLoadingScreen)
	{
		SetupMoviePlayerLoadingScreen();
	}
	UGameplayStatics::OpenLevel(World, LevelToOpen, bAbsolute);
}

float UUIWorldMenuGameInstance::EstimateAdaptiveLoadingDelay() const
{
	const int32 Cores = FPlatformMisc::NumberOfCoresIncludingHyperthreads();
	const uint64 TotalPhysicalBytes = FPlatformMemory::GetConstants().TotalPhysical;
	const float TotalRamGB = static_cast<float>(TotalPhysicalBytes) / (1024.0f * 1024.0f * 1024.0f);

	float CpuFactor = 0.35f;
	if (Cores <= 4)
	{
		CpuFactor = 1.0f;
	}
	else if (Cores <= 8)
	{
		CpuFactor = 0.72f;
	}
	else if (Cores <= 12)
	{
		CpuFactor = 0.52f;
	}

	float RamFactor = 0.35f;
	if (TotalRamGB < 8.0f)
	{
		RamFactor = 1.0f;
	}
	else if (TotalRamGB < 16.0f)
	{
		RamFactor = 0.72f;
	}
	else if (TotalRamGB < 24.0f)
	{
		RamFactor = 0.52f;
	}

	const float HardwareFactor = FMath::Max(CpuFactor, RamFactor);
	const float Base = FMath::Clamp(LoadingScreenDelayBeforeOpenLevel, 0.0f, 2.0f);
	const float Adaptive = Base + (HardwareFactor * 0.55f);
	const float MinDelay = FMath::Clamp(AdaptiveDelayMinSeconds, 0.0f, 5.0f);
	const float MaxDelay = FMath::Clamp(AdaptiveDelayMaxSeconds, MinDelay + 0.01f, 10.0f);
	return FMath::Clamp(Adaptive, MinDelay, MaxDelay);
}

float UUIWorldMenuGameInstance::EstimateMapComplexityDelay(FName LevelName) const
{
	const FString RawLevel = LevelName.ToString();
	if (RawLevel.IsEmpty())
	{
		return 0.0f;
	}

	auto ResolveMapPathAndSizeMB = [&RawLevel]() -> float
	{
		FString Normalized = RawLevel;
		if (Normalized.StartsWith(TEXT("/Game/")))
		{
			Normalized = Normalized.RightChop(6); // after /Game/
		}
		const int32 DotIndex = Normalized.Find(TEXT("."), ESearchCase::IgnoreCase, ESearchDir::FromStart);
		if (DotIndex != INDEX_NONE)
		{
			Normalized = Normalized.Left(DotIndex);
		}

		FString DirectMapPath = FPaths::Combine(FPaths::ProjectContentDir(), Normalized + TEXT(".umap"));
		int64 SizeBytes = IFileManager::Get().FileSize(*DirectMapPath);
		if (SizeBytes <= 0)
		{
			// Fallback: search by short map name.
			const FString MapFileName = FPaths::GetBaseFilename(Normalized) + TEXT(".umap");
			TArray<FString> FoundFiles;
			IFileManager::Get().FindFilesRecursive(FoundFiles, *FPaths::ProjectContentDir(), *MapFileName, true, false, false);
			if (FoundFiles.Num() > 0)
			{
				SizeBytes = IFileManager::Get().FileSize(*FoundFiles[0]);
			}
		}

		if (SizeBytes <= 0)
		{
			return 0.0f;
		}

		return static_cast<float>(SizeBytes) / (1024.0f * 1024.0f);
	};

	const float MapSizeMB = ResolveMapPathAndSizeMB();
	if (MapSizeMB <= 0.0f)
	{
		return 0.0f;
	}

	const float Per100 = FMath::Max(0.0f, MapDelayPer100MB);
	const float RawDelay = (MapSizeMB / 100.0f) * Per100;
	return FMath::Clamp(RawDelay, 0.0f, FMath::Max(0.0f, MapDelayMaxSeconds));
}

void UUIWorldMenuGameInstance::ContinueGame(bool bUnpauseGame)
{
	CloseMenuUI(false);
	if (bUnpauseGame)
	{
		if (UWorld* World = GetWorld())
		{
			UGameplayStatics::SetGamePaused(World, false);
			ApplyGameFocusInput(World);
		}
	}
}

UUserWidget* UUIWorldMenuGameInstance::OpenPauseSettingsMenu(bool bForceRebuild)
{
	if (UWorld* World = GetWorld())
	{
		UGameplayStatics::SetGamePaused(World, true);
	}
	LastNonSettingsMenuScreen = EUIWorldMenuScreen::PauseMenu;
	UE_LOG(LogUIWorldStartupFlow, Log, TEXT("[PauseFlow] OpenPauseSettingsMenu called. Force=%d"), bForceRebuild ? 1 : 0);
	return ShowMenuFromList(EUIWorldMenuScreen::SettingsMenu, bForceRebuild);
}

UUserWidget* UUIWorldMenuGameInstance::OpenSettingsPauseMenu(bool bForceRebuild)
{
	UE_LOG(LogUIWorldStartupFlow, Log, TEXT("[PauseFlow] OpenSettingsPauseMenu alias called. Force=%d"), bForceRebuild ? 1 : 0);
	return OpenPauseSettingsMenu(bForceRebuild);
}

UUserWidget* UUIWorldMenuGameInstance::OpenSettingsMainMenu(bool bForceRebuild)
{
	if (UWorld* World = GetWorld())
	{
		UGameplayStatics::SetGamePaused(World, false);
	}
	LastNonSettingsMenuScreen = EUIWorldMenuScreen::MainMenu;
	UE_LOG(LogUIWorldStartupFlow, Log, TEXT("[MenuFlow] OpenSettingsMainMenu called. Force=%d"), bForceRebuild ? 1 : 0);
	return ShowMenuFromList(EUIWorldMenuScreen::SettingsMenu, bForceRebuild);
}

UUserWidget* UUIWorldMenuGameInstance::BackMenuPause(bool bForceRebuild)
{
	if (UWorld* World = GetWorld())
	{
		UGameplayStatics::SetGamePaused(World, true);
	}
	UE_LOG(LogUIWorldStartupFlow, Log, TEXT("[PauseFlow] BackMenuPause called. Force=%d"), bForceRebuild ? 1 : 0);
	return ShowMenuFromList(EUIWorldMenuScreen::PauseMenu, bForceRebuild);
}

UUserWidget* UUIWorldMenuGameInstance::BackFromSettingsPauseMenu(bool bForceRebuild)
{
	UE_LOG(LogUIWorldStartupFlow, Log, TEXT("[PauseFlow] BackFromSettingsPauseMenu alias called. Force=%d"), bForceRebuild ? 1 : 0);
	return BackMenuPause(bForceRebuild);
}

UUserWidget* UUIWorldMenuGameInstance::BackFromSettingsMainMenu(bool bForceRebuild)
{
	if (UWorld* World = GetWorld())
	{
		UGameplayStatics::SetGamePaused(World, false);
	}
	LastNonSettingsMenuScreen = EUIWorldMenuScreen::MainMenu;
	UE_LOG(LogUIWorldStartupFlow, Log, TEXT("[MenuFlow] BackFromSettingsMainMenu called. Force=%d"), bForceRebuild ? 1 : 0);
	return ShowMenuFromList(EUIWorldMenuScreen::MainMenu, bForceRebuild);
}

UUserWidget* UUIWorldMenuGameInstance::BackFromSettingsMenuSmart(bool bForceRebuild)
{
	EUIWorldMenuScreen ReturnScreen = LastNonSettingsMenuScreen;
	if (ReturnScreen == EUIWorldMenuScreen::SettingsMenu)
	{
		ReturnScreen = EUIWorldMenuScreen::MainMenu;
	}

	if (ReturnScreen == EUIWorldMenuScreen::PauseMenu)
	{
		UE_LOG(LogUIWorldStartupFlow, Log, TEXT("[PauseFlow] BackFromSettingsMenuSmart -> PauseMenu. Force=%d"), bForceRebuild ? 1 : 0);
		if (UWorld* World = GetWorld())
		{
			UGameplayStatics::SetGamePaused(World, true);
		}
		return ShowMenuFromList(EUIWorldMenuScreen::PauseMenu, bForceRebuild);
	}

	UE_LOG(LogUIWorldStartupFlow, Log, TEXT("[MenuFlow] BackFromSettingsMenuSmart -> MainMenu. Force=%d"), bForceRebuild ? 1 : 0);
	if (UWorld* World = GetWorld())
	{
		UGameplayStatics::SetGamePaused(World, false);
	}
	return ShowMenuFromList(EUIWorldMenuScreen::MainMenu, bForceRebuild);
}

bool UUIWorldMenuGameInstance::LoadMainMenuLevel(bool bAbsolute)
{
	if (MainMenuLevelName.IsNone())
	{
		return false;
	}
	return LoadLevelAndFocusGame(MainMenuLevelName, bAbsolute);
}

void UUIWorldMenuGameInstance::QuitGameNow(bool bIgnorePlatformRestrictions)
{
	if (UWorld* World = GetWorld())
	{
		APlayerController* PlayerController = UGameplayStatics::GetPlayerController(World, 0);
		UKismetSystemLibrary::QuitGame(World, PlayerController, EQuitPreference::Quit, bIgnorePlatformRestrictions);
	}
}

void UUIWorldMenuGameInstance::ShowSimpleTravelLoadingScreen()
{
	UWorld* World = GetWorld();
	if (!World)
	{
		return;
	}

	if (APlayerController* PlayerController = UGameplayStatics::GetPlayerController(World, 0))
	{
		if (!ActiveLoadingScreenWidget && LoadingScreenWidgetClass)
		{
			ActiveLoadingScreenWidget = CreateWidget<UUserWidget>(PlayerController, LoadingScreenWidgetClass);
		}
		if (ActiveLoadingScreenWidget && !ActiveLoadingScreenWidget->IsInViewport())
		{
			ActiveLoadingScreenWidget->AddToViewport(MenuZOrder + 900);
		}
		if (UZonefallLoadingScreenWidget* TypedLoading = Cast<UZonefallLoadingScreenWidget>(ActiveLoadingScreenWidget))
		{
			TypedLoading->StartLoading();
		}

		FInputModeUIOnly UiOnlyInputMode;
		PlayerController->SetInputMode(UiOnlyInputMode);
		PlayerController->SetIgnoreMoveInput(true);
		PlayerController->SetIgnoreLookInput(true);
		PlayerController->SetShowMouseCursor(false);
	}
}

void UUIWorldMenuGameInstance::HideSimpleTravelLoadingScreen()
{
	if (UZonefallLoadingScreenWidget* TypedLoading = Cast<UZonefallLoadingScreenWidget>(ActiveLoadingScreenWidget))
	{
		TypedLoading->CompleteLoading();
	}

	if (ActiveLoadingScreenWidget)
	{
		ActiveLoadingScreenWidget->RemoveFromParent();
	}
}

bool UUIWorldMenuGameInstance::HostOnlineSession(int32 MaxPlayers, bool bLAN)
{
	UWorld* World = GetWorld();
	if (!World)
	{
		OnHostCompleted.Broadcast(false, TEXT("World is null"));
		return false;
	}

	IOnlineSessionPtr Sessions = UIWorldGetSessionInterface();
	if (!Sessions.IsValid())
	{
		OnHostCompleted.Broadcast(false, TEXT("SessionInterface missing"));
		return false;
	}

	const TSharedPtr<const FUniqueNetId> UserId = UIWorldGetLocalUserId(World);
	if (!UserId.IsValid())
	{
		OnHostCompleted.Broadcast(false, TEXT("Local UniqueNetId missing"));
		return false;
	}

	const FName SessionName(NAME_GameSession);
	if (Sessions->GetNamedSession(SessionName) != nullptr)
	{
		Sessions->DestroySession(SessionName);
	}

	FOnlineSessionSettings Settings;
	Settings.bIsLANMatch = bLAN;
	Settings.bUsesPresence = true;
	Settings.NumPublicConnections = FMath::Clamp(MaxPlayers, 1, 64);
	Settings.bAllowJoinInProgress = true;
	Settings.bAllowJoinViaPresence = true;
	Settings.bShouldAdvertise = true;
	Settings.bUseLobbiesIfAvailable = true;
	Settings.Set(FName(TEXT("SERVER_NAME")), OnlineServerName, EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);

	FOnCreateSessionCompleteDelegate CreateDelegate;
	CreateDelegate.BindWeakLambda(this, [this, World](FName InName, bool bWasSuccessful)
	{
		if (!bWasSuccessful)
		{
			HideSimpleTravelLoadingScreen();
			OnHostCompleted.Broadcast(false, TEXT("CreateSession failed"));
			return;
		}

		const FString MapToOpen = OnlineHostMapName.IsNone() ? TEXT("Menu") : OnlineHostMapName.ToString();
		const FString ListenURL = FString::Printf(TEXT("%s?listen"), *MapToOpen);
		const FString LocalIp = UIWorldResolveLocalLanIp();
		bApplyGameFocusOnNextMapLoad = true;
		CloseMenuUI(false);
		OnHostCompleted.Broadcast(true, FString::Printf(TEXT("Session hosted | LAN IP: %s"), *LocalIp));
		World->ServerTravel(ListenURL);
	});

	Sessions->AddOnCreateSessionCompleteDelegate_Handle(CreateDelegate);
	ShowSimpleTravelLoadingScreen();
	const bool bStarted = Sessions->CreateSession(*UserId, SessionName, Settings);
	if (!bStarted)
	{
		HideSimpleTravelLoadingScreen();
		OnHostCompleted.Broadcast(false, TEXT("CreateSession did not start"));
	}
	return bStarted;
}

bool UUIWorldMenuGameInstance::FindOnlineSessions(int32 MaxResults, bool bLAN)
{
	UWorld* World = GetWorld();
	if (!World)
	{
		OnSessionsFound.Broadcast(TArray<FUIWorldOnlineSessionResult>());
		return false;
	}

	IOnlineSessionPtr Sessions = UIWorldGetSessionInterface();
	if (!Sessions.IsValid())
	{
		OnSessionsFound.Broadcast(TArray<FUIWorldOnlineSessionResult>());
		return false;
	}

	const TSharedPtr<const FUniqueNetId> UserId = UIWorldGetLocalUserId(World);
	if (!UserId.IsValid())
	{
		OnSessionsFound.Broadcast(TArray<FUIWorldOnlineSessionResult>());
		return false;
	}

	LastSessionSearchNative = MakeShared<FOnlineSessionSearch>();
	LastSessionSearchNative->bIsLanQuery = bLAN;
	LastSessionSearchNative->MaxSearchResults = FMath::Clamp(MaxResults, 1, 500);

	FOnFindSessionsCompleteDelegate FindDelegate;
	FindDelegate.BindWeakLambda(this, [this](bool bWasSuccessful)
	{
		LastFoundSessions.Reset();
		if (bWasSuccessful && LastSessionSearchNative.IsValid())
		{
			for (const FOnlineSessionSearchResult& R : LastSessionSearchNative->SearchResults)
			{
				LastFoundSessions.Add(UIWorldConvertSearchResult(R));
			}
		}
		OnSessionsFound.Broadcast(LastFoundSessions);
	});

	Sessions->AddOnFindSessionsCompleteDelegate_Handle(FindDelegate);
	return Sessions->FindSessions(*UserId, LastSessionSearchNative.ToSharedRef());
}

bool UUIWorldMenuGameInstance::JoinOnlineSessionByIndex(int32 ResultIndex)
{
	UWorld* World = GetWorld();
	if (!World)
	{
		OnJoinCompleted.Broadcast(false, TEXT("World is null"));
		return false;
	}

	IOnlineSessionPtr Sessions = UIWorldGetSessionInterface();
	if (!Sessions.IsValid())
	{
		OnJoinCompleted.Broadcast(false, TEXT("SessionInterface missing"));
		return false;
	}

	const TSharedPtr<const FUniqueNetId> UserId = UIWorldGetLocalUserId(World);
	if (!UserId.IsValid())
	{
		OnJoinCompleted.Broadcast(false, TEXT("Local UniqueNetId missing"));
		return false;
	}

	if (!LastSessionSearchNative.IsValid() || !LastSessionSearchNative->SearchResults.IsValidIndex(ResultIndex))
	{
		OnJoinCompleted.Broadcast(false, TEXT("Join failed: invalid result index"));
		return false;
	}

	FOnJoinSessionCompleteDelegate JoinDelegate;
	JoinDelegate.BindWeakLambda(this, [this, World, Sessions](FName Name, EOnJoinSessionCompleteResult::Type JoinResult)
	{
		FString ConnectString;
		if (JoinResult == EOnJoinSessionCompleteResult::Success && Sessions->GetResolvedConnectString(Name, ConnectString))
		{
			if (APlayerController* PC = UGameplayStatics::GetPlayerController(World, 0))
			{
				bApplyGameFocusOnNextMapLoad = true;
				CloseMenuUI(false);
				OnJoinCompleted.Broadcast(true, TEXT("Joined session"));
				PC->ClientTravel(ConnectString, TRAVEL_Absolute);
				return;
			}
		}
		HideSimpleTravelLoadingScreen();
		OnJoinCompleted.Broadcast(false, TEXT("JoinSession failed"));
	});

	Sessions->AddOnJoinSessionCompleteDelegate_Handle(JoinDelegate);
	ShowSimpleTravelLoadingScreen();
	const bool bStarted = Sessions->JoinSession(*UserId, NAME_GameSession, LastSessionSearchNative->SearchResults[ResultIndex]);
	if (!bStarted)
	{
		HideSimpleTravelLoadingScreen();
	}
	return bStarted;
}

bool UUIWorldMenuGameInstance::LeaveOnlineSessionAndReturnToMenu()
{
	IOnlineSessionPtr Sessions = UIWorldGetSessionInterface();
	if (!Sessions.IsValid())
	{
		OnLeaveCompleted.Broadcast(false, TEXT("SessionInterface missing"));
		return false;
	}

	FOnDestroySessionCompleteDelegate DestroyDelegate;
	DestroyDelegate.BindWeakLambda(this, [this](FName Name, bool bOk)
	{
		OnLeaveCompleted.Broadcast(bOk, bOk ? TEXT("Left session") : TEXT("DestroySession failed"));
	});
	Sessions->AddOnDestroySessionCompleteDelegate_Handle(DestroyDelegate);

	const bool bStarted = Sessions->DestroySession(NAME_GameSession);
	if (!bStarted)
	{
		OnLeaveCompleted.Broadcast(true, TEXT("No active session"));
	}

	if (!MainMenuLevelName.IsNone())
	{
		LoadLevelAndFocusGame(MainMenuLevelName, true);
	}
	return true;
}

void UUIWorldMenuGameInstance::HandlePostLoadMap(UWorld* LoadedWorld)
{
	StopMoviePlayerLoadingScreen();
	HideSimpleTravelLoadingScreen();

	if (!bApplyGameFocusOnNextMapLoad || !LoadedWorld)
	{
		return;
	}

	ApplyGameFocusInput(LoadedWorld);
	bApplyGameFocusOnNextMapLoad = false;
}

void UUIWorldMenuGameInstance::ApplyGameFocusInput(UWorld* World) const
{
	if (!World)
	{
		return;
	}

	if (APlayerController* PlayerController = UGameplayStatics::GetPlayerController(World, 0))
	{
		PlayerController->ResetIgnoreMoveInput();
		PlayerController->ResetIgnoreLookInput();
		FInputModeGameOnly GameOnlyInputMode;
		PlayerController->SetInputMode(GameOnlyInputMode);
		PlayerController->SetIgnoreMoveInput(false);
		PlayerController->SetIgnoreLookInput(false);
		PlayerController->SetShowMouseCursor(false);
	}
}

void UUIWorldMenuGameInstance::SetupMoviePlayerLoadingScreen() const
{
	IGameMoviePlayer* MoviePlayer = GetMoviePlayer();
	if (!MoviePlayer || !ActiveLoadingScreenWidget)
	{
		return;
	}

	FLoadingScreenAttributes LoadingScreen;
	LoadingScreen.bAutoCompleteWhenLoadingCompletes = true;
	LoadingScreen.bWaitForManualStop = false;
	LoadingScreen.bAllowEngineTick = true;
	LoadingScreen.MinimumLoadingScreenDisplayTime = FMath::Max(0.25f, LoadingScreenDelayBeforeOpenLevel);
	LoadingScreen.WidgetLoadingScreen = ActiveLoadingScreenWidget->TakeWidget();

	MoviePlayer->SetupLoadingScreen(LoadingScreen);
}

void UUIWorldMenuGameInstance::StopMoviePlayerLoadingScreen() const
{
	IGameMoviePlayer* MoviePlayer = GetMoviePlayer();
	if (MoviePlayer && MoviePlayer->IsMovieCurrentlyPlaying())
	{
		MoviePlayer->StopMovie();
	}
}

void UUIWorldMenuGameInstance::BeginStartupShaderPhase()
{
	UE_LOG(LogUIWorldStartupFlow, Log, TEXT("BeginStartupShaderPhase: entered"));

	if (bStartupShaderPhaseActive)
	{
		UE_LOG(LogUIWorldStartupFlow, Log, TEXT("BeginStartupShaderPhase: already active, skip"));
		return;
	}

	UWorld* World = GetWorld();
	if (!World)
	{
		UE_LOG(LogUIWorldStartupFlow, Warning, TEXT("BeginStartupShaderPhase: World is null"));
		return;
	}

	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(World, 0);
	if (!PlayerController)
	{
		UE_LOG(LogUIWorldStartupFlow, Warning, TEXT("BeginStartupShaderPhase: PlayerController missing, retry next tick"));
		World->GetTimerManager().SetTimerForNextTick(this, &UUIWorldMenuGameInstance::BeginStartupShaderPhase);
		return;
	}

	if (!ShaderLoadingWidgetClass)
	{
		UE_LOG(LogUIWorldStartupFlow, Warning, TEXT("BeginStartupShaderPhase: ShaderLoadingWidgetClass is null, finishing immediately"));
		bStartupShaderPhaseCompleted = true;
		FinishStartupShaderPhase();
		return;
	}

	StartupInitialShaderJobs = (GShaderCompilingManager != nullptr)
		? FMath::Max(0, GShaderCompilingManager->GetNumRemainingJobs())
		: 0;
	if (StartupInitialShaderJobs <= 0 && HasValidShaderWarmupCache())
	{
		UE_LOG(LogUIWorldStartupFlow, Log, TEXT("BeginStartupShaderPhase: no shader jobs and warmup cache exists, skipping screen"));
		bStartupShaderPhaseCompleted = true;
		FinishStartupShaderPhase();
		return;
	}

	if (ActiveStartupShaderWidget)
	{
		ActiveStartupShaderWidget->RemoveFromParent();
		ActiveStartupShaderWidget = nullptr;
	}

	ActiveStartupShaderWidget = CreateWidget<UZonefallShaderLoadingWidget>(PlayerController, ShaderLoadingWidgetClass);
	if (!ActiveStartupShaderWidget)
	{
		UE_LOG(
			LogUIWorldStartupFlow,
			Error,
			TEXT("BeginStartupShaderPhase: CreateWidget failed for class=%s"),
			*GetNameSafe(ShaderLoadingWidgetClass.Get())
		);
		bStartupShaderPhaseCompleted = true;
		FinishStartupShaderPhase();
		return;
	}

	bStartupShaderPhaseActive = true;
	ActiveStartupShaderWidget->AddToViewport(MenuZOrder + 1000);
	UE_LOG(
		LogUIWorldStartupFlow,
		Log,
		TEXT("BeginStartupShaderPhase: startup widget added to viewport (%s), z=%d"),
		*GetNameSafe(ActiveStartupShaderWidget),
		MenuZOrder + 1000
	);
	ActiveStartupShaderWidget->SetShaderCompileProgress(0.0f);
	ActiveStartupShaderWidget->SetInitialShaderJobCount(FMath::Max(1, StartupInitialShaderJobs));

	FInputModeUIOnly UiOnlyInputMode;
	PlayerController->SetInputMode(UiOnlyInputMode);
	PlayerController->SetIgnoreMoveInput(true);
	PlayerController->SetIgnoreLookInput(true);
	PlayerController->SetShowMouseCursor(false);

	float MinDuration = FMath::Clamp(StartupShaderLoadingDuration, 0.1f, 30.0f);
	if (bUseAdaptiveStartupShaderDelay)
	{
		const int32 Cores = FPlatformMisc::NumberOfCoresIncludingHyperthreads();
		const float TotalRamGB = static_cast<float>(FPlatformMemory::GetConstants().TotalPhysical) / (1024.0f * 1024.0f * 1024.0f);
		const float HardwarePenalty =
			(Cores <= 6 ? 0.8f : (Cores <= 12 ? 0.35f : 0.0f)) +
			(TotalRamGB < 16.0f ? 0.8f : (TotalRamGB < 24.0f ? 0.35f : 0.0f));
		MinDuration += HardwarePenalty;
	}

	const float MaxDuration = FMath::Max(MinDuration + 0.1f, FMath::Clamp(StartupShaderMaxDuration, 0.5f, 60.0f));
	StartupShaderPhaseStartSeconds = World->GetRealTimeSeconds();

	World->GetTimerManager().ClearTimer(StartupShaderTimerHandle);
	World->GetTimerManager().SetTimer(
		StartupShaderTimerHandle,
		this,
		&UUIWorldMenuGameInstance::PollStartupShaderPhase,
		0.15f,
		true
	);
	UE_LOG(LogUIWorldStartupFlow, Log, TEXT("BeginStartupShaderPhase: adaptive shader phase started (Min=%.2fs Max=%.2fs)"), MinDuration, MaxDuration);
}

void UUIWorldMenuGameInstance::PollStartupShaderPhase()
{
	UWorld* World = GetWorld();
	if (!World || !bStartupShaderPhaseActive)
	{
		return;
	}

	float MinDuration = FMath::Clamp(StartupShaderLoadingDuration, 0.1f, 30.0f);
	if (bUseAdaptiveStartupShaderDelay)
	{
		const int32 Cores = FPlatformMisc::NumberOfCoresIncludingHyperthreads();
		const float TotalRamGB = static_cast<float>(FPlatformMemory::GetConstants().TotalPhysical) / (1024.0f * 1024.0f * 1024.0f);
		const float HardwarePenalty =
			(Cores <= 6 ? 0.8f : (Cores <= 12 ? 0.35f : 0.0f)) +
			(TotalRamGB < 16.0f ? 0.8f : (TotalRamGB < 24.0f ? 0.35f : 0.0f));
		MinDuration += HardwarePenalty;
	}

	const float MaxDuration = FMath::Max(MinDuration + 0.1f, FMath::Clamp(StartupShaderMaxDuration, 0.5f, 60.0f));
	const float Elapsed = World->GetRealTimeSeconds() - StartupShaderPhaseStartSeconds;
	const bool bReachedMinDuration = Elapsed >= MinDuration;
	const bool bReachedMaxDuration = Elapsed >= MaxDuration;
	const bool bShaderDone = !ActiveStartupShaderWidget || ActiveStartupShaderWidget->IsShaderCompilationLikelyFinished();

	if ((bReachedMinDuration && bShaderDone) || bReachedMaxDuration)
	{
		if (bShaderDone && StartupInitialShaderJobs > 0)
		{
			SaveShaderWarmupCache();
		}
		UE_LOG(
			LogUIWorldStartupFlow,
			Log,
			TEXT("PollStartupShaderPhase: finishing (Elapsed=%.2f, Min=%.2f, Max=%.2f, ShaderDone=%d)"),
			Elapsed,
			MinDuration,
			MaxDuration,
			bShaderDone
		);
		FinishStartupShaderPhase();
	}
}

bool UUIWorldMenuGameInstance::HasValidShaderWarmupCache() const
{
	const FString CachePath = FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("UIWorld/ShaderWarmup.cache"));
	FString CachedSignature;
	if (!FPaths::FileExists(CachePath) || !FFileHelper::LoadFileToString(CachedSignature, *CachePath))
	{
		return false;
	}

	return CachedSignature.Equals(BuildShaderWarmupSignature(), ESearchCase::CaseSensitive);
}

void UUIWorldMenuGameInstance::SaveShaderWarmupCache() const
{
	const FString CacheDir = FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("UIWorld"));
	IFileManager::Get().MakeDirectory(*CacheDir, true);
	const FString CachePath = FPaths::Combine(CacheDir, TEXT("ShaderWarmup.cache"));
	const FString Signature = BuildShaderWarmupSignature();
	FFileHelper::SaveStringToFile(Signature, *CachePath);
}

FString UUIWorldMenuGameInstance::BuildShaderWarmupSignature() const
{
	return FString(FApp::GetProjectName())
		+ TEXT("|")
		+ FPlatformMisc::GetPrimaryGPUBrand()
		+ TEXT("|")
		+ FApp::GetBuildVersion();
}

void UUIWorldMenuGameInstance::FinishStartupShaderPhase()
{
	UE_LOG(LogUIWorldStartupFlow, Log, TEXT("FinishStartupShaderPhase: entered"));

	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(StartupShaderTimerHandle);
	}

	bStartupShaderPhaseActive = false;
	bStartupShaderPhaseCompleted = true;

	if (ActiveStartupShaderWidget)
	{
		UE_LOG(LogUIWorldStartupFlow, Log, TEXT("FinishStartupShaderPhase: removing startup widget %s"), *GetNameSafe(ActiveStartupShaderWidget));
		ActiveStartupShaderWidget->RemoveFromParent();
		ActiveStartupShaderWidget = nullptr;
	}

	if (bAutoShowMenuOnStart)
	{
		ShowMenuFromList(EUIWorldMenuScreen::MainMenu, false);
	}
}

