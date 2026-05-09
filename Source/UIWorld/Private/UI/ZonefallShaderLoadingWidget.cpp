#include "ZonefallShaderLoadingWidget.h"

#include "Blueprint/WidgetTree.h"
#include "Brushes/SlateRoundedBoxBrush.h"
#include "Components/Border.h"
#include "Components/Image.h"
#include "Components/Overlay.h"
#include "Components/OverlaySlot.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "Components/VerticalBoxSlot.h"
#include "Engine/Texture2D.h"
#include "Engine/Font.h"
#include "ShaderCompiler.h"
#include "TimerManager.h"

DEFINE_LOG_CATEGORY_STATIC(LogZonefallShaderLoadingWidget, Log, All);

UZonefallShaderLoadingWidget::UZonefallShaderLoadingWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, StartupTitleText(NSLOCTEXT("ZonefallUI", "StartupTitle", "ZONEFALL"))
	, ShaderLoadingBaseText(NSLOCTEXT("ZonefallUI", "ShaderLoadingBase", "Compiling shaders"))
	, ShaderCheckingCacheText(NSLOCTEXT("ZonefallUI", "ShaderCheckingCache", "Checking shader cache"))
	, ShaderFinalizingText(NSLOCTEXT("ZonefallUI", "ShaderFinalizing", "Finalizing shader setup"))
	, PleaseWaitText(NSLOCTEXT("ZonefallUI", "ShaderPleaseWait", "Please wait..."))
	, ShaderCacheHintText(NSLOCTEXT("ZonefallUI", "ShaderCacheHint", "Preparing and caching shaders for faster future loading. After GPU driver updates, shaders may need to be recompiled."))
	, ShaderCompileProgressPercent(0.0f)
	, TextAnimInterval(0.12f)
	, bUseRealShaderCompilerProgress(true)
	, BackgroundImageTint(FLinearColor(1.0f, 1.0f, 1.0f, 0.22f))
	, BottomPanelTint(FLinearColor(0.03f, 0.07f, 0.10f, 0.88f))
	, TitleFontSize(38)
	, BodyFontSize(18)
	, SmoothProgressSpeed(6.0f)
	, ProgressUnitsPerSecond(34.0f)
	, bEnableUiAnimations(true)
	, PanelPulseSpeed(1.2f)
	, BarGlowSpeed(2.6f)
	, DotCount(0)
	, InitialShaderJobCount(0)
	, LastKnownRemainingJobs(0)
	, bShaderProgressInitialized(false)
	, SmoothedProgressPercent(0.0f)
	, AnimationTimeSeconds(0.0f)
{
}

TSharedRef<SWidget> UZonefallShaderLoadingWidget::RebuildWidget()
{
	BindExistingWidgetsFromTree();
	const bool bNeedsRuntimeFallback =
		!TitleText || !ShaderText || !ProgressText || !WaitText || !CacheHintText;
	UE_LOG(
		LogZonefallShaderLoadingWidget,
		Log,
		TEXT("RebuildWidget: Title=%d Shader=%d Progress=%d Wait=%d Hint=%d ProgressBar=%d NeedsFallback=%d"),
		TitleText != nullptr,
		ShaderText != nullptr,
		ProgressText != nullptr,
		WaitText != nullptr,
		CacheHintText != nullptr,
		CompileProgressBar != nullptr,
		bNeedsRuntimeFallback
	);
	BuildLayoutIfNeeded(bNeedsRuntimeFallback);
	return Super::RebuildWidget();
}

void UZonefallShaderLoadingWidget::NativeConstruct()
{
	Super::NativeConstruct();

	UE_LOG(LogZonefallShaderLoadingWidget, Log, TEXT("NativeConstruct: widget=%s"), *GetNameSafe(this));

	BindExistingWidgetsFromTree();
	UE_LOG(
		LogZonefallShaderLoadingWidget,
		Log,
		TEXT("NativeConstruct bindings: Title=%d Shader=%d Progress=%d Wait=%d Hint=%d ProgressBar=%d"),
		TitleText != nullptr,
		ShaderText != nullptr,
		ProgressText != nullptr,
		WaitText != nullptr,
		CacheHintText != nullptr,
		CompileProgressBar != nullptr
	);
	ApplyRuntimeFonts();
	UpdateTexts();
	SetVisibility(ESlateVisibility::Visible);
	SetRenderOpacity(1.0f);

	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().SetTimer(
			TextAnimTimerHandle,
			this,
			&UZonefallShaderLoadingWidget::HandleTextAnimTick,
			FMath::Max(0.1f, TextAnimInterval),
			true
		);
		UE_LOG(LogZonefallShaderLoadingWidget, Log, TEXT("Text animation timer started: interval=%.2f"), FMath::Max(0.1f, TextAnimInterval));
	}
}

