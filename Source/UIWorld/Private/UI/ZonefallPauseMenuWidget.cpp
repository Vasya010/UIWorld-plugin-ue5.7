#include "ZonefallPauseMenuWidget.h"

#include "Blueprint/WidgetTree.h"
#include "Brushes/SlateRoundedBoxBrush.h"
#include "Components/Border.h"
#include "Components/Button.h"
#include "Components/ButtonSlot.h"
#include "Components/Image.h"
#include "Components/Overlay.h"
#include "Components/OverlaySlot.h"
#include "Components/SizeBox.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "Components/VerticalBoxSlot.h"
#include "UIWorldMenuGameInstance.h"
#include "Framework/Application/SlateApplication.h"
#include "GameFramework/PlayerController.h"
#include "Input/Reply.h"
#include "InputCoreTypes.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

DEFINE_LOG_CATEGORY_STATIC(LogZonefallPauseMenu, Log, All);

UZonefallPauseMenuWidget::UZonefallPauseMenuWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, TitleText(NSLOCTEXT("ZonefallUI", "PauseTitle", "PAUSED"))
	, ResumeText(NSLOCTEXT("ZonefallUI", "PauseResume", "RESUME"))
	, SettingsText(NSLOCTEXT("ZonefallUI", "PauseSettings", "SETTINGS"))
	, MainMenuText(NSLOCTEXT("ZonefallUI", "PauseMainMenu", "MAIN MENU"))
	, QuitText(NSLOCTEXT("ZonefallUI", "PauseQuit", "QUIT GAME"))
	, SessionInfoPrefixText(NSLOCTEXT("ZonefallUI", "PauseSessionInfoPrefix", "SESSION"))
	, TextNormalColor(FLinearColor(0.86f, 0.90f, 0.84f, 1.0f))
	, TextHoverColor(FLinearColor(0.98f, 1.00f, 0.90f, 1.0f))
	, PanelTint(FLinearColor(0.02f, 0.05f, 0.03f, 0.86f))
	, AccentColor(FLinearColor(0.32f, 0.86f, 0.95f, 1.0f))
	, BackdropTint(FLinearColor(0.00f, 0.00f, 0.00f, 0.58f))
	, PanelWidth(560.0f)
	, bEnableBackdropFilmGrain(true)
	, FilmGrainOpacity(0.14f)
	, bEnableSubtlePulse(true)
	, bEnableIntroAnimation(true)
	, IntroDuration(0.45f)
	, IntroSlideDistance(26.0f)
	, PulseTime(0.0f)
	, IntroProgress(0.0f)
	, bActionInProgress(false)
	, SessionStartTimeUtc(FDateTime::UtcNow())
{
}

void UZonefallPauseMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();
	UE_LOG(LogZonefallPauseMenu, Log, TEXT("[PauseMenu] NativeConstruct start. Widget=%s"), *GetNameSafe(this));

	BuildLayoutIfNeeded();
	ResolveDesignerWidgetsIfNeeded();
	ApplyVisualStyle();
	BindButtonEvents();
	SessionStartTimeUtc = FDateTime::UtcNow();
	UpdateSessionInfoText();
	SetIsFocusable(true);

	if (MainPanelBorder)
	{
		if (bEnableIntroAnimation)
		{
			IntroProgress = 0.0f;
			MainPanelBorder->SetRenderOpacity(0.0f);
			MainPanelBorder->SetRenderTranslation(FVector2D(0.0f, IntroSlideDistance));
		}
		else
		{
			IntroProgress = 1.0f;
			MainPanelBorder->SetRenderOpacity(1.0f);
			MainPanelBorder->SetRenderTranslation(FVector2D::ZeroVector);
		}
	}

	if (GetOwningPlayer())
	{
		if (UButton* PrimaryButton = GetPrimaryButtonToFocus())
		{
			PrimaryButton->SetKeyboardFocus();
			UE_LOG(LogZonefallPauseMenu, Verbose, TEXT("[PauseMenu] Keyboard focus set to %s"), *GetNameSafe(PrimaryButton));
		}
		else
		{
			UE_LOG(LogZonefallPauseMenu, Warning, TEXT("[PauseMenu] No focusable primary button found."));
		}
	}
	else
	{
		UE_LOG(LogZonefallPauseMenu, Warning, TEXT("[PauseMenu] Owning player is null during construct."));
	}

	UE_LOG(
		LogZonefallPauseMenu,
		Log,
		TEXT("[PauseMenu] Construct complete. Root=%d Panel=%d Title=%d Session=%d SessionDate=%d Resume=%d Settings=%d MainMenu=%d Quit=%d"),
		RootBorder != nullptr,
		MainPanelBorder != nullptr,
		TitleLabel != nullptr,
		SessionInfoLabel != nullptr,
		SessionDateLabel != nullptr,
		ResumeButton != nullptr,
		SettingsButton != nullptr,
		MainMenuButton != nullptr,
		QuitButton != nullptr
	);
}

void UZonefallPauseMenuWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (!bEnableSubtlePulse || !RootBorder)
	{
		AnimateButtonTransforms(InDeltaTime);
		return;
	}

	PulseTime += InDeltaTime;
	const float Pulse = 0.5f + 0.5f * FMath::Sin(PulseTime * 1.1f * 2.0f * PI);
	if (MainPanelBorder)
	{
		MainPanelBorder->SetBrushColor(FLinearColor(PanelTint.R, PanelTint.G, PanelTint.B, PanelTint.A + (0.05f * Pulse)));
	}
	if (AccentLineBorder)
	{
		AccentLineBorder->SetBrushColor(FLinearColor(AccentColor.R, AccentColor.G, AccentColor.B, 0.65f + (0.25f * Pulse)));
	}
	if (AccentGlowImage)
	{
		AccentGlowImage->SetRenderOpacity(0.18f + (0.12f * Pulse));
	}

	if (bEnableIntroAnimation && MainPanelBorder && IntroProgress < 1.0f)
	{
		const float Duration = FMath::Max(0.1f, IntroDuration);
		IntroProgress = FMath::Clamp(IntroProgress + (InDeltaTime / Duration), 0.0f, 1.0f);
		const float Eased = FMath::InterpEaseOut(0.0f, 1.0f, IntroProgress, 2.2f);
		MainPanelBorder->SetRenderOpacity(Eased);
		MainPanelBorder->SetRenderTranslation(FVector2D(0.0f, FMath::Lerp(IntroSlideDistance, 0.0f, Eased)));
	}

	AnimateButtonTransforms(InDeltaTime);
}

FReply UZonefallPauseMenuWidget::NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent)
{
	const FKey PressedKey = InKeyEvent.GetKey();
	if (PressedKey == EKeys::Escape)
	{
		HandleResumeClicked();
		return FReply::Handled();
	}
	if (PressedKey == EKeys::Enter)
	{
		if (UButton* FocusedButton = GetPrimaryButtonToFocus())
		{
			FocusedButton->OnClicked.Broadcast();
			return FReply::Handled();
		}
	}

	return Super::NativeOnKeyDown(InGeometry, InKeyEvent);
}

