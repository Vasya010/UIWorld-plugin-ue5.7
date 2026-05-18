#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ZonefallSettingsDataObject.generated.h"

UENUM(BlueprintType)
enum class EZonefallGraphicsPreset : uint8
{
	Competitive UMETA(DisplayName = "Competitive"),
	Balanced UMETA(DisplayName = "Balanced"),
	Quality UMETA(DisplayName = "Quality")
};

UCLASS(BlueprintType, Blueprintable)
class ZONEFALL_API UZonefallSettingsDataObject : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|Settings")
	FString DisplayMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|Settings")
	FString OverallQuality;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|Settings")
	FString ResolutionScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|Settings")
	FString VSync;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|Settings")
	FString FPSLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|Settings")
	FString Lumen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|Settings")
	FString DLSSMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|Settings")
	FString FrameGeneration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|Settings")
	FString FSRMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|Settings")
	FString FSRFrameGeneration;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Zonefall|Settings")
	bool bDLSSSupported;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Zonefall|Settings")
	bool bFrameGenerationSupported;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Zonefall|Settings")
	bool bFSRSupported;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Zonefall|Settings")
	bool bFSRFrameGenerationSupported;

	// Selected screen resolution in format "1920x1080".
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zonefall|Settings")
	FString ScreenResolution;

	UFUNCTION(BlueprintCallable, Category = "Zonefall|Settings")
	void LoadFromSystem();

	UFUNCTION(BlueprintCallable, Category = "Zonefall|Settings")
	void ApplyToSystem(UObject* WorldContextObject);

	// Lightweight apply for display mode + resolution only.
	UFUNCTION(BlueprintCallable, Category = "Zonefall|Settings")
	void ApplyDisplayModeAndResolution(bool bSaveSettings = false);

	UFUNCTION(BlueprintCallable, Category = "Zonefall|Settings")
	void SetDefaults();

	// Fill combo options with available fullscreen resolutions.
	UFUNCTION(BlueprintCallable, Category = "Zonefall|Settings")
	void GetAvailableScreenResolutions(TArray<FString>& OutResolutions, bool bOnly16by9 = false);

	UFUNCTION(BlueprintPure, Category = "Zonefall|Settings")
	FString GetCurrentScreenResolutionString() const;

	// Accepts "WidthxHeight", e.g. "1920x1080".
	UFUNCTION(BlueprintCallable, Category = "Zonefall|Settings")
	bool SetScreenResolutionFromString(const FString& ResolutionString, bool bApplyNow = false);

	// Normalizes values loaded from UI/save before any apply.
	UFUNCTION(BlueprintCallable, Category = "Zonefall|Settings")
	void SanitizeSettings();

	// Applies a tuned profile and keeps values valid for current hardware support.
	UFUNCTION(BlueprintCallable, Category = "Zonefall|Settings")
	void ApplyGraphicsPreset(EZonefallGraphicsPreset Preset);

	/**
	 * Loads persisted upscaler settings (FSR/DLSS/FrameGen) from per-user config (GameUserSettings.ini).
	 * This exists because upscaler CVars are not guaranteed to be serialized by UGameUserSettings.
	 */
	UFUNCTION(BlueprintCallable, Category = "Zonefall|Settings")
	void LoadUpscalerSettingsFromConfig();

	/** Persists current upscaler settings (FSR/DLSS/FrameGen) to per-user config (GameUserSettings.ini). */
	UFUNCTION(BlueprintCallable, Category = "Zonefall|Settings")
	void SaveUpscalerSettingsToConfig() const;

	/**
	 * Applies ONLY upscaler-related settings (FSR/DLSS/FrameGen) to runtime CVars/libraries.
	 * Safe to call on startup to restore FSR without overriding other game user settings.
	 */
	UFUNCTION(BlueprintCallable, Category = "Zonefall|Settings")
	void ApplyUpscalerSettingsOnly(UObject* WorldContextObject);

private:
	static FString NormalizeDisplayModeValue(const FString& InValue);
	static FString NormalizeQualityValue(const FString& InValue);
	static FString NormalizeResolutionScaleValue(const FString& InValue);
	static FString NormalizeVSyncValue(const FString& InValue);
	static FString NormalizeFPSLimitValue(const FString& InValue);
	static FString NormalizeLumenValue(const FString& InValue);
	static FString NormalizeDLSSValue(const FString& InValue, bool bSupported);
	static FString NormalizeFrameGenerationValue(const FString& InValue, bool bSupported);
	static FString NormalizeFSRValue(const FString& InValue, bool bSupported);
	static FString NormalizeFSRFrameGenerationValue(const FString& InValue, bool bSupported);
	void ResolveUpscalerConflicts();
};

