// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapons/ZonefallWeaponInventoryComponent.h"
#include "Weapons/ZonefallWeaponTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallWeaponInventoryComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallWeaponInventoryComponent();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallWeaponInventoryComponent_NoRegister();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_ZonefallEquippedWeaponChanged__DelegateSignature();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_ZonefallWeaponsChanged__DelegateSignature();
UIWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FZonefallWeaponItem();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FZonefallWeaponsChanged ***********************************************
struct Z_Construct_UDelegateFunction_UIWorld_ZonefallWeaponsChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponInventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FZonefallWeaponsChanged constinit property declarations ***************
// ********** End Delegate FZonefallWeaponsChanged constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_ZonefallWeaponsChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "ZonefallWeaponsChanged__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_ZonefallWeaponsChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_ZonefallWeaponsChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UIWorld_ZonefallWeaponsChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_ZonefallWeaponsChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FZonefallWeaponsChanged_DelegateWrapper(const FMulticastScriptDelegate& ZonefallWeaponsChanged)
{
	ZonefallWeaponsChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FZonefallWeaponsChanged *************************************************

// ********** Begin Delegate FZonefallEquippedWeaponChanged ****************************************
struct Z_Construct_UDelegateFunction_UIWorld_ZonefallEquippedWeaponChanged__DelegateSignature_Statics
{
	struct _Script_UIWorld_eventZonefallEquippedWeaponChanged_Parms
	{
		int32 EquippedIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponInventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FZonefallEquippedWeaponChanged constinit property declarations ********
	static const UECodeGen_Private::FIntPropertyParams NewProp_EquippedIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FZonefallEquippedWeaponChanged constinit property declarations **********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FZonefallEquippedWeaponChanged Property Definitions *******************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UIWorld_ZonefallEquippedWeaponChanged__DelegateSignature_Statics::NewProp_EquippedIndex = { "EquippedIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UIWorld_eventZonefallEquippedWeaponChanged_Parms, EquippedIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UIWorld_ZonefallEquippedWeaponChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIWorld_ZonefallEquippedWeaponChanged__DelegateSignature_Statics::NewProp_EquippedIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_ZonefallEquippedWeaponChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FZonefallEquippedWeaponChanged Property Definitions *********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_ZonefallEquippedWeaponChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "ZonefallEquippedWeaponChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_UIWorld_ZonefallEquippedWeaponChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_ZonefallEquippedWeaponChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_UIWorld_ZonefallEquippedWeaponChanged__DelegateSignature_Statics::_Script_UIWorld_eventZonefallEquippedWeaponChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_ZonefallEquippedWeaponChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_ZonefallEquippedWeaponChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UIWorld_ZonefallEquippedWeaponChanged__DelegateSignature_Statics::_Script_UIWorld_eventZonefallEquippedWeaponChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UIWorld_ZonefallEquippedWeaponChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_ZonefallEquippedWeaponChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FZonefallEquippedWeaponChanged_DelegateWrapper(const FMulticastScriptDelegate& ZonefallEquippedWeaponChanged, int32 EquippedIndex)
{
	struct _Script_UIWorld_eventZonefallEquippedWeaponChanged_Parms
	{
		int32 EquippedIndex;
	};
	_Script_UIWorld_eventZonefallEquippedWeaponChanged_Parms Parms;
	Parms.EquippedIndex=EquippedIndex;
	ZonefallEquippedWeaponChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FZonefallEquippedWeaponChanged ******************************************

// ********** Begin Class UZonefallWeaponInventoryComponent Function AddWeapon *********************
struct Z_Construct_UFunction_UZonefallWeaponInventoryComponent_AddWeapon_Statics
{
	struct ZonefallWeaponInventoryComponent_eventAddWeapon_Parms
	{
		FZonefallWeaponItem Weapon;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds a weapon (server). Returns the index, or INDEX_NONE on failure. */" },
#endif
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a weapon (server). Returns the index, or INDEX_NONE on failure." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddWeapon constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddWeapon constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddWeapon Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZonefallWeaponInventoryComponent_AddWeapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallWeaponInventoryComponent_eventAddWeapon_Parms, Weapon), Z_Construct_UScriptStruct_FZonefallWeaponItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon_MetaData), NewProp_Weapon_MetaData) }; // 194336339
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZonefallWeaponInventoryComponent_AddWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallWeaponInventoryComponent_eventAddWeapon_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallWeaponInventoryComponent_AddWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallWeaponInventoryComponent_AddWeapon_Statics::NewProp_Weapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallWeaponInventoryComponent_AddWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_AddWeapon_Statics::PropPointers) < 2048);
// ********** End Function AddWeapon Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallWeaponInventoryComponent_AddWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallWeaponInventoryComponent, nullptr, "AddWeapon", 	Z_Construct_UFunction_UZonefallWeaponInventoryComponent_AddWeapon_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_AddWeapon_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_AddWeapon_Statics::ZonefallWeaponInventoryComponent_eventAddWeapon_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_AddWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallWeaponInventoryComponent_AddWeapon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_AddWeapon_Statics::ZonefallWeaponInventoryComponent_eventAddWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallWeaponInventoryComponent_AddWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallWeaponInventoryComponent_AddWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallWeaponInventoryComponent::execAddWeapon)
{
	P_GET_STRUCT_REF(FZonefallWeaponItem,Z_Param_Out_Weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddWeapon(Z_Param_Out_Weapon);
	P_NATIVE_END;
}
// ********** End Class UZonefallWeaponInventoryComponent Function AddWeapon ***********************

// ********** Begin Class UZonefallWeaponInventoryComponent Function ConsumeAmmoForShot ************
struct Z_Construct_UFunction_UZonefallWeaponInventoryComponent_ConsumeAmmoForShot_Statics
{
	struct ZonefallWeaponInventoryComponent_eventConsumeAmmoForShot_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spends one round from the equipped weapon's clip (server). Returns true if a shot was available. */" },
#endif
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spends one round from the equipped weapon's clip (server). Returns true if a shot was available." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ConsumeAmmoForShot constinit property declarations ********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConsumeAmmoForShot constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConsumeAmmoForShot Property Definitions *******************************
void Z_Construct_UFunction_UZonefallWeaponInventoryComponent_ConsumeAmmoForShot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ZonefallWeaponInventoryComponent_eventConsumeAmmoForShot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZonefallWeaponInventoryComponent_ConsumeAmmoForShot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallWeaponInventoryComponent_eventConsumeAmmoForShot_Parms), &Z_Construct_UFunction_UZonefallWeaponInventoryComponent_ConsumeAmmoForShot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallWeaponInventoryComponent_ConsumeAmmoForShot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallWeaponInventoryComponent_ConsumeAmmoForShot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_ConsumeAmmoForShot_Statics::PropPointers) < 2048);
// ********** End Function ConsumeAmmoForShot Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallWeaponInventoryComponent_ConsumeAmmoForShot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallWeaponInventoryComponent, nullptr, "ConsumeAmmoForShot", 	Z_Construct_UFunction_UZonefallWeaponInventoryComponent_ConsumeAmmoForShot_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_ConsumeAmmoForShot_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_ConsumeAmmoForShot_Statics::ZonefallWeaponInventoryComponent_eventConsumeAmmoForShot_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_ConsumeAmmoForShot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallWeaponInventoryComponent_ConsumeAmmoForShot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_ConsumeAmmoForShot_Statics::ZonefallWeaponInventoryComponent_eventConsumeAmmoForShot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallWeaponInventoryComponent_ConsumeAmmoForShot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallWeaponInventoryComponent_ConsumeAmmoForShot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallWeaponInventoryComponent::execConsumeAmmoForShot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConsumeAmmoForShot();
	P_NATIVE_END;
}
// ********** End Class UZonefallWeaponInventoryComponent Function ConsumeAmmoForShot **************

// ********** Begin Class UZonefallWeaponInventoryComponent Function EquipIndex ********************
struct Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipIndex_Statics
{
	struct ZonefallWeaponInventoryComponent_eventEquipIndex_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Equips a weapon by index (server). -1 = holster / unarmed. */" },
#endif
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equips a weapon by index (server). -1 = holster / unarmed." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EquipIndex constinit property declarations ****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EquipIndex constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EquipIndex Property Definitions ***************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallWeaponInventoryComponent_eventEquipIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipIndex_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipIndex_Statics::PropPointers) < 2048);
// ********** End Function EquipIndex Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallWeaponInventoryComponent, nullptr, "EquipIndex", 	Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipIndex_Statics::ZonefallWeaponInventoryComponent_eventEquipIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipIndex_Statics::ZonefallWeaponInventoryComponent_eventEquipIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallWeaponInventoryComponent::execEquipIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EquipIndex(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UZonefallWeaponInventoryComponent Function EquipIndex **********************

// ********** Begin Class UZonefallWeaponInventoryComponent Function EquipNext *********************
struct Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipNext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponInventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EquipNext constinit property declarations *****************************
// ********** End Function EquipNext constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipNext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallWeaponInventoryComponent, nullptr, "EquipNext", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipNext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipNext_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipNext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipNext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallWeaponInventoryComponent::execEquipNext)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EquipNext();
	P_NATIVE_END;
}
// ********** End Class UZonefallWeaponInventoryComponent Function EquipNext ***********************

// ********** Begin Class UZonefallWeaponInventoryComponent Function EquipPrevious *****************
struct Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipPrevious_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponInventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EquipPrevious constinit property declarations *************************
// ********** End Function EquipPrevious constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipPrevious_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallWeaponInventoryComponent, nullptr, "EquipPrevious", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipPrevious_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipPrevious_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipPrevious()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipPrevious_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallWeaponInventoryComponent::execEquipPrevious)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EquipPrevious();
	P_NATIVE_END;
}
// ********** End Class UZonefallWeaponInventoryComponent Function EquipPrevious *******************

// ********** Begin Class UZonefallWeaponInventoryComponent Function GetEquippedIndex **************
struct Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedIndex_Statics
{
	struct ZonefallWeaponInventoryComponent_eventGetEquippedIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponInventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEquippedIndex constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEquippedIndex constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEquippedIndex Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallWeaponInventoryComponent_eventGetEquippedIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedIndex_Statics::PropPointers) < 2048);
// ********** End Function GetEquippedIndex Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallWeaponInventoryComponent, nullptr, "GetEquippedIndex", 	Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedIndex_Statics::ZonefallWeaponInventoryComponent_eventGetEquippedIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedIndex_Statics::ZonefallWeaponInventoryComponent_eventGetEquippedIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallWeaponInventoryComponent::execGetEquippedIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetEquippedIndex();
	P_NATIVE_END;
}
// ********** End Class UZonefallWeaponInventoryComponent Function GetEquippedIndex ****************