void UZonefallShaderLoadingWidget::NativeDestruct()
{
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(TextAnimTimerHandle);
	}
	Super::NativeDestruct();
}

void UZonefallShaderLoadingWidget::BindExistingWidgetsFromTree()
{
	if (!WidgetTree)
	{
		return;
	}

	if (!RootBorder)
	{
		RootBorder = Cast<UBorder>(WidgetTree->FindWidget(TEXT("ShaderLoadingRoot")));
	}
	if (!BackgroundImageWidget)
	{
		BackgroundImageWidget = Cast<UImage>(WidgetTree->FindWidget(TEXT("ShaderBackgroundImage")));
	}
	if (!RootBox)
	{
		RootBox = Cast<UVerticalBox>(WidgetTree->FindWidget(TEXT("ShaderLoadingRootBox")));
	}
	if (!BottomPanel)
	{
		BottomPanel = Cast<UBorder>(WidgetTree->FindWidget(TEXT("ShaderLoadingBottomPanel")));
	}
	if (!TitleText)
	{
		TitleText = Cast<UTextBlock>(WidgetTree->FindWidget(TEXT("StartupTitleText")));
	}
	if (!ShaderText)
	{
		ShaderText = Cast<UTextBlock>(WidgetTree->FindWidget(TEXT("ShaderLoadingText")));
	}
	if (!ProgressText)
	{
		ProgressText = Cast<UTextBlock>(WidgetTree->FindWidget(TEXT("ShaderProgressText")));
	}
	if (!WaitText)
	{
		WaitText = Cast<UTextBlock>(WidgetTree->FindWidget(TEXT("ShaderWaitText")));
	}
	if (!CacheHintText)
	{
		CacheHintText = Cast<UTextBlock>(WidgetTree->FindWidget(TEXT("ShaderCacheHintText")));
	}
	if (!CompileProgressBar)
	{
		CompileProgressBar = Cast<UProgressBar>(WidgetTree->FindWidget(TEXT("ShaderCompileProgressBar")));
	}
}