void UZonefallPauseMenuWidget::BuildLayoutIfNeeded()
{
	if (!WidgetTree)
	{
		UE_LOG(LogZonefallPauseMenu, Error, TEXT("[PauseMenu] WidgetTree is null. Cannot build layout."));
		return;
	}

	if (WidgetTree->RootWidget)
	{
		UE_LOG(LogZonefallPauseMenu, Verbose, TEXT("[PauseMenu] Root widget already exists. Skipping runtime layout build."));
		return;
	}

	UE_LOG(LogZonefallPauseMenu, Log, TEXT("[PauseMenu] Building runtime pause layout."));
	RootBorder = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), TEXT("PauseRootBorder"));
	if (!RootBorder)
	{
		UE_LOG(LogZonefallPauseMenu, Error, TEXT("[PauseMenu] Failed to create RootBorder."));
		return;
	}
	WidgetTree->RootWidget = RootBorder;
	RootBorder->SetPadding(FMargin(0.0f));
	RootBorder->SetBrushColor(FLinearColor::Transparent);

	BackdropBorder = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), TEXT("PauseBackdropBorder"));
	BackdropBorder->SetBrush(FSlateRoundedBoxBrush(BackdropTint, 0.0f));
	RootBorder->SetContent(BackdropBorder);

	UOverlay* RootOverlay = WidgetTree->ConstructWidget<UOverlay>(UOverlay::StaticClass(), TEXT("PauseRootOverlay"));
	BackdropBorder->SetContent(RootOverlay);

	if (bEnableBackdropFilmGrain)
	{
		UImage* VignetteOverlay = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("PauseVignetteOverlay"));
		VignetteOverlay->SetColorAndOpacity(FLinearColor(0.02f, 0.03f, 0.02f, FilmGrainOpacity * 1.15f));
		if (UOverlaySlot* VignetteSlot = RootOverlay->AddChildToOverlay(VignetteOverlay))
		{
			VignetteSlot->SetHorizontalAlignment(HAlign_Fill);
			VignetteSlot->SetVerticalAlignment(VAlign_Fill);
		}

		UImage* GrainOverlay = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("PauseGrainOverlay"));
		GrainOverlay->SetColorAndOpacity(FLinearColor(0.10f, 0.14f, 0.11f, FilmGrainOpacity));
		if (UOverlaySlot* GrainSlot = RootOverlay->AddChildToOverlay(GrainOverlay))
		{
			GrainSlot->SetHorizontalAlignment(HAlign_Fill);
			GrainSlot->SetVerticalAlignment(VAlign_Fill);
		}
	}

	AccentGlowImage = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("PauseAccentGlow"));
	AccentGlowImage->SetColorAndOpacity(FLinearColor(AccentColor.R, AccentColor.G, AccentColor.B, 0.18f));
	if (UOverlaySlot* GlowSlot = RootOverlay->AddChildToOverlay(AccentGlowImage))
	{
		GlowSlot->SetHorizontalAlignment(HAlign_Fill);
		GlowSlot->SetVerticalAlignment(VAlign_Fill);
		GlowSlot->SetPadding(FMargin(0.0f, 40.0f, 0.0f, 40.0f));
	}

	MainPanelBorder = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), TEXT("PauseMainPanelBorder"));
	MainPanelBorder->SetBrush(FSlateRoundedBoxBrush(PanelTint, 16.0f));
	MainPanelBorder->SetPadding(FMargin(24.0f, 20.0f));
	if (UOverlaySlot* PanelOverlaySlot = RootOverlay->AddChildToOverlay(MainPanelBorder))
	{
		PanelOverlaySlot->SetHorizontalAlignment(HAlign_Center);
		PanelOverlaySlot->SetVerticalAlignment(VAlign_Center);
	}

	USizeBox* PanelSizeBox = WidgetTree->ConstructWidget<USizeBox>(USizeBox::StaticClass(), TEXT("PausePanelSizeBox"));
	PanelSizeBox->SetWidthOverride(FMath::Clamp(PanelWidth, 320.0f, 1200.0f));
	MainPanelBorder->SetContent(PanelSizeBox);

	UVerticalBox* PanelVBox = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("PausePanelVBox"));
	PanelSizeBox->SetContent(PanelVBox);

	AccentLineBorder = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), TEXT("PauseAccentLine"));
	AccentLineBorder->SetBrush(FSlateRoundedBoxBrush(AccentColor, 3.0f));
	if (UVerticalBoxSlot* AccentSlot = PanelVBox->AddChildToVerticalBox(AccentLineBorder))
	{
		AccentSlot->SetPadding(FMargin(0.0f, 0.0f, 0.0f, 14.0f));
		AccentSlot->SetSize(ESlateSizeRule::Automatic);
	}

	RootMenuBox = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("PauseRootMenuBox"));
	PanelVBox->AddChildToVerticalBox(RootMenuBox);

	TitleLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("PauseTitleLabel"));
	if (UVerticalBoxSlot* TitleSlot = RootMenuBox->AddChildToVerticalBox(TitleLabel))
	{
		TitleSlot->SetPadding(FMargin(6.0f, 2.0f, 6.0f, 18.0f));
	}

	SessionInfoLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("PauseSessionInfoLabel"));
	if (UVerticalBoxSlot* InfoSlot = RootMenuBox->AddChildToVerticalBox(SessionInfoLabel))
	{
		InfoSlot->SetPadding(FMargin(6.0f, 0.0f, 6.0f, 6.0f));
	}

	SessionDateLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("PauseSessionDateLabel"));
	if (UVerticalBoxSlot* DateSlot = RootMenuBox->AddChildToVerticalBox(SessionDateLabel))
	{
		DateSlot->SetPadding(FMargin(6.0f, 0.0f, 6.0f, 16.0f));
	}

	ResumeButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("PauseResumeButton"));
	SettingsButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("PauseSettingsButton"));
	MainMenuButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("PauseMainMenuButton"));
	QuitButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("PauseQuitButton"));

	if (UVerticalBoxSlot* ResumeSlot = RootMenuBox->AddChildToVerticalBox(ResumeButton))
	{
		ResumeSlot->SetPadding(FMargin(0.0f, 0.0f, 0.0f, 10.0f));
	}
	if (UVerticalBoxSlot* SettingsSlot = RootMenuBox->AddChildToVerticalBox(SettingsButton))
	{
		SettingsSlot->SetPadding(FMargin(0.0f, 0.0f, 0.0f, 10.0f));
	}
	if (UVerticalBoxSlot* MainMenuSlot = RootMenuBox->AddChildToVerticalBox(MainMenuButton))
	{
		MainMenuSlot->SetPadding(FMargin(0.0f, 0.0f, 0.0f, 10.0f));
	}
	RootMenuBox->AddChildToVerticalBox(QuitButton);

	SetButtonText(ResumeButton, ResumeText);
	SetButtonText(SettingsButton, SettingsText);
	SetButtonText(MainMenuButton, MainMenuText);
	SetButtonText(QuitButton, QuitText);
}