// ********** Begin Class UZonefallWeaponInventoryComponent Function GetEquippedWeapon *************
struct Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedWeapon_Statics
{
	struct ZonefallWeaponInventoryComponent_eventGetEquippedWeapon_Parms
	{
		FZonefallWeaponItem ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the equipped weapon (or an invalid default if unarmed). */" },
#endif
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the equipped weapon (or an invalid default if unarmed)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetEquippedWeapon constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEquippedWeapon constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEquippedWeapon Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallWeaponInventoryComponent_eventGetEquippedWeapon_Parms, ReturnValue), Z_Construct_UScriptStruct_FZonefallWeaponItem, METADATA_PARAMS(0, nullptr) }; // 194336339
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedWeapon_Statics::PropPointers) < 2048);
// ********** End Function GetEquippedWeapon Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallWeaponInventoryComponent, nullptr, "GetEquippedWeapon", 	Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedWeapon_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedWeapon_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedWeapon_Statics::ZonefallWeaponInventoryComponent_eventGetEquippedWeapon_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedWeapon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedWeapon_Statics::ZonefallWeaponInventoryComponent_eventGetEquippedWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallWeaponInventoryComponent::execGetEquippedWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FZonefallWeaponItem*)Z_Param__Result=P_THIS->GetEquippedWeapon();
	P_NATIVE_END;
}
// ********** End Class UZonefallWeaponInventoryComponent Function GetEquippedWeapon ***************

