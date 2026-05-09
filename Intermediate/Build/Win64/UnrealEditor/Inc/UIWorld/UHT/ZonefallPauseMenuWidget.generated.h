// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ZonefallPauseMenuWidget.h"

#ifdef UIWORLD_ZonefallPauseMenuWidget_generated_h
#error "ZonefallPauseMenuWidget.generated.h already included, missing '#pragma once' in ZonefallPauseMenuWidget.h"
#endif
#define UIWORLD_ZonefallPauseMenuWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnPauseResumeRequested ***********************************************
#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallPauseMenuWidget_h_13_DELEGATE \
UIWORLD_API void FOnPauseResumeRequested_DelegateWrapper(const FMulticastScriptDelegate& OnPauseResumeRequested);


// ********** End Delegate FOnPauseResumeRequested *************************************************

// ********** Begin Delegate FOnPauseSettingsRequested *********************************************
#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallPauseMenuWidget_h_14_DELEGATE \
UIWORLD_API void FOnPauseSettingsRequested_DelegateWrapper(const FMulticastScriptDelegate& OnPauseSettingsRequested);


// ********** End Delegate FOnPauseSettingsRequested ***********************************************

// ********** Begin Delegate FOnPauseMainMenuRequested *********************************************
#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallPauseMenuWidget_h_15_DELEGATE \
UIWORLD_API void FOnPauseMainMenuRequested_DelegateWrapper(const FMulticastScriptDelegate& OnPauseMainMenuRequested);


// ********** End Delegate FOnPauseMainMenuRequested ***********************************************

// ********** Begin Delegate FOnPauseQuitRequested *************************************************
#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallPauseMenuWidget_h_16_DELEGATE \
UIWORLD_API void FOnPauseQuitRequested_DelegateWrapper(const FMulticastScriptDelegate& OnPauseQuitRequested);


// ********** End Delegate FOnPauseQuitRequested ***************************************************

// ********** Begin Class UZonefallPauseMenuWidget *************************************************
#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallPauseMenuWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetActionInProgress); \
	DECLARE_FUNCTION(execHandleAnyUnhovered); \
	DECLARE_FUNCTION(execHandleQuitHovered); \
	DECLARE_FUNCTION(execHandleMainMenuHovered); \
	DECLARE_FUNCTION(execHandleSettingsHovered); \
	DECLARE_FUNCTION(execHandleResumeHovered); \
	DECLARE_FUNCTION(execHandleQuitClicked); \
	DECLARE_FUNCTION(execHandleMainMenuClicked); \
	DECLARE_FUNCTION(execHandleSettingsClicked); \
	DECLARE_FUNCTION(execHandleResumeClicked);


struct Z_Construct_UClass_UZonefallPauseMenuWidget_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallPauseMenuWidget_NoRegister();

#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallPauseMenuWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallPauseMenuWidget(); \
	friend struct ::Z_Construct_UClass_UZonefallPauseMenuWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallPauseMenuWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallPauseMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallPauseMenuWidget_NoRegister) \
	DECLARE_SERIALIZER(UZonefallPauseMenuWidget)


#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallPauseMenuWidget_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallPauseMenuWidget(UZonefallPauseMenuWidget&&) = delete; \
	UZonefallPauseMenuWidget(const UZonefallPauseMenuWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallPauseMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallPauseMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZonefallPauseMenuWidget) \
	NO_API virtual ~UZonefallPauseMenuWidget();


#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallPauseMenuWidget_h_18_PROLOG
#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallPauseMenuWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallPauseMenuWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallPauseMenuWidget_h_21_INCLASS_NO_PURE_DECLS \
	FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallPauseMenuWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallPauseMenuWidget;

// ********** End Class UZonefallPauseMenuWidget ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallPauseMenuWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