void UZonefallPauseMenuWidget::ResolveDesignerWidgetsIfNeeded()
{
	if (!WidgetTree)
	{
		UE_LOG(LogZonefallPauseMenu, Error, TEXT("[PauseMenu] WidgetTree is null in ResolveDesignerWidgetsIfNeeded."));
		return;
	}

	if (!RootBorder)
	{
		RootBorder = Cast<UBorder>(WidgetTree->FindWidget(TEXT("PauseRootBorder")));
	}
	if (!BackdropBorder)
	{
		BackdropBorder = Cast<UBorder>(WidgetTree->FindWidget(TEXT("PauseBackdropBorder")));
	}
	if (!MainPanelBorder)
	{
		MainPanelBorder = Cast<UBorder>(WidgetTree->FindWidget(TEXT("PauseMainPanelBorder")));
	}
	if (!AccentLineBorder)
	{
		AccentLineBorder = Cast<UBorder>(WidgetTree->FindWidget(TEXT("PauseAccentLine")));
	}
	if (!AccentGlowImage)
	{
		AccentGlowImage = Cast<UImage>(WidgetTree->FindWidget(TEXT("PauseAccentGlow")));
	}
	if (!RootMenuBox)
	{
		RootMenuBox = Cast<UVerticalBox>(WidgetTree->FindWidget(TEXT("PauseRootMenuBox")));
	}
	if (!TitleLabel)
	{
		TitleLabel = Cast<UTextBlock>(WidgetTree->FindWidget(TEXT("PauseTitleLabel")));
	}
	if (!SessionInfoLabel)
	{
		SessionInfoLabel = Cast<UTextBlock>(WidgetTree->FindWidget(TEXT("PauseSessionInfoLabel")));
	}
	if (!SessionDateLabel)
	{
		SessionDateLabel = Cast<UTextBlock>(WidgetTree->FindWidget(TEXT("PauseSessionDateLabel")));
	}
	if (!ResumeButton)
	{
		ResumeButton = Cast<UButton>(WidgetTree->FindWidget(TEXT("PauseResumeButton")));
	}
	if (!SettingsButton)
	{
		SettingsButton = Cast<UButton>(WidgetTree->FindWidget(TEXT("PauseSettingsButton")));
	}
	if (!MainMenuButton)
	{
		MainMenuButton = Cast<UButton>(WidgetTree->FindWidget(TEXT("PauseMainMenuButton")));
	}
	if (!QuitButton)
	{
		QuitButton = Cast<UButton>(WidgetTree->FindWidget(TEXT("PauseQuitButton")));
	}

	UE_LOG(
		LogZonefallPauseMenu,
		Verbose,
		TEXT("[PauseMenu] Resolve widgets done. Missing: Root=%d Backdrop=%d Panel=%d Accent=%d Glow=%d MenuBox=%d Title=%d Session=%d SessionDate=%d Resume=%d Settings=%d MainMenu=%d Quit=%d"),
		RootBorder == nullptr,
		BackdropBorder == nullptr,
		MainPanelBorder == nullptr,
		AccentLineBorder == nullptr,
		AccentGlowImage == nullptr,
		RootMenuBox == nullptr,
		TitleLabel == nullptr,
		SessionInfoLabel == nullptr,
		SessionDateLabel == nullptr,
		ResumeButton == nullptr,
		SettingsButton == nullptr,
		MainMenuButton == nullptr,
		QuitButton == nullptr
	);
}

