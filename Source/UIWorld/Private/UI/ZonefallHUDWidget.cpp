#include "UI/ZonefallHUDWidget.h"

#include "Blueprint/WidgetTree.h"
#include "Brushes/SlateRoundedBoxBrush.h"
#include "Components/Border.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/HorizontalBox.h"
#include "Components/HorizontalBoxSlot.h"
#include "Components/Image.h"
#include "Components/Overlay.h"
#include "Components/OverlaySlot.h"
#include "Components/SizeBox.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "Components/VerticalBoxSlot.h"
#include "Engine/Font.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Materials/MaterialInterface.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Styling/SlateTypes.h"

#include "Character/ZonefallPlayerCharacter.h"
#include "Weapons/ZonefallWeaponInventoryComponent.h"
#include "World/ZonefallMinimapCapture.h"

namespace
{
	namespace ZHud
	{
		static const FLinearColor GlassFill = FLinearColor(0.02f, 0.04f, 0.07f, 0.72f);
		static const FLinearColor GlassOutline = FLinearColor(1.0f, 1.0f, 1.0f, 0.14f);
		static const FLinearColor TextPrimary = FLinearColor(0.94f, 0.97f, 1.0f, 1.0f);
		static const FLinearColor TextMuted = FLinearColor(0.62f, 0.70f, 0.80f, 1.0f);
		static const FLinearColor HealthHigh = FLinearColor(0.22f, 0.88f, 0.62f, 1.0f);
		static const FLinearColor HealthMid = FLinearColor(0.95f, 0.78f, 0.28f, 1.0f);
		static const FLinearColor HealthLow = FLinearColor(0.92f, 0.22f, 0.20f, 1.0f);
	}

	FSlateFontInfo MakeHudFont(int32 Size, bool bBold = false)
	{
		FSlateFontInfo Font;
		Font.Size = FMath::Clamp(Size, 8, 72);
		Font.TypefaceFontName = bBold ? FName(TEXT("Bold")) : FName(TEXT("Regular"));
		Font.FontObject = LoadObject<UObject>(nullptr, TEXT("/Engine/EngineFonts/Roboto.Roboto"));
		return Font;
	}

	FLinearColor HealthColorForFraction(float Fraction)
	{
		const float F = FMath::Clamp(Fraction, 0.0f, 1.0f);
		if (F > 0.55f)
		{
			return FMath::Lerp(ZHud::HealthMid, ZHud::HealthHigh, (F - 0.55f) / 0.45f);
		}
		return FMath::Lerp(ZHud::HealthLow, ZHud::HealthMid, F / 0.55f);
	}
}

UZonefallHUDWidget::UZonefallHUDWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

TSharedRef<SWidget> UZonefallHUDWidget::RebuildWidget()
{
	if (!WidgetTree || !WidgetTree->RootWidget)
	{
		BuildLayout();
	}
	return Super::RebuildWidget();
}

void UZonefallHUDWidget::BindToCharacter(AZonefallPlayerCharacter* InCharacter)
{
	Character = InCharacter;
}

