// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/ZonefallWorldItem.h"
#include "Engine/HitResult.h"
#include "Inventory/ZonefallInventoryComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallWorldItem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UIWORLD_API UClass* Z_Construct_UClass_AZonefallWorldItem();
UIWORLD_API UClass* Z_Construct_UClass_AZonefallWorldItem_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallInventoryComponent_NoRegister();
UIWORLD_API UEnum* Z_Construct_UEnum_UIWorld_EZonefallItemCategory();
UIWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FZonefallInventoryItem();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AZonefallWorldItem Function BP_OnPickedUp ********************************
struct ZonefallWorldItem_eventBP_OnPickedUp_Parms
{
	AActor* Picker;
};
static FName NAME_AZonefallWorldItem_BP_OnPickedUp = FName(TEXT("BP_OnPickedUp"));
void AZonefallWorldItem::BP_OnPickedUp(AActor* Picker)
{
	ZonefallWorldItem_eventBP_OnPickedUp_Parms Parms;
	Parms.Picker=Picker;
	UFunction* Func = FindFunctionChecked(NAME_AZonefallWorldItem_BP_OnPickedUp);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AZonefallWorldItem_BP_OnPickedUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Item" },
		{ "ModuleRelativePath", "Public/Inventory/ZonefallWorldItem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BP_OnPickedUp constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Picker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BP_OnPickedUp constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BP_OnPickedUp Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZonefallWorldItem_BP_OnPickedUp_Statics::NewProp_Picker = { "Picker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallWorldItem_eventBP_OnPickedUp_Parms, Picker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallWorldItem_BP_OnPickedUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallWorldItem_BP_OnPickedUp_Statics::NewProp_Picker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallWorldItem_BP_OnPickedUp_Statics::PropPointers) < 2048);
// ********** End Function BP_OnPickedUp Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallWorldItem_BP_OnPickedUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallWorldItem, nullptr, "BP_OnPickedUp", 	Z_Construct_UFunction_AZonefallWorldItem_BP_OnPickedUp_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallWorldItem_BP_OnPickedUp_Statics::PropPointers), 
sizeof(ZonefallWorldItem_eventBP_OnPickedUp_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallWorldItem_BP_OnPickedUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallWorldItem_BP_OnPickedUp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ZonefallWorldItem_eventBP_OnPickedUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallWorldItem_BP_OnPickedUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallWorldItem_BP_OnPickedUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AZonefallWorldItem Function BP_OnPickedUp **********************************

// ********** Begin Class AZonefallWorldItem Function HandleBeginOverlap ***************************
struct Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap_Statics
{
	struct ZonefallWorldItem_eventHandleBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/ZonefallWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleBeginOverlap constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleBeginOverlap constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleBeginOverlap Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallWorldItem_eventHandleBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallWorldItem_eventHandleBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallWorldItem_eventHandleBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallWorldItem_eventHandleBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((ZonefallWorldItem_eventHandleBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallWorldItem_eventHandleBeginOverlap_Parms), &Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallWorldItem_eventHandleBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap_Statics::PropPointers) < 2048);
// ********** End Function HandleBeginOverlap Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallWorldItem, nullptr, "HandleBeginOverlap", 	Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap_Statics::ZonefallWorldItem_eventHandleBeginOverlap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap_Statics::ZonefallWorldItem_eventHandleBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallWorldItem::execHandleBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class AZonefallWorldItem Function HandleBeginOverlap *****************************

// ********** Begin Class AZonefallWorldItem Function InitializeFromItem ***************************
struct Z_Construct_UFunction_AZonefallWorldItem_InitializeFromItem_Statics
{
	struct ZonefallWorldItem_eventInitializeFromItem_Parms
	{
		FZonefallInventoryItem InItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Server-side: copy item data and refresh visuals. */" },
#endif
		{ "ModuleRelativePath", "Public/Inventory/ZonefallWorldItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server-side: copy item data and refresh visuals." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeFromItem constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitializeFromItem constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitializeFromItem Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZonefallWorldItem_InitializeFromItem_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallWorldItem_eventInitializeFromItem_Parms, InItem), Z_Construct_UScriptStruct_FZonefallInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InItem_MetaData), NewProp_InItem_MetaData) }; // 122284906
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallWorldItem_InitializeFromItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallWorldItem_InitializeFromItem_Statics::NewProp_InItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallWorldItem_InitializeFromItem_Statics::PropPointers) < 2048);
// ********** End Function InitializeFromItem Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallWorldItem_InitializeFromItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallWorldItem, nullptr, "InitializeFromItem", 	Z_Construct_UFunction_AZonefallWorldItem_InitializeFromItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallWorldItem_InitializeFromItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallWorldItem_InitializeFromItem_Statics::ZonefallWorldItem_eventInitializeFromItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallWorldItem_InitializeFromItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallWorldItem_InitializeFromItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallWorldItem_InitializeFromItem_Statics::ZonefallWorldItem_eventInitializeFromItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallWorldItem_InitializeFromItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallWorldItem_InitializeFromItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallWorldItem::execInitializeFromItem)
{
	P_GET_STRUCT_REF(FZonefallInventoryItem,Z_Param_Out_InItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeFromItem(Z_Param_Out_InItem);
	P_NATIVE_END;
}
// ********** End Class AZonefallWorldItem Function InitializeFromItem *****************************

// ********** Begin Class AZonefallWorldItem Function OnRep_Item ***********************************
struct Z_Construct_UFunction_AZonefallWorldItem_OnRep_Item_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/ZonefallWorldItem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Item constinit property declarations ****************************
// ********** End Function OnRep_Item constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallWorldItem_OnRep_Item_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallWorldItem, nullptr, "OnRep_Item", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallWorldItem_OnRep_Item_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallWorldItem_OnRep_Item_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AZonefallWorldItem_OnRep_Item()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallWorldItem_OnRep_Item_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallWorldItem::execOnRep_Item)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Item();
	P_NATIVE_END;
}
// ********** End Class AZonefallWorldItem Function OnRep_Item *************************************

