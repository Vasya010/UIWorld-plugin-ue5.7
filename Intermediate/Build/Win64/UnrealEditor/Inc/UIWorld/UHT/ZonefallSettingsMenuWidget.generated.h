// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ZonefallSettingsMenuWidget.h"

#ifdef UIWORLD_ZonefallSettingsMenuWidget_generated_h
#error "ZonefallSettingsMenuWidget.generated.h already included, missing '#pragma once' in ZonefallSettingsMenuWidget.h"
#endif
#define UIWORLD_ZonefallSettingsMenuWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnSettingsBackRequested **********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsMenuWidget_h_15_DELEGATE \
UIWORLD_API void FOnSettingsBackRequested_DelegateWrapper(const FMulticastScriptDelegate& OnSettingsBackRequested);


// ********** End Delegate FOnSettingsBackRequested ************************************************

// ********** Begin Delegate FOnSettingsApplied ****************************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsMenuWidget_h_16_DELEGATE \
UIWORLD_API void FOnSettingsApplied_DelegateWrapper(const FMulticastScriptDelegate& OnSettingsApplied);


// ********** End Delegate FOnSettingsApplied ******************************************************

// ********** Begin Class UZonefallSettingsMenuWidget **********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsMenuWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleBackClicked); \
	DECLARE_FUNCTION(execHandleResetClicked); \
	DECLARE_FUNCTION(execHandleApplyClicked); \
	DECLARE_FUNCTION(execHandleFSRFrameGenerationSelectionChanged); \
	DECLARE_FUNCTION(execHandleFSRSelectionChanged); \
	DECLARE_FUNCTION(execHandleFrameGenerationSelectionChanged); \
	DECLARE_FUNCTION(execHandleDLSSSelectionChanged); \
	DECLARE_FUNCTION(execHandleLumenSelectionChanged); \
	DECLARE_FUNCTION(execHandleFPSLimitSelectionChanged); \
	DECLARE_FUNCTION(execHandleVSyncSelectionChanged); \
	DECLARE_FUNCTION(execHandleScreenResolutionSelectionChanged); \
	DECLARE_FUNCTION(execHandleResolutionScaleSelectionChanged); \
	DECLARE_FUNCTION(execHandleOverallQualitySelectionChanged); \
	DECLARE_FUNCTION(execHandleGraphicsPresetSelectionChanged); \
	DECLARE_FUNCTION(execHandleDisplayModeSelectionChanged); \
	DECLARE_FUNCTION(execResetToDefaults); \
	DECLARE_FUNCTION(execApplySettingsNow); \
	DECLARE_FUNCTION(execRefreshFromSettings);


struct Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallSettingsMenuWidget_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsMenuWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallSettingsMenuWidget(); \
	friend struct ::Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallSettingsMenuWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallSettingsMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallSettingsMenuWidget_NoRegister) \
	DECLARE_SERIALIZER(UZonefallSettingsMenuWidget)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsMenuWidget_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallSettingsMenuWidget(UZonefallSettingsMenuWidget&&) = delete; \
	UZonefallSettingsMenuWidget(const UZonefallSettingsMenuWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallSettingsMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallSettingsMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZonefallSettingsMenuWidget) \
	NO_API virtual ~UZonefallSettingsMenuWidget();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsMenuWidget_h_18_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsMenuWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsMenuWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsMenuWidget_h_21_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsMenuWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallSettingsMenuWidget;

// ********** End Class UZonefallSettingsMenuWidget ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsMenuWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