// ********** Begin Class UZonefallWeaponInventoryComponent Function GetWeapons ********************
struct Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetWeapons_Statics
{
	struct ZonefallWeaponInventoryComponent_eventGetWeapons_Parms
	{
		TArray<FZonefallWeaponItem> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWeapons constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWeapons constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWeapons Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetWeapons_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FZonefallWeaponItem, METADATA_PARAMS(0, nullptr) }; // 194336339
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetWeapons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallWeaponInventoryComponent_eventGetWeapons_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 194336339
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetWeapons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetWeapons_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetWeapons_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetWeapons_Statics::PropPointers) < 2048);
// ********** End Function GetWeapons Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetWeapons_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallWeaponInventoryComponent, nullptr, "GetWeapons", 	Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetWeapons_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetWeapons_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetWeapons_Statics::ZonefallWeaponInventoryComponent_eventGetWeapons_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetWeapons_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetWeapons_Statics::ZonefallWeaponInventoryComponent_eventGetWeapons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallWeaponInventoryComponent::execGetWeapons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FZonefallWeaponItem>*)Z_Param__Result=P_THIS->GetWeapons();
	P_NATIVE_END;
}
// ********** End Class UZonefallWeaponInventoryComponent Function GetWeapons **********************

// ********** Begin Class UZonefallWeaponInventoryComponent Function HasAmmoForShot ****************
struct Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasAmmoForShot_Statics
{
	struct ZonefallWeaponInventoryComponent_eventHasAmmoForShot_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True if the equipped weapon can fire (clip, reserve reload, or melee). */" },
#endif
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if the equipped weapon can fire (clip, reserve reload, or melee)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function HasAmmoForShot constinit property declarations ************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasAmmoForShot constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasAmmoForShot Property Definitions ***********************************
void Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasAmmoForShot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ZonefallWeaponInventoryComponent_eventHasAmmoForShot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasAmmoForShot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallWeaponInventoryComponent_eventHasAmmoForShot_Parms), &Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasAmmoForShot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasAmmoForShot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasAmmoForShot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasAmmoForShot_Statics::PropPointers) < 2048);
// ********** End Function HasAmmoForShot Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasAmmoForShot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallWeaponInventoryComponent, nullptr, "HasAmmoForShot", 	Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasAmmoForShot_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasAmmoForShot_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasAmmoForShot_Statics::ZonefallWeaponInventoryComponent_eventHasAmmoForShot_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasAmmoForShot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasAmmoForShot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasAmmoForShot_Statics::ZonefallWeaponInventoryComponent_eventHasAmmoForShot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasAmmoForShot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasAmmoForShot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallWeaponInventoryComponent::execHasAmmoForShot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAmmoForShot();
	P_NATIVE_END;
}
// ********** End Class UZonefallWeaponInventoryComponent Function HasAmmoForShot ******************

