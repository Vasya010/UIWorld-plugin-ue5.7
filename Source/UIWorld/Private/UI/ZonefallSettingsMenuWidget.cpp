#include "ZonefallSettingsMenuWidget.h"

#include "UIWorldMenuGameInstance.h"
#include "ZonefallSettingsDataObject.h"
#include "Blueprint/WidgetTree.h"
#include "Brushes/SlateRoundedBoxBrush.h"
#include "Components/Border.h"
#include "Components/Button.h"
#include "Components/ComboBoxString.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "Components/VerticalBoxSlot.h"

UZonefallSettingsMenuWidget::UZonefallSettingsMenuWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DisplayModeComboBoxName = TEXT("DisplayModeCombo");
	GraphicsPresetComboBoxName = TEXT("GraphicsPresetCombo");
	OverallQualityComboBoxName = TEXT("OverallQualityCombo");
	ResolutionScaleComboBoxName = TEXT("ResolutionScaleCombo");
	ScreenResolutionComboBoxName = TEXT("Fullscreen");
	VSyncComboBoxName = TEXT("VSyncCombo");
	FPSLimitComboBoxName = TEXT("FPSLimitCombo");
	LumenComboBoxName = TEXT("LumenCombo");
	DLSSComboBoxName = TEXT("DLSSCombo");
	FrameGenerationComboBoxName = TEXT("FrameGenerationCombo");
	FSRComboBoxName = TEXT("FSRCombo");
	FSRFrameGenerationComboBoxName = TEXT("FSRFrameGenerationCombo");
	ApplyButtonName = TEXT("ApplyButton");
	ResetButtonName = TEXT("ResetButton");
	BackButtonName = TEXT("BackButton");
	MemoryUsageProgressBarName = TEXT("MemoryUsageProgress");
	MemoryUsageTextName = TEXT("MemoryUsageText");
	ApplyStatusTextName = TEXT("ApplyStatusText");
	bAutoApplyDisplayModeAndResolution = true;
	bHasPendingChanges = false;
	bIsRefreshingFromSettings = false;
}

void UZonefallSettingsMenuWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	ResolveNamedWidgets();
	BuildLayoutIfNeeded();
	ResolveNamedWidgets();
	PopulateComboOptionsIfNeeded();
}

void UZonefallSettingsMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (!SettingsObject)
	{
		SettingsObject = NewObject<UZonefallSettingsDataObject>(this);
		SettingsObject->SetDefaults();
	}

	ResolveNamedWidgets();
	BuildLayoutIfNeeded();
	ResolveNamedWidgets();
	PopulateComboOptionsIfNeeded();
	PopulateScreenResolutionsIfNeeded();
	BindEvents();
	RefreshFromSettings();
}

void UZonefallSettingsMenuWidget::RefreshFromSettings()
{
	if (!SettingsObject)
	{
		return;
	}

	bIsRefreshingFromSettings = true;
	SettingsObject->LoadFromSystem();

	if (DisplayModeComboBox) { DisplayModeComboBox->SetSelectedOption(SettingsObject->DisplayMode); }
	if (GraphicsPresetComboBox) { GraphicsPresetComboBox->SetSelectedOption(TEXT("Custom")); }
	if (OverallQualityComboBox) { OverallQualityComboBox->SetSelectedOption(SettingsObject->OverallQuality); }
	if (ResolutionScaleComboBox) { ResolutionScaleComboBox->SetSelectedOption(SettingsObject->ResolutionScale); }
	if (ScreenResolutionComboBox) { ScreenResolutionComboBox->SetSelectedOption(SettingsObject->GetCurrentScreenResolutionString()); }
	if (VSyncComboBox) { VSyncComboBox->SetSelectedOption(SettingsObject->VSync); }
	if (FPSLimitComboBox)
	{
		EnsureComboHasOption(FPSLimitComboBox, SettingsObject->FPSLimit);
		FPSLimitComboBox->SetSelectedOption(SettingsObject->FPSLimit);
	}
	if (LumenComboBox) { LumenComboBox->SetSelectedOption(SettingsObject->Lumen); }
	if (DLSSComboBox) { EnsureComboHasOption(DLSSComboBox, SettingsObject->DLSSMode); DLSSComboBox->SetSelectedOption(SettingsObject->DLSSMode.IsEmpty() ? TEXT("Off") : SettingsObject->DLSSMode); }
	if (FrameGenerationComboBox) { EnsureComboHasOption(FrameGenerationComboBox, SettingsObject->FrameGeneration); FrameGenerationComboBox->SetSelectedOption(SettingsObject->FrameGeneration.IsEmpty() ? TEXT("Off") : SettingsObject->FrameGeneration); }
	if (FSRComboBox) { EnsureComboHasOption(FSRComboBox, SettingsObject->FSRMode); FSRComboBox->SetSelectedOption(SettingsObject->FSRMode.IsEmpty() ? TEXT("Off") : SettingsObject->FSRMode); }
	if (FSRFrameGenerationComboBox) { EnsureComboHasOption(FSRFrameGenerationComboBox, SettingsObject->FSRFrameGeneration); FSRFrameGenerationComboBox->SetSelectedOption(SettingsObject->FSRFrameGeneration.IsEmpty() ? TEXT("Off") : SettingsObject->FSRFrameGeneration); }

	UpdateFeatureAvailabilityUI();
	UpdatePerformanceEstimateUI();
	UpdateTexts();
	bHasPendingChanges = false;
	UpdateApplyButtonState();
	SetApplyStatusMessage(FText::FromString(TEXT("Settings synced")), FLinearColor(0.60f, 0.86f, 0.64f, 1.0f));
	bIsRefreshingFromSettings = false;
}

void UZonefallSettingsMenuWidget::ApplySettingsNow()
{
	if (!SettingsObject)
	{
		return;
	}

	SettingsObject->ApplyToSystem(this);
	bHasPendingChanges = false;
	UpdateApplyButtonState();
	SetApplyStatusMessage(FText::FromString(TEXT("Settings applied")), FLinearColor(0.66f, 0.92f, 0.72f, 1.0f));
	OnSettingsApplied.Broadcast();
}

