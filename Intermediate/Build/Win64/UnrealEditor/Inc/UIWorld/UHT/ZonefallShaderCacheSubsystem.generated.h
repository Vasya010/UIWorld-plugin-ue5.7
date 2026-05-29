// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZonefallShaderCacheSubsystem.h"

#ifdef UIWORLD_ZonefallShaderCacheSubsystem_generated_h
#error "ZonefallShaderCacheSubsystem.generated.h already included, missing '#pragma once' in ZonefallShaderCacheSubsystem.h"
#endif
#define UIWORLD_ZonefallShaderCacheSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UZonefallShaderCacheSubsystem ********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_ZonefallShaderCacheSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInitialPSOCount); \
	DECLARE_FUNCTION(execGetNumPSOsRemaining); \
	DECLARE_FUNCTION(execGetPrecompileProgress); \
	DECLARE_FUNCTION(execIsPrecompiling); \
	DECLARE_FUNCTION(execSaveUsageCacheNow);


struct Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallShaderCacheSubsystem_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_ZonefallShaderCacheSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallShaderCacheSubsystem(); \
	friend struct ::Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallShaderCacheSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallShaderCacheSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallShaderCacheSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UZonefallShaderCacheSubsystem)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_ZonefallShaderCacheSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UZonefallShaderCacheSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallShaderCacheSubsystem(UZonefallShaderCacheSubsystem&&) = delete; \
	UZonefallShaderCacheSubsystem(const UZonefallShaderCacheSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallShaderCacheSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallShaderCacheSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UZonefallShaderCacheSubsystem) \
	NO_API virtual ~UZonefallShaderCacheSubsystem();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_ZonefallShaderCacheSubsystem_h_16_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_ZonefallShaderCacheSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_ZonefallShaderCacheSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_ZonefallShaderCacheSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_ZonefallShaderCacheSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallShaderCacheSubsystem;

// ********** End Class UZonefallShaderCacheSubsystem **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_ZonefallShaderCacheSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
