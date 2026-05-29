// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/UIWorldSimpleMainMenuWidget.h"

#ifdef UIWORLD_UIWorldSimpleMainMenuWidget_generated_h
#error "UIWorldSimpleMainMenuWidget.generated.h already included, missing '#pragma once' in UIWorldSimpleMainMenuWidget.h"
#endif
#define UIWORLD_UIWorldSimpleMainMenuWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUIWorldSimpleMainMenuWidget *********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_UIWorldSimpleMainMenuWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleQuitUnhovered); \
	DECLARE_FUNCTION(execHandleQuitHovered); \
	DECLARE_FUNCTION(execHandleOnlineUnhovered); \
	DECLARE_FUNCTION(execHandleOnlineHovered); \
	DECLARE_FUNCTION(execHandleSettingsUnhovered); \
	DECLARE_FUNCTION(execHandleSettingsHovered); \
	DECLARE_FUNCTION(execHandleContinueUnhovered); \
	DECLARE_FUNCTION(execHandleContinueHovered); \
	DECLARE_FUNCTION(execHandleNewGameUnhovered); \
	DECLARE_FUNCTION(execHandleNewGameHovered); \
	DECLARE_FUNCTION(execHandleQuitClicked); \
	DECLARE_FUNCTION(execHandleOnlineClicked); \
	DECLARE_FUNCTION(execHandleSettingsClicked); \
	DECLARE_FUNCTION(execHandleContinueClicked); \
	DECLARE_FUNCTION(execHandleNewGameClicked);


struct Z_Construct_UClass_UUIWorldSimpleMainMenuWidget_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UUIWorldSimpleMainMenuWidget_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_UIWorldSimpleMainMenuWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIWorldSimpleMainMenuWidget(); \
	friend struct ::Z_Construct_UClass_UUIWorldSimpleMainMenuWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UUIWorldSimpleMainMenuWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIWorldSimpleMainMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UUIWorldSimpleMainMenuWidget_NoRegister) \
	DECLARE_SERIALIZER(UUIWorldSimpleMainMenuWidget)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_UIWorldSimpleMainMenuWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIWorldSimpleMainMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIWorldSimpleMainMenuWidget(UUIWorldSimpleMainMenuWidget&&) = delete; \
	UUIWorldSimpleMainMenuWidget(const UUIWorldSimpleMainMenuWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIWorldSimpleMainMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIWorldSimpleMainMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIWorldSimpleMainMenuWidget) \
	NO_API virtual ~UUIWorldSimpleMainMenuWidget();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_UIWorldSimpleMainMenuWidget_h_12_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_UIWorldSimpleMainMenuWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_UIWorldSimpleMainMenuWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_UIWorldSimpleMainMenuWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_UIWorldSimpleMainMenuWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIWorldSimpleMainMenuWidget;

// ********** End Class UUIWorldSimpleMainMenuWidget ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_UIWorldSimpleMainMenuWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