// ********** Begin Class UZonefallWeaponInventoryComponent Function HasEquippedWeapon *************
struct Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasEquippedWeapon_Statics
{
	struct ZonefallWeaponInventoryComponent_eventHasEquippedWeapon_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponInventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasEquippedWeapon constinit property declarations *********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasEquippedWeapon constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasEquippedWeapon Property Definitions ********************************
void Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasEquippedWeapon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ZonefallWeaponInventoryComponent_eventHasEquippedWeapon_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasEquippedWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallWeaponInventoryComponent_eventHasEquippedWeapon_Parms), &Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasEquippedWeapon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasEquippedWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasEquippedWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasEquippedWeapon_Statics::PropPointers) < 2048);
// ********** End Function HasEquippedWeapon Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasEquippedWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallWeaponInventoryComponent, nullptr, "HasEquippedWeapon", 	Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasEquippedWeapon_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasEquippedWeapon_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasEquippedWeapon_Statics::ZonefallWeaponInventoryComponent_eventHasEquippedWeapon_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasEquippedWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasEquippedWeapon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasEquippedWeapon_Statics::ZonefallWeaponInventoryComponent_eventHasEquippedWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasEquippedWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasEquippedWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallWeaponInventoryComponent::execHasEquippedWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasEquippedWeapon();
	P_NATIVE_END;
}
// ********** End Class UZonefallWeaponInventoryComponent Function HasEquippedWeapon ***************

