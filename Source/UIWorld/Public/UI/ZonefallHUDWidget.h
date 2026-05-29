#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ZonefallHUDWidget.generated.h"

class UBorder;
class UImage;
class UTextBlock;
class AZonefallPlayerCharacter;
class AZonefallMinimapCapture;

/**
 * Fully self-assembling in-game HUD (no Blueprint required):
 *  - Vitals panel on the RIGHT (glass card + vertical health meter)
 *  - Round minimap (bottom-left) with rotating player blip
 *  - Weapon name + ammo (bottom-right)
 */
UCLASS(BlueprintType, Blueprintable)
class UIWORLD_API UZonefallHUDWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UZonefallHUDWidget(const FObjectInitializer& ObjectInitializer);

	virtual TSharedRef<SWidget> RebuildWidget() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Zonefall|HUD")
	void BindToCharacter(AZonefallPlayerCharacter* InCharacter);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|HUD|Style")
	FLinearColor AccentColor = FLinearColor(0.86f, 0.80f, 0.66f, 1.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|HUD|Style")
	float MinimapSize = 210.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|HUD|Style")
	float HealthBarHeight = 220.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|HUD|Style")
	float HealthBarWidth = 14.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|HUD|Style")
	TObjectPtr<class UMaterialInterface> MinimapMaterial;

private:
	void BuildLayout();
	void RefreshMinimapBrush();

	UPROPERTY(Transient) TObjectPtr<AZonefallPlayerCharacter> Character;
	UPROPERTY(Transient) TObjectPtr<AZonefallMinimapCapture> MinimapCapture;

	UPROPERTY(Transient) TObjectPtr<UBorder> HealthPanel;
	UPROPERTY(Transient) TObjectPtr<class USizeBox> HealthFillBox;
	UPROPERTY(Transient) TObjectPtr<UBorder> HealthFill;
	UPROPERTY(Transient) TObjectPtr<UTextBlock> HealthHeaderText;
	UPROPERTY(Transient) TObjectPtr<UTextBlock> HealthText;
	UPROPERTY(Transient) TObjectPtr<UTextBlock> HealthSubText;
	UPROPERTY(Transient) TObjectPtr<UImage> MinimapImage;
	UPROPERTY(Transient) TObjectPtr<UImage> MinimapBlip;
	UPROPERTY(Transient) TObjectPtr<UTextBlock> WeaponNameText;
	UPROPERTY(Transient) TObjectPtr<UTextBlock> AmmoText;

	UPROPERTY(Transient) TObjectPtr<class UMaterialInstanceDynamic> MinimapMID;

	bool bMinimapBrushSet = false;
	float HudPulseTime = 0.0f;
};