void UZonefallSettingsMenuWidget::ResetToDefaults()
{
	if (!SettingsObject)
	{
		return;
	}

	SettingsObject->SetDefaults();
	bIsRefreshingFromSettings = true;
	if (DisplayModeComboBox) { DisplayModeComboBox->SetSelectedOption(SettingsObject->DisplayMode); }
	if (GraphicsPresetComboBox) { GraphicsPresetComboBox->SetSelectedOption(TEXT("Custom")); }
	if (OverallQualityComboBox) { OverallQualityComboBox->SetSelectedOption(SettingsObject->OverallQuality); }
	if (ResolutionScaleComboBox) { ResolutionScaleComboBox->SetSelectedOption(SettingsObject->ResolutionScale); }
	if (ScreenResolutionComboBox) { EnsureComboHasOption(ScreenResolutionComboBox, SettingsObject->ScreenResolution); ScreenResolutionComboBox->SetSelectedOption(SettingsObject->ScreenResolution); }
	if (VSyncComboBox) { VSyncComboBox->SetSelectedOption(SettingsObject->VSync); }
	if (FPSLimitComboBox) { EnsureComboHasOption(FPSLimitComboBox, SettingsObject->FPSLimit); FPSLimitComboBox->SetSelectedOption(SettingsObject->FPSLimit); }
	if (LumenComboBox) { LumenComboBox->SetSelectedOption(SettingsObject->Lumen); }
	if (DLSSComboBox) { EnsureComboHasOption(DLSSComboBox, SettingsObject->DLSSMode); DLSSComboBox->SetSelectedOption(SettingsObject->DLSSMode); }
	if (FrameGenerationComboBox) { EnsureComboHasOption(FrameGenerationComboBox, SettingsObject->FrameGeneration); FrameGenerationComboBox->SetSelectedOption(SettingsObject->FrameGeneration); }
	if (FSRComboBox) { EnsureComboHasOption(FSRComboBox, SettingsObject->FSRMode); FSRComboBox->SetSelectedOption(SettingsObject->FSRMode); }
	if (FSRFrameGenerationComboBox) { EnsureComboHasOption(FSRFrameGenerationComboBox, SettingsObject->FSRFrameGeneration); FSRFrameGenerationComboBox->SetSelectedOption(SettingsObject->FSRFrameGeneration); }
	bIsRefreshingFromSettings = false;
	UpdateFeatureAvailabilityUI();
	UpdatePerformanceEstimateUI();
	UpdateTexts();
	MarkSettingsDirty();
	SetApplyStatusMessage(FText::FromString(TEXT("Defaults loaded (press APPLY)")), FLinearColor(0.95f, 0.80f, 0.30f, 1.0f));
}

void UZonefallSettingsMenuWidget::BuildLayoutIfNeeded()
{
	if (!WidgetTree || WidgetTree->RootWidget)
	{
		return;
	}

	RootBorder = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), TEXT("SettingsRootBorder"));
	RootBorder->SetBrushColor(FLinearColor(0.03f, 0.05f, 0.04f, 0.90f));
	RootBorder->SetPadding(FMargin(18.0f));
	WidgetTree->RootWidget = RootBorder;

	RootBox = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("SettingsRootBox"));
	RootBorder->SetContent(RootBox);

	TitleText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("SettingsTitle"));
	TitleText->SetText(FText::FromString(TEXT("SETTINGS")));
	FSlateFontInfo TitleFont;
	TitleFont.Size = 44;
	TitleText->SetFont(TitleFont);
	TitleText->SetColorAndOpacity(FSlateColor(FLinearColor(0.90f, 0.95f, 0.85f, 1.0f)));
	if (UVerticalBoxSlot* TitleSlot = RootBox->AddChildToVerticalBox(TitleText))
	{
		TitleSlot->SetPadding(FMargin(4, 4, 4, 16));
	}

	DisplayModeComboBox = CreateOptionCombo(TEXT("DisplayModeCombo"), DisplayModeText);
	GraphicsPresetComboBox = CreateOptionCombo(TEXT("GraphicsPresetCombo"), GraphicsPresetText);
	OverallQualityComboBox = CreateOptionCombo(TEXT("OverallQualityCombo"), OverallQualityText);
	ResolutionScaleComboBox = CreateOptionCombo(TEXT("ResolutionScaleCombo"), ResolutionScaleText);
	ScreenResolutionComboBox = CreateOptionCombo(TEXT("Fullscreen"), ScreenResolutionText);
	VSyncComboBox = CreateOptionCombo(TEXT("VSyncCombo"), VSyncText);
	FPSLimitComboBox = CreateOptionCombo(TEXT("FPSLimitCombo"), FPSLimitText);
	LumenComboBox = CreateOptionCombo(TEXT("LumenCombo"), LumenText);
	DLSSComboBox = CreateOptionCombo(TEXT("DLSSCombo"), DLSSText);
	FrameGenerationComboBox = CreateOptionCombo(TEXT("FrameGenerationCombo"), FrameGenerationText);
	FSRComboBox = CreateOptionCombo(TEXT("FSRCombo"), FSRText);
	FSRFrameGenerationComboBox = CreateOptionCombo(TEXT("FSRFrameGenerationCombo"), FSRFrameGenerationText);

	MemoryUsageText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("MemoryUsageText"));
	MemoryUsageText->SetText(FText::FromString(TEXT("Estimated Memory Usage")));
	MemoryUsageText->SetColorAndOpacity(FSlateColor(FLinearColor(0.80f, 0.88f, 0.78f, 1.0f)));
	FSlateFontInfo MemoryFont;
	MemoryFont.Size = 22;
	MemoryUsageText->SetFont(MemoryFont);
	if (UVerticalBoxSlot* MemoryTextSlot = RootBox->AddChildToVerticalBox(MemoryUsageText))
	{
		MemoryTextSlot->SetPadding(FMargin(0, 10, 0, 4));
	}

	MemoryUsageProgressBar = WidgetTree->ConstructWidget<UProgressBar>(UProgressBar::StaticClass(), TEXT("MemoryUsageProgress"));
	MemoryUsageProgressBar->SetFillColorAndOpacity(FLinearColor(0.20f, 0.75f, 0.35f, 1.0f));
	MemoryUsageProgressBar->SetPercent(0.5f);
	if (UVerticalBoxSlot* MemoryBarSlot = RootBox->AddChildToVerticalBox(MemoryUsageProgressBar))
	{
		MemoryBarSlot->SetPadding(FMargin(0, 0, 0, 8));
	}

	TObjectPtr<UTextBlock> UnusedText = nullptr;
	auto CreateActionButton = [this, &UnusedText](const TCHAR* Name, const TCHAR* Label) -> UButton*
	{
		UComboBoxString* IgnoreCombo = nullptr;
		UButton* NewButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), Name);
		ApplyButtonStyle(NewButton);
		if (UVerticalBoxSlot* ActionSlot = RootBox->AddChildToVerticalBox(NewButton))
		{
			ActionSlot->SetPadding(FMargin(0, 6, 0, 6));
		}

		TObjectPtr<UTextBlock> ActionText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass());
		FSlateFontInfo Font;
		Font.Size = 28;
		ActionText->SetFont(Font);
		ActionText->SetColorAndOpacity(FSlateColor(FLinearColor(0.85f, 0.90f, 0.82f, 1.0f)));
		ActionText->SetText(FText::FromString(Label));
		NewButton->AddChild(ActionText);
		return NewButton;
	};

	ApplyButton = CreateActionButton(TEXT("ApplyButton"), TEXT("APPLY"));
	ResetButton = CreateActionButton(TEXT("ResetButton"), TEXT("RESET DEFAULTS"));
	BackButton = CreateActionButton(TEXT("BackButton"), TEXT("BACK"));
}

