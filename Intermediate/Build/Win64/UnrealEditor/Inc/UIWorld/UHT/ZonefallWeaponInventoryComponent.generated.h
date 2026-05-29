// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/ZonefallWeaponInventoryComponent.h"

#ifdef UIWORLD_ZonefallWeaponInventoryComponent_generated_h
#error "ZonefallWeaponInventoryComponent.generated.h already included, missing '#pragma once' in ZonefallWeaponInventoryComponent.h"
#endif
#define UIWORLD_ZonefallWeaponInventoryComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FZonefallWeaponItem;

// ********** Begin Delegate FZonefallWeaponsChanged ***********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Weapons_ZonefallWeaponInventoryComponent_h_8_DELEGATE \
UIWORLD_API void FZonefallWeaponsChanged_DelegateWrapper(const FMulticastScriptDelegate& ZonefallWeaponsChanged);


// ********** End Delegate FZonefallWeaponsChanged *************************************************

// ********** Begin Delegate FZonefallEquippedWeaponChanged ****************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Weapons_ZonefallWeaponInventoryComponent_h_9_DELEGATE \
UIWORLD_API void FZonefallEquippedWeaponChanged_DelegateWrapper(const FMulticastScriptDelegate& ZonefallEquippedWeaponChanged, int32 EquippedIndex);


// ********** End Delegate FZonefallEquippedWeaponChanged ******************************************

// ********** Begin Class UZonefallWeaponInventoryComponent ****************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Weapons_ZonefallWeaponInventoryComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Equipped); \
	DECLARE_FUNCTION(execOnRep_Weapons); \
	DECLARE_FUNCTION(execConsumeAmmoForShot); \
	DECLARE_FUNCTION(execHasAmmoForShot); \
	DECLARE_FUNCTION(execGetEquippedWeapon); \
	DECLARE_FUNCTION(execHasEquippedWeapon); \
	DECLARE_FUNCTION(execGetEquippedIndex); \
	DECLARE_FUNCTION(execGetWeapons); \
	DECLARE_FUNCTION(execEquipPrevious); \
	DECLARE_FUNCTION(execEquipNext); \
	DECLARE_FUNCTION(execEquipIndex); \
	DECLARE_FUNCTION(execAddWeapon);


struct Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallWeaponInventoryComponent_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Weapons_ZonefallWeaponInventoryComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallWeaponInventoryComponent(); \
	friend struct ::Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallWeaponInventoryComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallWeaponInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallWeaponInventoryComponent_NoRegister) \
	DECLARE_SERIALIZER(UZonefallWeaponInventoryComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Weapons=NETFIELD_REP_START, \
		EquippedIndex, \
		NETFIELD_REP_END=EquippedIndex	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Weapons_ZonefallWeaponInventoryComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallWeaponInventoryComponent(UZonefallWeaponInventoryComponent&&) = delete; \
	UZonefallWeaponInventoryComponent(const UZonefallWeaponInventoryComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallWeaponInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallWeaponInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UZonefallWeaponInventoryComponent) \
	NO_API virtual ~UZonefallWeaponInventoryComponent();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Weapons_ZonefallWeaponInventoryComponent_h_16_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Weapons_ZonefallWeaponInventoryComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Weapons_ZonefallWeaponInventoryComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Weapons_ZonefallWeaponInventoryComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Weapons_ZonefallWeaponInventoryComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallWeaponInventoryComponent;

// ********** End Class UZonefallWeaponInventoryComponent ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Weapons_ZonefallWeaponInventoryComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