// ********** Begin Class UZonefallWeaponInventoryComponent Function OnRep_Equipped ****************
struct Z_Construct_UFunction_UZonefallWeaponInventoryComponent_OnRep_Equipped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponInventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Equipped constinit property declarations ************************
// ********** End Function OnRep_Equipped constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallWeaponInventoryComponent_OnRep_Equipped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallWeaponInventoryComponent, nullptr, "OnRep_Equipped", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_OnRep_Equipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallWeaponInventoryComponent_OnRep_Equipped_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallWeaponInventoryComponent_OnRep_Equipped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallWeaponInventoryComponent_OnRep_Equipped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallWeaponInventoryComponent::execOnRep_Equipped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Equipped();
	P_NATIVE_END;
}
// ********** End Class UZonefallWeaponInventoryComponent Function OnRep_Equipped ******************

// ********** Begin Class UZonefallWeaponInventoryComponent Function OnRep_Weapons *****************
struct Z_Construct_UFunction_UZonefallWeaponInventoryComponent_OnRep_Weapons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponInventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Weapons constinit property declarations *************************
// ********** End Function OnRep_Weapons constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallWeaponInventoryComponent_OnRep_Weapons_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallWeaponInventoryComponent, nullptr, "OnRep_Weapons", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponInventoryComponent_OnRep_Weapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallWeaponInventoryComponent_OnRep_Weapons_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallWeaponInventoryComponent_OnRep_Weapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallWeaponInventoryComponent_OnRep_Weapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallWeaponInventoryComponent::execOnRep_Weapons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Weapons();
	P_NATIVE_END;
}
// ********** End Class UZonefallWeaponInventoryComponent Function OnRep_Weapons *******************

