// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ZonefallModernButtonWidget.h"

#ifdef UIWORLD_ZonefallModernButtonWidget_generated_h
#error "ZonefallModernButtonWidget.generated.h already included, missing '#pragma once' in ZonefallModernButtonWidget.h"
#endif
#define UIWORLD_ZonefallModernButtonWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EZonefallModernButtonTheme : uint8;

// ********** Begin Delegate FOnZonefallModernButtonClicked ****************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernButtonWidget_h_13_DELEGATE \
UIWORLD_API void FOnZonefallModernButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallModernButtonClicked);


// ********** End Delegate FOnZonefallModernButtonClicked ******************************************

// ********** Begin Delegate FOnZonefallStartGameRequested *****************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernButtonWidget_h_14_DELEGATE \
UIWORLD_API void FOnZonefallStartGameRequested_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallStartGameRequested);


// ********** End Delegate FOnZonefallStartGameRequested *******************************************

// ********** Begin Class UZonefallModernButtonWidget **********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernButtonWidget_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleReleased); \
	DECLARE_FUNCTION(execHandlePressed); \
	DECLARE_FUNCTION(execHandleUnhovered); \
	DECLARE_FUNCTION(execHandleHovered); \
	DECLARE_FUNCTION(execHandleClicked); \
	DECLARE_FUNCTION(execValidateAndBindWidgets); \
	DECLARE_FUNCTION(execRequestStartGame); \
	DECLARE_FUNCTION(execApplyThemePreset); \
	DECLARE_FUNCTION(execApplyVisualStyle); \
	DECLARE_FUNCTION(execSetLabel);


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernButtonWidget_h_26_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UZonefallModernButtonWidget_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallModernButtonWidget_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernButtonWidget_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallModernButtonWidget(); \
	friend struct ::Z_Construct_UClass_UZonefallModernButtonWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallModernButtonWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallModernButtonWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallModernButtonWidget_NoRegister) \
	DECLARE_SERIALIZER(UZonefallModernButtonWidget)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernButtonWidget_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallModernButtonWidget(UZonefallModernButtonWidget&&) = delete; \
	UZonefallModernButtonWidget(const UZonefallModernButtonWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallModernButtonWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallModernButtonWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZonefallModernButtonWidget) \
	NO_API virtual ~UZonefallModernButtonWidget();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernButtonWidget_h_23_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernButtonWidget_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernButtonWidget_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernButtonWidget_h_26_CALLBACK_WRAPPERS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernButtonWidget_h_26_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernButtonWidget_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallModernButtonWidget;

// ********** End Class UZonefallModernButtonWidget ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernButtonWidget_h

// ********** Begin Enum EZonefallModernButtonTheme ************************************************
#define FOREACH_ENUM_EZONEFALLMODERNBUTTONTHEME(op) \
	op(EZonefallModernButtonTheme::Dark) \
	op(EZonefallModernButtonTheme::Neon) 

enum class EZonefallModernButtonTheme : uint8;
template<> struct TIsUEnumClass<EZonefallModernButtonTheme> { enum { Value = true }; };
template<> UIWORLD_NON_ATTRIBUTED_API UEnum* StaticEnum<EZonefallModernButtonTheme>();
// ********** End Enum EZonefallModernButtonTheme **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
