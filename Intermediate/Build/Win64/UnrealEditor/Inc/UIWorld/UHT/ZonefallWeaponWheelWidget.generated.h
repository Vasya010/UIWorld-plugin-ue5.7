// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ZonefallWeaponWheelWidget.h"

#ifdef UIWORLD_ZonefallWeaponWheelWidget_generated_h
#error "ZonefallWeaponWheelWidget.generated.h already included, missing '#pragma once' in ZonefallWeaponWheelWidget.h"
#endif
#define UIWORLD_ZonefallWeaponWheelWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AZonefallPlayerCharacter;

// ********** Begin Delegate FOnZonefallWeaponSlotClicked ******************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallWeaponWheelWidget_h_15_DELEGATE \
UIWORLD_API void FOnZonefallWeaponSlotClicked_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallWeaponSlotClicked, int32 WeaponIndex);


// ********** End Delegate FOnZonefallWeaponSlotClicked ********************************************

// ********** Begin Class UZonefallWeaponWheelButton ***********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallWeaponWheelWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleInternalClicked);


struct Z_Construct_UClass_UZonefallWeaponWheelButton_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallWeaponWheelButton_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallWeaponWheelWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallWeaponWheelButton(); \
	friend struct ::Z_Construct_UClass_UZonefallWeaponWheelButton_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallWeaponWheelButton_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallWeaponWheelButton, UButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallWeaponWheelButton_NoRegister) \
	DECLARE_SERIALIZER(UZonefallWeaponWheelButton)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallWeaponWheelWidget_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallWeaponWheelButton(UZonefallWeaponWheelButton&&) = delete; \
	UZonefallWeaponWheelButton(const UZonefallWeaponWheelButton&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallWeaponWheelButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallWeaponWheelButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UZonefallWeaponWheelButton) \
	NO_API virtual ~UZonefallWeaponWheelButton();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallWeaponWheelWidget_h_18_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallWeaponWheelWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallWeaponWheelWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallWeaponWheelWidget_h_21_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallWeaponWheelWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallWeaponWheelButton;

// ********** End Class UZonefallWeaponWheelButton *************************************************

// ********** Begin Class UZonefallWeaponWheelWidget ***********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallWeaponWheelWidget_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleWeaponSlotClicked); \
	DECLARE_FUNCTION(execGetSelectedWeaponIndex); \
	DECLARE_FUNCTION(execRefreshFromWeapons); \
	DECLARE_FUNCTION(execSetupForCharacter);


struct Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallWeaponWheelWidget_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallWeaponWheelWidget_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallWeaponWheelWidget(); \
	friend struct ::Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallWeaponWheelWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallWeaponWheelWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallWeaponWheelWidget_NoRegister) \
	DECLARE_SERIALIZER(UZonefallWeaponWheelWidget)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallWeaponWheelWidget_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallWeaponWheelWidget(UZonefallWeaponWheelWidget&&) = delete; \
	UZonefallWeaponWheelWidget(const UZonefallWeaponWheelWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallWeaponWheelWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallWeaponWheelWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZonefallWeaponWheelWidget) \
	NO_API virtual ~UZonefallWeaponWheelWidget();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallWeaponWheelWidget_h_42_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallWeaponWheelWidget_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallWeaponWheelWidget_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallWeaponWheelWidget_h_45_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallWeaponWheelWidget_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallWeaponWheelWidget;

// ********** End Class UZonefallWeaponWheelWidget *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallWeaponWheelWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
