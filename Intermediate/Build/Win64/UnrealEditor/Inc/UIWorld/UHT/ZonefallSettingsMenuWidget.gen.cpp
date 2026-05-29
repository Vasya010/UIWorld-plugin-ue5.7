// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZonefallSettingsMenuWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallSettingsMenuWidget() {}

// ********** Begin Cross Module References ********************************************************
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallSettingsDataObject_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallSettingsMenuWidget();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallSettingsMenuWidget_NoRegister();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnSettingsApplied__DelegateSignature();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnSettingsBackRequested__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnSettingsBackRequested **********************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnSettingsBackRequested__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSettingsBackRequested constinit property declarations **************
// ********** End Delegate FOnSettingsBackRequested constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnSettingsBackRequested__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnSettingsBackRequested__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnSettingsBackRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnSettingsBackRequested__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnSettingsBackRequested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnSettingsBackRequested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSettingsBackRequested_DelegateWrapper(const FMulticastScriptDelegate& OnSettingsBackRequested)
{
	OnSettingsBackRequested.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnSettingsBackRequested ************************************************

// ********** Begin Delegate FOnSettingsApplied ****************************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnSettingsApplied__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSettingsApplied constinit property declarations ********************
// ********** End Delegate FOnSettingsApplied constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnSettingsApplied__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnSettingsApplied__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnSettingsApplied__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnSettingsApplied__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnSettingsApplied__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnSettingsApplied__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSettingsApplied_DelegateWrapper(const FMulticastScriptDelegate& OnSettingsApplied)
{
	OnSettingsApplied.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnSettingsApplied ******************************************************

// ********** Begin Class UZonefallSettingsMenuWidget Function ApplySettingsNow ********************
struct Z_Construct_UFunction_UZonefallSettingsMenuWidget_ApplySettingsNow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplySettingsNow constinit property declarations **********************
// ********** End Function ApplySettingsNow constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_ApplySettingsNow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsMenuWidget, nullptr, "ApplySettingsNow", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_ApplySettingsNow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsMenuWidget_ApplySettingsNow_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallSettingsMenuWidget_ApplySettingsNow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsMenuWidget_ApplySettingsNow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsMenuWidget::execApplySettingsNow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplySettingsNow();
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsMenuWidget Function ApplySettingsNow **********************

// ********** Begin Class UZonefallSettingsMenuWidget Function HandleApplyClicked ******************
struct Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleApplyClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleApplyClicked constinit property declarations ********************
// ********** End Function HandleApplyClicked constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleApplyClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsMenuWidget, nullptr, "HandleApplyClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleApplyClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleApplyClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleApplyClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleApplyClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsMenuWidget::execHandleApplyClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleApplyClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsMenuWidget Function HandleApplyClicked ********************

// ********** Begin Class UZonefallSettingsMenuWidget Function HandleBackClicked *******************
struct Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleBackClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleBackClicked constinit property declarations *********************
// ********** End Function HandleBackClicked constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleBackClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsMenuWidget, nullptr, "HandleBackClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleBackClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleBackClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleBackClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleBackClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsMenuWidget::execHandleBackClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleBackClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsMenuWidget Function HandleBackClicked *********************

// ********** Begin Class UZonefallSettingsMenuWidget Function HandleDisplayModeSelectionChanged ***
struct Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDisplayModeSelectionChanged_Statics
{
	struct ZonefallSettingsMenuWidget_eventHandleDisplayModeSelectionChanged_Parms
	{
		FString SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleDisplayModeSelectionChanged constinit property declarations *****
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleDisplayModeSelectionChanged constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleDisplayModeSelectionChanged Property Definitions ****************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDisplayModeSelectionChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsMenuWidget_eventHandleDisplayModeSelectionChanged_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDisplayModeSelectionChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsMenuWidget_eventHandleDisplayModeSelectionChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4243707124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDisplayModeSelectionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDisplayModeSelectionChanged_Statics::NewProp_SelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDisplayModeSelectionChanged_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDisplayModeSelectionChanged_Statics::PropPointers) < 2048);
// ********** End Function HandleDisplayModeSelectionChanged Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDisplayModeSelectionChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsMenuWidget, nullptr, "HandleDisplayModeSelectionChanged", 	Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDisplayModeSelectionChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDisplayModeSelectionChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDisplayModeSelectionChanged_Statics::ZonefallSettingsMenuWidget_eventHandleDisplayModeSelectionChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDisplayModeSelectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDisplayModeSelectionChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDisplayModeSelectionChanged_Statics::ZonefallSettingsMenuWidget_eventHandleDisplayModeSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDisplayModeSelectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDisplayModeSelectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsMenuWidget::execHandleDisplayModeSelectionChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDisplayModeSelectionChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsMenuWidget Function HandleDisplayModeSelectionChanged *****

// ********** Begin Class UZonefallSettingsMenuWidget Function HandleDLSSSelectionChanged **********
struct Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDLSSSelectionChanged_Statics
{
	struct ZonefallSettingsMenuWidget_eventHandleDLSSSelectionChanged_Parms
	{
		FString SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleDLSSSelectionChanged constinit property declarations ************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleDLSSSelectionChanged constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleDLSSSelectionChanged Property Definitions ***********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDLSSSelectionChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsMenuWidget_eventHandleDLSSSelectionChanged_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDLSSSelectionChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsMenuWidget_eventHandleDLSSSelectionChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4243707124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDLSSSelectionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDLSSSelectionChanged_Statics::NewProp_SelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDLSSSelectionChanged_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDLSSSelectionChanged_Statics::PropPointers) < 2048);
// ********** End Function HandleDLSSSelectionChanged Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDLSSSelectionChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsMenuWidget, nullptr, "HandleDLSSSelectionChanged", 	Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDLSSSelectionChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDLSSSelectionChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDLSSSelectionChanged_Statics::ZonefallSettingsMenuWidget_eventHandleDLSSSelectionChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDLSSSelectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDLSSSelectionChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDLSSSelectionChanged_Statics::ZonefallSettingsMenuWidget_eventHandleDLSSSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDLSSSelectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDLSSSelectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsMenuWidget::execHandleDLSSSelectionChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDLSSSelectionChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsMenuWidget Function HandleDLSSSelectionChanged ************

// ********** Begin Class UZonefallSettingsMenuWidget Function HandleFPSLimitSelectionChanged ******
struct Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFPSLimitSelectionChanged_Statics
{
	struct ZonefallSettingsMenuWidget_eventHandleFPSLimitSelectionChanged_Parms
	{
		FString SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleFPSLimitSelectionChanged constinit property declarations ********
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleFPSLimitSelectionChanged constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleFPSLimitSelectionChanged Property Definitions *******************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFPSLimitSelectionChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsMenuWidget_eventHandleFPSLimitSelectionChanged_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFPSLimitSelectionChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsMenuWidget_eventHandleFPSLimitSelectionChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4243707124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFPSLimitSelectionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFPSLimitSelectionChanged_Statics::NewProp_SelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFPSLimitSelectionChanged_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFPSLimitSelectionChanged_Statics::PropPointers) < 2048);
// ********** End Function HandleFPSLimitSelectionChanged Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFPSLimitSelectionChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsMenuWidget, nullptr, "HandleFPSLimitSelectionChanged", 	Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFPSLimitSelectionChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFPSLimitSelectionChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFPSLimitSelectionChanged_Statics::ZonefallSettingsMenuWidget_eventHandleFPSLimitSelectionChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFPSLimitSelectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFPSLimitSelectionChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFPSLimitSelectionChanged_Statics::ZonefallSettingsMenuWidget_eventHandleFPSLimitSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFPSLimitSelectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFPSLimitSelectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsMenuWidget::execHandleFPSLimitSelectionChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleFPSLimitSelectionChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsMenuWidget Function HandleFPSLimitSelectionChanged ********

// ********** Begin Class UZonefallSettingsMenuWidget Function HandleFrameGenerationSelectionChanged 
struct Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFrameGenerationSelectionChanged_Statics
{
	struct ZonefallSettingsMenuWidget_eventHandleFrameGenerationSelectionChanged_Parms
	{
		FString SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleFrameGenerationSelectionChanged constinit property declarations *
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleFrameGenerationSelectionChanged constinit property declarations ***
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleFrameGenerationSelectionChanged Property Definitions ************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFrameGenerationSelectionChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsMenuWidget_eventHandleFrameGenerationSelectionChanged_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFrameGenerationSelectionChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsMenuWidget_eventHandleFrameGenerationSelectionChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4243707124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFrameGenerationSelectionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFrameGenerationSelectionChanged_Statics::NewProp_SelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFrameGenerationSelectionChanged_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFrameGenerationSelectionChanged_Statics::PropPointers) < 2048);
// ********** End Function HandleFrameGenerationSelectionChanged Property Definitions **************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFrameGenerationSelectionChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsMenuWidget, nullptr, "HandleFrameGenerationSelectionChanged", 	Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFrameGenerationSelectionChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFrameGenerationSelectionChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFrameGenerationSelectionChanged_Statics::ZonefallSettingsMenuWidget_eventHandleFrameGenerationSelectionChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFrameGenerationSelectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFrameGenerationSelectionChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFrameGenerationSelectionChanged_Statics::ZonefallSettingsMenuWidget_eventHandleFrameGenerationSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFrameGenerationSelectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFrameGenerationSelectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsMenuWidget::execHandleFrameGenerationSelectionChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleFrameGenerationSelectionChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsMenuWidget Function HandleFrameGenerationSelectionChanged *

// ********** Begin Class UZonefallSettingsMenuWidget Function HandleFSRFrameGenerationSelectionChanged 
struct Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRFrameGenerationSelectionChanged_Statics
{
	struct ZonefallSettingsMenuWidget_eventHandleFSRFrameGenerationSelectionChanged_Parms
	{
		FString SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleFSRFrameGenerationSelectionChanged constinit property declarations 
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleFSRFrameGenerationSelectionChanged constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleFSRFrameGenerationSelectionChanged Property Definitions *********
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRFrameGenerationSelectionChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsMenuWidget_eventHandleFSRFrameGenerationSelectionChanged_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRFrameGenerationSelectionChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsMenuWidget_eventHandleFSRFrameGenerationSelectionChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4243707124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRFrameGenerationSelectionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRFrameGenerationSelectionChanged_Statics::NewProp_SelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRFrameGenerationSelectionChanged_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRFrameGenerationSelectionChanged_Statics::PropPointers) < 2048);
// ********** End Function HandleFSRFrameGenerationSelectionChanged Property Definitions ***********
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRFrameGenerationSelectionChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsMenuWidget, nullptr, "HandleFSRFrameGenerationSelectionChanged", 	Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRFrameGenerationSelectionChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRFrameGenerationSelectionChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRFrameGenerationSelectionChanged_Statics::ZonefallSettingsMenuWidget_eventHandleFSRFrameGenerationSelectionChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRFrameGenerationSelectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRFrameGenerationSelectionChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRFrameGenerationSelectionChanged_Statics::ZonefallSettingsMenuWidget_eventHandleFSRFrameGenerationSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRFrameGenerationSelectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRFrameGenerationSelectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsMenuWidget::execHandleFSRFrameGenerationSelectionChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleFSRFrameGenerationSelectionChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsMenuWidget Function HandleFSRFrameGenerationSelectionChanged 

// ********** Begin Class UZonefallSettingsMenuWidget Function HandleFSRSelectionChanged ***********
struct Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRSelectionChanged_Statics
{
	struct ZonefallSettingsMenuWidget_eventHandleFSRSelectionChanged_Parms
	{
		FString SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleFSRSelectionChanged constinit property declarations *************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleFSRSelectionChanged constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleFSRSelectionChanged Property Definitions ************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRSelectionChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsMenuWidget_eventHandleFSRSelectionChanged_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRSelectionChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsMenuWidget_eventHandleFSRSelectionChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4243707124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRSelectionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRSelectionChanged_Statics::NewProp_SelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRSelectionChanged_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRSelectionChanged_Statics::PropPointers) < 2048);
// ********** End Function HandleFSRSelectionChanged Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRSelectionChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsMenuWidget, nullptr, "HandleFSRSelectionChanged", 	Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRSelectionChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRSelectionChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRSelectionChanged_Statics::ZonefallSettingsMenuWidget_eventHandleFSRSelectionChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRSelectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRSelectionChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRSelectionChanged_Statics::ZonefallSettingsMenuWidget_eventHandleFSRSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRSelectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRSelectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsMenuWidget::execHandleFSRSelectionChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleFSRSelectionChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsMenuWidget Function HandleFSRSelectionChanged *************

// ********** Begin Class UZonefallSettingsMenuWidget Function HandleGraphicsPresetSelectionChanged 
struct Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleGraphicsPresetSelectionChanged_Statics
{
	struct ZonefallSettingsMenuWidget_eventHandleGraphicsPresetSelectionChanged_Parms
	{
		FString SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleGraphicsPresetSelectionChanged constinit property declarations **
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleGraphicsPresetSelectionChanged constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleGraphicsPresetSelectionChanged Property Definitions *************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleGraphicsPresetSelectionChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsMenuWidget_eventHandleGraphicsPresetSelectionChanged_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleGraphicsPresetSelectionChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsMenuWidget_eventHandleGraphicsPresetSelectionChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4243707124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleGraphicsPresetSelectionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleGraphicsPresetSelectionChanged_Statics::NewProp_SelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleGraphicsPresetSelectionChanged_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleGraphicsPresetSelectionChanged_Statics::PropPointers) < 2048);
// ********** End Function HandleGraphicsPresetSelectionChanged Property Definitions ***************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleGraphicsPresetSelectionChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsMenuWidget, nullptr, "HandleGraphicsPresetSelectionChanged", 	Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleGraphicsPresetSelectionChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleGraphicsPresetSelectionChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleGraphicsPresetSelectionChanged_Statics::ZonefallSettingsMenuWidget_eventHandleGraphicsPresetSelectionChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleGraphicsPresetSelectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleGraphicsPresetSelectionChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleGraphicsPresetSelectionChanged_Statics::ZonefallSettingsMenuWidget_eventHandleGraphicsPresetSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleGraphicsPresetSelectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleGraphicsPresetSelectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsMenuWidget::execHandleGraphicsPresetSelectionChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleGraphicsPresetSelectionChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsMenuWidget Function HandleGraphicsPresetSelectionChanged **

// ********** Begin Class UZonefallSettingsMenuWidget Function HandleLumenSelectionChanged *********
struct Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleLumenSelectionChanged_Statics
{
	struct ZonefallSettingsMenuWidget_eventHandleLumenSelectionChanged_Parms
	{
		FString SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleLumenSelectionChanged constinit property declarations ***********
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleLumenSelectionChanged constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleLumenSelectionChanged Property Definitions **********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleLumenSelectionChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsMenuWidget_eventHandleLumenSelectionChanged_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleLumenSelectionChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsMenuWidget_eventHandleLumenSelectionChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4243707124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleLumenSelectionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleLumenSelectionChanged_Statics::NewProp_SelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleLumenSelectionChanged_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleLumenSelectionChanged_Statics::PropPointers) < 2048);
// ********** End Function HandleLumenSelectionChanged Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleLumenSelectionChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsMenuWidget, nullptr, "HandleLumenSelectionChanged", 	Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleLumenSelectionChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleLumenSelectionChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleLumenSelectionChanged_Statics::ZonefallSettingsMenuWidget_eventHandleLumenSelectionChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleLumenSelectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleLumenSelectionChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleLumenSelectionChanged_Statics::ZonefallSettingsMenuWidget_eventHandleLumenSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleLumenSelectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleLumenSelectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsMenuWidget::execHandleLumenSelectionChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleLumenSelectionChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsMenuWidget Function HandleLumenSelectionChanged ***********

// ********** Begin Class UZonefallSettingsMenuWidget Function HandleOverallQualitySelectionChanged 
struct Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleOverallQualitySelectionChanged_Statics
{
	struct ZonefallSettingsMenuWidget_eventHandleOverallQualitySelectionChanged_Parms
	{
		FString SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleOverallQualitySelectionChanged constinit property declarations **
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleOverallQualitySelectionChanged constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleOverallQualitySelectionChanged Property Definitions *************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleOverallQualitySelectionChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsMenuWidget_eventHandleOverallQualitySelectionChanged_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleOverallQualitySelectionChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsMenuWidget_eventHandleOverallQualitySelectionChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4243707124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleOverallQualitySelectionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleOverallQualitySelectionChanged_Statics::NewProp_SelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleOverallQualitySelectionChanged_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleOverallQualitySelectionChanged_Statics::PropPointers) < 2048);
// ********** End Function HandleOverallQualitySelectionChanged Property Definitions ***************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleOverallQualitySelectionChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsMenuWidget, nullptr, "HandleOverallQualitySelectionChanged", 	Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleOverallQualitySelectionChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleOverallQualitySelectionChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleOverallQualitySelectionChanged_Statics::ZonefallSettingsMenuWidget_eventHandleOverallQualitySelectionChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleOverallQualitySelectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleOverallQualitySelectionChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleOverallQualitySelectionChanged_Statics::ZonefallSettingsMenuWidget_eventHandleOverallQualitySelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleOverallQualitySelectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleOverallQualitySelectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsMenuWidget::execHandleOverallQualitySelectionChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleOverallQualitySelectionChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsMenuWidget Function HandleOverallQualitySelectionChanged **

// ********** Begin Class UZonefallSettingsMenuWidget Function HandleResetClicked ******************
struct Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleResetClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleResetClicked constinit property declarations ********************
// ********** End Function HandleResetClicked constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleResetClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsMenuWidget, nullptr, "HandleResetClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleResetClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleResetClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleResetClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleResetClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsMenuWidget::execHandleResetClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleResetClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsMenuWidget Function HandleResetClicked ********************

// ********** Begin Class UZonefallSettingsMenuWidget Function HandleResolutionScaleSelectionChanged 
struct Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleResolutionScaleSelectionChanged_Statics
{
	struct ZonefallSettingsMenuWidget_eventHandleResolutionScaleSelectionChanged_Parms
	{
		FString SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleResolutionScaleSelectionChanged constinit property declarations *
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleResolutionScaleSelectionChanged constinit property declarations ***
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleResolutionScaleSelectionChanged Property Definitions ************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleResolutionScaleSelectionChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsMenuWidget_eventHandleResolutionScaleSelectionChanged_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleResolutionScaleSelectionChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsMenuWidget_eventHandleResolutionScaleSelectionChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4243707124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleResolutionScaleSelectionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleResolutionScaleSelectionChanged_Statics::NewProp_SelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleResolutionScaleSelectionChanged_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleResolutionScaleSelectionChanged_Statics::PropPointers) < 2048);
// ********** End Function HandleResolutionScaleSelectionChanged Property Definitions **************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleResolutionScaleSelectionChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsMenuWidget, nullptr, "HandleResolutionScaleSelectionChanged", 	Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleResolutionScaleSelectionChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleResolutionScaleSelectionChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleResolutionScaleSelectionChanged_Statics::ZonefallSettingsMenuWidget_eventHandleResolutionScaleSelectionChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleResolutionScaleSelectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleResolutionScaleSelectionChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleResolutionScaleSelectionChanged_Statics::ZonefallSettingsMenuWidget_eventHandleResolutionScaleSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleResolutionScaleSelectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleResolutionScaleSelectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsMenuWidget::execHandleResolutionScaleSelectionChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleResolutionScaleSelectionChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsMenuWidget Function HandleResolutionScaleSelectionChanged *

// ********** Begin Class UZonefallSettingsMenuWidget Function HandleScreenResolutionSelectionChanged 
struct Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleScreenResolutionSelectionChanged_Statics
{
	struct ZonefallSettingsMenuWidget_eventHandleScreenResolutionSelectionChanged_Parms
	{
		FString SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleScreenResolutionSelectionChanged constinit property declarations 
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleScreenResolutionSelectionChanged constinit property declarations **
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleScreenResolutionSelectionChanged Property Definitions ***********
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleScreenResolutionSelectionChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsMenuWidget_eventHandleScreenResolutionSelectionChanged_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleScreenResolutionSelectionChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsMenuWidget_eventHandleScreenResolutionSelectionChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4243707124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleScreenResolutionSelectionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleScreenResolutionSelectionChanged_Statics::NewProp_SelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleScreenResolutionSelectionChanged_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleScreenResolutionSelectionChanged_Statics::PropPointers) < 2048);
// ********** End Function HandleScreenResolutionSelectionChanged Property Definitions *************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleScreenResolutionSelectionChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsMenuWidget, nullptr, "HandleScreenResolutionSelectionChanged", 	Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleScreenResolutionSelectionChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleScreenResolutionSelectionChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleScreenResolutionSelectionChanged_Statics::ZonefallSettingsMenuWidget_eventHandleScreenResolutionSelectionChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleScreenResolutionSelectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleScreenResolutionSelectionChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleScreenResolutionSelectionChanged_Statics::ZonefallSettingsMenuWidget_eventHandleScreenResolutionSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleScreenResolutionSelectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleScreenResolutionSelectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsMenuWidget::execHandleScreenResolutionSelectionChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleScreenResolutionSelectionChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsMenuWidget Function HandleScreenResolutionSelectionChanged 

// ********** Begin Class UZonefallSettingsMenuWidget Function HandleVSyncSelectionChanged *********
struct Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleVSyncSelectionChanged_Statics
{
	struct ZonefallSettingsMenuWidget_eventHandleVSyncSelectionChanged_Parms
	{
		FString SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleVSyncSelectionChanged constinit property declarations ***********
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleVSyncSelectionChanged constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleVSyncSelectionChanged Property Definitions **********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleVSyncSelectionChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsMenuWidget_eventHandleVSyncSelectionChanged_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleVSyncSelectionChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsMenuWidget_eventHandleVSyncSelectionChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4243707124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleVSyncSelectionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleVSyncSelectionChanged_Statics::NewProp_SelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleVSyncSelectionChanged_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleVSyncSelectionChanged_Statics::PropPointers) < 2048);
// ********** End Function HandleVSyncSelectionChanged Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleVSyncSelectionChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsMenuWidget, nullptr, "HandleVSyncSelectionChanged", 	Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleVSyncSelectionChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleVSyncSelectionChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleVSyncSelectionChanged_Statics::ZonefallSettingsMenuWidget_eventHandleVSyncSelectionChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleVSyncSelectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleVSyncSelectionChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleVSyncSelectionChanged_Statics::ZonefallSettingsMenuWidget_eventHandleVSyncSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleVSyncSelectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleVSyncSelectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsMenuWidget::execHandleVSyncSelectionChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleVSyncSelectionChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsMenuWidget Function HandleVSyncSelectionChanged ***********

// ********** Begin Class UZonefallSettingsMenuWidget Function RefreshFromSettings *****************
struct Z_Construct_UFunction_UZonefallSettingsMenuWidget_RefreshFromSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RefreshFromSettings constinit property declarations *******************
// ********** End Function RefreshFromSettings constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_RefreshFromSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsMenuWidget, nullptr, "RefreshFromSettings", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_RefreshFromSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsMenuWidget_RefreshFromSettings_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallSettingsMenuWidget_RefreshFromSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsMenuWidget_RefreshFromSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsMenuWidget::execRefreshFromSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshFromSettings();
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsMenuWidget Function RefreshFromSettings *******************

// ********** Begin Class UZonefallSettingsMenuWidget Function ResetToDefaults *********************
struct Z_Construct_UFunction_UZonefallSettingsMenuWidget_ResetToDefaults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetToDefaults constinit property declarations ***********************
// ********** End Function ResetToDefaults constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsMenuWidget_ResetToDefaults_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsMenuWidget, nullptr, "ResetToDefaults", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsMenuWidget_ResetToDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsMenuWidget_ResetToDefaults_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallSettingsMenuWidget_ResetToDefaults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsMenuWidget_ResetToDefaults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsMenuWidget::execResetToDefaults)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetToDefaults();
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsMenuWidget Function ResetToDefaults ***********************

// ********** Begin Class UZonefallSettingsMenuWidget **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallSettingsMenuWidget;
UClass* UZonefallSettingsMenuWidget::GetPrivateStaticClass()
{
	using TClass = UZonefallSettingsMenuWidget;
	if (!Z_Registration_Info_UClass_UZonefallSettingsMenuWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallSettingsMenuWidget"),
			Z_Registration_Info_UClass_UZonefallSettingsMenuWidget.InnerSingleton,
			StaticRegisterNativesUZonefallSettingsMenuWidget,
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
	return Z_Registration_Info_UClass_UZonefallSettingsMenuWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallSettingsMenuWidget_NoRegister()
{
	return UZonefallSettingsMenuWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/ZonefallSettingsMenuWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBackRequested_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSettingsApplied_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBorder_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBox_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayModeComboBox_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayModeText_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphicsPresetComboBox_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphicsPresetText_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverallQualityComboBox_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverallQualityText_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionScaleComboBox_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionScaleText_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenResolutionComboBox_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenResolutionText_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VSyncComboBox_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VSyncText_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPSLimitComboBox_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPSLimitText_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LumenComboBox_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LumenText_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DLSSComboBox_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DLSSText_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameGenerationComboBox_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameGenerationText_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FSRComboBox_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FSRText_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FSRFrameGenerationComboBox_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FSRFrameGenerationText_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryUsageProgressBar_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryUsageText_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyStatusText_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyButton_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetButton_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackButton_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsObject_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayModeComboBoxName_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings|Binding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Assign widget names from your UMG in Details to auto-bind everything.\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign widget names from your UMG in Details to auto-bind everything." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphicsPresetComboBoxName_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverallQualityComboBoxName_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionScaleComboBoxName_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenResolutionComboBoxName_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings|Binding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Your Fullscreen combo can be used here for screen resolutions (example: \"Fullscreen\").\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Your Fullscreen combo can be used here for screen resolutions (example: \"Fullscreen\")." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VSyncComboBoxName_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPSLimitComboBoxName_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LumenComboBoxName_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DLSSComboBoxName_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameGenerationComboBoxName_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FSRComboBoxName_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FSRFrameGenerationComboBoxName_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyButtonName_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetButtonName_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackButtonName_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryUsageProgressBarName_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryUsageTextName_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyStatusTextName_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoApplyDisplayModeAndResolution_MetaData[] = {
		{ "Category", "Zonefall|UI|Settings|Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, screen mode/resolution are applied immediately when selected.\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, screen mode/resolution are applied immediately when selected." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallSettingsMenuWidget constinit property declarations **************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBackRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSettingsApplied;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayModeComboBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayModeText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphicsPresetComboBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphicsPresetText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverallQualityComboBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverallQualityText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResolutionScaleComboBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResolutionScaleText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScreenResolutionComboBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScreenResolutionText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VSyncComboBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VSyncText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FPSLimitComboBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FPSLimitText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LumenComboBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LumenText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DLSSComboBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DLSSText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrameGenerationComboBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrameGenerationText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FSRComboBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FSRText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FSRFrameGenerationComboBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FSRFrameGenerationText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MemoryUsageProgressBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MemoryUsageText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ApplyStatusText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ApplyButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResetButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingsObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayModeComboBoxName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GraphicsPresetComboBoxName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OverallQualityComboBoxName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ResolutionScaleComboBoxName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ScreenResolutionComboBoxName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VSyncComboBoxName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FPSLimitComboBoxName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LumenComboBoxName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DLSSComboBoxName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FrameGenerationComboBoxName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FSRComboBoxName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FSRFrameGenerationComboBoxName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ApplyButtonName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ResetButtonName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BackButtonName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MemoryUsageProgressBarName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MemoryUsageTextName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ApplyStatusTextName;
	static void NewProp_bAutoApplyDisplayModeAndResolution_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoApplyDisplayModeAndResolution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallSettingsMenuWidget constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ApplySettingsNow"), .Pointer = &UZonefallSettingsMenuWidget::execApplySettingsNow },
		{ .NameUTF8 = UTF8TEXT("HandleApplyClicked"), .Pointer = &UZonefallSettingsMenuWidget::execHandleApplyClicked },
		{ .NameUTF8 = UTF8TEXT("HandleBackClicked"), .Pointer = &UZonefallSettingsMenuWidget::execHandleBackClicked },
		{ .NameUTF8 = UTF8TEXT("HandleDisplayModeSelectionChanged"), .Pointer = &UZonefallSettingsMenuWidget::execHandleDisplayModeSelectionChanged },
		{ .NameUTF8 = UTF8TEXT("HandleDLSSSelectionChanged"), .Pointer = &UZonefallSettingsMenuWidget::execHandleDLSSSelectionChanged },
		{ .NameUTF8 = UTF8TEXT("HandleFPSLimitSelectionChanged"), .Pointer = &UZonefallSettingsMenuWidget::execHandleFPSLimitSelectionChanged },
		{ .NameUTF8 = UTF8TEXT("HandleFrameGenerationSelectionChanged"), .Pointer = &UZonefallSettingsMenuWidget::execHandleFrameGenerationSelectionChanged },
		{ .NameUTF8 = UTF8TEXT("HandleFSRFrameGenerationSelectionChanged"), .Pointer = &UZonefallSettingsMenuWidget::execHandleFSRFrameGenerationSelectionChanged },
		{ .NameUTF8 = UTF8TEXT("HandleFSRSelectionChanged"), .Pointer = &UZonefallSettingsMenuWidget::execHandleFSRSelectionChanged },
		{ .NameUTF8 = UTF8TEXT("HandleGraphicsPresetSelectionChanged"), .Pointer = &UZonefallSettingsMenuWidget::execHandleGraphicsPresetSelectionChanged },
		{ .NameUTF8 = UTF8TEXT("HandleLumenSelectionChanged"), .Pointer = &UZonefallSettingsMenuWidget::execHandleLumenSelectionChanged },
		{ .NameUTF8 = UTF8TEXT("HandleOverallQualitySelectionChanged"), .Pointer = &UZonefallSettingsMenuWidget::execHandleOverallQualitySelectionChanged },
		{ .NameUTF8 = UTF8TEXT("HandleResetClicked"), .Pointer = &UZonefallSettingsMenuWidget::execHandleResetClicked },
		{ .NameUTF8 = UTF8TEXT("HandleResolutionScaleSelectionChanged"), .Pointer = &UZonefallSettingsMenuWidget::execHandleResolutionScaleSelectionChanged },
		{ .NameUTF8 = UTF8TEXT("HandleScreenResolutionSelectionChanged"), .Pointer = &UZonefallSettingsMenuWidget::execHandleScreenResolutionSelectionChanged },
		{ .NameUTF8 = UTF8TEXT("HandleVSyncSelectionChanged"), .Pointer = &UZonefallSettingsMenuWidget::execHandleVSyncSelectionChanged },
		{ .NameUTF8 = UTF8TEXT("RefreshFromSettings"), .Pointer = &UZonefallSettingsMenuWidget::execRefreshFromSettings },
		{ .NameUTF8 = UTF8TEXT("ResetToDefaults"), .Pointer = &UZonefallSettingsMenuWidget::execResetToDefaults },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallSettingsMenuWidget_ApplySettingsNow, "ApplySettingsNow" }, // 3832832297
		{ &Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleApplyClicked, "HandleApplyClicked" }, // 390610297
		{ &Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleBackClicked, "HandleBackClicked" }, // 1969728646
		{ &Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDisplayModeSelectionChanged, "HandleDisplayModeSelectionChanged" }, // 2603843836
		{ &Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleDLSSSelectionChanged, "HandleDLSSSelectionChanged" }, // 1579200073
		{ &Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFPSLimitSelectionChanged, "HandleFPSLimitSelectionChanged" }, // 1113875929
		{ &Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFrameGenerationSelectionChanged, "HandleFrameGenerationSelectionChanged" }, // 488404843
		{ &Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRFrameGenerationSelectionChanged, "HandleFSRFrameGenerationSelectionChanged" }, // 3202156964
		{ &Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleFSRSelectionChanged, "HandleFSRSelectionChanged" }, // 1229284648
		{ &Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleGraphicsPresetSelectionChanged, "HandleGraphicsPresetSelectionChanged" }, // 977705670
		{ &Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleLumenSelectionChanged, "HandleLumenSelectionChanged" }, // 1792239981
		{ &Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleOverallQualitySelectionChanged, "HandleOverallQualitySelectionChanged" }, // 1977959391
		{ &Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleResetClicked, "HandleResetClicked" }, // 3383973724
		{ &Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleResolutionScaleSelectionChanged, "HandleResolutionScaleSelectionChanged" }, // 1249406852
		{ &Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleScreenResolutionSelectionChanged, "HandleScreenResolutionSelectionChanged" }, // 2686471585
		{ &Z_Construct_UFunction_UZonefallSettingsMenuWidget_HandleVSyncSelectionChanged, "HandleVSyncSelectionChanged" }, // 3833776109
		{ &Z_Construct_UFunction_UZonefallSettingsMenuWidget_RefreshFromSettings, "RefreshFromSettings" }, // 1768789001
		{ &Z_Construct_UFunction_UZonefallSettingsMenuWidget_ResetToDefaults, "ResetToDefaults" }, // 2989812097
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallSettingsMenuWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics

// ********** Begin Class UZonefallSettingsMenuWidget Property Definitions *************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_OnBackRequested = { "OnBackRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, OnBackRequested), Z_Construct_UDelegateFunction_UIWorld_OnSettingsBackRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBackRequested_MetaData), NewProp_OnBackRequested_MetaData) }; // 1325650552
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_OnSettingsApplied = { "OnSettingsApplied", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, OnSettingsApplied), Z_Construct_UDelegateFunction_UIWorld_OnSettingsApplied__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSettingsApplied_MetaData), NewProp_OnSettingsApplied_MetaData) }; // 472324361
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_RootBorder = { "RootBorder", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, RootBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBorder_MetaData), NewProp_RootBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_RootBox = { "RootBox", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, RootBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBox_MetaData), NewProp_RootBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, TitleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleText_MetaData), NewProp_TitleText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_DisplayModeComboBox = { "DisplayModeComboBox", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, DisplayModeComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayModeComboBox_MetaData), NewProp_DisplayModeComboBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_DisplayModeText = { "DisplayModeText", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, DisplayModeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayModeText_MetaData), NewProp_DisplayModeText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_GraphicsPresetComboBox = { "GraphicsPresetComboBox", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, GraphicsPresetComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphicsPresetComboBox_MetaData), NewProp_GraphicsPresetComboBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_GraphicsPresetText = { "GraphicsPresetText", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, GraphicsPresetText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphicsPresetText_MetaData), NewProp_GraphicsPresetText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_OverallQualityComboBox = { "OverallQualityComboBox", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, OverallQualityComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverallQualityComboBox_MetaData), NewProp_OverallQualityComboBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_OverallQualityText = { "OverallQualityText", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, OverallQualityText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverallQualityText_MetaData), NewProp_OverallQualityText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_ResolutionScaleComboBox = { "ResolutionScaleComboBox", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, ResolutionScaleComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionScaleComboBox_MetaData), NewProp_ResolutionScaleComboBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_ResolutionScaleText = { "ResolutionScaleText", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, ResolutionScaleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionScaleText_MetaData), NewProp_ResolutionScaleText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_ScreenResolutionComboBox = { "ScreenResolutionComboBox", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, ScreenResolutionComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenResolutionComboBox_MetaData), NewProp_ScreenResolutionComboBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_ScreenResolutionText = { "ScreenResolutionText", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, ScreenResolutionText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenResolutionText_MetaData), NewProp_ScreenResolutionText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_VSyncComboBox = { "VSyncComboBox", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, VSyncComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VSyncComboBox_MetaData), NewProp_VSyncComboBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_VSyncText = { "VSyncText", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, VSyncText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VSyncText_MetaData), NewProp_VSyncText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_FPSLimitComboBox = { "FPSLimitComboBox", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, FPSLimitComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPSLimitComboBox_MetaData), NewProp_FPSLimitComboBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_FPSLimitText = { "FPSLimitText", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, FPSLimitText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPSLimitText_MetaData), NewProp_FPSLimitText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_LumenComboBox = { "LumenComboBox", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, LumenComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LumenComboBox_MetaData), NewProp_LumenComboBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_LumenText = { "LumenText", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, LumenText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LumenText_MetaData), NewProp_LumenText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_DLSSComboBox = { "DLSSComboBox", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, DLSSComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DLSSComboBox_MetaData), NewProp_DLSSComboBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_DLSSText = { "DLSSText", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, DLSSText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DLSSText_MetaData), NewProp_DLSSText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_FrameGenerationComboBox = { "FrameGenerationComboBox", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, FrameGenerationComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameGenerationComboBox_MetaData), NewProp_FrameGenerationComboBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_FrameGenerationText = { "FrameGenerationText", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, FrameGenerationText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameGenerationText_MetaData), NewProp_FrameGenerationText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_FSRComboBox = { "FSRComboBox", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, FSRComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FSRComboBox_MetaData), NewProp_FSRComboBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_FSRText = { "FSRText", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, FSRText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FSRText_MetaData), NewProp_FSRText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_FSRFrameGenerationComboBox = { "FSRFrameGenerationComboBox", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, FSRFrameGenerationComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FSRFrameGenerationComboBox_MetaData), NewProp_FSRFrameGenerationComboBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_FSRFrameGenerationText = { "FSRFrameGenerationText", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, FSRFrameGenerationText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FSRFrameGenerationText_MetaData), NewProp_FSRFrameGenerationText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_MemoryUsageProgressBar = { "MemoryUsageProgressBar", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, MemoryUsageProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryUsageProgressBar_MetaData), NewProp_MemoryUsageProgressBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_MemoryUsageText = { "MemoryUsageText", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, MemoryUsageText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryUsageText_MetaData), NewProp_MemoryUsageText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_ApplyStatusText = { "ApplyStatusText", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, ApplyStatusText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyStatusText_MetaData), NewProp_ApplyStatusText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_ApplyButton = { "ApplyButton", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, ApplyButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyButton_MetaData), NewProp_ApplyButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_ResetButton = { "ResetButton", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, ResetButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetButton_MetaData), NewProp_ResetButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_BackButton = { "BackButton", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, BackButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackButton_MetaData), NewProp_BackButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_SettingsObject = { "SettingsObject", nullptr, (EPropertyFlags)0x0124080000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, SettingsObject), Z_Construct_UClass_UZonefallSettingsDataObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsObject_MetaData), NewProp_SettingsObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_DisplayModeComboBoxName = { "DisplayModeComboBoxName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, DisplayModeComboBoxName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayModeComboBoxName_MetaData), NewProp_DisplayModeComboBoxName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_GraphicsPresetComboBoxName = { "GraphicsPresetComboBoxName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, GraphicsPresetComboBoxName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphicsPresetComboBoxName_MetaData), NewProp_GraphicsPresetComboBoxName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_OverallQualityComboBoxName = { "OverallQualityComboBoxName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, OverallQualityComboBoxName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverallQualityComboBoxName_MetaData), NewProp_OverallQualityComboBoxName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_ResolutionScaleComboBoxName = { "ResolutionScaleComboBoxName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, ResolutionScaleComboBoxName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionScaleComboBoxName_MetaData), NewProp_ResolutionScaleComboBoxName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_ScreenResolutionComboBoxName = { "ScreenResolutionComboBoxName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, ScreenResolutionComboBoxName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenResolutionComboBoxName_MetaData), NewProp_ScreenResolutionComboBoxName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_VSyncComboBoxName = { "VSyncComboBoxName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, VSyncComboBoxName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VSyncComboBoxName_MetaData), NewProp_VSyncComboBoxName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_FPSLimitComboBoxName = { "FPSLimitComboBoxName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, FPSLimitComboBoxName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPSLimitComboBoxName_MetaData), NewProp_FPSLimitComboBoxName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_LumenComboBoxName = { "LumenComboBoxName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, LumenComboBoxName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LumenComboBoxName_MetaData), NewProp_LumenComboBoxName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_DLSSComboBoxName = { "DLSSComboBoxName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, DLSSComboBoxName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DLSSComboBoxName_MetaData), NewProp_DLSSComboBoxName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_FrameGenerationComboBoxName = { "FrameGenerationComboBoxName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, FrameGenerationComboBoxName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameGenerationComboBoxName_MetaData), NewProp_FrameGenerationComboBoxName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_FSRComboBoxName = { "FSRComboBoxName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, FSRComboBoxName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FSRComboBoxName_MetaData), NewProp_FSRComboBoxName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_FSRFrameGenerationComboBoxName = { "FSRFrameGenerationComboBoxName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, FSRFrameGenerationComboBoxName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FSRFrameGenerationComboBoxName_MetaData), NewProp_FSRFrameGenerationComboBoxName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_ApplyButtonName = { "ApplyButtonName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, ApplyButtonName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyButtonName_MetaData), NewProp_ApplyButtonName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_ResetButtonName = { "ResetButtonName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, ResetButtonName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetButtonName_MetaData), NewProp_ResetButtonName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_BackButtonName = { "BackButtonName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, BackButtonName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackButtonName_MetaData), NewProp_BackButtonName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_MemoryUsageProgressBarName = { "MemoryUsageProgressBarName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, MemoryUsageProgressBarName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryUsageProgressBarName_MetaData), NewProp_MemoryUsageProgressBarName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_MemoryUsageTextName = { "MemoryUsageTextName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, MemoryUsageTextName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryUsageTextName_MetaData), NewProp_MemoryUsageTextName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_ApplyStatusTextName = { "ApplyStatusTextName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsMenuWidget, ApplyStatusTextName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyStatusTextName_MetaData), NewProp_ApplyStatusTextName_MetaData) };
void Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_bAutoApplyDisplayModeAndResolution_SetBit(void* Obj)
{
	((UZonefallSettingsMenuWidget*)Obj)->bAutoApplyDisplayModeAndResolution = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_bAutoApplyDisplayModeAndResolution = { "bAutoApplyDisplayModeAndResolution", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallSettingsMenuWidget), &Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_bAutoApplyDisplayModeAndResolution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoApplyDisplayModeAndResolution_MetaData), NewProp_bAutoApplyDisplayModeAndResolution_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_OnBackRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_OnSettingsApplied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_RootBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_RootBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_TitleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_DisplayModeComboBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_DisplayModeText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_GraphicsPresetComboBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_GraphicsPresetText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_OverallQualityComboBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_OverallQualityText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_ResolutionScaleComboBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_ResolutionScaleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_ScreenResolutionComboBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_ScreenResolutionText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_VSyncComboBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_VSyncText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_FPSLimitComboBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_FPSLimitText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_LumenComboBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_LumenText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_DLSSComboBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_DLSSText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_FrameGenerationComboBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_FrameGenerationText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_FSRComboBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_FSRText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_FSRFrameGenerationComboBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_FSRFrameGenerationText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_MemoryUsageProgressBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_MemoryUsageText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_ApplyStatusText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_ApplyButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_ResetButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_BackButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_SettingsObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_DisplayModeComboBoxName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_GraphicsPresetComboBoxName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_OverallQualityComboBoxName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_ResolutionScaleComboBoxName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_ScreenResolutionComboBoxName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_VSyncComboBoxName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_FPSLimitComboBoxName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_LumenComboBoxName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_DLSSComboBoxName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_FrameGenerationComboBoxName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_FSRComboBoxName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_FSRFrameGenerationComboBoxName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_ApplyButtonName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_ResetButtonName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_BackButtonName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_MemoryUsageProgressBarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_MemoryUsageTextName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_ApplyStatusTextName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::NewProp_bAutoApplyDisplayModeAndResolution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::PropPointers) < 2048);
// ********** End Class UZonefallSettingsMenuWidget Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::ClassParams = {
	&UZonefallSettingsMenuWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::Class_MetaDataParams)
};
void UZonefallSettingsMenuWidget::StaticRegisterNativesUZonefallSettingsMenuWidget()
{
	UClass* Class = UZonefallSettingsMenuWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallSettingsMenuWidget()
{
	if (!Z_Registration_Info_UClass_UZonefallSettingsMenuWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallSettingsMenuWidget.OuterSingleton, Z_Construct_UClass_UZonefallSettingsMenuWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallSettingsMenuWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallSettingsMenuWidget);
UZonefallSettingsMenuWidget::~UZonefallSettingsMenuWidget() {}
// ********** End Class UZonefallSettingsMenuWidget ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsMenuWidget_h__Script_UIWorld_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZonefallSettingsMenuWidget, UZonefallSettingsMenuWidget::StaticClass, TEXT("UZonefallSettingsMenuWidget"), &Z_Registration_Info_UClass_UZonefallSettingsMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallSettingsMenuWidget), 4259834166U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsMenuWidget_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsMenuWidget_h__Script_UIWorld_1249543382{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsMenuWidget_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsMenuWidget_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