void UZonefallSettingsMenuWidget::BindEvents()
{
	if (DisplayModeComboBox)
	{
		DisplayModeComboBox->OnSelectionChanged.AddUniqueDynamic(this, &UZonefallSettingsMenuWidget::HandleDisplayModeSelectionChanged);
	}
	if (GraphicsPresetComboBox)
	{
		GraphicsPresetComboBox->OnSelectionChanged.AddUniqueDynamic(this, &UZonefallSettingsMenuWidget::HandleGraphicsPresetSelectionChanged);
	}
	if (OverallQualityComboBox)
	{
		OverallQualityComboBox->OnSelectionChanged.AddUniqueDynamic(this, &UZonefallSettingsMenuWidget::HandleOverallQualitySelectionChanged);
	}
	if (ResolutionScaleComboBox)
	{
		ResolutionScaleComboBox->OnSelectionChanged.AddUniqueDynamic(this, &UZonefallSettingsMenuWidget::HandleResolutionScaleSelectionChanged);
	}
	if (ScreenResolutionComboBox)
	{
		ScreenResolutionComboBox->OnSelectionChanged.AddUniqueDynamic(this, &UZonefallSettingsMenuWidget::HandleScreenResolutionSelectionChanged);
	}
	if (VSyncComboBox)
	{
		VSyncComboBox->OnSelectionChanged.AddUniqueDynamic(this, &UZonefallSettingsMenuWidget::HandleVSyncSelectionChanged);
	}
	if (FPSLimitComboBox)
	{
		FPSLimitComboBox->OnSelectionChanged.AddUniqueDynamic(this, &UZonefallSettingsMenuWidget::HandleFPSLimitSelectionChanged);
	}
	if (LumenComboBox)
	{
		LumenComboBox->OnSelectionChanged.AddUniqueDynamic(this, &UZonefallSettingsMenuWidget::HandleLumenSelectionChanged);
	}
	if (DLSSComboBox)
	{
		DLSSComboBox->OnSelectionChanged.AddUniqueDynamic(this, &UZonefallSettingsMenuWidget::HandleDLSSSelectionChanged);
	}
	if (FrameGenerationComboBox)
	{
		FrameGenerationComboBox->OnSelectionChanged.AddUniqueDynamic(this, &UZonefallSettingsMenuWidget::HandleFrameGenerationSelectionChanged);
	}
	if (FSRComboBox)
	{
		FSRComboBox->OnSelectionChanged.AddUniqueDynamic(this, &UZonefallSettingsMenuWidget::HandleFSRSelectionChanged);
	}
	if (FSRFrameGenerationComboBox)
	{
		FSRFrameGenerationComboBox->OnSelectionChanged.AddUniqueDynamic(this, &UZonefallSettingsMenuWidget::HandleFSRFrameGenerationSelectionChanged);
	}

	if (ApplyButton)
	{
		ApplyButton->OnClicked.AddUniqueDynamic(this, &UZonefallSettingsMenuWidget::HandleApplyClicked);
	}
	if (ResetButton)
	{
		ResetButton->OnClicked.AddUniqueDynamic(this, &UZonefallSettingsMenuWidget::HandleResetClicked);
	}
	if (BackButton)
	{
		BackButton->OnClicked.AddUniqueDynamic(this, &UZonefallSettingsMenuWidget::HandleBackClicked);
	}
}