void UZonefallShaderLoadingWidget::BuildLayoutIfNeeded(bool bForceRebuild)
{
	if (!WidgetTree)
	{
		UE_LOG(LogZonefallShaderLoadingWidget, Warning, TEXT("BuildLayoutIfNeeded: WidgetTree is null"));
		return;
	}

	if (!bForceRebuild && WidgetTree->RootWidget)
	{
		UE_LOG(LogZonefallShaderLoadingWidget, Log, TEXT("BuildLayoutIfNeeded: using existing root widget"));
		return;
	}

	if (bForceRebuild)
	{
		UE_LOG(LogZonefallShaderLoadingWidget, Warning, TEXT("BuildLayoutIfNeeded: forcing runtime fallback layout rebuild"));
		RootBorder = nullptr;
		BackgroundImageWidget = nullptr;
		RootBox = nullptr;
		BottomPanel = nullptr;
		TitleText = nullptr;
		ShaderText = nullptr;
		ProgressText = nullptr;
		WaitText = nullptr;
		CacheHintText = nullptr;
		CompileProgressBar = nullptr;
		WidgetTree->RootWidget = nullptr;
	}

	RootBorder = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), TEXT("ShaderLoadingRoot"));
	RootBorder->SetBrush(FSlateRoundedBoxBrush(FLinearColor(0.01f, 0.02f, 0.04f, 1.0f), 0.0f));
	RootBorder->SetPadding(FMargin(0.0f));
	WidgetTree->RootWidget = RootBorder;

	UOverlay* RootOverlay = WidgetTree->ConstructWidget<UOverlay>(UOverlay::StaticClass(), TEXT("ShaderRootOverlay"));
	RootBorder->SetContent(RootOverlay);

	BackgroundImageWidget = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("ShaderBackgroundImage"));
	BackgroundImageWidget->SetColorAndOpacity(BackgroundImageTint);
	if (BackgroundImageTexture.IsValid() || !BackgroundImageTexture.ToSoftObjectPath().IsNull())
	{
		if (UTexture2D* LoadedTexture = BackgroundImageTexture.LoadSynchronous())
		{
			BackgroundImageWidget->SetBrushFromTexture(LoadedTexture, true);
		}
	}
	if (UOverlaySlot* BgSlot = RootOverlay->AddChildToOverlay(BackgroundImageWidget))
	{
		BgSlot->SetHorizontalAlignment(HAlign_Fill);
		BgSlot->SetVerticalAlignment(VAlign_Fill);
	}

	BottomPanel = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), TEXT("ShaderLoadingBottomPanel"));
	BottomPanel->SetBrush(FSlateRoundedBoxBrush(BottomPanelTint, 10.0f));
	BottomPanel->SetPadding(FMargin(24.0f, 18.0f));
	if (UOverlaySlot* PanelSlot = RootOverlay->AddChildToOverlay(BottomPanel))
	{
		PanelSlot->SetHorizontalAlignment(HAlign_Fill);
		PanelSlot->SetVerticalAlignment(VAlign_Bottom);
		PanelSlot->SetPadding(FMargin(26.0f, 0.0f, 26.0f, 24.0f));
	}

	RootBox = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("ShaderLoadingRootBox"));
	BottomPanel->SetContent(RootBox);

	TitleText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("StartupTitleText"));
	FSlateFontInfo TitleFont;
	TitleFont.Size = FMath::Clamp(TitleFontSize, 10, 72);
	TitleFont.FontObject = LoadObject<UObject>(nullptr, TEXT("/Engine/EngineFonts/Roboto.Roboto"));
	TitleText->SetFont(TitleFont);
	TitleText->SetColorAndOpacity(FSlateColor(FLinearColor(0.64f, 0.95f, 0.86f, 1.0f)));
	TitleText->SetShadowOffset(FVector2D(1.0f, 1.0f));
	TitleText->SetShadowColorAndOpacity(FLinearColor(0.04f, 0.35f, 0.25f, 0.95f));
	if (UVerticalBoxSlot* TitleSlot = RootBox->AddChildToVerticalBox(TitleText))
	{
		TitleSlot->SetPadding(FMargin(0.0f, 0.0f, 0.0f, 10.0f));
	}

	ShaderText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("ShaderLoadingText"));
	FSlateFontInfo ShaderFont;
	ShaderFont.Size = FMath::Clamp(BodyFontSize + 2, 10, 48);
	ShaderFont.FontObject = LoadObject<UObject>(nullptr, TEXT("/Engine/EngineFonts/Roboto.Roboto"));
	ShaderText->SetFont(ShaderFont);
	ShaderText->SetColorAndOpacity(FSlateColor(FLinearColor(0.80f, 0.92f, 0.98f, 1.0f)));
	if (UVerticalBoxSlot* ShaderSlot = RootBox->AddChildToVerticalBox(ShaderText))
	{
		ShaderSlot->SetPadding(FMargin(0.0f, 0.0f, 0.0f, 8.0f));
	}

	CompileProgressBar = WidgetTree->ConstructWidget<UProgressBar>(UProgressBar::StaticClass(), TEXT("ShaderCompileProgressBar"));
	CompileProgressBar->SetPercent(0.0f);
	CompileProgressBar->SetFillColorAndOpacity(FLinearColor(0.24f, 0.72f, 0.98f, 1.0f));
	if (UVerticalBoxSlot* ProgressBarSlot = RootBox->AddChildToVerticalBox(CompileProgressBar))
	{
		ProgressBarSlot->SetPadding(FMargin(0.0f, 0.0f, 0.0f, 8.0f));
	}

	ProgressText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("ShaderProgressText"));
	FSlateFontInfo ProgressFont;
	ProgressFont.Size = FMath::Clamp(BodyFontSize, 10, 48);
	ProgressFont.FontObject = LoadObject<UObject>(nullptr, TEXT("/Engine/EngineFonts/Roboto.Roboto"));
	ProgressText->SetFont(ProgressFont);
	ProgressText->SetColorAndOpacity(FSlateColor(FLinearColor(0.68f, 0.85f, 0.98f, 1.0f)));
	if (UVerticalBoxSlot* ProgressSlot = RootBox->AddChildToVerticalBox(ProgressText))
	{
		ProgressSlot->SetPadding(FMargin(0.0f, 0.0f, 0.0f, 12.0f));
	}

	WaitText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("ShaderWaitText"));
	FSlateFontInfo WaitFont;
	WaitFont.Size = FMath::Clamp(BodyFontSize - 1, 10, 48);
	WaitFont.FontObject = LoadObject<UObject>(nullptr, TEXT("/Engine/EngineFonts/Roboto.Roboto"));
	WaitText->SetFont(WaitFont);
	WaitText->SetColorAndOpacity(FSlateColor(FLinearColor(0.80f, 0.86f, 0.94f, 1.0f)));
	if (UVerticalBoxSlot* WaitSlot = RootBox->AddChildToVerticalBox(WaitText))
	{
		WaitSlot->SetPadding(FMargin(0.0f, 0.0f, 0.0f, 10.0f));
	}

	CacheHintText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("ShaderCacheHintText"));
	FSlateFontInfo HintFont;
	HintFont.Size = FMath::Clamp(BodyFontSize - 3, 10, 48);
	HintFont.FontObject = LoadObject<UObject>(nullptr, TEXT("/Engine/EngineFonts/Roboto.Roboto"));
	CacheHintText->SetFont(HintFont);
	CacheHintText->SetColorAndOpacity(FSlateColor(FLinearColor(0.58f, 0.70f, 0.82f, 1.0f)));
	CacheHintText->SetAutoWrapText(true);
	if (UVerticalBoxSlot* HintSlot = RootBox->AddChildToVerticalBox(CacheHintText))
	{
		HintSlot->SetPadding(FMargin(0.0f, 0.0f, 0.0f, 0.0f));
	}

	UE_LOG(LogZonefallShaderLoadingWidget, Log, TEXT("BuildLayoutIfNeeded: runtime fallback layout created successfully"));
}

