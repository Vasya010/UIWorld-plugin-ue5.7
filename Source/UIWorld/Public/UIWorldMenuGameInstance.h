#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "UIWorldMenuGameInstance.generated.h"

class UUserWidget;
class UZonefallShaderLoadingWidget;
class UWorld;
class FOnlineSessionSearch;
// Core reusable game instance for UIWorld plugin.

UENUM(BlueprintType)
enum class EUIWorldMenuScreen : uint8
{
	MainMenu UMETA(DisplayName = "Main Menu"),
	OnlineMenu UMETA(DisplayName = "Online Menu"),
	PauseMenu UMETA(DisplayName = "Pause Menu"),
	SettingsMenu UMETA(DisplayName = "Settings Menu")
};

USTRUCT(BlueprintType)
struct FUIWorldOnlineSessionResult
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "UIWorld|Online")
	FString SessionId;

	UPROPERTY(BlueprintReadOnly, Category = "UIWorld|Online")
	FString OwningUserName;

	UPROPERTY(BlueprintReadOnly, Category = "UIWorld|Online")
	FString ServerName;

	UPROPERTY(BlueprintReadOnly, Category = "UIWorld|Online")
	int32 PingMs = -1;

	UPROPERTY(BlueprintReadOnly, Category = "UIWorld|Online")
	int32 MaxPlayers = 0;

	UPROPERTY(BlueprintReadOnly, Category = "UIWorld|Online")
	int32 CurrentPlayers = 0;

	UPROPERTY(BlueprintReadOnly, Category = "UIWorld|Online")
	bool bIsLAN = true;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUIWorldOnlineOpCompleted, bool, bSuccess, const FString&, Message);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUIWorldSessionsFound, const TArray<FUIWorldOnlineSessionResult>&, Results);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUIWorldMenuWidgetChanged, UUserWidget*, ActiveWidget);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUIWorldMenuScreenChanged, EUIWorldMenuScreen, MenuScreen);

UCLASS(BlueprintType, Blueprintable)
class UIWORLD_API UUIWorldMenuGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UUIWorldMenuGameInstance();

	virtual void Init() override;
	virtual void OnStart() override;
	virtual void Shutdown() override;

	UFUNCTION(BlueprintCallable, Category = "UIWorld|UI")
	UUserWidget* ShowMenuFromList(EUIWorldMenuScreen MenuScreen, bool bForceRebuild = false);

	UFUNCTION(BlueprintCallable, Category = "UIWorld|UI")
	void CloseMenuUI(bool bRemoveFromParentOnly = true);

	UFUNCTION(BlueprintCallable, Category = "UIWorld|Flow")
	bool LoadLevelAndFocusGame(FName LevelName, bool bAbsolute = true);

	// Shows loading screen first, then opens target level.
	UFUNCTION(BlueprintCallable, Category = "UIWorld|Flow")
	bool LoadLevelWithLoadingScreen(FName LevelName, bool bAbsolute = true);

	// Compatibility helpers for copied Zonefall UI widgets.
	UFUNCTION(BlueprintCallable, Category = "UIWorld|Flow")
	void ContinueGame(bool bUnpauseGame = true);

	UFUNCTION(BlueprintCallable, Category = "UIWorld|Flow")
	UUserWidget* OpenPauseSettingsMenu(bool bForceRebuild = false);

	UFUNCTION(BlueprintCallable, Category = "UIWorld|Flow")
	UUserWidget* BackMenuPause(bool bForceRebuild = false);

	UFUNCTION(BlueprintCallable, Category = "UIWorld|Flow")
	bool LoadMainMenuLevel(bool bAbsolute = true);

	UFUNCTION(BlueprintCallable, Category = "UIWorld|Flow")
	void QuitGameNow(bool bIgnorePlatformRestrictions = false);

	UFUNCTION(BlueprintCallable, Category = "UIWorld|Online")
	bool HostOnlineSession(int32 MaxPlayers = 4, bool bLAN = true);

	UFUNCTION(BlueprintCallable, Category = "UIWorld|Online")
	bool FindOnlineSessions(int32 MaxResults = 50, bool bLAN = true);

	UFUNCTION(BlueprintCallable, Category = "UIWorld|Online")
	bool JoinOnlineSessionByIndex(int32 ResultIndex);

	UFUNCTION(BlueprintCallable, Category = "UIWorld|Online")
	bool LeaveOnlineSessionAndReturnToMenu();

	UFUNCTION(BlueprintPure, Category = "UIWorld|Online")
	const TArray<FUIWorldOnlineSessionResult>& GetLastFoundSessions() const { return LastFoundSessions; }

	UPROPERTY(BlueprintAssignable, Category = "UIWorld|Online")
	FOnUIWorldOnlineOpCompleted OnHostCompleted;

	UPROPERTY(BlueprintAssignable, Category = "UIWorld|Online")
	FOnUIWorldSessionsFound OnSessionsFound;

	UPROPERTY(BlueprintAssignable, Category = "UIWorld|Online")
	FOnUIWorldOnlineOpCompleted OnJoinCompleted;

	UPROPERTY(BlueprintAssignable, Category = "UIWorld|Online")
	FOnUIWorldOnlineOpCompleted OnLeaveCompleted;

	UPROPERTY(BlueprintAssignable, Category = "UIWorld|UI")
	FOnUIWorldMenuWidgetChanged OnMenuWidgetChanged;

	UPROPERTY(BlueprintAssignable, Category = "UIWorld|UI")
	FOnUIWorldMenuScreenChanged OnMenuScreenChanged;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UIWorld|UI")
	TSubclassOf<UUserWidget> MainMenuWidgetClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UIWorld|UI")
	TSubclassOf<UUserWidget> OnlineMenuWidgetClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UIWorld|UI")
	TSubclassOf<UUserWidget> PauseMenuWidgetClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UIWorld|UI")
	TSubclassOf<UUserWidget> SettingsMenuWidgetClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UIWorld|Flow")
	TSubclassOf<UUserWidget> LoadingScreenWidgetClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UIWorld|UI|Startup")
	TSubclassOf<UZonefallShaderLoadingWidget> ShaderLoadingWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UIWorld|UI|Startup")
	bool bAutoShowMenuOnStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UIWorld|UI|Startup")
	bool bShowShaderLoadingOnStartup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UIWorld|UI|Startup", meta = (ClampMin = "0.1", ClampMax = "30.0"))
	float StartupShaderLoadingDuration;

	// Scales startup shader screen minimum time by hardware class.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UIWorld|UI|Startup")
	bool bUseAdaptiveStartupShaderDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UIWorld|UI|Startup", meta = (ClampMin = "0.1", ClampMax = "20.0"))
	float StartupShaderMaxDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UIWorld|UI")
	bool bCacheWidgetsByScreen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UIWorld|UI")
	int32 MenuZOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UIWorld|Online")
	FName MainMenuLevelName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UIWorld|Online")
	FName OnlineHostMapName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UIWorld|Online")
	FString OnlineServerName;

	// Small delay to ensure loading widget is drawn before blocking OpenLevel.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UIWorld|Flow|Loading", meta = (ClampMin = "0.0", ClampMax = "2.0"))
	float LoadingScreenDelayBeforeOpenLevel;

	// If enabled, pre-open delay is adjusted by CPU/RAM (weaker PC => longer delay).
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UIWorld|Flow|Loading|Adaptive")
	bool bUseAdaptiveLoadingDelay;

	// Minimum adaptive delay.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UIWorld|Flow|Loading|Adaptive", meta = (ClampMin = "0.0", ClampMax = "5.0"))
	float AdaptiveDelayMinSeconds;

	// Maximum adaptive delay.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UIWorld|Flow|Loading|Adaptive", meta = (ClampMin = "0.1", ClampMax = "10.0"))
	float AdaptiveDelayMaxSeconds;

	// Adds extra delay based on target map package size (.umap).
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UIWorld|Flow|Loading|Adaptive")
	bool bUseMapComplexityDelay;

	// Added seconds per 100MB map size.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UIWorld|Flow|Loading|Adaptive", meta = (ClampMin = "0.0", ClampMax = "10.0"))
	float MapDelayPer100MB;

	// Safety clamp for map-based delay component.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UIWorld|Flow|Loading|Adaptive", meta = (ClampMin = "0.0", ClampMax = "30.0"))
	float MapDelayMaxSeconds;

	// Uses MoviePlayer Slate loading (animated and non-freezing while OpenLevel blocks).
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UIWorld|Flow|Loading")
	bool bUseMoviePlayerLoadingScreen;