void UZonefallSettingsMenuWidget::ResolveNamedWidgets()
{
	if (!WidgetTree)
	{
		return;
	}

	auto FindComboByAliases = [this](const TArray<FName>& Aliases) -> UComboBoxString*
	{
		for (const FName& Alias : Aliases)
		{
			if (Alias.IsNone())
			{
				continue;
			}

			if (UComboBoxString* Found = Cast<UComboBoxString>(WidgetTree->FindWidget(Alias)))
			{
				return Found;
			}
		}
		return nullptr;
	};

	if (!DisplayModeComboBox && !DisplayModeComboBoxName.IsNone())
	{
		DisplayModeComboBox = Cast<UComboBoxString>(WidgetTree->FindWidget(DisplayModeComboBoxName));
	}
	if (!GraphicsPresetComboBox && !GraphicsPresetComboBoxName.IsNone())
	{
		GraphicsPresetComboBox = Cast<UComboBoxString>(WidgetTree->FindWidget(GraphicsPresetComboBoxName));
	}
	if (!OverallQualityComboBox && !OverallQualityComboBoxName.IsNone())
	{
		OverallQualityComboBox = Cast<UComboBoxString>(WidgetTree->FindWidget(OverallQualityComboBoxName));
	}
	if (!ResolutionScaleComboBox && !ResolutionScaleComboBoxName.IsNone())
	{
		ResolutionScaleComboBox = Cast<UComboBoxString>(WidgetTree->FindWidget(ResolutionScaleComboBoxName));
	}
	if (!ScreenResolutionComboBox && !ScreenResolutionComboBoxName.IsNone())
	{
		ScreenResolutionComboBox = Cast<UComboBoxString>(WidgetTree->FindWidget(ScreenResolutionComboBoxName));
	}
	if (!VSyncComboBox && !VSyncComboBoxName.IsNone())
	{
		VSyncComboBox = Cast<UComboBoxString>(WidgetTree->FindWidget(VSyncComboBoxName));
	}
	if (!FPSLimitComboBox && !FPSLimitComboBoxName.IsNone())
	{
		FPSLimitComboBox = Cast<UComboBoxString>(WidgetTree->FindWidget(FPSLimitComboBoxName));
	}
	if (!LumenComboBox && !LumenComboBoxName.IsNone())
	{
		LumenComboBox = Cast<UComboBoxString>(WidgetTree->FindWidget(LumenComboBoxName));
	}
	if (!DLSSComboBox && !DLSSComboBoxName.IsNone())
	{
		DLSSComboBox = Cast<UComboBoxString>(WidgetTree->FindWidget(DLSSComboBoxName));
	}
	if (!FrameGenerationComboBox && !FrameGenerationComboBoxName.IsNone())
	{
		FrameGenerationComboBox = Cast<UComboBoxString>(WidgetTree->FindWidget(FrameGenerationComboBoxName));
	}
	if (!FSRComboBox && !FSRComboBoxName.IsNone())
	{
		FSRComboBox = Cast<UComboBoxString>(WidgetTree->FindWidget(FSRComboBoxName));
	}
	if (!FSRFrameGenerationComboBox && !FSRFrameGenerationComboBoxName.IsNone())
	{
		FSRFrameGenerationComboBox = Cast<UComboBoxString>(WidgetTree->FindWidget(FSRFrameGenerationComboBoxName));
	}
	if (!FSRFrameGenerationComboBox)
	{
		// Be tolerant to common naming variants in UMG.
		FSRFrameGenerationComboBox = FindComboByAliases({
			FSRFrameGenerationComboBoxName,
			TEXT("FSRFrameGenerationCombo"),
			TEXT("FSRFrameGeneration"),
			TEXT("FsrFrameGeneration"),
			TEXT("Fsr FrameGeneration"),
			TEXT("Fsr Frame Generation"),
			TEXT("FSR FrameGeneration"),
			TEXT("FSR Frame Generation")
		});
	}

	if (!ApplyButton && !ApplyButtonName.IsNone())
	{
		ApplyButton = Cast<UButton>(WidgetTree->FindWidget(ApplyButtonName));
	}
	if (!ResetButton && !ResetButtonName.IsNone())
	{
		ResetButton = Cast<UButton>(WidgetTree->FindWidget(ResetButtonName));
	}
	if (!BackButton && !BackButtonName.IsNone())
	{
		BackButton = Cast<UButton>(WidgetTree->FindWidget(BackButtonName));
	}

	if (!MemoryUsageProgressBar && !MemoryUsageProgressBarName.IsNone())
	{
		MemoryUsageProgressBar = Cast<UProgressBar>(WidgetTree->FindWidget(MemoryUsageProgressBarName));
	}
	if (!MemoryUsageText && !MemoryUsageTextName.IsNone())
	{
		MemoryUsageText = Cast<UTextBlock>(WidgetTree->FindWidget(MemoryUsageTextName));
	}
	if (!ApplyStatusText && !ApplyStatusTextName.IsNone())
	{
		ApplyStatusText = Cast<UTextBlock>(WidgetTree->FindWidget(ApplyStatusTextName));
	}
}

