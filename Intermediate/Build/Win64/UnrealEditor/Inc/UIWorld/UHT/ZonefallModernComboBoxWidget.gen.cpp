// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZonefallModernComboBoxWidget.h"
#include "Fonts/SlateFontInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallModernComboBoxWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallModernComboBoxWidget();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallModernComboBoxWidget_NoRegister();
UIWORLD_API UEnum* Z_Construct_UEnum_UIWorld_EZonefallModernComboPreset();
UIWORLD_API UEnum* Z_Construct_UEnum_UIWorld_EZonefallModernComboTheme();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallModernComboSelectionChanged__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnZonefallModernComboSelectionChanged ********************************
struct Z_Construct_UDelegateFunction_UIWorld_OnZonefallModernComboSelectionChanged__DelegateSignature_Statics
{
	struct _Script_UIWorld_eventOnZonefallModernComboSelectionChanged_Parms
	{
		FString SelectedItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnZonefallModernComboSelectionChanged constinit property declarations 
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnZonefallModernComboSelectionChanged constinit property declarations **
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnZonefallModernComboSelectionChanged Property Definitions ***********
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UIWorld_OnZonefallModernComboSelectionChanged__DelegateSignature_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UIWorld_eventOnZonefallModernComboSelectionChanged_Parms, SelectedItem), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedItem_MetaData), NewProp_SelectedItem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UIWorld_OnZonefallModernComboSelectionChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIWorld_OnZonefallModernComboSelectionChanged__DelegateSignature_Statics::NewProp_SelectedItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallModernComboSelectionChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnZonefallModernComboSelectionChanged Property Definitions *************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnZonefallModernComboSelectionChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnZonefallModernComboSelectionChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_UIWorld_OnZonefallModernComboSelectionChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallModernComboSelectionChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_UIWorld_OnZonefallModernComboSelectionChanged__DelegateSignature_Statics::_Script_UIWorld_eventOnZonefallModernComboSelectionChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallModernComboSelectionChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnZonefallModernComboSelectionChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UIWorld_OnZonefallModernComboSelectionChanged__DelegateSignature_Statics::_Script_UIWorld_eventOnZonefallModernComboSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallModernComboSelectionChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnZonefallModernComboSelectionChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnZonefallModernComboSelectionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallModernComboSelectionChanged, const FString& SelectedItem)
{
	struct _Script_UIWorld_eventOnZonefallModernComboSelectionChanged_Parms
	{
		FString SelectedItem;
	};
	_Script_UIWorld_eventOnZonefallModernComboSelectionChanged_Parms Parms;
	Parms.SelectedItem=SelectedItem;
	OnZonefallModernComboSelectionChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnZonefallModernComboSelectionChanged **********************************

// ********** Begin Enum EZonefallModernComboTheme *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EZonefallModernComboTheme;
static UEnum* EZonefallModernComboTheme_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EZonefallModernComboTheme.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EZonefallModernComboTheme.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UIWorld_EZonefallModernComboTheme, (UObject*)Z_Construct_UPackage__Script_UIWorld(), TEXT("EZonefallModernComboTheme"));
	}
	return Z_Registration_Info_UEnum_EZonefallModernComboTheme.OuterSingleton;
}
template<> UIWORLD_NON_ATTRIBUTED_API UEnum* StaticEnum<EZonefallModernComboTheme>()
{
	return EZonefallModernComboTheme_StaticEnum();
}
struct Z_Construct_UEnum_UIWorld_EZonefallModernComboTheme_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dark.DisplayName", "Dark" },
		{ "Dark.Name", "EZonefallModernComboTheme::Dark" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
		{ "Neon.DisplayName", "Neon" },
		{ "Neon.Name", "EZonefallModernComboTheme::Neon" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EZonefallModernComboTheme::Dark", (int64)EZonefallModernComboTheme::Dark },
		{ "EZonefallModernComboTheme::Neon", (int64)EZonefallModernComboTheme::Neon },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_UIWorld_EZonefallModernComboTheme_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UIWorld_EZonefallModernComboTheme_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UIWorld,
	nullptr,
	"EZonefallModernComboTheme",
	"EZonefallModernComboTheme",
	Z_Construct_UEnum_UIWorld_EZonefallModernComboTheme_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UIWorld_EZonefallModernComboTheme_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UIWorld_EZonefallModernComboTheme_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UIWorld_EZonefallModernComboTheme_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UIWorld_EZonefallModernComboTheme()
{
	if (!Z_Registration_Info_UEnum_EZonefallModernComboTheme.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EZonefallModernComboTheme.InnerSingleton, Z_Construct_UEnum_UIWorld_EZonefallModernComboTheme_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EZonefallModernComboTheme.InnerSingleton;
}
// ********** End Enum EZonefallModernComboTheme ***************************************************

// ********** Begin Enum EZonefallModernComboPreset ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EZonefallModernComboPreset;
static UEnum* EZonefallModernComboPreset_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EZonefallModernComboPreset.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EZonefallModernComboPreset.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UIWorld_EZonefallModernComboPreset, (UObject*)Z_Construct_UPackage__Script_UIWorld(), TEXT("EZonefallModernComboPreset"));
	}
	return Z_Registration_Info_UEnum_EZonefallModernComboPreset.OuterSingleton;
}
template<> UIWORLD_NON_ATTRIBUTED_API UEnum* StaticEnum<EZonefallModernComboPreset>()
{
	return EZonefallModernComboPreset_StaticEnum();
}
struct Z_Construct_UEnum_UIWorld_EZonefallModernComboPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayMode.DisplayName", "Display Mode" },
		{ "DisplayMode.Name", "EZonefallModernComboPreset::DisplayMode" },
		{ "DLSS.DisplayName", "DLSS" },
		{ "DLSS.Name", "EZonefallModernComboPreset::DLSS" },
		{ "DLSSFrameGeneration.DisplayName", "DLSS Frame Generation" },
		{ "DLSSFrameGeneration.Name", "EZonefallModernComboPreset::DLSSFrameGeneration" },
		{ "FPSLimit.DisplayName", "FPS Limit" },
		{ "FPSLimit.Name", "EZonefallModernComboPreset::FPSLimit" },
		{ "FSR.DisplayName", "FSR" },
		{ "FSR.Name", "EZonefallModernComboPreset::FSR" },
		{ "FSRFrameGeneration.DisplayName", "FSR Frame Generation" },
		{ "FSRFrameGeneration.Name", "EZonefallModernComboPreset::FSRFrameGeneration" },
		{ "Manual.DisplayName", "Manual" },
		{ "Manual.Name", "EZonefallModernComboPreset::Manual" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
		{ "OverallQuality.DisplayName", "Overall Quality" },
		{ "OverallQuality.Name", "EZonefallModernComboPreset::OverallQuality" },
		{ "ScreenResolution.DisplayName", "Screen Resolution" },
		{ "ScreenResolution.Name", "EZonefallModernComboPreset::ScreenResolution" },
		{ "VSync.DisplayName", "VSync" },
		{ "VSync.Name", "EZonefallModernComboPreset::VSync" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EZonefallModernComboPreset::Manual", (int64)EZonefallModernComboPreset::Manual },
		{ "EZonefallModernComboPreset::OverallQuality", (int64)EZonefallModernComboPreset::OverallQuality },
		{ "EZonefallModernComboPreset::DisplayMode", (int64)EZonefallModernComboPreset::DisplayMode },
		{ "EZonefallModernComboPreset::VSync", (int64)EZonefallModernComboPreset::VSync },
		{ "EZonefallModernComboPreset::FPSLimit", (int64)EZonefallModernComboPreset::FPSLimit },
		{ "EZonefallModernComboPreset::ScreenResolution", (int64)EZonefallModernComboPreset::ScreenResolution },
		{ "EZonefallModernComboPreset::DLSS", (int64)EZonefallModernComboPreset::DLSS },
		{ "EZonefallModernComboPreset::DLSSFrameGeneration", (int64)EZonefallModernComboPreset::DLSSFrameGeneration },
		{ "EZonefallModernComboPreset::FSR", (int64)EZonefallModernComboPreset::FSR },
		{ "EZonefallModernComboPreset::FSRFrameGeneration", (int64)EZonefallModernComboPreset::FSRFrameGeneration },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_UIWorld_EZonefallModernComboPreset_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UIWorld_EZonefallModernComboPreset_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UIWorld,
	nullptr,
	"EZonefallModernComboPreset",
	"EZonefallModernComboPreset",
	Z_Construct_UEnum_UIWorld_EZonefallModernComboPreset_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UIWorld_EZonefallModernComboPreset_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UIWorld_EZonefallModernComboPreset_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UIWorld_EZonefallModernComboPreset_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UIWorld_EZonefallModernComboPreset()
{
	if (!Z_Registration_Info_UEnum_EZonefallModernComboPreset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EZonefallModernComboPreset.InnerSingleton, Z_Construct_UEnum_UIWorld_EZonefallModernComboPreset_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EZonefallModernComboPreset.InnerSingleton;
}
// ********** End Enum EZonefallModernComboPreset **************************************************

// ********** Begin Class UZonefallModernComboBoxWidget Function AddOption *************************
struct Z_Construct_UFunction_UZonefallModernComboBoxWidget_AddOption_Statics
{
	struct ZonefallModernComboBoxWidget_eventAddOption_Parms
	{
		FString InOption;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|ModernCombo|Data" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InOption_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddOption constinit property declarations *****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InOption;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddOption constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddOption Property Definitions ****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallModernComboBoxWidget_AddOption_Statics::NewProp_InOption = { "InOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallModernComboBoxWidget_eventAddOption_Parms, InOption), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InOption_MetaData), NewProp_InOption_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallModernComboBoxWidget_AddOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallModernComboBoxWidget_AddOption_Statics::NewProp_InOption,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernComboBoxWidget_AddOption_Statics::PropPointers) < 2048);
// ********** End Function AddOption Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernComboBoxWidget_AddOption_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernComboBoxWidget, nullptr, "AddOption", 	Z_Construct_UFunction_UZonefallModernComboBoxWidget_AddOption_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernComboBoxWidget_AddOption_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallModernComboBoxWidget_AddOption_Statics::ZonefallModernComboBoxWidget_eventAddOption_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernComboBoxWidget_AddOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernComboBoxWidget_AddOption_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallModernComboBoxWidget_AddOption_Statics::ZonefallModernComboBoxWidget_eventAddOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallModernComboBoxWidget_AddOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernComboBoxWidget_AddOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallModernComboBoxWidget::execAddOption)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InOption);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddOption(Z_Param_InOption);
	P_NATIVE_END;
}
// ********** End Class UZonefallModernComboBoxWidget Function AddOption ***************************

