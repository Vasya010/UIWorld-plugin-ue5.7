#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ZonefallPauseMenuWidget.generated.h"

class UBorder;
class UButton;
class UImage;
class UTextBlock;
class UVerticalBox;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPauseResumeRequested);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPauseSettingsRequested);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPauseMainMenuRequested);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPauseQuitRequested);

UCLASS(BlueprintType, Blueprintable)
class ZONEFALL_API UZonefallPauseMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UZonefallPauseMenuWidget(const FObjectInitializer& ObjectInitializer);

	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	virtual FReply NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent) override;

	UPROPERTY(BlueprintAssignable, Category = "Zonefall|UI|Pause")
	FOnPauseResumeRequested OnResumeRequested;

	UPROPERTY(BlueprintAssignable, Category = "Zonefall|UI|Pause")
	FOnPauseSettingsRequested OnSettingsRequested;

	UPROPERTY(BlueprintAssignable, Category = "Zonefall|UI|Pause")
	FOnPauseMainMenuRequested OnMainMenuRequested;

	UPROPERTY(BlueprintAssignable, Category = "Zonefall|UI|Pause")
	FOnPauseQuitRequested OnQuitRequested;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|UI|Pause|Text")
	FText TitleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|UI|Pause|Text")
	FText ResumeText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|UI|Pause|Text")
	FText SettingsText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|UI|Pause|Text")
	FText MainMenuText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|UI|Pause|Text")
	FText QuitText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|UI|Pause|Text")
	FText SessionInfoPrefixText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|UI|Pause|Style")
	FLinearColor TextNormalColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|UI|Pause|Style")
	FLinearColor TextHoverColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|UI|Pause|Style")
	FLinearColor PanelTint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|UI|Pause|Style")
	FLinearColor AccentColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|UI|Pause|Style")
	FLinearColor BackdropTint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|UI|Pause|Style", meta = (ClampMin = "320.0", ClampMax = "1200.0"))
	float PanelWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|UI|Pause|Style")
	bool bEnableBackdropFilmGrain;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|UI|Pause|Style", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float FilmGrainOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|UI|Pause|FX")
	bool bEnableSubtlePulse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|UI|Pause|FX")
	bool bEnableIntroAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|UI|Pause|FX", meta = (ClampMin = "0.1", ClampMax = "3.0"))
	float IntroDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|UI|Pause|FX", meta = (ClampMin = "0.0", ClampMax = "120.0"))
	float IntroSlideDistance;

protected:
	UPROPERTY(Transient, BlueprintReadOnly, Category = "Zonefall|UI|Pause")
	TObjectPtr<UBorder> RootBorder;

	UPROPERTY(Transient, BlueprintReadOnly, Category = "Zonefall|UI|Pause")
	TObjectPtr<UBorder> BackdropBorder;

	UPROPERTY(Transient, BlueprintReadOnly, Category = "Zonefall|UI|Pause")
	TObjectPtr<UBorder> MainPanelBorder;

	UPROPERTY(Transient, BlueprintReadOnly, Category = "Zonefall|UI|Pause")
	TObjectPtr<UBorder> AccentLineBorder;

	UPROPERTY(Transient, BlueprintReadOnly, Category = "Zonefall|UI|Pause")
	TObjectPtr<UImage> AccentGlowImage;

	UPROPERTY(Transient, BlueprintReadOnly, Category = "Zonefall|UI|Pause")
	TObjectPtr<UVerticalBox> RootMenuBox;

	UPROPERTY(Transient, BlueprintReadOnly, Category = "Zonefall|UI|Pause")
	TObjectPtr<UTextBlock> TitleLabel;

	UPROPERTY(Transient, BlueprintReadOnly, Category = "Zonefall|UI|Pause")
	TObjectPtr<UTextBlock> SessionInfoLabel;

	UPROPERTY(Transient, BlueprintReadOnly, Category = "Zonefall|UI|Pause")
	TObjectPtr<UTextBlock> SessionDateLabel;

	UPROPERTY(Transient, BlueprintReadOnly, Category = "Zonefall|UI|Pause")
	TObjectPtr<UButton> ResumeButton;

	UPROPERTY(Transient, BlueprintReadOnly, Category = "Zonefall|UI|Pause")
	TObjectPtr<UButton> SettingsButton;

	UPROPERTY(Transient, BlueprintReadOnly, Category = "Zonefall|UI|Pause")
	TObjectPtr<UButton> MainMenuButton;

	UPROPERTY(Transient, BlueprintReadOnly, Category = "Zonefall|UI|Pause")
	TObjectPtr<UButton> QuitButton;

private:
	void BuildLayoutIfNeeded();
	void ResolveDesignerWidgetsIfNeeded();
	void ApplyVisualStyle();
	void BindButtonEvents();
	void SetButtonText(UButton* Button, const FText& Text);
	void UpdateButtonTextColor(UButton* Button, const FLinearColor& Color);
	void UpdateButtonScale(UButton* Button, float Scale);
	void AnimateButtonTransforms(float InDeltaTime);
	void UpdateSessionInfoText();
	UButton* GetPrimaryButtonToFocus() const;

	UFUNCTION()
	void HandleResumeClicked();
	UFUNCTION()
	void HandleSettingsClicked();
	UFUNCTION()
	void HandleMainMenuClicked();
	UFUNCTION()
	void HandleQuitClicked();

	UFUNCTION()
	void HandleResumeHovered();
	UFUNCTION()
	void HandleSettingsHovered();
	UFUNCTION()
	void HandleMainMenuHovered();
	UFUNCTION()
	void HandleQuitHovered();

	UFUNCTION()
	void HandleAnyUnhovered();

	float PulseTime;
	float IntroProgress;
	bool bActionInProgress;
	FDateTime SessionStartTimeUtc;
	TWeakObjectPtr<UButton> HoveredButton;
};