void UZonefallPauseMenuWidget::ApplyVisualStyle()
{
	if (RootBorder)
	{
		RootBorder->SetBrushColor(FLinearColor::Transparent);
	}
	if (BackdropBorder)
	{
		BackdropBorder->SetBrush(FSlateRoundedBoxBrush(BackdropTint, 0.0f));
	}
	if (MainPanelBorder)
	{
		MainPanelBorder->SetBrush(FSlateRoundedBoxBrush(PanelTint, 16.0f));
	}
	if (AccentLineBorder)
	{
		AccentLineBorder->SetBrush(FSlateRoundedBoxBrush(AccentColor, 3.0f));
	}

	if (TitleLabel)
	{
		TitleLabel->SetText(TitleText);
		FSlateFontInfo TitleFont;
		TitleFont.Size = 44;
		TitleLabel->SetFont(TitleFont);
		TitleLabel->SetColorAndOpacity(FSlateColor(FLinearColor(0.92f, 0.98f, 0.96f, 1.0f)));
		TitleLabel->SetShadowOffset(FVector2D(1.0f, 1.0f));
		TitleLabel->SetShadowColorAndOpacity(FLinearColor(0.0f, 0.0f, 0.0f, 0.8f));
	}
	if (SessionInfoLabel)
	{
		FSlateFontInfo InfoFont;
		InfoFont.Size = 14;
		SessionInfoLabel->SetFont(InfoFont);
		SessionInfoLabel->SetColorAndOpacity(FSlateColor(FLinearColor(0.62f, 0.75f, 0.82f, 0.95f)));
		SessionInfoLabel->SetShadowOffset(FVector2D(1.0f, 1.0f));
		SessionInfoLabel->SetShadowColorAndOpacity(FLinearColor(0.0f, 0.0f, 0.0f, 0.7f));
	}
	if (SessionDateLabel)
	{
		FSlateFontInfo DateFont;
		DateFont.Size = 13;
		SessionDateLabel->SetFont(DateFont);
		SessionDateLabel->SetColorAndOpacity(FSlateColor(FLinearColor(0.73f, 0.80f, 0.70f, 0.90f)));
		SessionDateLabel->SetShadowOffset(FVector2D(1.0f, 1.0f));
		SessionDateLabel->SetShadowColorAndOpacity(FLinearColor(0.0f, 0.0f, 0.0f, 0.7f));
	}

	auto ApplyButtonStyle = [](UButton* Button)
	{
		if (!Button)
		{
			return;
		}

		FButtonStyle Style = Button->GetStyle();
		Style.SetNormal(FSlateRoundedBoxBrush(FLinearColor(0.05f, 0.07f, 0.05f, 0.94f), 10.0f));
		Style.SetHovered(FSlateRoundedBoxBrush(FLinearColor(0.16f, 0.19f, 0.08f, 1.00f), 10.0f));
		Style.SetPressed(FSlateRoundedBoxBrush(FLinearColor(0.22f, 0.15f, 0.05f, 1.00f), 10.0f));
		Style.NormalPadding = FMargin(18.0f, 12.0f);
		Style.PressedPadding = FMargin(18.0f, 14.0f, 18.0f, 10.0f);
		Button->SetStyle(Style);
		Button->SetRenderScale(FVector2D(1.0f, 1.0f));
	};

	ApplyButtonStyle(ResumeButton);
	ApplyButtonStyle(SettingsButton);
	ApplyButtonStyle(MainMenuButton);
	ApplyButtonStyle(QuitButton);

	SetButtonText(ResumeButton, ResumeText);
	SetButtonText(SettingsButton, SettingsText);
	SetButtonText(MainMenuButton, MainMenuText);
	SetButtonText(QuitButton, QuitText);
	UpdateSessionInfoText();
}