private:
	void HandlePostLoadMap(UWorld* LoadedWorld);
	void ApplyGameFocusInput(UWorld* World) const;
	TSubclassOf<UUserWidget> ResolveMenuClass(EUIWorldMenuScreen MenuScreen) const;
	UUserWidget* ResolveOrCreateWidget(class APlayerController* PlayerController, TSubclassOf<UUserWidget> WidgetClass, bool bForceRebuild);
	void ApplyMenuInputMode(class APlayerController* PlayerController, UUserWidget* WidgetToFocus) const;
	void HideCurrentMenuWidget();
	void ShowSimpleTravelLoadingScreen();
	void HideSimpleTravelLoadingScreen();
	void ExecutePendingLevelLoad();
	float EstimateAdaptiveLoadingDelay() const;
	float EstimateMapComplexityDelay(FName LevelName) const;
	void SetupMoviePlayerLoadingScreen() const;
	void StopMoviePlayerLoadingScreen() const;
	void BeginStartupShaderPhase();
	void PollStartupShaderPhase();
	void FinishStartupShaderPhase();
	bool HasValidShaderWarmupCache() const;
	void SaveShaderWarmupCache() const;
	FString BuildShaderWarmupSignature() const;

	UPROPERTY(Transient)
	EUIWorldMenuScreen CurrentMenuScreen;

	UPROPERTY(Transient)
	TMap<EUIWorldMenuScreen, TObjectPtr<UUserWidget>> MenuWidgetCache;

	UPROPERTY(Transient)
	TObjectPtr<UUserWidget> PinnedMenuWidget;

	UPROPERTY(Transient)
	TObjectPtr<UUserWidget> ActiveLoadingScreenWidget;

	UPROPERTY(Transient)
	TObjectPtr<UZonefallShaderLoadingWidget> ActiveStartupShaderWidget;

	UPROPERTY(Transient)
	bool bStartupShaderPhaseActive;

	UPROPERTY(Transient)
	bool bStartupShaderPhaseCompleted;

	UPROPERTY(Transient)
	bool bApplyGameFocusOnNextMapLoad;

	UPROPERTY(Transient)
	FName PendingLevelNameToLoad;

	UPROPERTY(Transient)
	bool bPendingLevelAbsolute;

	UPROPERTY(Transient)
	TArray<FUIWorldOnlineSessionResult> LastFoundSessions;

	TSharedPtr<FOnlineSessionSearch> LastSessionSearchNative;

	FTimerHandle PendingLoadLevelTimerHandle;
	FTimerHandle StartupShaderTimerHandle;
	float StartupShaderPhaseStartSeconds;
	int32 StartupInitialShaderJobs;
};

