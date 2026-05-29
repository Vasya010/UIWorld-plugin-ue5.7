// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ZonefallModernComboBoxWidget.h"

#ifdef UIWORLD_ZonefallModernComboBoxWidget_generated_h
#error "ZonefallModernComboBoxWidget.generated.h already included, missing '#pragma once' in ZonefallModernComboBoxWidget.h"
#endif
#define UIWORLD_ZonefallModernComboBoxWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnZonefallModernComboSelectionChanged ********************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernComboBoxWidget_h_12_DELEGATE \
UIWORLD_API void FOnZonefallModernComboSelectionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallModernComboSelectionChanged, const FString& SelectedItem);


// ********** End Delegate FOnZonefallModernComboSelectionChanged **********************************

// ********** Begin Class UZonefallModernComboBoxWidget ********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernComboBoxWidget_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleSelectionChanged); \
	DECLARE_FUNCTION(execValidateAndBindWidgets); \
	DECLARE_FUNCTION(execApplyVisualStyle); \
	DECLARE_FUNCTION(execGetSelectedOption); \
	DECLARE_FUNCTION(execSetSelectedOption); \
	DECLARE_FUNCTION(execClearOptions); \
	DECLARE_FUNCTION(execAddOption); \
	DECLARE_FUNCTION(execSetOptions);


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernComboBoxWidget_h_39_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallModernComboBoxWidget_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernComboBoxWidget_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallModernComboBoxWidget(); \
	friend struct ::Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallModernComboBoxWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallModernComboBoxWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallModernComboBoxWidget_NoRegister) \
	DECLARE_SERIALIZER(UZonefallModernComboBoxWidget)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernComboBoxWidget_h_39_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallModernComboBoxWidget(UZonefallModernComboBoxWidget&&) = delete; \
	UZonefallModernComboBoxWidget(const UZonefallModernComboBoxWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallModernComboBoxWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallModernComboBoxWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZonefallModernComboBoxWidget) \
	NO_API virtual ~UZonefallModernComboBoxWidget();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernComboBoxWidget_h_36_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernComboBoxWidget_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernComboBoxWidget_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernComboBoxWidget_h_39_CALLBACK_WRAPPERS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernComboBoxWidget_h_39_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernComboBoxWidget_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallModernComboBoxWidget;

// ********** End Class UZonefallModernComboBoxWidget **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernComboBoxWidget_h

// ********** Begin Enum EZonefallModernComboTheme *************************************************
#define FOREACH_ENUM_EZONEFALLMODERNCOMBOTHEME(op) \
	op(EZonefallModernComboTheme::Dark) \
	op(EZonefallModernComboTheme::Neon) 

enum class EZonefallModernComboTheme : uint8;
template<> struct TIsUEnumClass<EZonefallModernComboTheme> { enum { Value = true }; };
template<> UIWORLD_NON_ATTRIBUTED_API UEnum* StaticEnum<EZonefallModernComboTheme>();
// ********** End Enum EZonefallModernComboTheme ***************************************************

// ********** Begin Enum EZonefallModernComboPreset ************************************************
#define FOREACH_ENUM_EZONEFALLMODERNCOMBOPRESET(op) \
	op(EZonefallModernComboPreset::Manual) \
	op(EZonefallModernComboPreset::OverallQuality) \
	op(EZonefallModernComboPreset::DisplayMode) \
	op(EZonefallModernComboPreset::VSync) \
	op(EZonefallModernComboPreset::FPSLimit) \
	op(EZonefallModernComboPreset::ScreenResolution) \
	op(EZonefallModernComboPreset::DLSS) \
	op(EZonefallModernComboPreset::DLSSFrameGeneration) \
	op(EZonefallModernComboPreset::FSR) \
	op(EZonefallModernComboPreset::FSRFrameGeneration) 

enum class EZonefallModernComboPreset : uint8;
template<> struct TIsUEnumClass<EZonefallModernComboPreset> { enum { Value = true }; };
template<> UIWORLD_NON_ATTRIBUTED_API UEnum* StaticEnum<EZonefallModernComboPreset>();
// ********** End Enum EZonefallModernComboPreset **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
