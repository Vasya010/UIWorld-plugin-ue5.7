// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "World/ZonefallMinimapCapture.h"

#ifdef UIWORLD_ZonefallMinimapCapture_generated_h
#error "ZonefallMinimapCapture.generated.h already included, missing '#pragma once' in ZonefallMinimapCapture.h"
#endif
#define UIWORLD_ZonefallMinimapCapture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;

// ********** Begin Class AZonefallMinimapCapture **************************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_World_ZonefallMinimapCapture_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOrthoWidth); \
	DECLARE_FUNCTION(execGetRenderTarget);


struct Z_Construct_UClass_AZonefallMinimapCapture_Statics;
UIWORLD_API UClass* Z_Construct_UClass_AZonefallMinimapCapture_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_World_ZonefallMinimapCapture_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZonefallMinimapCapture(); \
	friend struct ::Z_Construct_UClass_AZonefallMinimapCapture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_AZonefallMinimapCapture_NoRegister(); \
public: \
	DECLARE_CLASS2(AZonefallMinimapCapture, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_AZonefallMinimapCapture_NoRegister) \
	DECLARE_SERIALIZER(AZonefallMinimapCapture)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_World_ZonefallMinimapCapture_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AZonefallMinimapCapture(AZonefallMinimapCapture&&) = delete; \
	AZonefallMinimapCapture(const AZonefallMinimapCapture&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZonefallMinimapCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZonefallMinimapCapture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZonefallMinimapCapture) \
	NO_API virtual ~AZonefallMinimapCapture();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_World_ZonefallMinimapCapture_h_15_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_World_ZonefallMinimapCapture_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_World_ZonefallMinimapCapture_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_World_ZonefallMinimapCapture_h_18_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_World_ZonefallMinimapCapture_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AZonefallMinimapCapture;

// ********** End Class AZonefallMinimapCapture ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_World_ZonefallMinimapCapture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
