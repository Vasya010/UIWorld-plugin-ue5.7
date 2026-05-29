// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Localization/ZonefallLocalizationSubsystem.h"

#ifdef UIWORLD_ZonefallLocalizationSubsystem_generated_h
#error "ZonefallLocalizationSubsystem.generated.h already included, missing '#pragma once' in ZonefallLocalizationSubsystem.h"
#endif
#define UIWORLD_ZonefallLocalizationSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UZonefallLocalizationSubsystem;
enum class EZonefallLanguage : uint8;

// ********** Begin Delegate FZonefallLanguageChanged **********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Localization_ZonefallLocalizationSubsystem_h_15_DELEGATE \
UIWORLD_API void FZonefallLanguageChanged_DelegateWrapper(const FMulticastScriptDelegate& ZonefallLanguageChanged, EZonefallLanguage NewLanguage);


// ********** End Delegate FZonefallLanguageChanged ************************************************

// ********** Begin Class UZonefallLocalizationSubsystem *******************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Localization_ZonefallLocalizationSubsystem_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLanguageDisplayNames); \
	DECLARE_FUNCTION(execL); \
	DECLARE_FUNCTION(execGetText); \
	DECLARE_FUNCTION(execGetLanguage); \
	DECLARE_FUNCTION(execSetLanguage); \
	DECLARE_FUNCTION(execGet);


struct Z_Construct_UClass_UZonefallLocalizationSubsystem_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallLocalizationSubsystem_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Localization_ZonefallLocalizationSubsystem_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallLocalizationSubsystem(); \
	friend struct ::Z_Construct_UClass_UZonefallLocalizationSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallLocalizationSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallLocalizationSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallLocalizationSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UZonefallLocalizationSubsystem)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Localization_ZonefallLocalizationSubsystem_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UZonefallLocalizationSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallLocalizationSubsystem(UZonefallLocalizationSubsystem&&) = delete; \
	UZonefallLocalizationSubsystem(const UZonefallLocalizationSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallLocalizationSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallLocalizationSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UZonefallLocalizationSubsystem) \
	NO_API virtual ~UZonefallLocalizationSubsystem();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Localization_ZonefallLocalizationSubsystem_h_29_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Localization_ZonefallLocalizationSubsystem_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Localization_ZonefallLocalizationSubsystem_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Localization_ZonefallLocalizationSubsystem_h_32_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Localization_ZonefallLocalizationSubsystem_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallLocalizationSubsystem;

// ********** End Class UZonefallLocalizationSubsystem *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Localization_ZonefallLocalizationSubsystem_h

// ********** Begin Enum EZonefallLanguage *********************************************************
#define FOREACH_ENUM_EZONEFALLLANGUAGE(op) \
	op(EZonefallLanguage::English) \
	op(EZonefallLanguage::Russian) \
	op(EZonefallLanguage::Chinese) 

enum class EZonefallLanguage : uint8;
template<> struct TIsUEnumClass<EZonefallLanguage> { enum { Value = true }; };
template<> UIWORLD_NON_ATTRIBUTED_API UEnum* StaticEnum<EZonefallLanguage>();
// ********** End Enum EZonefallLanguage ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
