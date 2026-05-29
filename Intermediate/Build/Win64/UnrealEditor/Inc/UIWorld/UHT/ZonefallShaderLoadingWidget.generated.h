// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ZonefallShaderLoadingWidget.h"

#ifdef UIWORLD_ZonefallShaderLoadingWidget_generated_h
#error "ZonefallShaderLoadingWidget.generated.h already included, missing '#pragma once' in ZonefallShaderLoadingWidget.h"
#endif
#define UIWORLD_ZonefallShaderLoadingWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UZonefallShaderLoadingWidget *********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallShaderLoadingWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleTextAnimTick); \
	DECLARE_FUNCTION(execIsShaderCompilationLikelyFinished); \
	DECLARE_FUNCTION(execSetInitialShaderJobCount); \
	DECLARE_FUNCTION(execSetShaderCompileProgress);


struct Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallShaderLoadingWidget_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallShaderLoadingWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallShaderLoadingWidget(); \
	friend struct ::Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallShaderLoadingWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallShaderLoadingWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallShaderLoadingWidget_NoRegister) \
	DECLARE_SERIALIZER(UZonefallShaderLoadingWidget)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallShaderLoadingWidget_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallShaderLoadingWidget(UZonefallShaderLoadingWidget&&) = delete; \
	UZonefallShaderLoadingWidget(const UZonefallShaderLoadingWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallShaderLoadingWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallShaderLoadingWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZonefallShaderLoadingWidget) \
	NO_API virtual ~UZonefallShaderLoadingWidget();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallShaderLoadingWidget_h_16_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallShaderLoadingWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallShaderLoadingWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallShaderLoadingWidget_h_19_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallShaderLoadingWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallShaderLoadingWidget;

// ********** End Class UZonefallShaderLoadingWidget ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallShaderLoadingWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