void UZonefallPauseMenuWidget::BindButtonEvents()
{
	if (!ResumeButton || !SettingsButton || !MainMenuButton || !QuitButton)
	{
		UE_LOG(
			LogZonefallPauseMenu,
			Error,
			TEXT("[PauseMenu] Cannot bind button events. Resume=%d Settings=%d MainMenu=%d Quit=%d"),
			ResumeButton != nullptr,
			SettingsButton != nullptr,
			MainMenuButton != nullptr,
			QuitButton != nullptr
		);
		return;
	}

	ResumeButton->OnClicked.RemoveDynamic(this, &UZonefallPauseMenuWidget::HandleResumeClicked);
	SettingsButton->OnClicked.RemoveDynamic(this, &UZonefallPauseMenuWidget::HandleSettingsClicked);
	MainMenuButton->OnClicked.RemoveDynamic(this, &UZonefallPauseMenuWidget::HandleMainMenuClicked);
	QuitButton->OnClicked.RemoveDynamic(this, &UZonefallPauseMenuWidget::HandleQuitClicked);
	ResumeButton->OnHovered.RemoveDynamic(this, &UZonefallPauseMenuWidget::HandleResumeHovered);
	SettingsButton->OnHovered.RemoveDynamic(this, &UZonefallPauseMenuWidget::HandleSettingsHovered);
	MainMenuButton->OnHovered.RemoveDynamic(this, &UZonefallPauseMenuWidget::HandleMainMenuHovered);
	QuitButton->OnHovered.RemoveDynamic(this, &UZonefallPauseMenuWidget::HandleQuitHovered);
	ResumeButton->OnUnhovered.RemoveDynamic(this, &UZonefallPauseMenuWidget::HandleAnyUnhovered);
	SettingsButton->OnUnhovered.RemoveDynamic(this, &UZonefallPauseMenuWidget::HandleAnyUnhovered);
	MainMenuButton->OnUnhovered.RemoveDynamic(this, &UZonefallPauseMenuWidget::HandleAnyUnhovered);
	QuitButton->OnUnhovered.RemoveDynamic(this, &UZonefallPauseMenuWidget::HandleAnyUnhovered);

	ResumeButton->OnClicked.AddDynamic(this, &UZonefallPauseMenuWidget::HandleResumeClicked);
	SettingsButton->OnClicked.AddDynamic(this, &UZonefallPauseMenuWidget::HandleSettingsClicked);
	MainMenuButton->OnClicked.AddDynamic(this, &UZonefallPauseMenuWidget::HandleMainMenuClicked);
	QuitButton->OnClicked.AddDynamic(this, &UZonefallPauseMenuWidget::HandleQuitClicked);
	ResumeButton->OnHovered.AddDynamic(this, &UZonefallPauseMenuWidget::HandleResumeHovered);
	SettingsButton->OnHovered.AddDynamic(this, &UZonefallPauseMenuWidget::HandleSettingsHovered);
	MainMenuButton->OnHovered.AddDynamic(this, &UZonefallPauseMenuWidget::HandleMainMenuHovered);
	QuitButton->OnHovered.AddDynamic(this, &UZonefallPauseMenuWidget::HandleQuitHovered);
	ResumeButton->OnUnhovered.AddDynamic(this, &UZonefallPauseMenuWidget::HandleAnyUnhovered);
	SettingsButton->OnUnhovered.AddDynamic(this, &UZonefallPauseMenuWidget::HandleAnyUnhovered);
	MainMenuButton->OnUnhovered.AddDynamic(this, &UZonefallPauseMenuWidget::HandleAnyUnhovered);
	QuitButton->OnUnhovered.AddDynamic(this, &UZonefallPauseMenuWidget::HandleAnyUnhovered);
	UE_LOG(LogZonefallPauseMenu, Verbose, TEXT("[PauseMenu] Button events bound successfully."));
}

void UZonefallPauseMenuWidget::SetButtonText(UButton* Button, const FText& Text)
{
	if (!Button || !WidgetTree)
	{
		return;
	}

	if (Button->GetChildrenCount() > 0)
	{
		if (UTextBlock* ExistingText = Cast<UTextBlock>(Button->GetChildAt(0)))
		{
			ExistingText->SetText(Text);
			return;
		}
	}

	UTextBlock* ButtonText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), NAME_None);
	ButtonText->SetText(Text);
	FSlateFontInfo Font;
	Font.Size = 30;
	ButtonText->SetFont(Font);
	ButtonText->SetColorAndOpacity(FSlateColor(TextNormalColor));
	ButtonText->SetShadowOffset(FVector2D(1.0f, 1.0f));
	ButtonText->SetShadowColorAndOpacity(FLinearColor(0.0f, 0.0f, 0.0f, 0.75f));
	Button->AddChild(ButtonText);
}