void UZonefallShaderLoadingWidget::ApplyRuntimeFonts()
{
	UObject* TitleFontObject = CustomTitleFont.IsNull()
		? LoadObject<UObject>(nullptr, TEXT("/Engine/EngineFonts/Roboto.Roboto"))
		: Cast<UObject>(CustomTitleFont.LoadSynchronous());
	UObject* BodyFontObject = CustomBodyFont.IsNull()
		? LoadObject<UObject>(nullptr, TEXT("/Engine/EngineFonts/Roboto.Roboto"))
		: Cast<UObject>(CustomBodyFont.LoadSynchronous());

	if (TitleText)
	{
		FSlateFontInfo FontInfo = TitleText->GetFont();
		FontInfo.Size = FMath::Clamp(TitleFontSize, 10, 72);
		if (TitleFontObject)
		{
			FontInfo.FontObject = TitleFontObject;
		}
		TitleText->SetFont(FontInfo);
	}

	auto ApplyBody = [this, BodyFontObject](UTextBlock* Text, int32 Size)
	{
		if (!Text)
		{
			return;
		}
		FSlateFontInfo FontInfo = Text->GetFont();
		FontInfo.Size = FMath::Clamp(Size, 10, 48);
		if (BodyFontObject)
		{
			FontInfo.FontObject = BodyFontObject;
		}
		Text->SetFont(FontInfo);
	};

	ApplyBody(ShaderText, BodyFontSize + 2);
	ApplyBody(ProgressText, BodyFontSize);
	ApplyBody(WaitText, BodyFontSize - 1);
	ApplyBody(CacheHintText, BodyFontSize - 3);
}

void UZonefallShaderLoadingWidget::UpdateTexts()
{
	if (TitleText)
	{
		TitleText->SetText(StartupTitleText);
	}
	if (ShaderText)
	{
		ShaderText->SetText(ShaderLoadingBaseText);
	}
	const float DisplayedPercent = FMath::Clamp(SmoothedProgressPercent, 0.0f, 100.0f);
	if (ProgressText)
	{
		if (LastKnownRemainingJobs > 0)
		{
			ProgressText->SetText(FText::FromString(FString::Printf(TEXT("Compiled: %.0f%%   |   Jobs left: %d"), DisplayedPercent, LastKnownRemainingJobs)));
		}
		else
		{
			ProgressText->SetText(FText::FromString(FString::Printf(TEXT("Compiled: %.0f%%"), DisplayedPercent)));
		}
	}
	if (CompileProgressBar)
	{
		CompileProgressBar->SetPercent(DisplayedPercent / 100.0f);
	}
	if (WaitText)
	{
		WaitText->SetText(PleaseWaitText);
	}
	if (CacheHintText)
	{
		CacheHintText->SetText(ShaderCacheHintText);
	}
}

