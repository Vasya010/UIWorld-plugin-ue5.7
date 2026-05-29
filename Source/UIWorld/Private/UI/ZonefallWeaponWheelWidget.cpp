#include "UI/ZonefallWeaponWheelWidget.h"

#include "Blueprint/WidgetTree.h"
#include "Brushes/SlateRoundedBoxBrush.h"
#include "Components/Border.h"
#include "Components/Button.h"
#include "Components/ButtonSlot.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Overlay.h"
#include "Components/OverlaySlot.h"
#include "Components/SizeBox.h"
#include "Components/TextBlock.h"
#include "Engine/Font.h"

#include "Character/ZonefallPlayerCharacter.h"
#include "Weapons/ZonefallWeaponInventoryComponent.h"

namespace
{
	FSlateFontInfo MakeWheelFont(int32 Size)
	{
		FSlateFontInfo Font;
		Font.Size = FMath::Clamp(Size, 8, 64);
		Font.FontObject = LoadObject<UObject>(nullptr, TEXT("/Engine/EngineFonts/Roboto.Roboto"));
		return Font;
	}
}

UZonefallWeaponWheelButton::UZonefallWeaponWheelButton()
{
	OnClicked.AddDynamic(this, &UZonefallWeaponWheelButton::HandleInternalClicked);
}

void UZonefallWeaponWheelButton::HandleInternalClicked()
{
	OnWeaponSlotClicked.Broadcast(WeaponIndex);
}

UZonefallWeaponWheelWidget::UZonefallWeaponWheelWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

TSharedRef<SWidget> UZonefallWeaponWheelWidget::RebuildWidget()
{
	if (!WidgetTree || !WidgetTree->RootWidget)
	{
		BuildLayout();
	}
	return Super::RebuildWidget();
}

void UZonefallWeaponWheelWidget::SetupForCharacter(AZonefallPlayerCharacter* InCharacter)
{
	Character = InCharacter;
	WeaponInv = InCharacter ? InCharacter->GetWeapons() : nullptr;
	RefreshFromWeapons();
}