void UZonefallHUDWidget::BuildLayout()
{
	if (!WidgetTree)
	{
		return;
	}

	WidgetTree->RootWidget = nullptr;

	UCanvasPanel* Root = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), TEXT("HUDRoot"));
	WidgetTree->RootWidget = Root;

	// ---------------- Minimap (bottom-left) ----------------
	{
		UOverlay* MapOverlay = WidgetTree->ConstructWidget<UOverlay>(UOverlay::StaticClass(), TEXT("MinimapOverlay"));

		MinimapImage = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("MinimapImage"));
		if (UOverlaySlot* ImgSlot = MapOverlay->AddChildToOverlay(MinimapImage))
		{
			ImgSlot->SetHorizontalAlignment(HAlign_Fill);
			ImgSlot->SetVerticalAlignment(VAlign_Fill);
		}

		UBorder* Ring = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), TEXT("MinimapRing"));
		Ring->SetBrush(FSlateRoundedBoxBrush(FLinearColor(0, 0, 0, 0), MinimapSize * 0.5f, FLinearColor(0.0f, 0.0f, 0.0f, 0.9f), 9.0f));

		UBorder* RingAccent = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), TEXT("MinimapRingAccent"));
		RingAccent->SetBrush(FSlateRoundedBoxBrush(FLinearColor(0, 0, 0, 0), MinimapSize * 0.5f, AccentColor * FLinearColor(1, 1, 1, 0.7f), 2.0f));
		if (UOverlaySlot* RingSlot = MapOverlay->AddChildToOverlay(Ring))
		{
			RingSlot->SetHorizontalAlignment(HAlign_Fill);
			RingSlot->SetVerticalAlignment(VAlign_Fill);
		}
		if (UOverlaySlot* RingAccentSlot = MapOverlay->AddChildToOverlay(RingAccent))
		{
			RingAccentSlot->SetHorizontalAlignment(HAlign_Fill);
			RingAccentSlot->SetVerticalAlignment(VAlign_Fill);
		}

		MinimapBlip = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("MinimapBlip"));
		MinimapBlip->SetBrush(FSlateRoundedBoxBrush(AccentColor, 2.0f));
		MinimapBlip->SetDesiredSizeOverride(FVector2D(7.0f, 16.0f));
		if (UOverlaySlot* BlipSlot = MapOverlay->AddChildToOverlay(MinimapBlip))
		{
			BlipSlot->SetHorizontalAlignment(HAlign_Center);
			BlipSlot->SetVerticalAlignment(VAlign_Center);
		}

		USizeBox* MapSize = WidgetTree->ConstructWidget<USizeBox>(USizeBox::StaticClass(), TEXT("MinimapSizeBox"));
		MapSize->SetWidthOverride(MinimapSize);
		MapSize->SetHeightOverride(MinimapSize);
		MapSize->AddChild(MapOverlay);

		if (UCanvasPanelSlot* MapCanvas = Root->AddChildToCanvas(MapSize))
		{
			MapCanvas->SetAnchors(FAnchors(0.0f, 1.0f));
			MapCanvas->SetAlignment(FVector2D(0.0f, 1.0f));
			MapCanvas->SetAutoSize(true);
			MapCanvas->SetPosition(FVector2D(28.0f, -28.0f));
		}
	}

	// ---------------- Health panel (RIGHT side, glass card + vertical meter) ----------------
	{
		UVerticalBox* HealthCol = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("HealthCol"));

		HealthHeaderText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("HealthHeader"));
		HealthHeaderText->SetText(NSLOCTEXT("ZonefallHUD", "Vitals", "VITALS"));
		HealthHeaderText->SetFont(MakeHudFont(11, true));
		HealthHeaderText->SetColorAndOpacity(FSlateColor(ZHud::TextMuted));
		HealthHeaderText->SetJustification(ETextJustify::Right);
		if (UVerticalBoxSlot* HeaderSlot = HealthCol->AddChildToVerticalBox(HealthHeaderText))
		{
			HeaderSlot->SetHorizontalAlignment(HAlign_Right);
			HeaderSlot->SetPadding(FMargin(0, 0, 0, 4));
		}

		HealthText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("HealthText"));
		HealthText->SetText(FText::FromString(TEXT("100")));
		HealthText->SetFont(MakeHudFont(28, true));
		HealthText->SetColorAndOpacity(FSlateColor(ZHud::TextPrimary));
		HealthText->SetJustification(ETextJustify::Right);
		if (UVerticalBoxSlot* HpTextSlot = HealthCol->AddChildToVerticalBox(HealthText))
		{
			HpTextSlot->SetHorizontalAlignment(HAlign_Right);
			HpTextSlot->SetPadding(FMargin(0, 0, 0, 10));
		}

		UHorizontalBox* MeterRow = WidgetTree->ConstructWidget<UHorizontalBox>(UHorizontalBox::StaticClass(), TEXT("HealthMeterRow"));

		USizeBox* TrackSize = WidgetTree->ConstructWidget<USizeBox>(USizeBox::StaticClass(), TEXT("HealthTrackSize"));
		TrackSize->SetWidthOverride(HealthBarWidth);
		TrackSize->SetHeightOverride(HealthBarHeight);

		UBorder* Track = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), TEXT("HealthTrack"));
		Track->SetBrush(FSlateRoundedBoxBrush(FLinearColor(0.0f, 0.0f, 0.0f, 0.45f), HealthBarWidth * 0.5f, ZHud::GlassOutline, 1.0f));
		Track->SetVerticalAlignment(VAlign_Bottom);
		Track->SetHorizontalAlignment(HAlign_Fill);
		TrackSize->AddChild(Track);

		HealthFillBox = WidgetTree->ConstructWidget<USizeBox>(USizeBox::StaticClass(), TEXT("HealthFillBox"));
		HealthFillBox->SetWidthOverride(HealthBarWidth);
		HealthFillBox->SetHeightOverride(HealthBarHeight);

		HealthFill = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), TEXT("HealthFill"));
		HealthFill->SetBrush(FSlateRoundedBoxBrush(ZHud::HealthHigh, HealthBarWidth * 0.5f));
		HealthFillBox->AddChild(HealthFill);
		Track->SetContent(HealthFillBox);

		if (UHorizontalBoxSlot* TrackSlot = MeterRow->AddChildToHorizontalBox(TrackSize))
		{
			TrackSlot->SetHorizontalAlignment(HAlign_Right);
			TrackSlot->SetVerticalAlignment(VAlign_Center);
		}

		HealthSubText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("HealthSubText"));
		HealthSubText->SetText(FText::FromString(TEXT("HP")));
		HealthSubText->SetFont(MakeHudFont(12));
		HealthSubText->SetColorAndOpacity(FSlateColor(ZHud::TextMuted));
		HealthSubText->SetJustification(ETextJustify::Center);
		if (UHorizontalBoxSlot* SubSlot = MeterRow->AddChildToHorizontalBox(HealthSubText))
		{
			SubSlot->SetPadding(FMargin(10, 0, 0, 0));
			SubSlot->SetVerticalAlignment(VAlign_Center);
		}

		if (UVerticalBoxSlot* MeterSlot = HealthCol->AddChildToVerticalBox(MeterRow))
		{
			MeterSlot->SetHorizontalAlignment(HAlign_Right);
		}

		HealthPanel = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), TEXT("HealthPanel"));
		HealthPanel->SetBrush(FSlateRoundedBoxBrush(ZHud::GlassFill, 14.0f, AccentColor * FLinearColor(1, 1, 1, 0.35f), 1.5f));
		HealthPanel->SetPadding(FMargin(18.0f, 16.0f));
		HealthPanel->SetContent(HealthCol);

		if (UCanvasPanelSlot* HealthCanvas = Root->AddChildToCanvas(HealthPanel))
		{
			HealthCanvas->SetAnchors(FAnchors(1.0f, 0.5f));
			HealthCanvas->SetAlignment(FVector2D(1.0f, 0.5f));
			HealthCanvas->SetAutoSize(true);
			HealthCanvas->SetPosition(FVector2D(-36.0f, 0.0f));
		}
	}

	// ---------------- Weapon + ammo (bottom-right) ----------------
	{
		UVerticalBox* WeaponCol = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("WeaponCol"));

		WeaponNameText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("WeaponName"));
		WeaponNameText->SetText(NSLOCTEXT("ZonefallHUD", "Unarmed", "Unarmed"));
		WeaponNameText->SetFont(MakeHudFont(14));
		WeaponNameText->SetColorAndOpacity(FSlateColor(ZHud::TextMuted));
		WeaponNameText->SetJustification(ETextJustify::Right);
		WeaponCol->AddChildToVerticalBox(WeaponNameText);

		AmmoText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("AmmoText"));
		AmmoText->SetText(FText::GetEmpty());
		AmmoText->SetFont(MakeHudFont(24, true));
		AmmoText->SetColorAndOpacity(FSlateColor(AccentColor));
		AmmoText->SetJustification(ETextJustify::Right);
		if (UVerticalBoxSlot* AmmoSlot = WeaponCol->AddChildToVerticalBox(AmmoText))
		{
			AmmoSlot->SetHorizontalAlignment(HAlign_Right);
			AmmoSlot->SetPadding(FMargin(0, 4, 0, 0));
		}

		UBorder* WeaponBg = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), TEXT("WeaponBg"));
		WeaponBg->SetBrush(FSlateRoundedBoxBrush(ZHud::GlassFill, 10.0f, ZHud::GlassOutline, 1.0f));
		WeaponBg->SetPadding(FMargin(16.0f, 12.0f));
		WeaponBg->SetContent(WeaponCol);

		if (UCanvasPanelSlot* WeaponCanvas = Root->AddChildToCanvas(WeaponBg))
		{
			WeaponCanvas->SetAnchors(FAnchors(1.0f, 1.0f));
			WeaponCanvas->SetAlignment(FVector2D(1.0f, 1.0f));
			WeaponCanvas->SetAutoSize(true);
			WeaponCanvas->SetPosition(FVector2D(-32.0f, -32.0f));
		}
	}
}