void UZonefallSettingsMenuWidget::PopulateComboOptionsIfNeeded()
{
	if (DisplayModeComboBox && DisplayModeComboBox->GetOptionCount() == 0)
	{
		DisplayModeComboBox->AddOption(TEXT("Fullscreen"));
		DisplayModeComboBox->AddOption(TEXT("Windowed"));
		DisplayModeComboBox->AddOption(TEXT("Windowed Fullscreen"));
	}
	if (GraphicsPresetComboBox && GraphicsPresetComboBox->GetOptionCount() == 0)
	{
		GraphicsPresetComboBox->AddOption(TEXT("Custom"));
		GraphicsPresetComboBox->AddOption(TEXT("Competitive"));
		GraphicsPresetComboBox->AddOption(TEXT("Balanced"));
		GraphicsPresetComboBox->AddOption(TEXT("Quality"));
	}

	if (OverallQualityComboBox && OverallQualityComboBox->GetOptionCount() == 0)
	{
		OverallQualityComboBox->AddOption(TEXT("Low"));
		OverallQualityComboBox->AddOption(TEXT("Medium"));
		OverallQualityComboBox->AddOption(TEXT("High"));
		OverallQualityComboBox->AddOption(TEXT("Epic"));
		OverallQualityComboBox->AddOption(TEXT("Cinematic"));
	}

	if (ResolutionScaleComboBox && ResolutionScaleComboBox->GetOptionCount() == 0)
	{
		ResolutionScaleComboBox->AddOption(TEXT("50%"));
		ResolutionScaleComboBox->AddOption(TEXT("60%"));
		ResolutionScaleComboBox->AddOption(TEXT("70%"));
		ResolutionScaleComboBox->AddOption(TEXT("80%"));
		ResolutionScaleComboBox->AddOption(TEXT("90%"));
		ResolutionScaleComboBox->AddOption(TEXT("100%"));
	}

	if (VSyncComboBox && VSyncComboBox->GetOptionCount() == 0)
	{
		VSyncComboBox->AddOption(TEXT("Off"));
		VSyncComboBox->AddOption(TEXT("On"));
	}

	if (FPSLimitComboBox && FPSLimitComboBox->GetOptionCount() == 0)
	{
		FPSLimitComboBox->AddOption(TEXT("30"));
		FPSLimitComboBox->AddOption(TEXT("60"));
		FPSLimitComboBox->AddOption(TEXT("120"));
		FPSLimitComboBox->AddOption(TEXT("Unlimited"));
	}

	if (LumenComboBox && LumenComboBox->GetOptionCount() == 0)
	{
		LumenComboBox->AddOption(TEXT("Off"));
		LumenComboBox->AddOption(TEXT("On"));
	}
	if (DLSSComboBox)
	{
		EnsureComboHasOption(DLSSComboBox, TEXT("Off"));
		EnsureComboHasOption(DLSSComboBox, TEXT("Unavailable"));
		EnsureComboHasOption(DLSSComboBox, TEXT("Quality"));
		EnsureComboHasOption(DLSSComboBox, TEXT("Balanced"));
		EnsureComboHasOption(DLSSComboBox, TEXT("Performance"));
		EnsureComboHasOption(DLSSComboBox, TEXT("Ultra Performance"));
		EnsureComboHasOption(DLSSComboBox, TEXT("DLAA"));
	}
	if (FrameGenerationComboBox)
	{
		EnsureComboHasOption(FrameGenerationComboBox, TEXT("Off"));
		EnsureComboHasOption(FrameGenerationComboBox, TEXT("On"));
		EnsureComboHasOption(FrameGenerationComboBox, TEXT("Unavailable"));
	}
	if (FSRComboBox)
	{
		EnsureComboHasOption(FSRComboBox, TEXT("Off"));
		EnsureComboHasOption(FSRComboBox, TEXT("Unavailable"));
		EnsureComboHasOption(FSRComboBox, TEXT("Native AA"));
		EnsureComboHasOption(FSRComboBox, TEXT("Quality"));
		EnsureComboHasOption(FSRComboBox, TEXT("Balanced"));
		EnsureComboHasOption(FSRComboBox, TEXT("Performance"));
		EnsureComboHasOption(FSRComboBox, TEXT("Ultra Performance"));
	}
	if (FSRFrameGenerationComboBox)
	{
		EnsureComboHasOption(FSRFrameGenerationComboBox, TEXT("Off"));
		EnsureComboHasOption(FSRFrameGenerationComboBox, TEXT("On"));
		EnsureComboHasOption(FSRFrameGenerationComboBox, TEXT("Unavailable"));
	}
}

void UZonefallSettingsMenuWidget::PopulateScreenResolutionsIfNeeded()
{
	if (!SettingsObject || !ScreenResolutionComboBox)
	{
		return;
	}

	if (ScreenResolutionComboBox->GetOptionCount() > 0)
	{
		return;
	}

	TArray<FString> AvailableResolutions;
	SettingsObject->GetAvailableScreenResolutions(AvailableResolutions, false);
	for (const FString& Resolution : AvailableResolutions)
	{
		ScreenResolutionComboBox->AddOption(Resolution);
	}
}

void UZonefallSettingsMenuWidget::ApplyButtonStyle(UButton* Button) const
{
	if (!Button)
	{
		return;
	}

	FButtonStyle Style = Button->GetStyle();
	Style.SetNormal(FSlateRoundedBoxBrush(FLinearColor(0.05f, 0.08f, 0.05f, 0.90f), 8.0f));
	Style.SetHovered(FSlateRoundedBoxBrush(FLinearColor(0.10f, 0.15f, 0.10f, 1.00f), 8.0f));
	Style.SetPressed(FSlateRoundedBoxBrush(FLinearColor(0.03f, 0.05f, 0.03f, 1.00f), 8.0f));
	Style.NormalPadding = FMargin(12.0f, 8.0f);
	Style.PressedPadding = FMargin(12.0f, 10.0f, 12.0f, 6.0f);
	Button->SetStyle(Style);
}

UComboBoxString* UZonefallSettingsMenuWidget::CreateOptionCombo(const FName Name, TObjectPtr<UTextBlock>& OutTextBlock)
{
	OutTextBlock = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass());
	FSlateFontInfo LabelFont;
	LabelFont.Size = 24;
	OutTextBlock->SetFont(LabelFont);
	OutTextBlock->SetColorAndOpacity(FSlateColor(FLinearColor(0.80f, 0.88f, 0.78f, 1.0f)));
	if (UVerticalBoxSlot* LabelSlot = RootBox->AddChildToVerticalBox(OutTextBlock))
	{
		LabelSlot->SetPadding(FMargin(0, 6, 0, 2));
	}

	UComboBoxString* Combo = WidgetTree->ConstructWidget<UComboBoxString>(UComboBoxString::StaticClass(), Name);
	if (UVerticalBoxSlot* ComboSlot = RootBox->AddChildToVerticalBox(Combo))
	{
		ComboSlot->SetPadding(FMargin(0, 2, 0, 8));
	}
	return Combo;
}

void UZonefallSettingsMenuWidget::EnsureComboHasOption(UComboBoxString* ComboBox, const FString& Option) const
{
	if (!ComboBox || Option.IsEmpty())
	{
		return;
	}

	if (ComboBox->FindOptionIndex(Option) == INDEX_NONE)
	{
		ComboBox->AddOption(Option);
	}
}