void UZonefallWeaponWheelWidget::BuildLayout()
{
	if (!WidgetTree)
	{
		return;
	}

	WidgetTree->RootWidget = nullptr;

	UOverlay* Root = WidgetTree->ConstructWidget<UOverlay>(UOverlay::StaticClass(), TEXT("WheelRoot"));
	WidgetTree->RootWidget = Root;

	// Dim backdrop (full screen).
	UBorder* Dim = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), TEXT("WheelDim"));
	Dim->SetBrush(FSlateRoundedBoxBrush(FLinearColor(0.0f, 0.0f, 0.0f, 0.55f), 0.0f));
	if (UOverlaySlot* DimSlot = Root->AddChildToOverlay(Dim))
	{
		DimSlot->SetHorizontalAlignment(HAlign_Fill);
		DimSlot->SetVerticalAlignment(VAlign_Fill);
	}

	// Bounded, centred square so the wheel is always a perfect circle and never overflows.
	const float BoxSize = FMath::Max(WheelRadius * 2.0f + 150.0f, 420.0f);

	USizeBox* WheelBox = WidgetTree->ConstructWidget<USizeBox>(USizeBox::StaticClass(), TEXT("WheelBox"));
	WheelBox->SetWidthOverride(BoxSize);
	WheelBox->SetHeightOverride(BoxSize);
	if (UOverlaySlot* BoxSlot = Root->AddChildToOverlay(WheelBox))
	{
		BoxSlot->SetHorizontalAlignment(HAlign_Center);
		BoxSlot->SetVerticalAlignment(VAlign_Center);
	}

	UOverlay* Inner = WidgetTree->ConstructWidget<UOverlay>(UOverlay::StaticClass(), TEXT("WheelInner"));
	WheelBox->AddChild(Inner);

	// Circular ring backdrop (radius = half the box => a true circle).
	UBorder* Ring = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), TEXT("WheelRing"));
	Ring->SetBrush(FSlateRoundedBoxBrush(FLinearColor(0.04f, 0.05f, 0.06f, 0.82f), BoxSize * 0.5f, AccentColor * FLinearColor(1, 1, 1, 0.6f), 2.5f));
	if (UOverlaySlot* RingSlot = Inner->AddChildToOverlay(Ring))
	{
		RingSlot->SetHorizontalAlignment(HAlign_Fill);
		RingSlot->SetVerticalAlignment(VAlign_Fill);
	}

	// Center hub (a smaller circle that holds the selected-weapon label).
	UBorder* Hub = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), TEXT("WheelHub"));
	Hub->SetBrush(FSlateRoundedBoxBrush(FLinearColor(0.02f, 0.02f, 0.03f, 0.95f), 70.0f));
	Hub->SetPadding(FMargin(16.0f));
	USizeBox* HubSize = WidgetTree->ConstructWidget<USizeBox>(USizeBox::StaticClass(), TEXT("WheelHubSize"));
	HubSize->SetWidthOverride(140.0f);
	HubSize->SetHeightOverride(140.0f);
	HubSize->AddChild(Hub);
	if (UOverlaySlot* HubSlot = Inner->AddChildToOverlay(HubSize))
	{
		HubSlot->SetHorizontalAlignment(HAlign_Center);
		HubSlot->SetVerticalAlignment(VAlign_Center);
	}

	CenterLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("WheelCenterLabel"));
	CenterLabel->SetText(NSLOCTEXT("ZonefallWheel", "Weapons", "WEAPONS"));
	CenterLabel->SetFont(MakeWheelFont(16));
	CenterLabel->SetColorAndOpacity(FSlateColor(FLinearColor::White));
	CenterLabel->SetJustification(ETextJustify::Center);
	CenterLabel->SetAutoWrapText(true);
	Hub->SetContent(CenterLabel);

	// Slots are positioned on this canvas (fills the box; centre = box centre).
	WheelCanvas = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), TEXT("WheelCanvas"));
	if (UOverlaySlot* CanvasSlot = Inner->AddChildToOverlay(WheelCanvas))
	{
		CanvasSlot->SetHorizontalAlignment(HAlign_Fill);
		CanvasSlot->SetVerticalAlignment(VAlign_Fill);
	}
}

