// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ZonefallLoadingScreenWidget.h"

#ifdef UIWORLD_ZonefallLoadingScreenWidget_generated_h
#error "ZonefallLoadingScreenWidget.generated.h already included, missing '#pragma once' in ZonefallLoadingScreenWidget.h"
#endif
#define UIWORLD_ZonefallLoadingScreenWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UZonefallLoadingScreenWidget *********************************************
#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallLoadingScreenWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleProgressTick); \
	DECLARE_FUNCTION(execHandleStatusTextTick); \
	DECLARE_FUNCTION(execHandleLoadingTextTick); \
	DECLARE_FUNCTION(execHandleImageRotateTick); \
	DECLARE_FUNCTION(execStopImageRotation); \
	DECLARE_FUNCTION(execStartImageRotation); \
	DECLARE_FUNCTION(execEnterFinalizingPhase); \
	DECLARE_FUNCTION(execCompleteLoading); \
	DECLARE_FUNCTION(execStartLoading);


struct Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallLoadingScreenWidget_NoRegister();

#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallLoadingScreenWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallLoadingScreenWidget(); \
	friend struct ::Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallLoadingScreenWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallLoadingScreenWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallLoadingScreenWidget_NoRegister) \
	DECLARE_SERIALIZER(UZonefallLoadingScreenWidget)


#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallLoadingScreenWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallLoadingScreenWidget(UZonefallLoadingScreenWidget&&) = delete; \
	UZonefallLoadingScreenWidget(const UZonefallLoadingScreenWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallLoadingScreenWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallLoadingScreenWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZonefallLoadingScreenWidget) \
	NO_API virtual ~UZonefallLoadingScreenWidget();


#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallLoadingScreenWidget_h_13_PROLOG
#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallLoadingScreenWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallLoadingScreenWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallLoadingScreenWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallLoadingScreenWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallLoadingScreenWidget;

// ********** End Class UZonefallLoadingScreenWidget ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallLoadingScreenWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
