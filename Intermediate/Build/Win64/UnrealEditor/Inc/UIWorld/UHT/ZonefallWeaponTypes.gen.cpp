// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapons/ZonefallWeaponTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallWeaponTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UIWORLD_API UEnum* Z_Construct_UEnum_UIWorld_EZonefallWeaponSlot();
UIWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FZonefallWeaponItem();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EZonefallWeaponSlot *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EZonefallWeaponSlot;
static UEnum* EZonefallWeaponSlot_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EZonefallWeaponSlot.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EZonefallWeaponSlot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UIWorld_EZonefallWeaponSlot, (UObject*)Z_Construct_UPackage__Script_UIWorld(), TEXT("EZonefallWeaponSlot"));
	}
	return Z_Registration_Info_UEnum_EZonefallWeaponSlot.OuterSingleton;
}
template<> UIWORLD_NON_ATTRIBUTED_API UEnum* StaticEnum<EZonefallWeaponSlot>()
{
	return EZonefallWeaponSlot_StaticEnum();
}
struct Z_Construct_UEnum_UIWorld_EZonefallWeaponSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Broad weapon class \xe2\x80\x94 used to colour-code / group the weapon wheel. */" },
#endif
		{ "Longarm.DisplayName", "Long Arm" },
		{ "Longarm.Name", "EZonefallWeaponSlot::Longarm" },
		{ "Melee.DisplayName", "Melee" },
		{ "Melee.Name", "EZonefallWeaponSlot::Melee" },
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponTypes.h" },
		{ "Sidearm.DisplayName", "Sidearm" },
		{ "Sidearm.Name", "EZonefallWeaponSlot::Sidearm" },
		{ "Thrown.DisplayName", "Thrown" },
		{ "Thrown.Name", "EZonefallWeaponSlot::Thrown" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broad weapon class \xe2\x80\x94 used to colour-code / group the weapon wheel." },
#endif
		{ "Unarmed.DisplayName", "Unarmed" },
		{ "Unarmed.Name", "EZonefallWeaponSlot::Unarmed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EZonefallWeaponSlot::Unarmed", (int64)EZonefallWeaponSlot::Unarmed },
		{ "EZonefallWeaponSlot::Sidearm", (int64)EZonefallWeaponSlot::Sidearm },
		{ "EZonefallWeaponSlot::Longarm", (int64)EZonefallWeaponSlot::Longarm },
		{ "EZonefallWeaponSlot::Thrown", (int64)EZonefallWeaponSlot::Thrown },
		{ "EZonefallWeaponSlot::Melee", (int64)EZonefallWeaponSlot::Melee },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_UIWorld_EZonefallWeaponSlot_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UIWorld_EZonefallWeaponSlot_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UIWorld,
	nullptr,
	"EZonefallWeaponSlot",
	"EZonefallWeaponSlot",
	Z_Construct_UEnum_UIWorld_EZonefallWeaponSlot_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UIWorld_EZonefallWeaponSlot_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UIWorld_EZonefallWeaponSlot_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UIWorld_EZonefallWeaponSlot_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UIWorld_EZonefallWeaponSlot()
{
	if (!Z_Registration_Info_UEnum_EZonefallWeaponSlot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EZonefallWeaponSlot.InnerSingleton, Z_Construct_UEnum_UIWorld_EZonefallWeaponSlot_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EZonefallWeaponSlot.InnerSingleton;
}
// ********** End Enum EZonefallWeaponSlot *********************************************************

// ********** Begin ScriptStruct FZonefallWeaponItem ***********************************************
struct Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FZonefallWeaponItem); }
	static inline consteval int16 GetStructAlignment() { return alignof(FZonefallWeaponItem); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A weapon the character can own and hold. Stored in UZonefallWeaponInventoryComponent.\n * The mesh is held in the character's hand via AttachSocket + the relative transform.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A weapon the character can own and hold. Stored in UZonefallWeaponInventoryComponent.\nThe mesh is held in the character's hand via AttachSocket + the relative transform." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponId_MetaData[] = {
		{ "Category", "Zonefall|Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Zonefall|Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "Category", "Zonefall|Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Zonefall|Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mesh held in hand. Defaults to an engine basic shape if left null so the wheel still works.\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh held in hand. Defaults to an engine basic shape if left null so the wheel still works." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocket_MetaData[] = {
		{ "Category", "Zonefall|Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hand bone/socket on the character mesh to attach to.\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hand bone/socket on the character mesh to attach to." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeLocation_MetaData[] = {
		{ "Category", "Zonefall|Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation_MetaData[] = {
		{ "Category", "Zonefall|Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeScale_MetaData[] = {
		{ "Category", "Zonefall|Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoInClip_MetaData[] = {
		{ "Category", "Zonefall|Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoReserve_MetaData[] = {
		{ "Category", "Zonefall|Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClipSize_MetaData[] = {
		{ "Category", "Zonefall|Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Zonefall|Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "Category", "Zonefall|Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FZonefallWeaponItem constinit property declarations ***************
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WeaponMesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocket;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeScale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoInClip;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoReserve;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClipSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FZonefallWeaponItem constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZonefallWeaponItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FZonefallWeaponItem;
class UScriptStruct* FZonefallWeaponItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FZonefallWeaponItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FZonefallWeaponItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZonefallWeaponItem, (UObject*)Z_Construct_UPackage__Script_UIWorld(), TEXT("ZonefallWeaponItem"));
	}
	return Z_Registration_Info_UScriptStruct_FZonefallWeaponItem.OuterSingleton;
	}

// ********** Begin ScriptStruct FZonefallWeaponItem Property Definitions **************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_WeaponId = { "WeaponId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallWeaponItem, WeaponId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponId_MetaData), NewProp_WeaponId_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallWeaponItem, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallWeaponItem, Slot), Z_Construct_UEnum_UIWorld_EZonefallWeaponSlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) }; // 2836819591
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallWeaponItem, WeaponMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMesh_MetaData), NewProp_WeaponMesh_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_AttachSocket = { "AttachSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallWeaponItem, AttachSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachSocket_MetaData), NewProp_AttachSocket_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_RelativeLocation = { "RelativeLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallWeaponItem, RelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeLocation_MetaData), NewProp_RelativeLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_RelativeRotation = { "RelativeRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallWeaponItem, RelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeRotation_MetaData), NewProp_RelativeRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_RelativeScale = { "RelativeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallWeaponItem, RelativeScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeScale_MetaData), NewProp_RelativeScale_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_AmmoInClip = { "AmmoInClip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallWeaponItem, AmmoInClip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoInClip_MetaData), NewProp_AmmoInClip_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_AmmoReserve = { "AmmoReserve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallWeaponItem, AmmoReserve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoReserve_MetaData), NewProp_AmmoReserve_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_ClipSize = { "ClipSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallWeaponItem, ClipSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClipSize_MetaData), NewProp_ClipSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallWeaponItem, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallWeaponItem, Range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_WeaponId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_Slot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_WeaponMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_AttachSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_RelativeLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_RelativeRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_RelativeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_AmmoInClip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_AmmoReserve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_ClipSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewProp_Range,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FZonefallWeaponItem Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
	nullptr,
	&NewStructOps,
	"ZonefallWeaponItem",
	Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::PropPointers),
	sizeof(FZonefallWeaponItem),
	alignof(FZonefallWeaponItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FZonefallWeaponItem()
{
	if (!Z_Registration_Info_UScriptStruct_FZonefallWeaponItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FZonefallWeaponItem.InnerSingleton, Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FZonefallWeaponItem.InnerSingleton);
}
// ********** End ScriptStruct FZonefallWeaponItem *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Weapons_ZonefallWeaponTypes_h__Script_UIWorld_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EZonefallWeaponSlot_StaticEnum, TEXT("EZonefallWeaponSlot"), &Z_Registration_Info_UEnum_EZonefallWeaponSlot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2836819591U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FZonefallWeaponItem::StaticStruct, Z_Construct_UScriptStruct_FZonefallWeaponItem_Statics::NewStructOps, TEXT("ZonefallWeaponItem"),&Z_Registration_Info_UScriptStruct_FZonefallWeaponItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZonefallWeaponItem), 194336339U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Weapons_ZonefallWeaponTypes_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Weapons_ZonefallWeaponTypes_h__Script_UIWorld_3460638733{
	TEXT("/Script/UIWorld"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Weapons_ZonefallWeaponTypes_h__Script_UIWorld_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Weapons_ZonefallWeaponTypes_h__Script_UIWorld_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Weapons_ZonefallWeaponTypes_h__Script_UIWorld_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Weapons_ZonefallWeaponTypes_h__Script_UIWorld_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
