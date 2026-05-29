// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ZonefallSettingsDataObject.h"

#ifdef UIWORLD_ZonefallSettingsDataObject_generated_h
#error "ZonefallSettingsDataObject.generated.h already included, missing '#pragma once' in ZonefallSettingsDataObject.h"
#endif
#define UIWORLD_ZonefallSettingsDataObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EZonefallGraphicsPreset : uint8;

// ********** Begin Class UZonefallSettingsDataObject **********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsDataObject_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyUpscalerSettingsOnly); \
	DECLARE_FUNCTION(execSaveUpscalerSettingsToConfig); \
	DECLARE_FUNCTION(execLoadUpscalerSettingsFromConfig); \
	DECLARE_FUNCTION(execDetectRecommendedPreset); \
	DECLARE_FUNCTION(execApplyGraphicsPreset); \
	DECLARE_FUNCTION(execSanitizeSettings); \
	DECLARE_FUNCTION(execSetScreenResolutionFromString); \
	DECLARE_FUNCTION(execGetCurrentScreenResolutionString); \
	DECLARE_FUNCTION(execGetAvailableScreenResolutions); \
	DECLARE_FUNCTION(execSetDefaults); \
	DECLARE_FUNCTION(execApplyDisplayModeAndResolution); \
	DECLARE_FUNCTION(execApplyToSystem); \
	DECLARE_FUNCTION(execLoadFromSystem);


struct Z_Construct_UClass_UZonefallSettingsDataObject_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallSettingsDataObject_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsDataObject_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallSettingsDataObject(); \
	friend struct ::Z_Construct_UClass_UZonefallSettingsDataObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallSettingsDataObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallSettingsDataObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallSettingsDataObject_NoRegister) \
	DECLARE_SERIALIZER(UZonefallSettingsDataObject)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsDataObject_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UZonefallSettingsDataObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallSettingsDataObject(UZonefallSettingsDataObject&&) = delete; \
	UZonefallSettingsDataObject(const UZonefallSettingsDataObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallSettingsDataObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallSettingsDataObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZonefallSettingsDataObject) \
	NO_API virtual ~UZonefallSettingsDataObject();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsDataObject_h_17_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsDataObject_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsDataObject_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsDataObject_h_20_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsDataObject_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallSettingsDataObject;

// ********** End Class UZonefallSettingsDataObject ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsDataObject_h

// ********** Begin Enum EZonefallGraphicsPreset ***************************************************
#define FOREACH_ENUM_EZONEFALLGRAPHICSPRESET(op) \
	op(EZonefallGraphicsPreset::Competitive) \
	op(EZonefallGraphicsPreset::Balanced) \
	op(EZonefallGraphicsPreset::Quality) \
	op(EZonefallGraphicsPreset::Ultra) \
	op(EZonefallGraphicsPreset::AutoDetect) 

enum class EZonefallGraphicsPreset : uint8;
template<> struct TIsUEnumClass<EZonefallGraphicsPreset> { enum { Value = true }; };
template<> UIWORLD_NON_ATTRIBUTED_API UEnum* StaticEnum<EZonefallGraphicsPreset>();
// ********** End Enum EZonefallGraphicsPreset *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
