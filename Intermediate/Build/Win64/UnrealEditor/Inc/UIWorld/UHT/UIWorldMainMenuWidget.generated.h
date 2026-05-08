// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/UIWorldMainMenuWidget.h"

#ifdef UIWORLD_UIWorldMainMenuWidget_generated_h
#error "UIWorldMainMenuWidget.generated.h already included, missing '#pragma once' in UIWorldMainMenuWidget.h"
#endif
#define UIWORLD_UIWorldMainMenuWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUIWorldMainMenuWidget ***************************************************
struct Z_Construct_UClass_UUIWorldMainMenuWidget_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UUIWorldMainMenuWidget_NoRegister();

#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_UIWorldMainMenuWidget_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIWorldMainMenuWidget(); \
	friend struct ::Z_Construct_UClass_UUIWorldMainMenuWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UUIWorldMainMenuWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIWorldMainMenuWidget, UZonefallFancyMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UUIWorldMainMenuWidget_NoRegister) \
	DECLARE_SERIALIZER(UUIWorldMainMenuWidget)


#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_UIWorldMainMenuWidget_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIWorldMainMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIWorldMainMenuWidget(UUIWorldMainMenuWidget&&) = delete; \
	UUIWorldMainMenuWidget(const UUIWorldMainMenuWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIWorldMainMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIWorldMainMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIWorldMainMenuWidget) \
	NO_API virtual ~UUIWorldMainMenuWidget();


#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_UIWorldMainMenuWidget_h_9_PROLOG
#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_UIWorldMainMenuWidget_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_UIWorldMainMenuWidget_h_12_INCLASS_NO_PURE_DECLS \
	FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_UIWorldMainMenuWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIWorldMainMenuWidget;

// ********** End Class UUIWorldMainMenuWidget *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_UIWorldMainMenuWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