void UZonefallPauseMenuWidget::UpdateButtonTextColor(UButton* Button, const FLinearColor& Color)
{
	if (!Button)
	{
		return;
	}

	UTextBlock* TextChild = Cast<UTextBlock>(Button->GetChildAt(0));
	if (TextChild)
	{
		TextChild->SetColorAndOpacity(FSlateColor(Color));
	}
}

void UZonefallPauseMenuWidget::UpdateButtonScale(UButton* Button, float Scale)
{
	if (!Button)
	{
		return;
	}
	Button->SetRenderScale(FVector2D(Scale, Scale));
}

void UZonefallPauseMenuWidget::AnimateButtonTransforms(float InDeltaTime)
{
	auto StepScale = [this, InDeltaTime](UButton* Button)
	{
		if (!Button)
		{
			return;
		}
		const FVector2D CurrentScale = Button->GetRenderTransform().Scale;
		const float TargetScale = (HoveredButton.Get() == Button) ? 1.03f : 1.0f;
		const float NextX = FMath::FInterpTo(CurrentScale.X, TargetScale, InDeltaTime, 10.0f);
		const float NextY = FMath::FInterpTo(CurrentScale.Y, TargetScale, InDeltaTime, 10.0f);
		Button->SetRenderScale(FVector2D(NextX, NextY));
	};

	StepScale(ResumeButton);
	StepScale(SettingsButton);
	StepScale(MainMenuButton);
	StepScale(QuitButton);
}

void UZonefallPauseMenuWidget::UpdateSessionInfoText()
{
	if (!SessionInfoLabel)
	{
		UE_LOG(LogZonefallPauseMenu, Warning, TEXT("[PauseMenu] SessionInfoLabel is null. Cannot update session info text."));
		return;
	}

	const FString MapName = GetWorld() ? GetWorld()->GetMapName() : TEXT("Unknown");
	const FDateTime LocalNow = FDateTime::Now();
	const FString TimeString = LocalNow.ToString(TEXT("%H:%M"));
	const FTimespan SessionDuration = FDateTime::UtcNow() - SessionStartTimeUtc;
	const int32 TotalMinutes = FMath::Max(0, static_cast<int32>(SessionDuration.GetTotalMinutes()));
	const int32 Hours = TotalMinutes / 60;
	const int32 Minutes = TotalMinutes % 60;
	const FString SessionDurationString = FString::Printf(TEXT("%02d:%02d"), Hours, Minutes);
	UE_LOG(LogZonefallPauseMenu, Verbose, TEXT("[PauseMenu] Session info update. Map=%s Time=%s Duration=%s"), *MapName, *TimeString, *SessionDurationString);
	SessionInfoLabel->SetText(
		FText::FromString(
			FString::Printf(TEXT("%s  |  MAP: %s  |  TIME: %s"), *SessionInfoPrefixText.ToString(), *MapName, *TimeString)
		)
	);
	if (SessionDateLabel)
	{
		const FString DateString = LocalNow.ToString(TEXT("%d.%m.%Y"));
		SessionDateLabel->SetText(FText::FromString(FString::Printf(TEXT("DATE: %s  |  SESSION: %s"), *DateString, *SessionDurationString)));
	}
}

UButton* UZonefallPauseMenuWidget::GetPrimaryButtonToFocus() const
{
	if (ResumeButton && ResumeButton->GetVisibility() == ESlateVisibility::Visible)
	{
		return ResumeButton;
	}
	if (SettingsButton && SettingsButton->GetVisibility() == ESlateVisibility::Visible)
	{
		return SettingsButton;
	}
	if (MainMenuButton && MainMenuButton->GetVisibility() == ESlateVisibility::Visible)
	{
		return MainMenuButton;
	}
	return QuitButton;
}

