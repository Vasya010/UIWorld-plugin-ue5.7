// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ZonefallStartupIntroWidget.h"

#ifdef UIWORLD_ZonefallStartupIntroWidget_generated_h
#error "ZonefallStartupIntroWidget.generated.h already included, missing '#pragma once' in ZonefallStartupIntroWidget.h"
#endif
#define UIWORLD_ZonefallStartupIntroWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnZonefallStartupIntroFinished ***************************************
#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallStartupIntroWidget_h_17_DELEGATE \
UIWORLD_API void FOnZonefallStartupIntroFinished_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallStartupIntroFinished);


// ********** End Delegate FOnZonefallStartupIntroFinished *****************************************

// ********** Begin Class UZonefallStartupIntroWidget **********************************************
#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallStartupIntroWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleMediaEndReached); \
	DECLARE_FUNCTION(execHandlePlaybackRetryTick); \
	DECLARE_FUNCTION(execHandleMediaOpenFailed); \
	DECLARE_FUNCTION(execHandleMediaOpened); \
	DECLARE_FUNCTION(execFinishIntro); \
	DECLARE_FUNCTION(execStartIntro);


struct Z_Construct_UClass_UZonefallStartupIntroWidget_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallStartupIntroWidget_NoRegister();

#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallStartupIntroWidget_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallStartupIntroWidget(); \
	friend struct ::Z_Construct_UClass_UZonefallStartupIntroWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallStartupIntroWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallStartupIntroWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallStartupIntroWidget_NoRegister) \
	DECLARE_SERIALIZER(UZonefallStartupIntroWidget)


#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallStartupIntroWidget_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallStartupIntroWidget(UZonefallStartupIntroWidget&&) = delete; \
	UZonefallStartupIntroWidget(const UZonefallStartupIntroWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallStartupIntroWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallStartupIntroWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZonefallStartupIntroWidget) \
	NO_API virtual ~UZonefallStartupIntroWidget();


#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallStartupIntroWidget_h_19_PROLOG
#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallStartupIntroWidget_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallStartupIntroWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallStartupIntroWidget_h_22_INCLASS_NO_PURE_DECLS \
	FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallStartupIntroWidget_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallStartupIntroWidget;

// ********** End Class UZonefallStartupIntroWidget ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallStartupIntroWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