void UZonefallWeaponWheelWidget::RefreshFromWeapons()
{
	if (!WheelCanvas || !WidgetTree)
	{
		return;
	}

	// Clear old slots.
	for (UZonefallWeaponWheelButton* B : SlotButtons)
	{
		if (B) { B->RemoveFromParent(); }
	}
	SlotButtons.Reset();
	SlotBorders.Reset();

	if (!WeaponInv)
	{
		return;
	}

	const TArray<FZonefallWeaponItem>& List = WeaponInv->GetWeapons();
	const int32 Count = List.Num();
	if (Count == 0)
	{
		return;
	}

	SelectedIndex = WeaponInv->GetEquippedIndex();
	if (!List.IsValidIndex(SelectedIndex))
	{
		SelectedIndex = 0;
	}

	for (int32 i = 0; i < Count; ++i)
	{
		const float Angle = (2.0f * PI * (float)i / (float)Count) - (PI * 0.5f); // start at top
		const FVector2D Pos(FMath::Cos(Angle) * WheelRadius, FMath::Sin(Angle) * WheelRadius);

		UBorder* SlotBorder = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), FName(*FString::Printf(TEXT("WheelSlotBg_%d"), i)));
		SlotBorder->SetBrush(FSlateRoundedBoxBrush(FLinearColor(0.05f, 0.06f, 0.08f, 0.92f), 10.0f, FLinearColor(1, 1, 1, 0.15f), 1.0f));
		SlotBorder->SetPadding(FMargin(10.0f, 8.0f));

		UZonefallWeaponWheelButton* SlotBtn = WidgetTree->ConstructWidget<UZonefallWeaponWheelButton>(
			UZonefallWeaponWheelButton::StaticClass(), FName(*FString::Printf(TEXT("WheelSlot_%d"), i)));
		SlotBtn->WeaponIndex = i;
		{
			FButtonStyle Style = SlotBtn->GetStyle();
			Style.Normal = FSlateRoundedBoxBrush(FLinearColor(1, 1, 1, 0.04f), 10.0f);
			Style.Hovered = FSlateRoundedBoxBrush(AccentColor * FLinearColor(1, 1, 1, 0.35f), 10.0f);
			Style.Pressed = FSlateRoundedBoxBrush(AccentColor * FLinearColor(1, 1, 1, 0.5f), 10.0f);
			SlotBtn->SetStyle(Style);
		}

		UTextBlock* Label = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), FName(*FString::Printf(TEXT("WheelLabel_%d"), i)));
		const FText Name = List[i].DisplayName.IsEmpty() ? FText::FromName(List[i].WeaponId) : List[i].DisplayName;
		Label->SetText(Name);
		Label->SetFont(MakeWheelFont(14));
		Label->SetColorAndOpacity(FSlateColor(FLinearColor::White));
		Label->SetJustification(ETextJustify::Center);
		SlotBtn->AddChild(Label);
		if (UButtonSlot* LabelSlot = Cast<UButtonSlot>(Label->Slot))
		{
			LabelSlot->SetHorizontalAlignment(HAlign_Center);
			LabelSlot->SetVerticalAlignment(VAlign_Center);
			LabelSlot->SetPadding(FMargin(14.0f, 10.0f));
		}

		SlotBorder->SetContent(SlotBtn);
		SlotBtn->OnWeaponSlotClicked.AddDynamic(this, &UZonefallWeaponWheelWidget::HandleWeaponSlotClicked);

		if (UCanvasPanelSlot* CanvasSlot = WheelCanvas->AddChildToCanvas(SlotBorder))
		{
			CanvasSlot->SetAnchors(FAnchors(0.5f, 0.5f));
			CanvasSlot->SetAlignment(FVector2D(0.5f, 0.5f));
			CanvasSlot->SetAutoSize(true);
			CanvasSlot->SetPosition(Pos);
		}

		SlotButtons.Add(SlotBtn);
		SlotBorders.Add(SlotBorder);
	}

	UpdateSelectionVisuals();
}

void UZonefallWeaponWheelWidget::HandleWeaponSlotClicked(int32 WeaponIndex)
{
	SelectedIndex = WeaponIndex;
	UpdateSelectionVisuals();

	// Equip immediately so the choice feels responsive (also equipped again on close).
	if (Character)
	{
		Character->RequestEquipWeapon(WeaponIndex);
	}
}

void UZonefallWeaponWheelWidget::UpdateSelectionVisuals()
{
	for (int32 i = 0; i < SlotBorders.Num(); ++i)
	{
		if (!SlotBorders[i])
		{
			continue;
		}
		const bool bSel = (i == SelectedIndex);
		SlotBorders[i]->SetBrush(FSlateRoundedBoxBrush(
			bSel ? FLinearColor(0.12f, 0.12f, 0.14f, 0.96f) : FLinearColor(0.05f, 0.06f, 0.08f, 0.92f),
			10.0f,
			bSel ? AccentColor : FLinearColor(1, 1, 1, 0.15f),
			bSel ? 2.5f : 1.0f));
	}

	if (CenterLabel && WeaponInv)
	{
		const TArray<FZonefallWeaponItem>& List = WeaponInv->GetWeapons();
		if (List.IsValidIndex(SelectedIndex))
		{
			const FText Name = List[SelectedIndex].DisplayName.IsEmpty()
				? FText::FromName(List[SelectedIndex].WeaponId)
				: List[SelectedIndex].DisplayName;
			CenterLabel->SetText(Name);
		}
	}
}