// ********** Begin Class AZonefallWorldItem Function TryGiveTo ************************************
struct Z_Construct_UFunction_AZonefallWorldItem_TryGiveTo_Statics
{
	struct ZonefallWorldItem_eventTryGiveTo_Parms
	{
		UZonefallInventoryComponent* Inventory;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Server-side: try to give this pickup to an inventory; destroys self on success. Returns true if consumed. */" },
#endif
		{ "ModuleRelativePath", "Public/Inventory/ZonefallWorldItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server-side: try to give this pickup to an inventory; destroys self on success. Returns true if consumed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function TryGiveTo constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryGiveTo constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryGiveTo Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZonefallWorldItem_TryGiveTo_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallWorldItem_eventTryGiveTo_Parms, Inventory), Z_Construct_UClass_UZonefallInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) };
void Z_Construct_UFunction_AZonefallWorldItem_TryGiveTo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ZonefallWorldItem_eventTryGiveTo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AZonefallWorldItem_TryGiveTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallWorldItem_eventTryGiveTo_Parms), &Z_Construct_UFunction_AZonefallWorldItem_TryGiveTo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallWorldItem_TryGiveTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallWorldItem_TryGiveTo_Statics::NewProp_Inventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallWorldItem_TryGiveTo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallWorldItem_TryGiveTo_Statics::PropPointers) < 2048);
// ********** End Function TryGiveTo Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallWorldItem_TryGiveTo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallWorldItem, nullptr, "TryGiveTo", 	Z_Construct_UFunction_AZonefallWorldItem_TryGiveTo_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallWorldItem_TryGiveTo_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallWorldItem_TryGiveTo_Statics::ZonefallWorldItem_eventTryGiveTo_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallWorldItem_TryGiveTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallWorldItem_TryGiveTo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallWorldItem_TryGiveTo_Statics::ZonefallWorldItem_eventTryGiveTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallWorldItem_TryGiveTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallWorldItem_TryGiveTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallWorldItem::execTryGiveTo)
{
	P_GET_OBJECT(UZonefallInventoryComponent,Z_Param_Inventory);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryGiveTo(Z_Param_Inventory);
	P_NATIVE_END;
}
// ********** End Class AZonefallWorldItem Function TryGiveTo **************************************