void UZonefallShaderLoadingWidget::HandleTextAnimTick()
{
	if (!ShaderText)
	{
		return;
	}

	DotCount = (DotCount + 1) % 4;
	FString Dots;
	for (int32 Index = 0; Index < DotCount; ++Index)
	{
		Dots += TEXT(".");
	}

	if (bUseRealShaderCompilerProgress && GShaderCompilingManager)
	{
		const int32 RemainingJobs = FMath::Max(0, GShaderCompilingManager->GetNumRemainingJobs());
		LastKnownRemainingJobs = RemainingJobs;
		if (!bShaderProgressInitialized)
		{
			InitialShaderJobCount = FMath::Max(1, RemainingJobs);
			bShaderProgressInitialized = true;
		}
		else if (RemainingJobs > InitialShaderJobCount)
		{
			InitialShaderJobCount = RemainingJobs;
		}

		if (InitialShaderJobCount > 0)
		{
			ShaderCompileProgressPercent = ((InitialShaderJobCount - RemainingJobs) * 100.0f) / static_cast<float>(InitialShaderJobCount);
		}
		if (RemainingJobs <= 0)
		{
			ShaderCompileProgressPercent = 100.0f;
		}
	}

	const float ClampedPercent = FMath::Clamp(ShaderCompileProgressPercent, 0.0f, 100.0f);
	const float TickDelta = FMath::Max(0.016f, TextAnimInterval);
	AnimationTimeSeconds += TickDelta;

	SmoothedProgressPercent = FMath::FInterpConstantTo(
		SmoothedProgressPercent,
		ClampedPercent,
		TickDelta,
		FMath::Max(5.0f, ProgressUnitsPerSecond)
	);
	if (LastKnownRemainingJobs > 0 && SmoothedProgressPercent < 1.0f)
	{
		SmoothedProgressPercent = 1.0f;
	}

	if (LastKnownRemainingJobs <= 0 && SmoothedProgressPercent < 99.5f)
	{
		ShaderText->SetText(FText::FromString(ShaderCheckingCacheText.ToString() + Dots));
	}
	else if (LastKnownRemainingJobs <= 0)
	{
		ShaderText->SetText(ShaderFinalizingText);
	}
	else
	{
		ShaderText->SetText(FText::FromString(ShaderLoadingBaseText.ToString() + Dots));
	}
	if (ProgressText)
	{
		if (LastKnownRemainingJobs > 0)
		{
			ProgressText->SetText(FText::FromString(FString::Printf(TEXT("Compiled: %.0f%%   |   Jobs left: %d"), SmoothedProgressPercent, LastKnownRemainingJobs)));
		}
		else
		{
			ProgressText->SetText(FText::FromString(FString::Printf(TEXT("Compiled: %.0f%%"), SmoothedProgressPercent)));
		}
	}
	if (CompileProgressBar)
	{
		CompileProgressBar->SetPercent(FMath::Clamp(SmoothedProgressPercent, 0.0f, 100.0f) / 100.0f);
		if (bEnableUiAnimations)
		{
			const float Glow = 0.80f + 0.20f * (0.5f + 0.5f * FMath::Sin(AnimationTimeSeconds * FMath::Max(0.1f, BarGlowSpeed)));
			CompileProgressBar->SetFillColorAndOpacity(FLinearColor(0.18f, 0.72f, Glow, 1.0f));
		}
	}
	if (BottomPanel && bEnableUiAnimations)
	{
		const float Pulse = 0.90f + 0.10f * (0.5f + 0.5f * FMath::Sin(AnimationTimeSeconds * FMath::Max(0.1f, PanelPulseSpeed)));
		const FLinearColor AnimatedPanelTint(BottomPanelTint.R * Pulse, BottomPanelTint.G * Pulse, BottomPanelTint.B * Pulse, BottomPanelTint.A);
		BottomPanel->SetBrushColor(AnimatedPanelTint);
	}
}

void UZonefallShaderLoadingWidget::SetShaderCompileProgress(float NewPercent)
{
	ShaderCompileProgressPercent = FMath::Clamp(NewPercent, 0.0f, 100.0f);
	SmoothedProgressPercent = ShaderCompileProgressPercent;
	UpdateTexts();
}

void UZonefallShaderLoadingWidget::SetInitialShaderJobCount(int32 InInitialJobCount)
{
	InitialShaderJobCount = FMath::Max(1, InInitialJobCount);
	LastKnownRemainingJobs = FMath::Max(0, InInitialJobCount);
	ShaderCompileProgressPercent = 0.0f;
	SmoothedProgressPercent = 0.0f;
	bShaderProgressInitialized = true;
}

bool UZonefallShaderLoadingWidget::IsShaderCompilationLikelyFinished() const
{
	if (!bUseRealShaderCompilerProgress || !GShaderCompilingManager)
	{
		return ShaderCompileProgressPercent >= 100.0f;
	}

	return GShaderCompilingManager->GetNumRemainingJobs() <= 0;
}