void UZonefallSettingsMenuWidget::UpdateFeatureAvailabilityUI()
{
	if (!SettingsObject)
	{
		return;
	}

	if (FrameGenerationComboBox)
	{
		if (!SettingsObject->bFrameGenerationSupported)
		{
			SettingsObject->FrameGeneration = TEXT("Unavailable");
			EnsureComboHasOption(FrameGenerationComboBox, TEXT("Unavailable"));
			FrameGenerationComboBox->SetSelectedOption(TEXT("Unavailable"));
			FrameGenerationComboBox->SetIsEnabled(false);
		}
		else
		{
			if (SettingsObject->FrameGeneration == TEXT("Unavailable"))
			{
				SettingsObject->FrameGeneration = TEXT("Off");
			}
			FrameGenerationComboBox->SetIsEnabled(true);
			FrameGenerationComboBox->SetSelectedOption(SettingsObject->FrameGeneration.IsEmpty() ? TEXT("Off") : SettingsObject->FrameGeneration);
		}
	}
}

float UZonefallSettingsMenuWidget::CalculateEstimatedMemoryUsageMB() const
{
	if (!SettingsObject)
	{
		return 0.0f;
	}

	float EstimatedMB = 1200.0f;

	if (SettingsObject->OverallQuality == TEXT("Low")) { EstimatedMB += 300.0f; }
	else if (SettingsObject->OverallQuality == TEXT("Medium")) { EstimatedMB += 550.0f; }
	else if (SettingsObject->OverallQuality == TEXT("High")) { EstimatedMB += 900.0f; }
	else if (SettingsObject->OverallQuality == TEXT("Epic")) { EstimatedMB += 1300.0f; }
	else { EstimatedMB += 1700.0f; }

	const FString ScaleNumeric = SettingsObject->ResolutionScale.Replace(TEXT("%"), TEXT(""));
	const float ResolutionScale = FMath::Clamp(FCString::Atof(*ScaleNumeric), 50.0f, 100.0f);
	EstimatedMB += (ResolutionScale - 50.0f) * 22.0f;

	if (SettingsObject->Lumen == TEXT("On"))
	{
		EstimatedMB += 650.0f;
	}
	if (SettingsObject->DLSSMode == TEXT("Quality")) { EstimatedMB -= 120.0f; }
	else if (SettingsObject->DLSSMode == TEXT("Balanced")) { EstimatedMB -= 220.0f; }
	else if (SettingsObject->DLSSMode == TEXT("Performance")) { EstimatedMB -= 320.0f; }
	else if (SettingsObject->DLSSMode == TEXT("Ultra Performance")) { EstimatedMB -= 420.0f; }
	else if (SettingsObject->DLSSMode == TEXT("DLAA")) { EstimatedMB += 90.0f; }

	if (SettingsObject->FrameGeneration == TEXT("On"))
	{
		EstimatedMB += 180.0f;
	}
	if (SettingsObject->FSRMode == TEXT("Quality")) { EstimatedMB -= 100.0f; }
	else if (SettingsObject->FSRMode == TEXT("Balanced")) { EstimatedMB -= 200.0f; }
	else if (SettingsObject->FSRMode == TEXT("Performance")) { EstimatedMB -= 300.0f; }
	else if (SettingsObject->FSRMode == TEXT("Ultra Performance")) { EstimatedMB -= 380.0f; }
	else if (SettingsObject->FSRMode == TEXT("Native AA")) { EstimatedMB += 60.0f; }

	if (SettingsObject->FSRFrameGeneration == TEXT("On"))
	{
		EstimatedMB += 140.0f;
	}

	if (SettingsObject->DisplayMode == TEXT("Fullscreen"))
	{
		EstimatedMB += 120.0f;
	}

	return EstimatedMB;
}

void UZonefallSettingsMenuWidget::UpdatePerformanceEstimateUI()
{
	const float EstimatedMB = CalculateEstimatedMemoryUsageMB();
	const float MaxReferenceMB = 6000.0f;
	const float Normalized = FMath::Clamp(EstimatedMB / MaxReferenceMB, 0.0f, 1.0f);

	if (MemoryUsageProgressBar)
	{
		MemoryUsageProgressBar->SetVisibility(ESlateVisibility::Visible);
		MemoryUsageProgressBar->SetPercent(Normalized);
		if (Normalized > 0.8f)
		{
			MemoryUsageProgressBar->SetFillColorAndOpacity(FLinearColor(0.86f, 0.20f, 0.20f, 1.0f));
		}
		else if (Normalized > 0.55f)
		{
			MemoryUsageProgressBar->SetFillColorAndOpacity(FLinearColor(0.92f, 0.66f, 0.18f, 1.0f));
		}
		else
		{
			MemoryUsageProgressBar->SetFillColorAndOpacity(FLinearColor(0.20f, 0.75f, 0.35f, 1.0f));
		}
	}

	if (MemoryUsageText)
	{
		MemoryUsageText->SetText(FText::FromString(FString::Printf(TEXT("Memory: %.0f MB"), EstimatedMB)));
	}
}