// ********** Begin Class UZonefallModernComboBoxWidget Function ApplyVisualStyle ******************
struct Z_Construct_UFunction_UZonefallModernComboBoxWidget_ApplyVisualStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|ModernCombo|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyVisualStyle constinit property declarations **********************
// ********** End Function ApplyVisualStyle constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernComboBoxWidget_ApplyVisualStyle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernComboBoxWidget, nullptr, "ApplyVisualStyle", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernComboBoxWidget_ApplyVisualStyle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernComboBoxWidget_ApplyVisualStyle_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallModernComboBoxWidget_ApplyVisualStyle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernComboBoxWidget_ApplyVisualStyle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallModernComboBoxWidget::execApplyVisualStyle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyVisualStyle();
	P_NATIVE_END;
}
// ********** End Class UZonefallModernComboBoxWidget Function ApplyVisualStyle ********************

// ********** Begin Class UZonefallModernComboBoxWidget Function BP_OnSelectionChanged *************
struct ZonefallModernComboBoxWidget_eventBP_OnSelectionChanged_Parms
{
	FString SelectedItem;
};
static FName NAME_UZonefallModernComboBoxWidget_BP_OnSelectionChanged = FName(TEXT("BP_OnSelectionChanged"));
void UZonefallModernComboBoxWidget::BP_OnSelectionChanged(const FString& SelectedItem)
{
	ZonefallModernComboBoxWidget_eventBP_OnSelectionChanged_Parms Parms;
	Parms.SelectedItem=SelectedItem;
	UFunction* Func = FindFunctionChecked(NAME_UZonefallModernComboBoxWidget_BP_OnSelectionChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UZonefallModernComboBoxWidget_BP_OnSelectionChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|ModernCombo|Events" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function BP_OnSelectionChanged constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BP_OnSelectionChanged constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BP_OnSelectionChanged Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallModernComboBoxWidget_BP_OnSelectionChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallModernComboBoxWidget_eventBP_OnSelectionChanged_Parms, SelectedItem), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedItem_MetaData), NewProp_SelectedItem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallModernComboBoxWidget_BP_OnSelectionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallModernComboBoxWidget_BP_OnSelectionChanged_Statics::NewProp_SelectedItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernComboBoxWidget_BP_OnSelectionChanged_Statics::PropPointers) < 2048);
// ********** End Function BP_OnSelectionChanged Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernComboBoxWidget_BP_OnSelectionChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernComboBoxWidget, nullptr, "BP_OnSelectionChanged", 	Z_Construct_UFunction_UZonefallModernComboBoxWidget_BP_OnSelectionChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernComboBoxWidget_BP_OnSelectionChanged_Statics::PropPointers), 
sizeof(ZonefallModernComboBoxWidget_eventBP_OnSelectionChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernComboBoxWidget_BP_OnSelectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernComboBoxWidget_BP_OnSelectionChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ZonefallModernComboBoxWidget_eventBP_OnSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallModernComboBoxWidget_BP_OnSelectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernComboBoxWidget_BP_OnSelectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UZonefallModernComboBoxWidget Function BP_OnSelectionChanged ***************

// ********** Begin Class UZonefallModernComboBoxWidget Function ClearOptions **********************
struct Z_Construct_UFunction_UZonefallModernComboBoxWidget_ClearOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|ModernCombo|Data" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearOptions constinit property declarations **************************
// ********** End Function ClearOptions constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernComboBoxWidget_ClearOptions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernComboBoxWidget, nullptr, "ClearOptions", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernComboBoxWidget_ClearOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernComboBoxWidget_ClearOptions_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallModernComboBoxWidget_ClearOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernComboBoxWidget_ClearOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallModernComboBoxWidget::execClearOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearOptions();
	P_NATIVE_END;
}
// ********** End Class UZonefallModernComboBoxWidget Function ClearOptions ************************

// ********** Begin Class UZonefallModernComboBoxWidget Function GetSelectedOption *****************
struct Z_Construct_UFunction_UZonefallModernComboBoxWidget_GetSelectedOption_Statics
{
	struct ZonefallModernComboBoxWidget_eventGetSelectedOption_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|ModernCombo|Data" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSelectedOption constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSelectedOption constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSelectedOption Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallModernComboBoxWidget_GetSelectedOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallModernComboBoxWidget_eventGetSelectedOption_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallModernComboBoxWidget_GetSelectedOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallModernComboBoxWidget_GetSelectedOption_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernComboBoxWidget_GetSelectedOption_Statics::PropPointers) < 2048);
// ********** End Function GetSelectedOption Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernComboBoxWidget_GetSelectedOption_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernComboBoxWidget, nullptr, "GetSelectedOption", 	Z_Construct_UFunction_UZonefallModernComboBoxWidget_GetSelectedOption_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernComboBoxWidget_GetSelectedOption_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallModernComboBoxWidget_GetSelectedOption_Statics::ZonefallModernComboBoxWidget_eventGetSelectedOption_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernComboBoxWidget_GetSelectedOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernComboBoxWidget_GetSelectedOption_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallModernComboBoxWidget_GetSelectedOption_Statics::ZonefallModernComboBoxWidget_eventGetSelectedOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallModernComboBoxWidget_GetSelectedOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernComboBoxWidget_GetSelectedOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallModernComboBoxWidget::execGetSelectedOption)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetSelectedOption();
	P_NATIVE_END;
}
// ********** End Class UZonefallModernComboBoxWidget Function GetSelectedOption *******************

// ********** Begin Class UZonefallModernComboBoxWidget Function HandleSelectionChanged ************
struct Z_Construct_UFunction_UZonefallModernComboBoxWidget_HandleSelectionChanged_Statics
{
	struct ZonefallModernComboBoxWidget_eventHandleSelectionChanged_Parms
	{
		FString SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleSelectionChanged constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleSelectionChanged constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleSelectionChanged Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallModernComboBoxWidget_HandleSelectionChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallModernComboBoxWidget_eventHandleSelectionChanged_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZonefallModernComboBoxWidget_HandleSelectionChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallModernComboBoxWidget_eventHandleSelectionChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4243707124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallModernComboBoxWidget_HandleSelectionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallModernComboBoxWidget_HandleSelectionChanged_Statics::NewProp_SelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallModernComboBoxWidget_HandleSelectionChanged_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernComboBoxWidget_HandleSelectionChanged_Statics::PropPointers) < 2048);
// ********** End Function HandleSelectionChanged Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernComboBoxWidget_HandleSelectionChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernComboBoxWidget, nullptr, "HandleSelectionChanged", 	Z_Construct_UFunction_UZonefallModernComboBoxWidget_HandleSelectionChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernComboBoxWidget_HandleSelectionChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallModernComboBoxWidget_HandleSelectionChanged_Statics::ZonefallModernComboBoxWidget_eventHandleSelectionChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernComboBoxWidget_HandleSelectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernComboBoxWidget_HandleSelectionChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallModernComboBoxWidget_HandleSelectionChanged_Statics::ZonefallModernComboBoxWidget_eventHandleSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallModernComboBoxWidget_HandleSelectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernComboBoxWidget_HandleSelectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallModernComboBoxWidget::execHandleSelectionChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSelectionChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
	P_NATIVE_END;
}
// ********** End Class UZonefallModernComboBoxWidget Function HandleSelectionChanged **************

// ********** Begin Class UZonefallModernComboBoxWidget Function SetOptions ************************
struct Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetOptions_Statics
{
	struct ZonefallModernComboBoxWidget_eventSetOptions_Parms
	{
		TArray<FString> InOptions;
		bool bSelectFirst;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|ModernCombo|Data" },
		{ "CPP_Default_bSelectFirst", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetOptions constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InOptions;
	static void NewProp_bSelectFirst_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectFirst;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetOptions constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetOptions Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetOptions_Statics::NewProp_InOptions_Inner = { "InOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetOptions_Statics::NewProp_InOptions = { "InOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallModernComboBoxWidget_eventSetOptions_Parms, InOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InOptions_MetaData), NewProp_InOptions_MetaData) };
void Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetOptions_Statics::NewProp_bSelectFirst_SetBit(void* Obj)
{
	((ZonefallModernComboBoxWidget_eventSetOptions_Parms*)Obj)->bSelectFirst = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetOptions_Statics::NewProp_bSelectFirst = { "bSelectFirst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallModernComboBoxWidget_eventSetOptions_Parms), &Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetOptions_Statics::NewProp_bSelectFirst_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetOptions_Statics::NewProp_InOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetOptions_Statics::NewProp_InOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetOptions_Statics::NewProp_bSelectFirst,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetOptions_Statics::PropPointers) < 2048);
// ********** End Function SetOptions Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetOptions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernComboBoxWidget, nullptr, "SetOptions", 	Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetOptions_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetOptions_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetOptions_Statics::ZonefallModernComboBoxWidget_eventSetOptions_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetOptions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetOptions_Statics::ZonefallModernComboBoxWidget_eventSetOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallModernComboBoxWidget::execSetOptions)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_InOptions);
	P_GET_UBOOL(Z_Param_bSelectFirst);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOptions(Z_Param_Out_InOptions,Z_Param_bSelectFirst);
	P_NATIVE_END;
}
// ********** End Class UZonefallModernComboBoxWidget Function SetOptions **************************

// ********** Begin Class UZonefallModernComboBoxWidget Function SetSelectedOption *****************
struct Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetSelectedOption_Statics
{
	struct ZonefallModernComboBoxWidget_eventSetSelectedOption_Parms
	{
		FString InOption;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|ModernCombo|Data" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InOption_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSelectedOption constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InOption;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSelectedOption constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSelectedOption Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetSelectedOption_Statics::NewProp_InOption = { "InOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallModernComboBoxWidget_eventSetSelectedOption_Parms, InOption), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InOption_MetaData), NewProp_InOption_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetSelectedOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetSelectedOption_Statics::NewProp_InOption,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetSelectedOption_Statics::PropPointers) < 2048);
// ********** End Function SetSelectedOption Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetSelectedOption_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernComboBoxWidget, nullptr, "SetSelectedOption", 	Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetSelectedOption_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetSelectedOption_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetSelectedOption_Statics::ZonefallModernComboBoxWidget_eventSetSelectedOption_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetSelectedOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetSelectedOption_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetSelectedOption_Statics::ZonefallModernComboBoxWidget_eventSetSelectedOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetSelectedOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetSelectedOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallModernComboBoxWidget::execSetSelectedOption)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InOption);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectedOption(Z_Param_InOption);
	P_NATIVE_END;
}
// ********** End Class UZonefallModernComboBoxWidget Function SetSelectedOption *******************

