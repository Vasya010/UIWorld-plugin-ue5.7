// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ZonefallHUDWidget.h"

#ifdef UIWORLD_ZonefallHUDWidget_generated_h
#error "ZonefallHUDWidget.generated.h already included, missing '#pragma once' in ZonefallHUDWidget.h"
#endif
#define UIWORLD_ZonefallHUDWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AZonefallPlayerCharacter;

// ********** Begin Class UZonefallHUDWidget *******************************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallHUDWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBindToCharacter);


struct Z_Construct_UClass_UZonefallHUDWidget_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallHUDWidget_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallHUDWidget_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallHUDWidget(); \
	friend struct ::Z_Construct_UClass_UZonefallHUDWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallHUDWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallHUDWidget_NoRegister) \
	DECLARE_SERIALIZER(UZonefallHUDWidget)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallHUDWidget_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallHUDWidget(UZonefallHUDWidget&&) = delete; \
	UZonefallHUDWidget(const UZonefallHUDWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallHUDWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallHUDWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZonefallHUDWidget) \
	NO_API virtual ~UZonefallHUDWidget();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallHUDWidget_h_19_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallHUDWidget_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallHUDWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallHUDWidget_h_22_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallHUDWidget_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallHUDWidget;

// ********** End Class UZonefallHUDWidget *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallHUDWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
