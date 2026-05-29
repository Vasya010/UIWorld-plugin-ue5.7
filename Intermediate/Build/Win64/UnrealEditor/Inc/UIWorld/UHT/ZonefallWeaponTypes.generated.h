// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/ZonefallWeaponTypes.h"

#ifdef UIWORLD_ZonefallWeaponTypes_generated_h
#error "ZonefallWeaponTypes.generated.h already included, missing '#pragma once' in ZonefallWeaponTypes.h"
#endif
#define UIWORLD_ZonefallWeaponTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FZonefallWeaponItem ***********************************************
struct Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics;
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Weapons_ZonefallWeaponTypes_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics; \
	UIWORLD_API static class UScriptStruct* StaticStruct();


struct FZonefallWeaponItem;
// ********** End ScriptStruct FZonefallWeaponItem *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Weapons_ZonefallWeaponTypes_h

// ********** Begin Enum EZonefallWeaponSlot *******************************************************
#define FOREACH_ENUM_EZONEFALLWEAPONSLOT(op) \
	op(EZonefallWeaponSlot::Unarmed) \
	op(EZonefallWeaponSlot::Sidearm) \
	op(EZonefallWeaponSlot::Longarm) \
	op(EZonefallWeaponSlot::Thrown) \
	op(EZonefallWeaponSlot::Melee) 

enum class EZonefallWeaponSlot : uint8;
template<> struct TIsUEnumClass<EZonefallWeaponSlot> { enum { Value = true }; };
template<> UIWORLD_NON_ATTRIBUTED_API UEnum* StaticEnum<EZonefallWeaponSlot>();
// ********** End Enum EZonefallWeaponSlot *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
