// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Save/UIWorldSaveManager.h"

#ifdef UIWORLD_UIWorldSaveManager_generated_h
#error "UIWorldSaveManager.generated.h already included, missing '#pragma once' in UIWorldSaveManager.h"
#endif
#define UIWORLD_UIWorldSaveManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUIWorldSaveManager ******************************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Save_UIWorldSaveManager_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeleteSave); \
	DECLARE_FUNCTION(execLoadSavedLevelName); \
	DECLARE_FUNCTION(execSaveLevelProgress); \
	DECLARE_FUNCTION(execHasSave);


struct Z_Construct_UClass_UUIWorldSaveManager_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UUIWorldSaveManager_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Save_UIWorldSaveManager_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIWorldSaveManager(); \
	friend struct ::Z_Construct_UClass_UUIWorldSaveManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UUIWorldSaveManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIWorldSaveManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UUIWorldSaveManager_NoRegister) \
	DECLARE_SERIALIZER(UUIWorldSaveManager)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Save_UIWorldSaveManager_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIWorldSaveManager(UUIWorldSaveManager&&) = delete; \
	UUIWorldSaveManager(const UUIWorldSaveManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIWorldSaveManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIWorldSaveManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIWorldSaveManager) \
	NO_API virtual ~UUIWorldSaveManager();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Save_UIWorldSaveManager_h_7_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Save_UIWorldSaveManager_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Save_UIWorldSaveManager_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Save_UIWorldSaveManager_h_10_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Save_UIWorldSaveManager_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIWorldSaveManager;

// ********** End Class UUIWorldSaveManager ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Save_UIWorldSaveManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