void UZonefallPauseMenuWidget::HandleResumeClicked()
{
	if (bActionInProgress)
	{
		return;
	}
	bActionInProgress = true;
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().SetTimerForNextTick([this]()
		{
			bActionInProgress = false;
		});
	}

	// Preferred path: let GameInstance fully close menu UI state and restore gameplay input.
	if (UWorld* World = GetWorld())
	{
		if (UUIWorldMenuGameInstance* MenuGameInstance = Cast<UUIWorldMenuGameInstance>(World->GetGameInstance()))
		{
			MenuGameInstance->ContinueGame(true);
		}
		else
		{
			UGameplayStatics::SetGamePaused(World, false);
		}
	}

	// Safety fallback in case owning player/UI was not fully reset by higher-level flow.
	if (APlayerController* PlayerController = GetOwningPlayer())
	{
		PlayerController->ResetIgnoreMoveInput();
		PlayerController->ResetIgnoreLookInput();
		FInputModeGameOnly GameOnlyInputMode;
		PlayerController->SetInputMode(GameOnlyInputMode);
		PlayerController->SetIgnoreMoveInput(false);
		PlayerController->SetIgnoreLookInput(false);
		PlayerController->SetShowMouseCursor(false);
	}

	RemoveFromParent();
	OnResumeRequested.Broadcast();
}

void UZonefallPauseMenuWidget::HandleSettingsClicked()
{
	UE_LOG(LogTemp, Log, TEXT("[PauseFlow] Settings clicked. Bound=%d"), OnSettingsRequested.IsBound() ? 1 : 0);
	OnSettingsRequested.Broadcast();

	// Fallback path for cases when Settings button isn't wired in BP.
	if (!OnSettingsRequested.IsBound())
	{
		if (UWorld* World = GetWorld())
		{
			if (UUIWorldMenuGameInstance* MenuGameInstance = Cast<UUIWorldMenuGameInstance>(World->GetGameInstance()))
			{
				UE_LOG(LogTemp, Log, TEXT("[PauseFlow] Settings fallback -> OpenPauseSettingsMenu"));
				MenuGameInstance->OpenPauseSettingsMenu(false);
			}
		}
	}
}

void UZonefallPauseMenuWidget::HandleMainMenuClicked()
{
	if (bActionInProgress)
	{
		return;
	}
	bActionInProgress = true;
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().SetTimerForNextTick([this]()
		{
			bActionInProgress = false;
		});
	}

	OnMainMenuRequested.Broadcast();

	// Fallback path for cases when Main Menu button isn't wired in BP.
	if (!OnMainMenuRequested.IsBound())
	{
		if (UWorld* World = GetWorld())
		{
			if (UUIWorldMenuGameInstance* MenuGameInstance = Cast<UUIWorldMenuGameInstance>(World->GetGameInstance()))
			{
				MenuGameInstance->LoadMainMenuLevel(true);
			}
		}
	}
}

void UZonefallPauseMenuWidget::HandleQuitClicked()
{
	OnQuitRequested.Broadcast();

	if (!OnQuitRequested.IsBound())
	{
		if (UWorld* World = GetWorld())
		{
			if (UUIWorldMenuGameInstance* MenuGameInstance = Cast<UUIWorldMenuGameInstance>(World->GetGameInstance()))
			{
				MenuGameInstance->QuitGameNow(false);
			}
		}
	}
}

void UZonefallPauseMenuWidget::HandleResumeHovered()
{
	HoveredButton = ResumeButton;
	UpdateButtonTextColor(ResumeButton, TextHoverColor);
}

void UZonefallPauseMenuWidget::HandleSettingsHovered()
{
	HoveredButton = SettingsButton;
	UpdateButtonTextColor(SettingsButton, TextHoverColor);
}

void UZonefallPauseMenuWidget::HandleMainMenuHovered()
{
	HoveredButton = MainMenuButton;
	UpdateButtonTextColor(MainMenuButton, TextHoverColor);
}

void UZonefallPauseMenuWidget::HandleQuitHovered()
{
	HoveredButton = QuitButton;
	UpdateButtonTextColor(QuitButton, TextHoverColor);
}

void UZonefallPauseMenuWidget::HandleAnyUnhovered()
{
	HoveredButton = nullptr;
	UpdateButtonTextColor(ResumeButton, TextNormalColor);
	UpdateButtonTextColor(SettingsButton, TextNormalColor);
	UpdateButtonTextColor(MainMenuButton, TextNormalColor);
	UpdateButtonTextColor(QuitButton, TextNormalColor);
}

