// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ZonefallModernProgressBarWidget.h"

#ifdef UIWORLD_ZonefallModernProgressBarWidget_generated_h
#error "ZonefallModernProgressBarWidget.generated.h already included, missing '#pragma once' in ZonefallModernProgressBarWidget.h"
#endif
#define UIWORLD_ZonefallModernProgressBarWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnZonefallProgressChanged ********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernProgressBarWidget_h_12_DELEGATE \
UIWORLD_API void FOnZonefallProgressChanged_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallProgressChanged, float NormalizedValue);


// ********** End Delegate FOnZonefallProgressChanged **********************************************

// ********** Begin Class UZonefallModernProgressBarWidget *****************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernProgressBarWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleAutoProgressTick); \
	DECLARE_FUNCTION(execGetProgressNormalized); \
	DECLARE_FUNCTION(execStopAutoProgress); \
	DECLARE_FUNCTION(execStartAutoProgress); \
	DECLARE_FUNCTION(execSetProgressNormalized);


struct Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallModernProgressBarWidget_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernProgressBarWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallModernProgressBarWidget(); \
	friend struct ::Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallModernProgressBarWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallModernProgressBarWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallModernProgressBarWidget_NoRegister) \
	DECLARE_SERIALIZER(UZonefallModernProgressBarWidget)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernProgressBarWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallModernProgressBarWidget(UZonefallModernProgressBarWidget&&) = delete; \
	UZonefallModernProgressBarWidget(const UZonefallModernProgressBarWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallModernProgressBarWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallModernProgressBarWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZonefallModernProgressBarWidget) \
	NO_API virtual ~UZonefallModernProgressBarWidget();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernProgressBarWidget_h_14_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernProgressBarWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernProgressBarWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernProgressBarWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernProgressBarWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallModernProgressBarWidget;

// ********** End Class UZonefallModernProgressBarWidget *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernProgressBarWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