// ********** Begin Class UZonefallWeaponInventoryComponent ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallWeaponInventoryComponent;
UClass* UZonefallWeaponInventoryComponent::GetPrivateStaticClass()
{
	using TClass = UZonefallWeaponInventoryComponent;
	if (!Z_Registration_Info_UClass_UZonefallWeaponInventoryComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallWeaponInventoryComponent"),
			Z_Registration_Info_UClass_UZonefallWeaponInventoryComponent.InnerSingleton,
			StaticRegisterNativesUZonefallWeaponInventoryComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UZonefallWeaponInventoryComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallWeaponInventoryComponent_NoRegister()
{
	return UZonefallWeaponInventoryComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Zonefall" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Server-authoritative, replicated store of the weapons a character owns, plus which one is\n * currently equipped. Replicates to everyone (so remote players see the weapon in hand).\n * The character listens to OnEquippedChanged to attach the right mesh.\n */" },
#endif
		{ "IncludePath", "Weapons/ZonefallWeaponInventoryComponent.h" },
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server-authoritative, replicated store of the weapons a character owns, plus which one is\ncurrently equipped. Replicates to everyone (so remote players see the weapon in hand).\nThe character listens to OnEquippedChanged to attach the right mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWeaponsChanged_MetaData[] = {
		{ "Category", "Zonefall|Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEquippedChanged_MetaData[] = {
		{ "Category", "Zonefall|Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSeedDefaultWeapons_MetaData[] = {
		{ "Category", "Zonefall|Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, seeds a few placeholder weapons on the server when empty (so the wheel has content).\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, seeds a few placeholder weapons on the server when empty (so the wheel has content)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapons_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/ZonefallWeaponInventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallWeaponInventoryComponent constinit property declarations ********
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeaponsChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEquippedChanged;
	static void NewProp_bSeedDefaultWeapons_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSeedDefaultWeapons;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Weapons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Weapons;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EquippedIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallWeaponInventoryComponent constinit property declarations **********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddWeapon"), .Pointer = &UZonefallWeaponInventoryComponent::execAddWeapon },
		{ .NameUTF8 = UTF8TEXT("ConsumeAmmoForShot"), .Pointer = &UZonefallWeaponInventoryComponent::execConsumeAmmoForShot },
		{ .NameUTF8 = UTF8TEXT("EquipIndex"), .Pointer = &UZonefallWeaponInventoryComponent::execEquipIndex },
		{ .NameUTF8 = UTF8TEXT("EquipNext"), .Pointer = &UZonefallWeaponInventoryComponent::execEquipNext },
		{ .NameUTF8 = UTF8TEXT("EquipPrevious"), .Pointer = &UZonefallWeaponInventoryComponent::execEquipPrevious },
		{ .NameUTF8 = UTF8TEXT("GetEquippedIndex"), .Pointer = &UZonefallWeaponInventoryComponent::execGetEquippedIndex },
		{ .NameUTF8 = UTF8TEXT("GetEquippedWeapon"), .Pointer = &UZonefallWeaponInventoryComponent::execGetEquippedWeapon },
		{ .NameUTF8 = UTF8TEXT("GetWeapons"), .Pointer = &UZonefallWeaponInventoryComponent::execGetWeapons },
		{ .NameUTF8 = UTF8TEXT("HasAmmoForShot"), .Pointer = &UZonefallWeaponInventoryComponent::execHasAmmoForShot },
		{ .NameUTF8 = UTF8TEXT("HasEquippedWeapon"), .Pointer = &UZonefallWeaponInventoryComponent::execHasEquippedWeapon },
		{ .NameUTF8 = UTF8TEXT("OnRep_Equipped"), .Pointer = &UZonefallWeaponInventoryComponent::execOnRep_Equipped },
		{ .NameUTF8 = UTF8TEXT("OnRep_Weapons"), .Pointer = &UZonefallWeaponInventoryComponent::execOnRep_Weapons },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallWeaponInventoryComponent_AddWeapon, "AddWeapon" }, // 1983678995
		{ &Z_Construct_UFunction_UZonefallWeaponInventoryComponent_ConsumeAmmoForShot, "ConsumeAmmoForShot" }, // 575600769
		{ &Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipIndex, "EquipIndex" }, // 3615373212
		{ &Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipNext, "EquipNext" }, // 260081484
		{ &Z_Construct_UFunction_UZonefallWeaponInventoryComponent_EquipPrevious, "EquipPrevious" }, // 566682979
		{ &Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedIndex, "GetEquippedIndex" }, // 1700115222
		{ &Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetEquippedWeapon, "GetEquippedWeapon" }, // 512884357
		{ &Z_Construct_UFunction_UZonefallWeaponInventoryComponent_GetWeapons, "GetWeapons" }, // 3145968804
		{ &Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasAmmoForShot, "HasAmmoForShot" }, // 1721486606
		{ &Z_Construct_UFunction_UZonefallWeaponInventoryComponent_HasEquippedWeapon, "HasEquippedWeapon" }, // 1183279364
		{ &Z_Construct_UFunction_UZonefallWeaponInventoryComponent_OnRep_Equipped, "OnRep_Equipped" }, // 2043420965
		{ &Z_Construct_UFunction_UZonefallWeaponInventoryComponent_OnRep_Weapons, "OnRep_Weapons" }, // 763272445
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallWeaponInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics

// ********** Begin Class UZonefallWeaponInventoryComponent Property Definitions *******************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics::NewProp_OnWeaponsChanged = { "OnWeaponsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallWeaponInventoryComponent, OnWeaponsChanged), Z_Construct_UDelegateFunction_UIWorld_ZonefallWeaponsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWeaponsChanged_MetaData), NewProp_OnWeaponsChanged_MetaData) }; // 1548656724
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics::NewProp_OnEquippedChanged = { "OnEquippedChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallWeaponInventoryComponent, OnEquippedChanged), Z_Construct_UDelegateFunction_UIWorld_ZonefallEquippedWeaponChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEquippedChanged_MetaData), NewProp_OnEquippedChanged_MetaData) }; // 2149331808
void Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics::NewProp_bSeedDefaultWeapons_SetBit(void* Obj)
{
	((UZonefallWeaponInventoryComponent*)Obj)->bSeedDefaultWeapons = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics::NewProp_bSeedDefaultWeapons = { "bSeedDefaultWeapons", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallWeaponInventoryComponent), &Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics::NewProp_bSeedDefaultWeapons_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSeedDefaultWeapons_MetaData), NewProp_bSeedDefaultWeapons_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics::NewProp_Weapons_Inner = { "Weapons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FZonefallWeaponItem, METADATA_PARAMS(0, nullptr) }; // 194336339
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics::NewProp_Weapons = { "Weapons", "OnRep_Weapons", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallWeaponInventoryComponent, Weapons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapons_MetaData), NewProp_Weapons_MetaData) }; // 194336339
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics::NewProp_EquippedIndex = { "EquippedIndex", "OnRep_Equipped", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallWeaponInventoryComponent, EquippedIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedIndex_MetaData), NewProp_EquippedIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics::NewProp_OnWeaponsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics::NewProp_OnEquippedChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics::NewProp_bSeedDefaultWeapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics::NewProp_Weapons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics::NewProp_Weapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics::NewProp_EquippedIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics::PropPointers) < 2048);
// ********** End Class UZonefallWeaponInventoryComponent Property Definitions *********************
UObject* (*const Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics::ClassParams = {
	&UZonefallWeaponInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics::Class_MetaDataParams)
};
void UZonefallWeaponInventoryComponent::StaticRegisterNativesUZonefallWeaponInventoryComponent()
{
	UClass* Class = UZonefallWeaponInventoryComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallWeaponInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UZonefallWeaponInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallWeaponInventoryComponent.OuterSingleton, Z_Construct_UClass_UZonefallWeaponInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallWeaponInventoryComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UZonefallWeaponInventoryComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Weapons(TEXT("Weapons"));
	static FName Name_EquippedIndex(TEXT("EquippedIndex"));
	const bool bIsValid = true
		&& Name_Weapons == ClassReps[(int32)ENetFields_Private::Weapons].Property->GetFName()
		&& Name_EquippedIndex == ClassReps[(int32)ENetFields_Private::EquippedIndex].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UZonefallWeaponInventoryComponent"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallWeaponInventoryComponent);
UZonefallWeaponInventoryComponent::~UZonefallWeaponInventoryComponent() {}
// ********** End Class UZonefallWeaponInventoryComponent ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Weapons_ZonefallWeaponInventoryComponent_h__Script_UIWorld_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZonefallWeaponInventoryComponent, UZonefallWeaponInventoryComponent::StaticClass, TEXT("UZonefallWeaponInventoryComponent"), &Z_Registration_Info_UClass_UZonefallWeaponInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallWeaponInventoryComponent), 1301971019U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Weapons_ZonefallWeaponInventoryComponent_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Weapons_ZonefallWeaponInventoryComponent_h__Script_UIWorld_906521331{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Weapons_ZonefallWeaponInventoryComponent_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Weapons_ZonefallWeaponInventoryComponent_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
