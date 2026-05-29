// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/ZonefallInventoryComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallInventoryComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_AZonefallWorldItem_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallInventoryComponent();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallInventoryComponent_NoRegister();
UIWORLD_API UEnum* Z_Construct_UEnum_UIWorld_EZonefallItemCategory();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_ZonefallInventoryChanged__DelegateSignature();
UIWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FZonefallInventoryItem();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EZonefallItemCategory *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EZonefallItemCategory;
static UEnum* EZonefallItemCategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EZonefallItemCategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EZonefallItemCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UIWorld_EZonefallItemCategory, (UObject*)Z_Construct_UPackage__Script_UIWorld(), TEXT("EZonefallItemCategory"));
	}
	return Z_Registration_Info_UEnum_EZonefallItemCategory.OuterSingleton;
}
template<> UIWORLD_NON_ATTRIBUTED_API UEnum* StaticEnum<EZonefallItemCategory>()
{
	return EZonefallItemCategory_StaticEnum();
}
struct Z_Construct_UEnum_UIWorld_EZonefallItemCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** RDR2-satchel-style categories used by the inventory tabs. */" },
#endif
		{ "Documents.DisplayName", "Documents" },
		{ "Documents.Name", "EZonefallItemCategory::Documents" },
		{ "Kit.DisplayName", "Kit" },
		{ "Kit.Name", "EZonefallItemCategory::Kit" },
		{ "Materials.Comment", "// food / consumables\n" },
		{ "Materials.DisplayName", "Materials" },
		{ "Materials.Name", "EZonefallItemCategory::Materials" },
		{ "Materials.ToolTip", "food / consumables" },
		{ "ModuleRelativePath", "Public/Inventory/ZonefallInventoryComponent.h" },
		{ "Other.DisplayName", "Other" },
		{ "Other.Name", "EZonefallItemCategory::Other" },
		{ "Provisions.DisplayName", "Provisions" },
		{ "Provisions.Name", "EZonefallItemCategory::Provisions" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RDR2-satchel-style categories used by the inventory tabs." },
#endif
		{ "Valuables.Comment", "// crafting components\n" },
		{ "Valuables.DisplayName", "Valuables" },
		{ "Valuables.Name", "EZonefallItemCategory::Valuables" },
		{ "Valuables.ToolTip", "crafting components" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EZonefallItemCategory::Provisions", (int64)EZonefallItemCategory::Provisions },
		{ "EZonefallItemCategory::Materials", (int64)EZonefallItemCategory::Materials },
		{ "EZonefallItemCategory::Valuables", (int64)EZonefallItemCategory::Valuables },
		{ "EZonefallItemCategory::Documents", (int64)EZonefallItemCategory::Documents },
		{ "EZonefallItemCategory::Kit", (int64)EZonefallItemCategory::Kit },
		{ "EZonefallItemCategory::Other", (int64)EZonefallItemCategory::Other },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_UIWorld_EZonefallItemCategory_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UIWorld_EZonefallItemCategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UIWorld,
	nullptr,
	"EZonefallItemCategory",
	"EZonefallItemCategory",
	Z_Construct_UEnum_UIWorld_EZonefallItemCategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UIWorld_EZonefallItemCategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UIWorld_EZonefallItemCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UIWorld_EZonefallItemCategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UIWorld_EZonefallItemCategory()
{
	if (!Z_Registration_Info_UEnum_EZonefallItemCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EZonefallItemCategory.InnerSingleton, Z_Construct_UEnum_UIWorld_EZonefallItemCategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EZonefallItemCategory.InnerSingleton;
}
// ********** End Enum EZonefallItemCategory *******************************************************

// ********** Begin ScriptStruct FZonefallInventoryItem ********************************************
struct Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FZonefallInventoryItem); }
	static inline consteval int16 GetStructAlignment() { return alignof(FZonefallInventoryItem); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A single inventory entry. Designed to replicate cleanly to the owning client. */" },
#endif
		{ "ModuleRelativePath", "Public/Inventory/ZonefallInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A single inventory entry. Designed to replicate cleanly to the owning client." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "Category", "Zonefall|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/ZonefallInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "Zonefall|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Which satchel tab this item lives under.\n" },
#endif
		{ "ModuleRelativePath", "Public/Inventory/ZonefallInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Which satchel tab this item lives under." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Zonefall|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Longer flavour/usage text shown in the detail panel.\n" },
#endif
		{ "ModuleRelativePath", "Public/Inventory/ZonefallInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Longer flavour/usage text shown in the detail panel." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConsumable_MetaData[] = {
		{ "Category", "Zonefall|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, USE consumes one of this item (food etc.).\n" },
#endif
		{ "ModuleRelativePath", "Public/Inventory/ZonefallInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, USE consumes one of this item (food etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Zonefall|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/ZonefallInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "Zonefall|Inventory" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Inventory/ZonefallInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStack_MetaData[] = {
		{ "Category", "Zonefall|Inventory" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Inventory/ZonefallInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Zonefall|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/ZonefallInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupClass_MetaData[] = {
		{ "Category", "Zonefall|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The world actor class that represents this item when dropped / picked up.\n" },
#endif
		{ "ModuleRelativePath", "Public/Inventory/ZonefallInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The world actor class that represents this item when dropped / picked up." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FZonefallInventoryItem constinit property declarations ************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Category;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static void NewProp_bConsumable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumable;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStack;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PickupClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FZonefallInventoryItem constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZonefallInventoryItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FZonefallInventoryItem;
class UScriptStruct* FZonefallInventoryItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FZonefallInventoryItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FZonefallInventoryItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZonefallInventoryItem, (UObject*)Z_Construct_UPackage__Script_UIWorld(), TEXT("ZonefallInventoryItem"));
	}
	return Z_Registration_Info_UScriptStruct_FZonefallInventoryItem.OuterSingleton;
	}

// ********** Begin ScriptStruct FZonefallInventoryItem Property Definitions ***********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallInventoryItem, ItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallInventoryItem, Category), Z_Construct_UEnum_UIWorld_EZonefallItemCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) }; // 325139161
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallInventoryItem, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
void Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::NewProp_bConsumable_SetBit(void* Obj)
{
	((FZonefallInventoryItem*)Obj)->bConsumable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::NewProp_bConsumable = { "bConsumable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FZonefallInventoryItem), &Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::NewProp_bConsumable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConsumable_MetaData), NewProp_bConsumable_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallInventoryItem, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallInventoryItem, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::NewProp_MaxStack = { "MaxStack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallInventoryItem, MaxStack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStack_MetaData), NewProp_MaxStack_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallInventoryItem, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::NewProp_PickupClass = { "PickupClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallInventoryItem, PickupClass), Z_Construct_UClass_AZonefallWorldItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupClass_MetaData), NewProp_PickupClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::NewProp_Category_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::NewProp_bConsumable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::NewProp_MaxStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::NewProp_PickupClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FZonefallInventoryItem Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
	nullptr,
	&NewStructOps,
	"ZonefallInventoryItem",
	Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::PropPointers),
	sizeof(FZonefallInventoryItem),
	alignof(FZonefallInventoryItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FZonefallInventoryItem()
{
	if (!Z_Registration_Info_UScriptStruct_FZonefallInventoryItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FZonefallInventoryItem.InnerSingleton, Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FZonefallInventoryItem.InnerSingleton);
}
// ********** End ScriptStruct FZonefallInventoryItem **********************************************

// ********** Begin Delegate FZonefallInventoryChanged *********************************************
struct Z_Construct_UDelegateFunction_UIWorld_ZonefallInventoryChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/ZonefallInventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FZonefallInventoryChanged constinit property declarations *************
// ********** End Delegate FZonefallInventoryChanged constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_ZonefallInventoryChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "ZonefallInventoryChanged__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_ZonefallInventoryChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_ZonefallInventoryChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UIWorld_ZonefallInventoryChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_ZonefallInventoryChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FZonefallInventoryChanged_DelegateWrapper(const FMulticastScriptDelegate& ZonefallInventoryChanged)
{
	ZonefallInventoryChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FZonefallInventoryChanged ***********************************************

// ********** Begin Class UZonefallInventoryComponent Function AddItem *****************************
struct Z_Construct_UFunction_UZonefallInventoryComponent_AddItem_Statics
{
	struct ZonefallInventoryComponent_eventAddItem_Parms
	{
		FZonefallInventoryItem Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds an item (server only). Stacks into existing slots first. Returns true if anything was stored. */" },
#endif
		{ "ModuleRelativePath", "Public/Inventory/ZonefallInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds an item (server only). Stacks into existing slots first. Returns true if anything was stored." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddItem constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddItem constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddItem Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZonefallInventoryComponent_AddItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallInventoryComponent_eventAddItem_Parms, Item), Z_Construct_UScriptStruct_FZonefallInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 122284906
void Z_Construct_UFunction_UZonefallInventoryComponent_AddItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ZonefallInventoryComponent_eventAddItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZonefallInventoryComponent_AddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallInventoryComponent_eventAddItem_Parms), &Z_Construct_UFunction_UZonefallInventoryComponent_AddItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallInventoryComponent_AddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallInventoryComponent_AddItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallInventoryComponent_AddItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryComponent_AddItem_Statics::PropPointers) < 2048);
// ********** End Function AddItem Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallInventoryComponent_AddItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallInventoryComponent, nullptr, "AddItem", 	Z_Construct_UFunction_UZonefallInventoryComponent_AddItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryComponent_AddItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallInventoryComponent_AddItem_Statics::ZonefallInventoryComponent_eventAddItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryComponent_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallInventoryComponent_AddItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallInventoryComponent_AddItem_Statics::ZonefallInventoryComponent_eventAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallInventoryComponent_AddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallInventoryComponent_AddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallInventoryComponent::execAddItem)
{
	P_GET_STRUCT_REF(FZonefallInventoryItem,Z_Param_Out_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddItem(Z_Param_Out_Item);
	P_NATIVE_END;
}
// ********** End Class UZonefallInventoryComponent Function AddItem *******************************

// ********** Begin Class UZonefallInventoryComponent Function DropItemAt **************************
struct Z_Construct_UFunction_UZonefallInventoryComponent_DropItemAt_Statics
{
	struct ZonefallInventoryComponent_eventDropItemAt_Parms
	{
		int32 Index;
		int32 Count;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Drops Count from a slot into the world as a pickup actor (server only). */" },
#endif
		{ "CPP_Default_Count", "1" },
		{ "ModuleRelativePath", "Public/Inventory/ZonefallInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drops Count from a slot into the world as a pickup actor (server only)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DropItemAt constinit property declarations ****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DropItemAt constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DropItemAt Property Definitions ***************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZonefallInventoryComponent_DropItemAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallInventoryComponent_eventDropItemAt_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZonefallInventoryComponent_DropItemAt_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallInventoryComponent_eventDropItemAt_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallInventoryComponent_DropItemAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallInventoryComponent_DropItemAt_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallInventoryComponent_DropItemAt_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryComponent_DropItemAt_Statics::PropPointers) < 2048);
// ********** End Function DropItemAt Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallInventoryComponent_DropItemAt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallInventoryComponent, nullptr, "DropItemAt", 	Z_Construct_UFunction_UZonefallInventoryComponent_DropItemAt_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryComponent_DropItemAt_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallInventoryComponent_DropItemAt_Statics::ZonefallInventoryComponent_eventDropItemAt_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryComponent_DropItemAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallInventoryComponent_DropItemAt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallInventoryComponent_DropItemAt_Statics::ZonefallInventoryComponent_eventDropItemAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallInventoryComponent_DropItemAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallInventoryComponent_DropItemAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallInventoryComponent::execDropItemAt)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropItemAt(Z_Param_Index,Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class UZonefallInventoryComponent Function DropItemAt ****************************

// ********** Begin Class UZonefallInventoryComponent Function GetItems ****************************
struct Z_Construct_UFunction_UZonefallInventoryComponent_GetItems_Statics
{
	struct ZonefallInventoryComponent_eventGetItems_Parms
	{
		TArray<FZonefallInventoryItem> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/ZonefallInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetItems constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetItems constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetItems Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZonefallInventoryComponent_GetItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FZonefallInventoryItem, METADATA_PARAMS(0, nullptr) }; // 122284906
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UZonefallInventoryComponent_GetItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallInventoryComponent_eventGetItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 122284906
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallInventoryComponent_GetItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallInventoryComponent_GetItems_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallInventoryComponent_GetItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryComponent_GetItems_Statics::PropPointers) < 2048);
// ********** End Function GetItems Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallInventoryComponent_GetItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallInventoryComponent, nullptr, "GetItems", 	Z_Construct_UFunction_UZonefallInventoryComponent_GetItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryComponent_GetItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallInventoryComponent_GetItems_Statics::ZonefallInventoryComponent_eventGetItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryComponent_GetItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallInventoryComponent_GetItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallInventoryComponent_GetItems_Statics::ZonefallInventoryComponent_eventGetItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallInventoryComponent_GetItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallInventoryComponent_GetItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallInventoryComponent::execGetItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FZonefallInventoryItem>*)Z_Param__Result=P_THIS->GetItems();
	P_NATIVE_END;
}
// ********** End Class UZonefallInventoryComponent Function GetItems ******************************

// ********** Begin Class UZonefallInventoryComponent Function GetNumItems *************************
struct Z_Construct_UFunction_UZonefallInventoryComponent_GetNumItems_Statics
{
	struct ZonefallInventoryComponent_eventGetNumItems_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/ZonefallInventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNumItems constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNumItems constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNumItems Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZonefallInventoryComponent_GetNumItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallInventoryComponent_eventGetNumItems_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallInventoryComponent_GetNumItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallInventoryComponent_GetNumItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryComponent_GetNumItems_Statics::PropPointers) < 2048);
// ********** End Function GetNumItems Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallInventoryComponent_GetNumItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallInventoryComponent, nullptr, "GetNumItems", 	Z_Construct_UFunction_UZonefallInventoryComponent_GetNumItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryComponent_GetNumItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallInventoryComponent_GetNumItems_Statics::ZonefallInventoryComponent_eventGetNumItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryComponent_GetNumItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallInventoryComponent_GetNumItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallInventoryComponent_GetNumItems_Statics::ZonefallInventoryComponent_eventGetNumItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallInventoryComponent_GetNumItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallInventoryComponent_GetNumItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallInventoryComponent::execGetNumItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumItems();
	P_NATIVE_END;
}
// ********** End Class UZonefallInventoryComponent Function GetNumItems ***************************

// ********** Begin Class UZonefallInventoryComponent Function IsFull ******************************
struct Z_Construct_UFunction_UZonefallInventoryComponent_IsFull_Statics
{
	struct ZonefallInventoryComponent_eventIsFull_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/ZonefallInventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsFull constinit property declarations ********************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsFull constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsFull Property Definitions *******************************************
void Z_Construct_UFunction_UZonefallInventoryComponent_IsFull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ZonefallInventoryComponent_eventIsFull_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZonefallInventoryComponent_IsFull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallInventoryComponent_eventIsFull_Parms), &Z_Construct_UFunction_UZonefallInventoryComponent_IsFull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallInventoryComponent_IsFull_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallInventoryComponent_IsFull_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryComponent_IsFull_Statics::PropPointers) < 2048);
// ********** End Function IsFull Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallInventoryComponent_IsFull_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallInventoryComponent, nullptr, "IsFull", 	Z_Construct_UFunction_UZonefallInventoryComponent_IsFull_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryComponent_IsFull_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallInventoryComponent_IsFull_Statics::ZonefallInventoryComponent_eventIsFull_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryComponent_IsFull_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallInventoryComponent_IsFull_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallInventoryComponent_IsFull_Statics::ZonefallInventoryComponent_eventIsFull_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallInventoryComponent_IsFull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallInventoryComponent_IsFull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallInventoryComponent::execIsFull)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFull();
	P_NATIVE_END;
}
// ********** End Class UZonefallInventoryComponent Function IsFull ********************************

// ********** Begin Class UZonefallInventoryComponent Function OnRep_Items *************************
struct Z_Construct_UFunction_UZonefallInventoryComponent_OnRep_Items_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/ZonefallInventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Items constinit property declarations ***************************
// ********** End Function OnRep_Items constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallInventoryComponent_OnRep_Items_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallInventoryComponent, nullptr, "OnRep_Items", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryComponent_OnRep_Items_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallInventoryComponent_OnRep_Items_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallInventoryComponent_OnRep_Items()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallInventoryComponent_OnRep_Items_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallInventoryComponent::execOnRep_Items)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Items();
	P_NATIVE_END;
}
// ********** End Class UZonefallInventoryComponent Function OnRep_Items ***************************

// ********** Begin Class UZonefallInventoryComponent Function RemoveItemAt ************************
struct Z_Construct_UFunction_UZonefallInventoryComponent_RemoveItemAt_Statics
{
	struct ZonefallInventoryComponent_eventRemoveItemAt_Parms
	{
		int32 Index;
		int32 Count;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Removes up to Count from a slot (server only). Returns the amount actually removed. */" },
#endif
		{ "CPP_Default_Count", "1" },
		{ "ModuleRelativePath", "Public/Inventory/ZonefallInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes up to Count from a slot (server only). Returns the amount actually removed." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveItemAt constinit property declarations **************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveItemAt constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveItemAt Property Definitions *************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZonefallInventoryComponent_RemoveItemAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallInventoryComponent_eventRemoveItemAt_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZonefallInventoryComponent_RemoveItemAt_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallInventoryComponent_eventRemoveItemAt_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZonefallInventoryComponent_RemoveItemAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallInventoryComponent_eventRemoveItemAt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallInventoryComponent_RemoveItemAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallInventoryComponent_RemoveItemAt_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallInventoryComponent_RemoveItemAt_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallInventoryComponent_RemoveItemAt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryComponent_RemoveItemAt_Statics::PropPointers) < 2048);
// ********** End Function RemoveItemAt Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallInventoryComponent_RemoveItemAt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallInventoryComponent, nullptr, "RemoveItemAt", 	Z_Construct_UFunction_UZonefallInventoryComponent_RemoveItemAt_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryComponent_RemoveItemAt_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallInventoryComponent_RemoveItemAt_Statics::ZonefallInventoryComponent_eventRemoveItemAt_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryComponent_RemoveItemAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallInventoryComponent_RemoveItemAt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallInventoryComponent_RemoveItemAt_Statics::ZonefallInventoryComponent_eventRemoveItemAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallInventoryComponent_RemoveItemAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallInventoryComponent_RemoveItemAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallInventoryComponent::execRemoveItemAt)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->RemoveItemAt(Z_Param_Index,Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class UZonefallInventoryComponent Function RemoveItemAt **************************

// ********** Begin Class UZonefallInventoryComponent Function UseItemAt ***************************
struct Z_Construct_UFunction_UZonefallInventoryComponent_UseItemAt_Statics
{
	struct ZonefallInventoryComponent_eventUseItemAt_Parms
	{
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Uses a slot (server only). Consumable items lose one; returns true if something happened. */" },
#endif
		{ "ModuleRelativePath", "Public/Inventory/ZonefallInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uses a slot (server only). Consumable items lose one; returns true if something happened." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UseItemAt constinit property declarations *****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UseItemAt constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UseItemAt Property Definitions ****************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZonefallInventoryComponent_UseItemAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallInventoryComponent_eventUseItemAt_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UZonefallInventoryComponent_UseItemAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ZonefallInventoryComponent_eventUseItemAt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZonefallInventoryComponent_UseItemAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallInventoryComponent_eventUseItemAt_Parms), &Z_Construct_UFunction_UZonefallInventoryComponent_UseItemAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallInventoryComponent_UseItemAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallInventoryComponent_UseItemAt_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallInventoryComponent_UseItemAt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryComponent_UseItemAt_Statics::PropPointers) < 2048);
// ********** End Function UseItemAt Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallInventoryComponent_UseItemAt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallInventoryComponent, nullptr, "UseItemAt", 	Z_Construct_UFunction_UZonefallInventoryComponent_UseItemAt_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryComponent_UseItemAt_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallInventoryComponent_UseItemAt_Statics::ZonefallInventoryComponent_eventUseItemAt_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryComponent_UseItemAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallInventoryComponent_UseItemAt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallInventoryComponent_UseItemAt_Statics::ZonefallInventoryComponent_eventUseItemAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallInventoryComponent_UseItemAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallInventoryComponent_UseItemAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallInventoryComponent::execUseItemAt)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UseItemAt(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UZonefallInventoryComponent Function UseItemAt *****************************

// ********** Begin Class UZonefallInventoryComponent **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallInventoryComponent;
UClass* UZonefallInventoryComponent::GetPrivateStaticClass()
{
	using TClass = UZonefallInventoryComponent;
	if (!Z_Registration_Info_UClass_UZonefallInventoryComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallInventoryComponent"),
			Z_Registration_Info_UClass_UZonefallInventoryComponent.InnerSingleton,
			StaticRegisterNativesUZonefallInventoryComponent,
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
	return Z_Registration_Info_UClass_UZonefallInventoryComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallInventoryComponent_NoRegister()
{
	return UZonefallInventoryComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Zonefall" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Server-authoritative, replicated inventory. The item list replicates to the\n * owning client (COND_OwnerOnly) and fires OnInventoryChanged on both server and\n * client so a self-assembling widget can rebuild itself automatically.\n */" },
#endif
		{ "IncludePath", "Inventory/ZonefallInventoryComponent.h" },
		{ "ModuleRelativePath", "Public/Inventory/ZonefallInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server-authoritative, replicated inventory. The item list replicates to the\nowning client (COND_OwnerOnly) and fires OnInventoryChanged on both server and\nclient so a self-assembling widget can rebuild itself automatically." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryChanged_MetaData[] = {
		{ "Category", "Zonefall|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/ZonefallInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Capacity_MetaData[] = {
		{ "Category", "Zonefall|Inventory" },
		{ "ClampMax", "200" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Inventory/ZonefallInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPickupClass_MetaData[] = {
		{ "Category", "Zonefall|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The actor class used when an item has no explicit PickupClass set.\n" },
#endif
		{ "ModuleRelativePath", "Public/Inventory/ZonefallInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The actor class used when an item has no explicit PickupClass set." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inventory/ZonefallInventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallInventoryComponent constinit property declarations **************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryChanged;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Capacity;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultPickupClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallInventoryComponent constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddItem"), .Pointer = &UZonefallInventoryComponent::execAddItem },
		{ .NameUTF8 = UTF8TEXT("DropItemAt"), .Pointer = &UZonefallInventoryComponent::execDropItemAt },
		{ .NameUTF8 = UTF8TEXT("GetItems"), .Pointer = &UZonefallInventoryComponent::execGetItems },
		{ .NameUTF8 = UTF8TEXT("GetNumItems"), .Pointer = &UZonefallInventoryComponent::execGetNumItems },
		{ .NameUTF8 = UTF8TEXT("IsFull"), .Pointer = &UZonefallInventoryComponent::execIsFull },
		{ .NameUTF8 = UTF8TEXT("OnRep_Items"), .Pointer = &UZonefallInventoryComponent::execOnRep_Items },
		{ .NameUTF8 = UTF8TEXT("RemoveItemAt"), .Pointer = &UZonefallInventoryComponent::execRemoveItemAt },
		{ .NameUTF8 = UTF8TEXT("UseItemAt"), .Pointer = &UZonefallInventoryComponent::execUseItemAt },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallInventoryComponent_AddItem, "AddItem" }, // 3767474850
		{ &Z_Construct_UFunction_UZonefallInventoryComponent_DropItemAt, "DropItemAt" }, // 2721238600
		{ &Z_Construct_UFunction_UZonefallInventoryComponent_GetItems, "GetItems" }, // 140767463
		{ &Z_Construct_UFunction_UZonefallInventoryComponent_GetNumItems, "GetNumItems" }, // 2510402490
		{ &Z_Construct_UFunction_UZonefallInventoryComponent_IsFull, "IsFull" }, // 678431993
		{ &Z_Construct_UFunction_UZonefallInventoryComponent_OnRep_Items, "OnRep_Items" }, // 390571214
		{ &Z_Construct_UFunction_UZonefallInventoryComponent_RemoveItemAt, "RemoveItemAt" }, // 2573205308
		{ &Z_Construct_UFunction_UZonefallInventoryComponent_UseItemAt, "UseItemAt" }, // 1411958348
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallInventoryComponent_Statics

// ********** Begin Class UZonefallInventoryComponent Property Definitions *************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallInventoryComponent_Statics::NewProp_OnInventoryChanged = { "OnInventoryChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryComponent, OnInventoryChanged), Z_Construct_UDelegateFunction_UIWorld_ZonefallInventoryChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInventoryChanged_MetaData), NewProp_OnInventoryChanged_MetaData) }; // 1733420451
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallInventoryComponent_Statics::NewProp_Capacity = { "Capacity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryComponent, Capacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Capacity_MetaData), NewProp_Capacity_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UZonefallInventoryComponent_Statics::NewProp_DefaultPickupClass = { "DefaultPickupClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryComponent, DefaultPickupClass), Z_Construct_UClass_AZonefallWorldItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPickupClass_MetaData), NewProp_DefaultPickupClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallInventoryComponent_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FZonefallInventoryItem, METADATA_PARAMS(0, nullptr) }; // 122284906
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZonefallInventoryComponent_Statics::NewProp_Items = { "Items", "OnRep_Items", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryComponent, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 122284906
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryComponent_Statics::NewProp_OnInventoryChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryComponent_Statics::NewProp_Capacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryComponent_Statics::NewProp_DefaultPickupClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryComponent_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryComponent_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallInventoryComponent_Statics::PropPointers) < 2048);
// ********** End Class UZonefallInventoryComponent Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UZonefallInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallInventoryComponent_Statics::ClassParams = {
	&UZonefallInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallInventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallInventoryComponent_Statics::Class_MetaDataParams)
};
void UZonefallInventoryComponent::StaticRegisterNativesUZonefallInventoryComponent()
{
	UClass* Class = UZonefallInventoryComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallInventoryComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UZonefallInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallInventoryComponent.OuterSingleton, Z_Construct_UClass_UZonefallInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallInventoryComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UZonefallInventoryComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Items(TEXT("Items"));
	const bool bIsValid = true
		&& Name_Items == ClassReps[(int32)ENetFields_Private::Items].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UZonefallInventoryComponent"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallInventoryComponent);
UZonefallInventoryComponent::~UZonefallInventoryComponent() {}
// ********** End Class UZonefallInventoryComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallInventoryComponent_h__Script_UIWorld_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EZonefallItemCategory_StaticEnum, TEXT("EZonefallItemCategory"), &Z_Registration_Info_UEnum_EZonefallItemCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 325139161U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FZonefallInventoryItem::StaticStruct, Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics::NewStructOps, TEXT("ZonefallInventoryItem"),&Z_Registration_Info_UScriptStruct_FZonefallInventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZonefallInventoryItem), 122284906U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZonefallInventoryComponent, UZonefallInventoryComponent::StaticClass, TEXT("UZonefallInventoryComponent"), &Z_Registration_Info_UClass_UZonefallInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallInventoryComponent), 2528971838U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallInventoryComponent_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallInventoryComponent_h__Script_UIWorld_2764217586{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallInventoryComponent_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallInventoryComponent_h__Script_UIWorld_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallInventoryComponent_h__Script_UIWorld_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallInventoryComponent_h__Script_UIWorld_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallInventoryComponent_h__Script_UIWorld_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallInventoryComponent_h__Script_UIWorld_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