// ********** Begin Class UZonefallModernComboBoxWidget Function ValidateAndBindWidgets ************
struct Z_Construct_UFunction_UZonefallModernComboBoxWidget_ValidateAndBindWidgets_Statics
{
	struct ZonefallModernComboBoxWidget_eventValidateAndBindWidgets_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|ModernCombo|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ValidateAndBindWidgets constinit property declarations ****************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ValidateAndBindWidgets constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ValidateAndBindWidgets Property Definitions ***************************
void Z_Construct_UFunction_UZonefallModernComboBoxWidget_ValidateAndBindWidgets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ZonefallModernComboBoxWidget_eventValidateAndBindWidgets_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZonefallModernComboBoxWidget_ValidateAndBindWidgets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallModernComboBoxWidget_eventValidateAndBindWidgets_Parms), &Z_Construct_UFunction_UZonefallModernComboBoxWidget_ValidateAndBindWidgets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallModernComboBoxWidget_ValidateAndBindWidgets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallModernComboBoxWidget_ValidateAndBindWidgets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernComboBoxWidget_ValidateAndBindWidgets_Statics::PropPointers) < 2048);
// ********** End Function ValidateAndBindWidgets Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernComboBoxWidget_ValidateAndBindWidgets_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernComboBoxWidget, nullptr, "ValidateAndBindWidgets", 	Z_Construct_UFunction_UZonefallModernComboBoxWidget_ValidateAndBindWidgets_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernComboBoxWidget_ValidateAndBindWidgets_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallModernComboBoxWidget_ValidateAndBindWidgets_Statics::ZonefallModernComboBoxWidget_eventValidateAndBindWidgets_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernComboBoxWidget_ValidateAndBindWidgets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernComboBoxWidget_ValidateAndBindWidgets_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallModernComboBoxWidget_ValidateAndBindWidgets_Statics::ZonefallModernComboBoxWidget_eventValidateAndBindWidgets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallModernComboBoxWidget_ValidateAndBindWidgets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernComboBoxWidget_ValidateAndBindWidgets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallModernComboBoxWidget::execValidateAndBindWidgets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ValidateAndBindWidgets();
	P_NATIVE_END;
}
// ********** End Class UZonefallModernComboBoxWidget Function ValidateAndBindWidgets **************

