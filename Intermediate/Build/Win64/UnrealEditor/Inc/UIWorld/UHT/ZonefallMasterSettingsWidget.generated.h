// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ZonefallMasterSettingsWidget.h"

#ifdef UIWORLD_ZonefallMasterSettingsWidget_generated_h
#error "ZonefallMasterSettingsWidget.generated.h already included, missing '#pragma once' in ZonefallMasterSettingsWidget.h"
#endif
#define UIWORLD_ZonefallMasterSettingsWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnZonefallMasterSettingsBack *****************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMasterSettingsWidget_h_20_DELEGATE \
UIWORLD_API void FOnZonefallMasterSettingsBack_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallMasterSettingsBack);


// ********** End Delegate FOnZonefallMasterSettingsBack *******************************************

// ********** Begin Delegate FOnZonefallKeybindClicked *********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMasterSettingsWidget_h_21_DELEGATE \
UIWORLD_API void FOnZonefallKeybindClicked_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallKeybindClicked, FName ActionId);


// ********** End Delegate FOnZonefallKeybindClicked ***********************************************

// ********** Begin Class UZonefallKeybindButton ***************************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMasterSettingsWidget_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleInternalClicked);


struct Z_Construct_UClass_UZonefallKeybindButton_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallKeybindButton_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMasterSettingsWidget_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallKeybindButton(); \
	friend struct ::Z_Construct_UClass_UZonefallKeybindButton_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallKeybindButton_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallKeybindButton, UButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallKeybindButton_NoRegister) \
	DECLARE_SERIALIZER(UZonefallKeybindButton)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMasterSettingsWidget_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallKeybindButton(UZonefallKeybindButton&&) = delete; \
	UZonefallKeybindButton(const UZonefallKeybindButton&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallKeybindButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallKeybindButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UZonefallKeybindButton) \
	NO_API virtual ~UZonefallKeybindButton();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMasterSettingsWidget_h_24_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMasterSettingsWidget_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMasterSettingsWidget_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMasterSettingsWidget_h_27_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMasterSettingsWidget_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallKeybindButton;

// ********** End Class UZonefallKeybindButton *****************************************************

// ********** Begin Class UZonefallMasterSettingsWidget ********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMasterSettingsWidget_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleRestartConfirmed); \
	DECLARE_FUNCTION(execHandleInvertYChanged); \
	DECLARE_FUNCTION(execHandleKeybindClicked); \
	DECLARE_FUNCTION(execHandleSliderChanged); \
	DECLARE_FUNCTION(execHandleBackClicked); \
	DECLARE_FUNCTION(execHandleResetClicked); \
	DECLARE_FUNCTION(execHandleApplyClicked); \
	DECLARE_FUNCTION(execHandlePresetChanged); \
	DECLARE_FUNCTION(execHandleLanguageComboChanged); \
	DECLARE_FUNCTION(execHandleTabLanguage); \
	DECLARE_FUNCTION(execHandleTabControls); \
	DECLARE_FUNCTION(execHandleTabAudio); \
	DECLARE_FUNCTION(execHandleTabGraphics); \
	DECLARE_FUNCTION(execResetToDefaults); \
	DECLARE_FUNCTION(execApplyNow); \
	DECLARE_FUNCTION(execRefreshFromSettings);


struct Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallMasterSettingsWidget_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMasterSettingsWidget_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallMasterSettingsWidget(); \
	friend struct ::Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallMasterSettingsWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallMasterSettingsWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallMasterSettingsWidget_NoRegister) \
	DECLARE_SERIALIZER(UZonefallMasterSettingsWidget)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMasterSettingsWidget_h_52_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallMasterSettingsWidget(UZonefallMasterSettingsWidget&&) = delete; \
	UZonefallMasterSettingsWidget(const UZonefallMasterSettingsWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallMasterSettingsWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallMasterSettingsWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZonefallMasterSettingsWidget) \
	NO_API virtual ~UZonefallMasterSettingsWidget();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMasterSettingsWidget_h_49_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMasterSettingsWidget_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMasterSettingsWidget_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMasterSettingsWidget_h_52_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMasterSettingsWidget_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallMasterSettingsWidget;

// ********** End Class UZonefallMasterSettingsWidget **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMasterSettingsWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