void UZonefallSettingsMenuWidget::UpdateTexts()
{
	if (GraphicsPresetText) { GraphicsPresetText->SetText(FText::FromString(TEXT("Graphics Preset"))); }
	if (DisplayModeText) { DisplayModeText->SetText(FText::FromString(TEXT("Display Mode"))); }
	if (OverallQualityText) { OverallQualityText->SetText(FText::FromString(TEXT("Overall Quality"))); }
	if (ResolutionScaleText) { ResolutionScaleText->SetText(FText::FromString(TEXT("Resolution Scale"))); }
	if (ScreenResolutionText) { ScreenResolutionText->SetText(FText::FromString(TEXT("Screen Resolution"))); }
	if (VSyncText) { VSyncText->SetText(FText::FromString(TEXT("VSync"))); }
	if (FPSLimitText) { FPSLimitText->SetText(FText::FromString(TEXT("FPS Limit"))); }
	if (LumenText) { LumenText->SetText(FText::FromString(TEXT("Lumen"))); }
	if (DLSSText) { DLSSText->SetText(FText::FromString(TEXT("DLSS"))); }
	if (FrameGenerationText) { FrameGenerationText->SetText(FText::FromString(TEXT("Frame Generation"))); }
	if (FSRText) { FSRText->SetText(FText::FromString(TEXT("FSR"))); }
	if (FSRFrameGenerationText) { FSRFrameGenerationText->SetText(FText::FromString(TEXT("FSR Frame Generation"))); }
	if (MemoryUsageText && MemoryUsageText->GetText().IsEmpty())
	{
		MemoryUsageText->SetText(FText::FromString(TEXT("Estimated Memory Usage")));
	}
}

void UZonefallSettingsMenuWidget::MarkSettingsDirty()
{
	if (bIsRefreshingFromSettings)
	{
		return;
	}

	bHasPendingChanges = true;
	UpdateApplyButtonState();
	SetApplyStatusMessage(FText::FromString(TEXT("Pending changes")), FLinearColor(0.95f, 0.80f, 0.30f, 1.0f));
}

void UZonefallSettingsMenuWidget::SetApplyStatusMessage(const FText& InMessage, const FLinearColor& InColor)
{
	if (!ApplyStatusText)
	{
		return;
	}

	ApplyStatusText->SetText(InMessage);
	ApplyStatusText->SetColorAndOpacity(FSlateColor(InColor));
}

void UZonefallSettingsMenuWidget::UpdateApplyButtonState()
{
	if (ApplyButton)
	{
		ApplyButton->SetIsEnabled(bHasPendingChanges);
	}
}

void UZonefallSettingsMenuWidget::HandleDisplayModeSelectionChanged(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	if (SettingsObject)
	{
		SettingsObject->DisplayMode = SelectedItem;
		UpdatePerformanceEstimateUI();
		if (bAutoApplyDisplayModeAndResolution)
		{
			SettingsObject->ApplyDisplayModeAndResolution(false);
		}
		MarkSettingsDirty();
	}
}

void UZonefallSettingsMenuWidget::HandleGraphicsPresetSelectionChanged(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	if (!SettingsObject || SelectedItem == TEXT("Custom"))
	{
		return;
	}

	EZonefallGraphicsPreset Preset = EZonefallGraphicsPreset::Balanced;
	if (SelectedItem == TEXT("Competitive"))
	{
		Preset = EZonefallGraphicsPreset::Competitive;
	}
	else if (SelectedItem == TEXT("Quality"))
	{
		Preset = EZonefallGraphicsPreset::Quality;
	}

	SettingsObject->ApplyGraphicsPreset(Preset);

	bIsRefreshingFromSettings = true;
	if (DisplayModeComboBox) { DisplayModeComboBox->SetSelectedOption(SettingsObject->DisplayMode); }
	if (OverallQualityComboBox) { OverallQualityComboBox->SetSelectedOption(SettingsObject->OverallQuality); }
	if (ResolutionScaleComboBox) { ResolutionScaleComboBox->SetSelectedOption(SettingsObject->ResolutionScale); }
	if (ScreenResolutionComboBox) { EnsureComboHasOption(ScreenResolutionComboBox, SettingsObject->ScreenResolution); ScreenResolutionComboBox->SetSelectedOption(SettingsObject->ScreenResolution); }
	if (VSyncComboBox) { VSyncComboBox->SetSelectedOption(SettingsObject->VSync); }
	if (FPSLimitComboBox) { EnsureComboHasOption(FPSLimitComboBox, SettingsObject->FPSLimit); FPSLimitComboBox->SetSelectedOption(SettingsObject->FPSLimit); }
	if (LumenComboBox) { LumenComboBox->SetSelectedOption(SettingsObject->Lumen); }
	if (DLSSComboBox) { EnsureComboHasOption(DLSSComboBox, SettingsObject->DLSSMode); DLSSComboBox->SetSelectedOption(SettingsObject->DLSSMode); }
	if (FrameGenerationComboBox) { EnsureComboHasOption(FrameGenerationComboBox, SettingsObject->FrameGeneration); FrameGenerationComboBox->SetSelectedOption(SettingsObject->FrameGeneration); }
	if (FSRComboBox) { EnsureComboHasOption(FSRComboBox, SettingsObject->FSRMode); FSRComboBox->SetSelectedOption(SettingsObject->FSRMode); }
	if (FSRFrameGenerationComboBox) { EnsureComboHasOption(FSRFrameGenerationComboBox, SettingsObject->FSRFrameGeneration); FSRFrameGenerationComboBox->SetSelectedOption(SettingsObject->FSRFrameGeneration); }
	bIsRefreshingFromSettings = false;

	UpdateFeatureAvailabilityUI();
	UpdatePerformanceEstimateUI();
	MarkSettingsDirty();
	SetApplyStatusMessage(FText::FromString(FString::Printf(TEXT("Preset selected: %s (press APPLY)"), *SelectedItem)), FLinearColor(0.75f, 0.86f, 1.0f, 1.0f));
}

void UZonefallSettingsMenuWidget::HandleOverallQualitySelectionChanged(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	if (SettingsObject)
	{
		SettingsObject->OverallQuality = SelectedItem;
		UpdatePerformanceEstimateUI();
		MarkSettingsDirty();
	}
}

void UZonefallSettingsMenuWidget::HandleResolutionScaleSelectionChanged(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	if (SettingsObject)
	{
		SettingsObject->ResolutionScale = SelectedItem;
		UpdatePerformanceEstimateUI();
		MarkSettingsDirty();
	}
}

void UZonefallSettingsMenuWidget::HandleVSyncSelectionChanged(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	if (SettingsObject)
	{
		SettingsObject->VSync = SelectedItem;
		MarkSettingsDirty();
	}
}

