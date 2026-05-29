// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMode/ZonefallGameMode.h"

#ifdef UIWORLD_ZonefallGameMode_generated_h
#error "ZonefallGameMode.generated.h already included, missing '#pragma once' in ZonefallGameMode.h"
#endif
#define UIWORLD_ZonefallGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AZonefallGameMode ********************************************************
struct Z_Construct_UClass_AZonefallGameMode_Statics;
UIWORLD_API UClass* Z_Construct_UClass_AZonefallGameMode_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_GameMode_ZonefallGameMode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZonefallGameMode(); \
	friend struct ::Z_Construct_UClass_AZonefallGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_AZonefallGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AZonefallGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_AZonefallGameMode_NoRegister) \
	DECLARE_SERIALIZER(AZonefallGameMode)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_GameMode_ZonefallGameMode_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AZonefallGameMode(AZonefallGameMode&&) = delete; \
	AZonefallGameMode(const AZonefallGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZonefallGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZonefallGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZonefallGameMode) \
	NO_API virtual ~AZonefallGameMode();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_GameMode_ZonefallGameMode_h_16_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_GameMode_ZonefallGameMode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_GameMode_ZonefallGameMode_h_19_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_GameMode_ZonefallGameMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AZonefallGameMode;

// ********** End Class AZonefallGameMode **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_GameMode_ZonefallGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