void UZonefallHUDWidget::RefreshMinimapBrush()
{
	if (bMinimapBrushSet || !MinimapImage || !MinimapCapture)
	{
		return;
	}

	UTextureRenderTarget2D* RT = MinimapCapture->GetRenderTarget();
	if (!RT)
	{
		return;
	}

	if (MinimapMaterial)
	{
		MinimapMID = UMaterialInstanceDynamic::Create(MinimapMaterial, this);
		if (MinimapMID)
		{
			MinimapMID->SetTextureParameterValue(TEXT("Texture"), RT);
			MinimapImage->SetBrushFromMaterial(MinimapMID);
		}
	}
	else
	{
		FSlateBrush Brush;
		Brush.SetResourceObject(RT);
		Brush.ImageSize = FVector2D(MinimapSize, MinimapSize);
		Brush.DrawAs = ESlateBrushDrawType::Image;
		Brush.TintColor = FSlateColor(FLinearColor::White);
		MinimapImage->SetBrush(Brush);
	}

	MinimapImage->SetColorAndOpacity(FLinearColor::White);
	bMinimapBrushSet = true;
}

void UZonefallHUDWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	HudPulseTime += InDeltaTime;

	if (Character)
	{
		const float HealthFrac = Character->GetHealthFraction();
		const int32 CurrentHp = FMath::RoundToInt(Character->GetHealth());
		const int32 MaxHp = FMath::Max(1, FMath::RoundToInt(Character->GetMaxHealth()));

		if (HealthFillBox && HealthFill)
		{
			const float FillHeight = FMath::Max(4.0f, HealthBarHeight * HealthFrac);
			HealthFillBox->SetHeightOverride(FillHeight);

			const FLinearColor FillColor = HealthColorForFraction(HealthFrac);
			const float Pulse = HealthFrac < 0.25f ? (0.85f + 0.15f * FMath::Sin(HudPulseTime * 8.0f)) : 1.0f;
			HealthFill->SetBrush(FSlateRoundedBoxBrush(FillColor * FLinearColor(1, 1, 1, Pulse), HealthBarWidth * 0.5f));
		}

		if (HealthText)
		{
			HealthText->SetText(FText::AsNumber(CurrentHp));
		}

		if (HealthSubText)
		{
			HealthSubText->SetText(FText::FromString(FString::Printf(TEXT("/ %d"), MaxHp)));
		}

		if (HealthPanel && HealthFrac < 0.25f)
		{
			const float OutlineAlpha = 0.25f + 0.2f * FMath::Sin(HudPulseTime * 8.0f);
			HealthPanel->SetBrush(FSlateRoundedBoxBrush(
				ZHud::GlassFill,
				14.0f,
				HealthColorForFraction(HealthFrac) * FLinearColor(1, 1, 1, OutlineAlpha),
				2.0f));
		}

		if (UZonefallWeaponInventoryComponent* WInv = Character->GetWeapons())
		{
			if (WInv->HasEquippedWeapon())
			{
				const FZonefallWeaponItem W = WInv->GetEquippedWeapon();
				if (WeaponNameText)
				{
					WeaponNameText->SetText(W.DisplayName.IsEmpty() ? FText::FromName(W.WeaponId) : W.DisplayName);
				}
				if (AmmoText)
				{
					if (W.Slot == EZonefallWeaponSlot::Melee)
					{
						AmmoText->SetText(NSLOCTEXT("ZonefallHUD", "Melee", "—"));
						AmmoText->SetColorAndOpacity(FSlateColor(ZHud::TextMuted));
					}
					else
					{
						const bool bLowAmmo = W.AmmoInClip <= 0 && W.AmmoReserve <= 0;
						AmmoText->SetText(FText::FromString(FString::Printf(TEXT("%d  |  %d"), W.AmmoInClip, W.AmmoReserve)));
						AmmoText->SetColorAndOpacity(FSlateColor(bLowAmmo ? ZHud::HealthLow : AccentColor));
					}
				}
			}
			else
			{
				if (WeaponNameText)
				{
					WeaponNameText->SetText(NSLOCTEXT("ZonefallHUD", "Unarmed", "Unarmed"));
				}
				if (AmmoText)
				{
					AmmoText->SetText(FText::GetEmpty());
				}
			}
		}
	}

	if (!MinimapCapture)
	{
		MinimapCapture = AZonefallMinimapCapture::Get(GetWorld());
	}
	RefreshMinimapBrush();

	if (MinimapBlip && Character)
	{
		const float Yaw = Character->GetControlRotation().Yaw;
		MinimapBlip->SetRenderTransformAngle(Yaw);
	}
}
