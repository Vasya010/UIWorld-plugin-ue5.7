// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/ZonefallWorldItem.h"

#ifdef UIWORLD_ZonefallWorldItem_generated_h
#error "ZonefallWorldItem.generated.h already included, missing '#pragma once' in ZonefallWorldItem.h"
#endif
#define UIWORLD_ZonefallWorldItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
class UZonefallInventoryComponent;
struct FHitResult;
struct FZonefallInventoryItem;

// ********** Begin Class AZonefallWorldItem *******************************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallWorldItem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleBeginOverlap); \
	DECLARE_FUNCTION(execOnRep_Item); \
	DECLARE_FUNCTION(execTryGiveTo); \
	DECLARE_FUNCTION(execInitializeFromItem);


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallWorldItem_h_20_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AZonefallWorldItem_Statics;
UIWORLD_API UClass* Z_Construct_UClass_AZonefallWorldItem_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallWorldItem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZonefallWorldItem(); \
	friend struct ::Z_Construct_UClass_AZonefallWorldItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_AZonefallWorldItem_NoRegister(); \
public: \
	DECLARE_CLASS2(AZonefallWorldItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_AZonefallWorldItem_NoRegister) \
	DECLARE_SERIALIZER(AZonefallWorldItem) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Item=NETFIELD_REP_START, \
		NETFIELD_REP_END=Item	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallWorldItem_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AZonefallWorldItem(AZonefallWorldItem&&) = delete; \
	AZonefallWorldItem(const AZonefallWorldItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZonefallWorldItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZonefallWorldItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZonefallWorldItem) \
	NO_API virtual ~AZonefallWorldItem();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallWorldItem_h_17_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallWorldItem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallWorldItem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallWorldItem_h_20_CALLBACK_WRAPPERS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallWorldItem_h_20_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallWorldItem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AZonefallWorldItem;

// ********** End Class AZonefallWorldItem *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallWorldItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