// ********** Begin Class AZonefallWorldItem *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AZonefallWorldItem;
UClass* AZonefallWorldItem::GetPrivateStaticClass()
{
	using TClass = AZonefallWorldItem;
	if (!Z_Registration_Info_UClass_AZonefallWorldItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallWorldItem"),
			Z_Registration_Info_UClass_AZonefallWorldItem.InnerSingleton,
			StaticRegisterNativesAZonefallWorldItem,
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
	return Z_Registration_Info_UClass_AZonefallWorldItem.InnerSingleton;
}
UClass* Z_Construct_UClass_AZonefallWorldItem_NoRegister()
{
	return AZonefallWorldItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AZonefallWorldItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A pickup that lives in the world. Replicated so all clients see it; the actual\n * \"give to inventory\" only happens on the server. Can be picked up via interaction\n * trace (default) or automatically on overlap.\n */" },
#endif
		{ "IncludePath", "Inventory/ZonefallWorldItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Inventory/ZonefallWorldItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A pickup that lives in the world. Replicated so all clients see it; the actual\n\"give to inventory\" only happens on the server. Can be picked up via interaction\ntrace (default) or automatically on overlap." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSphere_MetaData[] = {
		{ "Category", "Zonefall|Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Inventory/ZonefallWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Zonefall|Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Inventory/ZonefallWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Zonefall|Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The item this pickup grants. Replicated so the icon/name can be shown on clients.\n" },
#endif
		{ "ModuleRelativePath", "Public/Inventory/ZonefallWorldItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The item this pickup grants. Replicated so the icon/name can be shown on clients." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPickupOnOverlap_MetaData[] = {
		{ "Category", "Zonefall|Item" },
		{ "ModuleRelativePath", "Public/Inventory/ZonefallWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupDisplayName_MetaData[] = {
		{ "Category", "Zonefall|Item|Pickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Designer-friendly defaults used when Item is left blank on a placed pickup ---\n// What this pickup is called in the satchel (e.g. \"Venison\", \"Cattleman Revolver Ammo\").\n" },
#endif
		{ "ModuleRelativePath", "Public/Inventory/ZonefallWorldItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Designer-friendly defaults used when Item is left blank on a placed pickup ---\nWhat this pickup is called in the satchel (e.g. \"Venison\", \"Cattleman Revolver Ammo\")." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupDescription_MetaData[] = {
		{ "Category", "Zonefall|Item|Pickup" },
		{ "ModuleRelativePath", "Public/Inventory/ZonefallWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupCategory_MetaData[] = {
		{ "Category", "Zonefall|Item|Pickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Which satchel tab it lands under \xe2\x80\x94 so you can tell food from materials from kit.\n" },
#endif
		{ "ModuleRelativePath", "Public/Inventory/ZonefallWorldItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Which satchel tab it lands under \xe2\x80\x94 so you can tell food from materials from kit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPickupConsumable_MetaData[] = {
		{ "Category", "Zonefall|Item|Pickup" },
		{ "ModuleRelativePath", "Public/Inventory/ZonefallWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpinDegreesPerSecond_MetaData[] = {
		{ "Category", "Zonefall|Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spins the mesh for a bit of visual life.\n" },
#endif
		{ "ModuleRelativePath", "Public/Inventory/ZonefallWorldItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spins the mesh for a bit of visual life." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AZonefallWorldItem constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static void NewProp_bAutoPickupOnOverlap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPickupOnOverlap;
	static const UECodeGen_Private::FTextPropertyParams NewProp_PickupDisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_PickupDescription;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PickupCategory_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PickupCategory;
	static void NewProp_bPickupConsumable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPickupConsumable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpinDegreesPerSecond;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AZonefallWorldItem constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleBeginOverlap"), .Pointer = &AZonefallWorldItem::execHandleBeginOverlap },
		{ .NameUTF8 = UTF8TEXT("InitializeFromItem"), .Pointer = &AZonefallWorldItem::execInitializeFromItem },
		{ .NameUTF8 = UTF8TEXT("OnRep_Item"), .Pointer = &AZonefallWorldItem::execOnRep_Item },
		{ .NameUTF8 = UTF8TEXT("TryGiveTo"), .Pointer = &AZonefallWorldItem::execTryGiveTo },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AZonefallWorldItem_BP_OnPickedUp, "BP_OnPickedUp" }, // 1906761836
		{ &Z_Construct_UFunction_AZonefallWorldItem_HandleBeginOverlap, "HandleBeginOverlap" }, // 3198053953
		{ &Z_Construct_UFunction_AZonefallWorldItem_InitializeFromItem, "InitializeFromItem" }, // 2146963906
		{ &Z_Construct_UFunction_AZonefallWorldItem_OnRep_Item, "OnRep_Item" }, // 3419069082
		{ &Z_Construct_UFunction_AZonefallWorldItem_TryGiveTo, "TryGiveTo" }, // 4092911381
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZonefallWorldItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AZonefallWorldItem_Statics

// ********** Begin Class AZonefallWorldItem Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallWorldItem_Statics::NewProp_CollisionSphere = { "CollisionSphere", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallWorldItem, CollisionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSphere_MetaData), NewProp_CollisionSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallWorldItem_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallWorldItem, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZonefallWorldItem_Statics::NewProp_Item = { "Item", "OnRep_Item", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallWorldItem, Item), Z_Construct_UScriptStruct_FZonefallInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 122284906
void Z_Construct_UClass_AZonefallWorldItem_Statics::NewProp_bAutoPickupOnOverlap_SetBit(void* Obj)
{
	((AZonefallWorldItem*)Obj)->bAutoPickupOnOverlap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AZonefallWorldItem_Statics::NewProp_bAutoPickupOnOverlap = { "bAutoPickupOnOverlap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AZonefallWorldItem), &Z_Construct_UClass_AZonefallWorldItem_Statics::NewProp_bAutoPickupOnOverlap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoPickupOnOverlap_MetaData), NewProp_bAutoPickupOnOverlap_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AZonefallWorldItem_Statics::NewProp_PickupDisplayName = { "PickupDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallWorldItem, PickupDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupDisplayName_MetaData), NewProp_PickupDisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AZonefallWorldItem_Statics::NewProp_PickupDescription = { "PickupDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallWorldItem, PickupDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupDescription_MetaData), NewProp_PickupDescription_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AZonefallWorldItem_Statics::NewProp_PickupCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AZonefallWorldItem_Statics::NewProp_PickupCategory = { "PickupCategory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallWorldItem, PickupCategory), Z_Construct_UEnum_UIWorld_EZonefallItemCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupCategory_MetaData), NewProp_PickupCategory_MetaData) }; // 325139161
void Z_Construct_UClass_AZonefallWorldItem_Statics::NewProp_bPickupConsumable_SetBit(void* Obj)
{
	((AZonefallWorldItem*)Obj)->bPickupConsumable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AZonefallWorldItem_Statics::NewProp_bPickupConsumable = { "bPickupConsumable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AZonefallWorldItem), &Z_Construct_UClass_AZonefallWorldItem_Statics::NewProp_bPickupConsumable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPickupConsumable_MetaData), NewProp_bPickupConsumable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZonefallWorldItem_Statics::NewProp_SpinDegreesPerSecond = { "SpinDegreesPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallWorldItem, SpinDegreesPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpinDegreesPerSecond_MetaData), NewProp_SpinDegreesPerSecond_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZonefallWorldItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallWorldItem_Statics::NewProp_CollisionSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallWorldItem_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallWorldItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallWorldItem_Statics::NewProp_bAutoPickupOnOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallWorldItem_Statics::NewProp_PickupDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallWorldItem_Statics::NewProp_PickupDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallWorldItem_Statics::NewProp_PickupCategory_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallWorldItem_Statics::NewProp_PickupCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallWorldItem_Statics::NewProp_bPickupConsumable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallWorldItem_Statics::NewProp_SpinDegreesPerSecond,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZonefallWorldItem_Statics::PropPointers) < 2048);
// ********** End Class AZonefallWorldItem Property Definitions ************************************
UObject* (*const Z_Construct_UClass_AZonefallWorldItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZonefallWorldItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AZonefallWorldItem_Statics::ClassParams = {
	&AZonefallWorldItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AZonefallWorldItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AZonefallWorldItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AZonefallWorldItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AZonefallWorldItem_Statics::Class_MetaDataParams)
};
void AZonefallWorldItem::StaticRegisterNativesAZonefallWorldItem()
{
	UClass* Class = AZonefallWorldItem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AZonefallWorldItem_Statics::Funcs));
}
UClass* Z_Construct_UClass_AZonefallWorldItem()
{
	if (!Z_Registration_Info_UClass_AZonefallWorldItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AZonefallWorldItem.OuterSingleton, Z_Construct_UClass_AZonefallWorldItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AZonefallWorldItem.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void AZonefallWorldItem::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Item(TEXT("Item"));
	const bool bIsValid = true
		&& Name_Item == ClassReps[(int32)ENetFields_Private::Item].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AZonefallWorldItem"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AZonefallWorldItem);
AZonefallWorldItem::~AZonefallWorldItem() {}
// ********** End Class AZonefallWorldItem *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallWorldItem_h__Script_UIWorld_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AZonefallWorldItem, AZonefallWorldItem::StaticClass, TEXT("AZonefallWorldItem"), &Z_Registration_Info_UClass_AZonefallWorldItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZonefallWorldItem), 202385746U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallWorldItem_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallWorldItem_h__Script_UIWorld_2435849369{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallWorldItem_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallWorldItem_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