// ********** Begin Class UZonefallModernComboBoxWidget ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallModernComboBoxWidget;
UClass* UZonefallModernComboBoxWidget::GetPrivateStaticClass()
{
	using TClass = UZonefallModernComboBoxWidget;
	if (!Z_Registration_Info_UClass_UZonefallModernComboBoxWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallModernComboBoxWidget"),
			Z_Registration_Info_UClass_UZonefallModernComboBoxWidget.InnerSingleton,
			StaticRegisterNativesUZonefallModernComboBoxWidget,
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
	return Z_Registration_Info_UClass_UZonefallModernComboBoxWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallModernComboBoxWidget_NoRegister()
{
	return UZonefallModernComboBoxWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/ZonefallModernComboBoxWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectionChanged_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernCombo" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernCombo|Text" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaceholderText_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernCombo|Text" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelFont_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernCombo|Text" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelFontSize_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernCombo|Text" },
		{ "ClampMax", "64" },
		{ "ClampMin", "10" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueFontSize_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernCombo|Text" },
		{ "ClampMax", "64" },
		{ "ClampMin", "10" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThemePreset_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernCombo|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PanelColor_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernCombo|Colors" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelColor_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernCombo|Colors" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueColor_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernCombo|Colors" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernCombo|Data" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPopulateFromPreset_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernCombo|Data" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoPreset_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernCombo|Data" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetComboWidgetName_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernCombo|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLabelWidgetName_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernCombo|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBorder_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|ModernCombo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBox_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|ModernCombo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelTextBlock_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|ModernCombo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboBox_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|ModernCombo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernComboBoxWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallModernComboBoxWidget constinit property declarations ************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectionChanged;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
	static const UECodeGen_Private::FTextPropertyParams NewProp_PlaceholderText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LabelFont;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LabelFontSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ValueFontSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThemePreset_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ThemePreset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PanelColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LabelColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ValueColor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Options_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
	static void NewProp_bAutoPopulateFromPreset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPopulateFromPreset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoPreset_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoPreset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetComboWidgetName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetLabelWidgetName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LabelTextBlock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallModernComboBoxWidget constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddOption"), .Pointer = &UZonefallModernComboBoxWidget::execAddOption },
		{ .NameUTF8 = UTF8TEXT("ApplyVisualStyle"), .Pointer = &UZonefallModernComboBoxWidget::execApplyVisualStyle },
		{ .NameUTF8 = UTF8TEXT("ClearOptions"), .Pointer = &UZonefallModernComboBoxWidget::execClearOptions },
		{ .NameUTF8 = UTF8TEXT("GetSelectedOption"), .Pointer = &UZonefallModernComboBoxWidget::execGetSelectedOption },
		{ .NameUTF8 = UTF8TEXT("HandleSelectionChanged"), .Pointer = &UZonefallModernComboBoxWidget::execHandleSelectionChanged },
		{ .NameUTF8 = UTF8TEXT("SetOptions"), .Pointer = &UZonefallModernComboBoxWidget::execSetOptions },
		{ .NameUTF8 = UTF8TEXT("SetSelectedOption"), .Pointer = &UZonefallModernComboBoxWidget::execSetSelectedOption },
		{ .NameUTF8 = UTF8TEXT("ValidateAndBindWidgets"), .Pointer = &UZonefallModernComboBoxWidget::execValidateAndBindWidgets },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallModernComboBoxWidget_AddOption, "AddOption" }, // 22385962
		{ &Z_Construct_UFunction_UZonefallModernComboBoxWidget_ApplyVisualStyle, "ApplyVisualStyle" }, // 989534128
		{ &Z_Construct_UFunction_UZonefallModernComboBoxWidget_BP_OnSelectionChanged, "BP_OnSelectionChanged" }, // 161694298
		{ &Z_Construct_UFunction_UZonefallModernComboBoxWidget_ClearOptions, "ClearOptions" }, // 1247796080
		{ &Z_Construct_UFunction_UZonefallModernComboBoxWidget_GetSelectedOption, "GetSelectedOption" }, // 148580658
		{ &Z_Construct_UFunction_UZonefallModernComboBoxWidget_HandleSelectionChanged, "HandleSelectionChanged" }, // 926614561
		{ &Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetOptions, "SetOptions" }, // 2161385690
		{ &Z_Construct_UFunction_UZonefallModernComboBoxWidget_SetSelectedOption, "SetSelectedOption" }, // 1587912225
		{ &Z_Construct_UFunction_UZonefallModernComboBoxWidget_ValidateAndBindWidgets, "ValidateAndBindWidgets" }, // 2252608657
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallModernComboBoxWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics

// ********** Begin Class UZonefallModernComboBoxWidget Property Definitions ***********************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_OnSelectionChanged = { "OnSelectionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernComboBoxWidget, OnSelectionChanged), Z_Construct_UDelegateFunction_UIWorld_OnZonefallModernComboSelectionChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSelectionChanged_MetaData), NewProp_OnSelectionChanged_MetaData) }; // 3358224194
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernComboBoxWidget, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_PlaceholderText = { "PlaceholderText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernComboBoxWidget, PlaceholderText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaceholderText_MetaData), NewProp_PlaceholderText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_LabelFont = { "LabelFont", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernComboBoxWidget, LabelFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelFont_MetaData), NewProp_LabelFont_MetaData) }; // 167205173
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_LabelFontSize = { "LabelFontSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernComboBoxWidget, LabelFontSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelFontSize_MetaData), NewProp_LabelFontSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_ValueFontSize = { "ValueFontSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernComboBoxWidget, ValueFontSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueFontSize_MetaData), NewProp_ValueFontSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_ThemePreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_ThemePreset = { "ThemePreset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernComboBoxWidget, ThemePreset), Z_Construct_UEnum_UIWorld_EZonefallModernComboTheme, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThemePreset_MetaData), NewProp_ThemePreset_MetaData) }; // 337059446
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_PanelColor = { "PanelColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernComboBoxWidget, PanelColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PanelColor_MetaData), NewProp_PanelColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_LabelColor = { "LabelColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernComboBoxWidget, LabelColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelColor_MetaData), NewProp_LabelColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_ValueColor = { "ValueColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernComboBoxWidget, ValueColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueColor_MetaData), NewProp_ValueColor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernComboBoxWidget, Options), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) };
void Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_bAutoPopulateFromPreset_SetBit(void* Obj)
{
	((UZonefallModernComboBoxWidget*)Obj)->bAutoPopulateFromPreset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_bAutoPopulateFromPreset = { "bAutoPopulateFromPreset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallModernComboBoxWidget), &Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_bAutoPopulateFromPreset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoPopulateFromPreset_MetaData), NewProp_bAutoPopulateFromPreset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_AutoPreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_AutoPreset = { "AutoPreset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernComboBoxWidget, AutoPreset), Z_Construct_UEnum_UIWorld_EZonefallModernComboPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoPreset_MetaData), NewProp_AutoPreset_MetaData) }; // 1636602441
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_TargetComboWidgetName = { "TargetComboWidgetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernComboBoxWidget, TargetComboWidgetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetComboWidgetName_MetaData), NewProp_TargetComboWidgetName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_TargetLabelWidgetName = { "TargetLabelWidgetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernComboBoxWidget, TargetLabelWidgetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLabelWidgetName_MetaData), NewProp_TargetLabelWidgetName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_RootBorder = { "RootBorder", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernComboBoxWidget, RootBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBorder_MetaData), NewProp_RootBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_RootBox = { "RootBox", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernComboBoxWidget, RootBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBox_MetaData), NewProp_RootBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_LabelTextBlock = { "LabelTextBlock", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernComboBoxWidget, LabelTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelTextBlock_MetaData), NewProp_LabelTextBlock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_ComboBox = { "ComboBox", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernComboBoxWidget, ComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboBox_MetaData), NewProp_ComboBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_OnSelectionChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_PlaceholderText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_LabelFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_LabelFontSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_ValueFontSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_ThemePreset_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_ThemePreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_PanelColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_LabelColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_ValueColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_Options_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_bAutoPopulateFromPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_AutoPreset_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_AutoPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_TargetComboWidgetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_TargetLabelWidgetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_RootBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_RootBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_LabelTextBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::NewProp_ComboBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::PropPointers) < 2048);
// ********** End Class UZonefallModernComboBoxWidget Property Definitions *************************
UObject* (*const Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::ClassParams = {
	&UZonefallModernComboBoxWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::Class_MetaDataParams)
};
void UZonefallModernComboBoxWidget::StaticRegisterNativesUZonefallModernComboBoxWidget()
{
	UClass* Class = UZonefallModernComboBoxWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallModernComboBoxWidget()
{
	if (!Z_Registration_Info_UClass_UZonefallModernComboBoxWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallModernComboBoxWidget.OuterSingleton, Z_Construct_UClass_UZonefallModernComboBoxWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallModernComboBoxWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallModernComboBoxWidget);
UZonefallModernComboBoxWidget::~UZonefallModernComboBoxWidget() {}
// ********** End Class UZonefallModernComboBoxWidget **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernComboBoxWidget_h__Script_UIWorld_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EZonefallModernComboTheme_StaticEnum, TEXT("EZonefallModernComboTheme"), &Z_Registration_Info_UEnum_EZonefallModernComboTheme, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 337059446U) },
		{ EZonefallModernComboPreset_StaticEnum, TEXT("EZonefallModernComboPreset"), &Z_Registration_Info_UEnum_EZonefallModernComboPreset, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1636602441U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZonefallModernComboBoxWidget, UZonefallModernComboBoxWidget::StaticClass, TEXT("UZonefallModernComboBoxWidget"), &Z_Registration_Info_UClass_UZonefallModernComboBoxWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallModernComboBoxWidget), 3841342030U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernComboBoxWidget_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernComboBoxWidget_h__Script_UIWorld_260647436{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernComboBoxWidget_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernComboBoxWidget_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernComboBoxWidget_h__Script_UIWorld_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernComboBoxWidget_h__Script_UIWorld_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