void UZonefallSettingsMenuWidget::HandleScreenResolutionSelectionChanged(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	if (SettingsObject)
	{
		SettingsObject->ScreenResolution = SelectedItem;
		UpdatePerformanceEstimateUI();
		if (bAutoApplyDisplayModeAndResolution)
		{
			SettingsObject->ApplyDisplayModeAndResolution(false);
		}
		MarkSettingsDirty();
	}
}

void UZonefallSettingsMenuWidget::HandleFPSLimitSelectionChanged(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	if (!SettingsObject || bIsRefreshingFromSettings)
	{
		return;
	}

	const FString CleanSelected = SelectedItem.TrimStartAndEnd();
	if (CleanSelected.IsEmpty())
	{
		return;
	}

	if (SettingsObject)
	{
		SettingsObject->FPSLimit = CleanSelected;
		SettingsObject->SanitizeSettings();
		EnsureComboHasOption(FPSLimitComboBox, SettingsObject->FPSLimit);
		if (FPSLimitComboBox)
		{
			FPSLimitComboBox->SetSelectedOption(SettingsObject->FPSLimit);
		}
		MarkSettingsDirty();
	}
}

void UZonefallSettingsMenuWidget::HandleLumenSelectionChanged(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	if (SettingsObject)
	{
		SettingsObject->Lumen = SelectedItem;
		UpdatePerformanceEstimateUI();
		MarkSettingsDirty();
	}
}

void UZonefallSettingsMenuWidget::HandleDLSSSelectionChanged(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	if (SettingsObject)
	{
		SettingsObject->DLSSMode = SelectedItem;
		SettingsObject->SanitizeSettings();
		if (DLSSComboBox) { DLSSComboBox->SetSelectedOption(SettingsObject->DLSSMode); }
		if (FSRComboBox) { FSRComboBox->SetSelectedOption(SettingsObject->FSRMode); }
		if (FrameGenerationComboBox) { FrameGenerationComboBox->SetSelectedOption(SettingsObject->FrameGeneration); }
		if (FSRFrameGenerationComboBox) { FSRFrameGenerationComboBox->SetSelectedOption(SettingsObject->FSRFrameGeneration); }
		UpdatePerformanceEstimateUI();
		MarkSettingsDirty();
	}
}

void UZonefallSettingsMenuWidget::HandleFrameGenerationSelectionChanged(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	if (SettingsObject)
	{
		if (!SettingsObject->bFrameGenerationSupported)
		{
			SettingsObject->FrameGeneration = TEXT("Unavailable");
			if (FrameGenerationComboBox)
			{
				FrameGenerationComboBox->SetSelectedOption(TEXT("Unavailable"));
				FrameGenerationComboBox->SetIsEnabled(false);
			}
			return;
		}

		SettingsObject->FrameGeneration = SelectedItem;
		SettingsObject->SanitizeSettings();
		if (FrameGenerationComboBox) { FrameGenerationComboBox->SetSelectedOption(SettingsObject->FrameGeneration); }
		if (FSRFrameGenerationComboBox) { FSRFrameGenerationComboBox->SetSelectedOption(SettingsObject->FSRFrameGeneration); }
		UpdatePerformanceEstimateUI();
		MarkSettingsDirty();
	}
}

void UZonefallSettingsMenuWidget::HandleFSRSelectionChanged(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	if (SettingsObject)
	{
		SettingsObject->FSRMode = SelectedItem;
		SettingsObject->SanitizeSettings();
		if (DLSSComboBox) { DLSSComboBox->SetSelectedOption(SettingsObject->DLSSMode); }
		if (FSRComboBox) { FSRComboBox->SetSelectedOption(SettingsObject->FSRMode); }
		if (FrameGenerationComboBox) { FrameGenerationComboBox->SetSelectedOption(SettingsObject->FrameGeneration); }
		if (FSRFrameGenerationComboBox) { FSRFrameGenerationComboBox->SetSelectedOption(SettingsObject->FSRFrameGeneration); }
		UpdatePerformanceEstimateUI();
		MarkSettingsDirty();
	}
}

void UZonefallSettingsMenuWidget::HandleFSRFrameGenerationSelectionChanged(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	if (SettingsObject)
	{
		SettingsObject->FSRFrameGeneration = SelectedItem;
		SettingsObject->SanitizeSettings();
		if (FSRFrameGenerationComboBox) { FSRFrameGenerationComboBox->SetSelectedOption(SettingsObject->FSRFrameGeneration); }
		if (FrameGenerationComboBox) { FrameGenerationComboBox->SetSelectedOption(SettingsObject->FrameGeneration); }
		UpdatePerformanceEstimateUI();
		MarkSettingsDirty();
	}
}

void UZonefallSettingsMenuWidget::HandleApplyClicked()
{
	ApplySettingsNow();
}

void UZonefallSettingsMenuWidget::HandleResetClicked()
{
	ResetToDefaults();
}

void UZonefallSettingsMenuWidget::HandleBackClicked()
{
	const UWorld* World = GetWorld();
	UE_LOG(
		LogTemp,
		Log,
		TEXT("[PauseFlow] Settings Back clicked. Bound=%d Paused=%d"),
		OnBackRequested.IsBound() ? 1 : 0,
		(World && World->IsPaused()) ? 1 : 0
	);

	if (bHasPendingChanges)
	{
		ApplySettingsNow();
	}

	OnBackRequested.Broadcast();

	// Fallback path for cases when Back isn't wired in BP.
	if (!OnBackRequested.IsBound())
	{
		if (UWorld* CurrentWorld = GetWorld())
		{
			if (UUIWorldMenuGameInstance* MenuGameInstance = Cast<UUIWorldMenuGameInstance>(CurrentWorld->GetGameInstance()))
			{
				UE_LOG(LogTemp, Log, TEXT("[PauseFlow] Settings Back fallback -> BackMenuPause"));
				MenuGameInstance->BackMenuPause(false);
			}
		}
	}
}

