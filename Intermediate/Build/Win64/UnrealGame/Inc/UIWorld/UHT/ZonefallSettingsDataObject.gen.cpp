// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZonefallSettingsDataObject.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallSettingsDataObject() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallSettingsDataObject();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallSettingsDataObject_NoRegister();
UIWORLD_API UEnum* Z_Construct_UEnum_UIWorld_EZonefallGraphicsPreset();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EZonefallGraphicsPreset ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EZonefallGraphicsPreset;
static UEnum* EZonefallGraphicsPreset_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EZonefallGraphicsPreset.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EZonefallGraphicsPreset.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UIWorld_EZonefallGraphicsPreset, (UObject*)Z_Construct_UPackage__Script_UIWorld(), TEXT("EZonefallGraphicsPreset"));
	}
	return Z_Registration_Info_UEnum_EZonefallGraphicsPreset.OuterSingleton;
}
template<> UIWORLD_NON_ATTRIBUTED_API UEnum* StaticEnum<EZonefallGraphicsPreset>()
{
	return EZonefallGraphicsPreset_StaticEnum();
}
struct Z_Construct_UEnum_UIWorld_EZonefallGraphicsPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Balanced.DisplayName", "Balanced" },
		{ "Balanced.Name", "EZonefallGraphicsPreset::Balanced" },
		{ "BlueprintType", "true" },
		{ "Competitive.DisplayName", "Competitive" },
		{ "Competitive.Name", "EZonefallGraphicsPreset::Competitive" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
		{ "Quality.DisplayName", "Quality" },
		{ "Quality.Name", "EZonefallGraphicsPreset::Quality" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EZonefallGraphicsPreset::Competitive", (int64)EZonefallGraphicsPreset::Competitive },
		{ "EZonefallGraphicsPreset::Balanced", (int64)EZonefallGraphicsPreset::Balanced },
		{ "EZonefallGraphicsPreset::Quality", (int64)EZonefallGraphicsPreset::Quality },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_UIWorld_EZonefallGraphicsPreset_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UIWorld_EZonefallGraphicsPreset_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UIWorld,
	nullptr,
	"EZonefallGraphicsPreset",
	"EZonefallGraphicsPreset",
	Z_Construct_UEnum_UIWorld_EZonefallGraphicsPreset_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UIWorld_EZonefallGraphicsPreset_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UIWorld_EZonefallGraphicsPreset_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UIWorld_EZonefallGraphicsPreset_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UIWorld_EZonefallGraphicsPreset()
{
	if (!Z_Registration_Info_UEnum_EZonefallGraphicsPreset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EZonefallGraphicsPreset.InnerSingleton, Z_Construct_UEnum_UIWorld_EZonefallGraphicsPreset_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EZonefallGraphicsPreset.InnerSingleton;
}
// ********** End Enum EZonefallGraphicsPreset *****************************************************

// ********** Begin Class UZonefallSettingsDataObject Function ApplyDisplayModeAndResolution *******
struct Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyDisplayModeAndResolution_Statics
{
	struct ZonefallSettingsDataObject_eventApplyDisplayModeAndResolution_Parms
	{
		bool bSaveSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Lightweight apply for display mode + resolution only.\n" },
#endif
		{ "CPP_Default_bSaveSettings", "false" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lightweight apply for display mode + resolution only." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyDisplayModeAndResolution constinit property declarations *********
	static void NewProp_bSaveSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyDisplayModeAndResolution constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyDisplayModeAndResolution Property Definitions ********************
void Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyDisplayModeAndResolution_Statics::NewProp_bSaveSettings_SetBit(void* Obj)
{
	((ZonefallSettingsDataObject_eventApplyDisplayModeAndResolution_Parms*)Obj)->bSaveSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyDisplayModeAndResolution_Statics::NewProp_bSaveSettings = { "bSaveSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallSettingsDataObject_eventApplyDisplayModeAndResolution_Parms), &Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyDisplayModeAndResolution_Statics::NewProp_bSaveSettings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyDisplayModeAndResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyDisplayModeAndResolution_Statics::NewProp_bSaveSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyDisplayModeAndResolution_Statics::PropPointers) < 2048);
// ********** End Function ApplyDisplayModeAndResolution Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyDisplayModeAndResolution_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsDataObject, nullptr, "ApplyDisplayModeAndResolution", 	Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyDisplayModeAndResolution_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyDisplayModeAndResolution_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyDisplayModeAndResolution_Statics::ZonefallSettingsDataObject_eventApplyDisplayModeAndResolution_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyDisplayModeAndResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyDisplayModeAndResolution_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyDisplayModeAndResolution_Statics::ZonefallSettingsDataObject_eventApplyDisplayModeAndResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyDisplayModeAndResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyDisplayModeAndResolution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsDataObject::execApplyDisplayModeAndResolution)
{
	P_GET_UBOOL(Z_Param_bSaveSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyDisplayModeAndResolution(Z_Param_bSaveSettings);
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsDataObject Function ApplyDisplayModeAndResolution *********

// ********** Begin Class UZonefallSettingsDataObject Function ApplyGraphicsPreset *****************
struct Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyGraphicsPreset_Statics
{
	struct ZonefallSettingsDataObject_eventApplyGraphicsPreset_Parms
	{
		EZonefallGraphicsPreset Preset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Applies a tuned profile and keeps values valid for current hardware support.\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies a tuned profile and keeps values valid for current hardware support." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyGraphicsPreset constinit property declarations *******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Preset_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Preset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyGraphicsPreset constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyGraphicsPreset Property Definitions ******************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyGraphicsPreset_Statics::NewProp_Preset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyGraphicsPreset_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsDataObject_eventApplyGraphicsPreset_Parms, Preset), Z_Construct_UEnum_UIWorld_EZonefallGraphicsPreset, METADATA_PARAMS(0, nullptr) }; // 2227815438
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyGraphicsPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyGraphicsPreset_Statics::NewProp_Preset_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyGraphicsPreset_Statics::NewProp_Preset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyGraphicsPreset_Statics::PropPointers) < 2048);
// ********** End Function ApplyGraphicsPreset Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyGraphicsPreset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsDataObject, nullptr, "ApplyGraphicsPreset", 	Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyGraphicsPreset_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyGraphicsPreset_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyGraphicsPreset_Statics::ZonefallSettingsDataObject_eventApplyGraphicsPreset_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyGraphicsPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyGraphicsPreset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyGraphicsPreset_Statics::ZonefallSettingsDataObject_eventApplyGraphicsPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyGraphicsPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyGraphicsPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsDataObject::execApplyGraphicsPreset)
{
	P_GET_ENUM(EZonefallGraphicsPreset,Z_Param_Preset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyGraphicsPreset(EZonefallGraphicsPreset(Z_Param_Preset));
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsDataObject Function ApplyGraphicsPreset *******************

// ********** Begin Class UZonefallSettingsDataObject Function ApplyToSystem ***********************
struct Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyToSystem_Statics
{
	struct ZonefallSettingsDataObject_eventApplyToSystem_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyToSystem constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyToSystem constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyToSystem Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyToSystem_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsDataObject_eventApplyToSystem_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyToSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyToSystem_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyToSystem_Statics::PropPointers) < 2048);
// ********** End Function ApplyToSystem Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyToSystem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsDataObject, nullptr, "ApplyToSystem", 	Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyToSystem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyToSystem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyToSystem_Statics::ZonefallSettingsDataObject_eventApplyToSystem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyToSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyToSystem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyToSystem_Statics::ZonefallSettingsDataObject_eventApplyToSystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyToSystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyToSystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsDataObject::execApplyToSystem)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyToSystem(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsDataObject Function ApplyToSystem *************************

// ********** Begin Class UZonefallSettingsDataObject Function GetAvailableScreenResolutions *******
struct Z_Construct_UFunction_UZonefallSettingsDataObject_GetAvailableScreenResolutions_Statics
{
	struct ZonefallSettingsDataObject_eventGetAvailableScreenResolutions_Parms
	{
		TArray<FString> OutResolutions;
		bool bOnly16by9;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fill combo options with available fullscreen resolutions.\n" },
#endif
		{ "CPP_Default_bOnly16by9", "false" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fill combo options with available fullscreen resolutions." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetAvailableScreenResolutions constinit property declarations *********
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutResolutions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutResolutions;
	static void NewProp_bOnly16by9_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnly16by9;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAvailableScreenResolutions constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAvailableScreenResolutions Property Definitions ********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallSettingsDataObject_GetAvailableScreenResolutions_Statics::NewProp_OutResolutions_Inner = { "OutResolutions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UZonefallSettingsDataObject_GetAvailableScreenResolutions_Statics::NewProp_OutResolutions = { "OutResolutions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsDataObject_eventGetAvailableScreenResolutions_Parms, OutResolutions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UZonefallSettingsDataObject_GetAvailableScreenResolutions_Statics::NewProp_bOnly16by9_SetBit(void* Obj)
{
	((ZonefallSettingsDataObject_eventGetAvailableScreenResolutions_Parms*)Obj)->bOnly16by9 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZonefallSettingsDataObject_GetAvailableScreenResolutions_Statics::NewProp_bOnly16by9 = { "bOnly16by9", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallSettingsDataObject_eventGetAvailableScreenResolutions_Parms), &Z_Construct_UFunction_UZonefallSettingsDataObject_GetAvailableScreenResolutions_Statics::NewProp_bOnly16by9_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallSettingsDataObject_GetAvailableScreenResolutions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsDataObject_GetAvailableScreenResolutions_Statics::NewProp_OutResolutions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsDataObject_GetAvailableScreenResolutions_Statics::NewProp_OutResolutions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsDataObject_GetAvailableScreenResolutions_Statics::NewProp_bOnly16by9,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsDataObject_GetAvailableScreenResolutions_Statics::PropPointers) < 2048);
// ********** End Function GetAvailableScreenResolutions Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsDataObject_GetAvailableScreenResolutions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsDataObject, nullptr, "GetAvailableScreenResolutions", 	Z_Construct_UFunction_UZonefallSettingsDataObject_GetAvailableScreenResolutions_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsDataObject_GetAvailableScreenResolutions_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallSettingsDataObject_GetAvailableScreenResolutions_Statics::ZonefallSettingsDataObject_eventGetAvailableScreenResolutions_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsDataObject_GetAvailableScreenResolutions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsDataObject_GetAvailableScreenResolutions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallSettingsDataObject_GetAvailableScreenResolutions_Statics::ZonefallSettingsDataObject_eventGetAvailableScreenResolutions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallSettingsDataObject_GetAvailableScreenResolutions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsDataObject_GetAvailableScreenResolutions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsDataObject::execGetAvailableScreenResolutions)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutResolutions);
	P_GET_UBOOL(Z_Param_bOnly16by9);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAvailableScreenResolutions(Z_Param_Out_OutResolutions,Z_Param_bOnly16by9);
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsDataObject Function GetAvailableScreenResolutions *********

// ********** Begin Class UZonefallSettingsDataObject Function GetCurrentScreenResolutionString ****
struct Z_Construct_UFunction_UZonefallSettingsDataObject_GetCurrentScreenResolutionString_Statics
{
	struct ZonefallSettingsDataObject_eventGetCurrentScreenResolutionString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentScreenResolutionString constinit property declarations ******
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentScreenResolutionString constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentScreenResolutionString Property Definitions *****************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallSettingsDataObject_GetCurrentScreenResolutionString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsDataObject_eventGetCurrentScreenResolutionString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallSettingsDataObject_GetCurrentScreenResolutionString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsDataObject_GetCurrentScreenResolutionString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsDataObject_GetCurrentScreenResolutionString_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentScreenResolutionString Property Definitions *******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsDataObject_GetCurrentScreenResolutionString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsDataObject, nullptr, "GetCurrentScreenResolutionString", 	Z_Construct_UFunction_UZonefallSettingsDataObject_GetCurrentScreenResolutionString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsDataObject_GetCurrentScreenResolutionString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallSettingsDataObject_GetCurrentScreenResolutionString_Statics::ZonefallSettingsDataObject_eventGetCurrentScreenResolutionString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsDataObject_GetCurrentScreenResolutionString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsDataObject_GetCurrentScreenResolutionString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallSettingsDataObject_GetCurrentScreenResolutionString_Statics::ZonefallSettingsDataObject_eventGetCurrentScreenResolutionString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallSettingsDataObject_GetCurrentScreenResolutionString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsDataObject_GetCurrentScreenResolutionString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsDataObject::execGetCurrentScreenResolutionString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCurrentScreenResolutionString();
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsDataObject Function GetCurrentScreenResolutionString ******

// ********** Begin Class UZonefallSettingsDataObject Function LoadFromSystem **********************
struct Z_Construct_UFunction_UZonefallSettingsDataObject_LoadFromSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadFromSystem constinit property declarations ************************
// ********** End Function LoadFromSystem constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsDataObject_LoadFromSystem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsDataObject, nullptr, "LoadFromSystem", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsDataObject_LoadFromSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsDataObject_LoadFromSystem_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallSettingsDataObject_LoadFromSystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsDataObject_LoadFromSystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsDataObject::execLoadFromSystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadFromSystem();
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsDataObject Function LoadFromSystem ************************

// ********** Begin Class UZonefallSettingsDataObject Function SanitizeSettings ********************
struct Z_Construct_UFunction_UZonefallSettingsDataObject_SanitizeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Normalizes values loaded from UI/save before any apply.\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalizes values loaded from UI/save before any apply." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SanitizeSettings constinit property declarations **********************
// ********** End Function SanitizeSettings constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsDataObject_SanitizeSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsDataObject, nullptr, "SanitizeSettings", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsDataObject_SanitizeSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsDataObject_SanitizeSettings_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallSettingsDataObject_SanitizeSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsDataObject_SanitizeSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsDataObject::execSanitizeSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SanitizeSettings();
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsDataObject Function SanitizeSettings **********************

// ********** Begin Class UZonefallSettingsDataObject Function SetDefaults *************************
struct Z_Construct_UFunction_UZonefallSettingsDataObject_SetDefaults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDefaults constinit property declarations ***************************
// ********** End Function SetDefaults constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsDataObject_SetDefaults_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsDataObject, nullptr, "SetDefaults", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsDataObject_SetDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsDataObject_SetDefaults_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallSettingsDataObject_SetDefaults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsDataObject_SetDefaults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsDataObject::execSetDefaults)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefaults();
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsDataObject Function SetDefaults ***************************

// ********** Begin Class UZonefallSettingsDataObject Function SetScreenResolutionFromString *******
struct Z_Construct_UFunction_UZonefallSettingsDataObject_SetScreenResolutionFromString_Statics
{
	struct ZonefallSettingsDataObject_eventSetScreenResolutionFromString_Parms
	{
		FString ResolutionString;
		bool bApplyNow;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Accepts \"WidthxHeight\", e.g. \"1920x1080\".\n" },
#endif
		{ "CPP_Default_bApplyNow", "false" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Accepts \"WidthxHeight\", e.g. \"1920x1080\"." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetScreenResolutionFromString constinit property declarations *********
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResolutionString;
	static void NewProp_bApplyNow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyNow;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetScreenResolutionFromString constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetScreenResolutionFromString Property Definitions ********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallSettingsDataObject_SetScreenResolutionFromString_Statics::NewProp_ResolutionString = { "ResolutionString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSettingsDataObject_eventSetScreenResolutionFromString_Parms, ResolutionString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionString_MetaData), NewProp_ResolutionString_MetaData) };
void Z_Construct_UFunction_UZonefallSettingsDataObject_SetScreenResolutionFromString_Statics::NewProp_bApplyNow_SetBit(void* Obj)
{
	((ZonefallSettingsDataObject_eventSetScreenResolutionFromString_Parms*)Obj)->bApplyNow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZonefallSettingsDataObject_SetScreenResolutionFromString_Statics::NewProp_bApplyNow = { "bApplyNow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallSettingsDataObject_eventSetScreenResolutionFromString_Parms), &Z_Construct_UFunction_UZonefallSettingsDataObject_SetScreenResolutionFromString_Statics::NewProp_bApplyNow_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UZonefallSettingsDataObject_SetScreenResolutionFromString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ZonefallSettingsDataObject_eventSetScreenResolutionFromString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZonefallSettingsDataObject_SetScreenResolutionFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallSettingsDataObject_eventSetScreenResolutionFromString_Parms), &Z_Construct_UFunction_UZonefallSettingsDataObject_SetScreenResolutionFromString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallSettingsDataObject_SetScreenResolutionFromString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsDataObject_SetScreenResolutionFromString_Statics::NewProp_ResolutionString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsDataObject_SetScreenResolutionFromString_Statics::NewProp_bApplyNow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSettingsDataObject_SetScreenResolutionFromString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsDataObject_SetScreenResolutionFromString_Statics::PropPointers) < 2048);
// ********** End Function SetScreenResolutionFromString Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSettingsDataObject_SetScreenResolutionFromString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSettingsDataObject, nullptr, "SetScreenResolutionFromString", 	Z_Construct_UFunction_UZonefallSettingsDataObject_SetScreenResolutionFromString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsDataObject_SetScreenResolutionFromString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallSettingsDataObject_SetScreenResolutionFromString_Statics::ZonefallSettingsDataObject_eventSetScreenResolutionFromString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSettingsDataObject_SetScreenResolutionFromString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSettingsDataObject_SetScreenResolutionFromString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallSettingsDataObject_SetScreenResolutionFromString_Statics::ZonefallSettingsDataObject_eventSetScreenResolutionFromString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallSettingsDataObject_SetScreenResolutionFromString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSettingsDataObject_SetScreenResolutionFromString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSettingsDataObject::execSetScreenResolutionFromString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ResolutionString);
	P_GET_UBOOL(Z_Param_bApplyNow);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetScreenResolutionFromString(Z_Param_ResolutionString,Z_Param_bApplyNow);
	P_NATIVE_END;
}
// ********** End Class UZonefallSettingsDataObject Function SetScreenResolutionFromString *********

// ********** Begin Class UZonefallSettingsDataObject **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallSettingsDataObject;
UClass* UZonefallSettingsDataObject::GetPrivateStaticClass()
{
	using TClass = UZonefallSettingsDataObject;
	if (!Z_Registration_Info_UClass_UZonefallSettingsDataObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallSettingsDataObject"),
			Z_Registration_Info_UClass_UZonefallSettingsDataObject.InnerSingleton,
			StaticRegisterNativesUZonefallSettingsDataObject,
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
	return Z_Registration_Info_UClass_UZonefallSettingsDataObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallSettingsDataObject_NoRegister()
{
	return UZonefallSettingsDataObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallSettingsDataObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/ZonefallSettingsDataObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayMode_MetaData[] = {
		{ "Category", "Zonefall|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverallQuality_MetaData[] = {
		{ "Category", "Zonefall|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionScale_MetaData[] = {
		{ "Category", "Zonefall|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VSync_MetaData[] = {
		{ "Category", "Zonefall|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPSLimit_MetaData[] = {
		{ "Category", "Zonefall|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lumen_MetaData[] = {
		{ "Category", "Zonefall|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DLSSMode_MetaData[] = {
		{ "Category", "Zonefall|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameGeneration_MetaData[] = {
		{ "Category", "Zonefall|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FSRMode_MetaData[] = {
		{ "Category", "Zonefall|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FSRFrameGeneration_MetaData[] = {
		{ "Category", "Zonefall|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDLSSSupported_MetaData[] = {
		{ "Category", "Zonefall|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFrameGenerationSupported_MetaData[] = {
		{ "Category", "Zonefall|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFSRSupported_MetaData[] = {
		{ "Category", "Zonefall|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFSRFrameGenerationSupported_MetaData[] = {
		{ "Category", "Zonefall|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenResolution_MetaData[] = {
		{ "Category", "Zonefall|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Selected screen resolution in format \"1920x1080\".\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallSettingsDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Selected screen resolution in format \"1920x1080\"." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallSettingsDataObject constinit property declarations **************
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OverallQuality;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResolutionScale;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VSync;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FPSLimit;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Lumen;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DLSSMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FrameGeneration;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FSRMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FSRFrameGeneration;
	static void NewProp_bDLSSSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDLSSSupported;
	static void NewProp_bFrameGenerationSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFrameGenerationSupported;
	static void NewProp_bFSRSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFSRSupported;
	static void NewProp_bFSRFrameGenerationSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFSRFrameGenerationSupported;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScreenResolution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallSettingsDataObject constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ApplyDisplayModeAndResolution"), .Pointer = &UZonefallSettingsDataObject::execApplyDisplayModeAndResolution },
		{ .NameUTF8 = UTF8TEXT("ApplyGraphicsPreset"), .Pointer = &UZonefallSettingsDataObject::execApplyGraphicsPreset },
		{ .NameUTF8 = UTF8TEXT("ApplyToSystem"), .Pointer = &UZonefallSettingsDataObject::execApplyToSystem },
		{ .NameUTF8 = UTF8TEXT("GetAvailableScreenResolutions"), .Pointer = &UZonefallSettingsDataObject::execGetAvailableScreenResolutions },
		{ .NameUTF8 = UTF8TEXT("GetCurrentScreenResolutionString"), .Pointer = &UZonefallSettingsDataObject::execGetCurrentScreenResolutionString },
		{ .NameUTF8 = UTF8TEXT("LoadFromSystem"), .Pointer = &UZonefallSettingsDataObject::execLoadFromSystem },
		{ .NameUTF8 = UTF8TEXT("SanitizeSettings"), .Pointer = &UZonefallSettingsDataObject::execSanitizeSettings },
		{ .NameUTF8 = UTF8TEXT("SetDefaults"), .Pointer = &UZonefallSettingsDataObject::execSetDefaults },
		{ .NameUTF8 = UTF8TEXT("SetScreenResolutionFromString"), .Pointer = &UZonefallSettingsDataObject::execSetScreenResolutionFromString },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyDisplayModeAndResolution, "ApplyDisplayModeAndResolution" }, // 1816398751
		{ &Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyGraphicsPreset, "ApplyGraphicsPreset" }, // 4166528035
		{ &Z_Construct_UFunction_UZonefallSettingsDataObject_ApplyToSystem, "ApplyToSystem" }, // 1493230624
		{ &Z_Construct_UFunction_UZonefallSettingsDataObject_GetAvailableScreenResolutions, "GetAvailableScreenResolutions" }, // 810559174
		{ &Z_Construct_UFunction_UZonefallSettingsDataObject_GetCurrentScreenResolutionString, "GetCurrentScreenResolutionString" }, // 2488088489
		{ &Z_Construct_UFunction_UZonefallSettingsDataObject_LoadFromSystem, "LoadFromSystem" }, // 2096354152
		{ &Z_Construct_UFunction_UZonefallSettingsDataObject_SanitizeSettings, "SanitizeSettings" }, // 2817720149
		{ &Z_Construct_UFunction_UZonefallSettingsDataObject_SetDefaults, "SetDefaults" }, // 3467944177
		{ &Z_Construct_UFunction_UZonefallSettingsDataObject_SetScreenResolutionFromString, "SetScreenResolutionFromString" }, // 673599283
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallSettingsDataObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallSettingsDataObject_Statics

// ********** Begin Class UZonefallSettingsDataObject Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_DisplayMode = { "DisplayMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsDataObject, DisplayMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayMode_MetaData), NewProp_DisplayMode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_OverallQuality = { "OverallQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsDataObject, OverallQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverallQuality_MetaData), NewProp_OverallQuality_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_ResolutionScale = { "ResolutionScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsDataObject, ResolutionScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionScale_MetaData), NewProp_ResolutionScale_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_VSync = { "VSync", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsDataObject, VSync), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VSync_MetaData), NewProp_VSync_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_FPSLimit = { "FPSLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsDataObject, FPSLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPSLimit_MetaData), NewProp_FPSLimit_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_Lumen = { "Lumen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsDataObject, Lumen), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lumen_MetaData), NewProp_Lumen_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_DLSSMode = { "DLSSMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsDataObject, DLSSMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DLSSMode_MetaData), NewProp_DLSSMode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_FrameGeneration = { "FrameGeneration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsDataObject, FrameGeneration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameGeneration_MetaData), NewProp_FrameGeneration_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_FSRMode = { "FSRMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsDataObject, FSRMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FSRMode_MetaData), NewProp_FSRMode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_FSRFrameGeneration = { "FSRFrameGeneration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsDataObject, FSRFrameGeneration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FSRFrameGeneration_MetaData), NewProp_FSRFrameGeneration_MetaData) };
void Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_bDLSSSupported_SetBit(void* Obj)
{
	((UZonefallSettingsDataObject*)Obj)->bDLSSSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_bDLSSSupported = { "bDLSSSupported", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallSettingsDataObject), &Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_bDLSSSupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDLSSSupported_MetaData), NewProp_bDLSSSupported_MetaData) };
void Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_bFrameGenerationSupported_SetBit(void* Obj)
{
	((UZonefallSettingsDataObject*)Obj)->bFrameGenerationSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_bFrameGenerationSupported = { "bFrameGenerationSupported", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallSettingsDataObject), &Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_bFrameGenerationSupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFrameGenerationSupported_MetaData), NewProp_bFrameGenerationSupported_MetaData) };
void Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_bFSRSupported_SetBit(void* Obj)
{
	((UZonefallSettingsDataObject*)Obj)->bFSRSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_bFSRSupported = { "bFSRSupported", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallSettingsDataObject), &Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_bFSRSupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFSRSupported_MetaData), NewProp_bFSRSupported_MetaData) };
void Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_bFSRFrameGenerationSupported_SetBit(void* Obj)
{
	((UZonefallSettingsDataObject*)Obj)->bFSRFrameGenerationSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_bFSRFrameGenerationSupported = { "bFSRFrameGenerationSupported", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallSettingsDataObject), &Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_bFSRFrameGenerationSupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFSRFrameGenerationSupported_MetaData), NewProp_bFSRFrameGenerationSupported_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_ScreenResolution = { "ScreenResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSettingsDataObject, ScreenResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenResolution_MetaData), NewProp_ScreenResolution_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallSettingsDataObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_DisplayMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_OverallQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_ResolutionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_VSync,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_FPSLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_Lumen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_DLSSMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_FrameGeneration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_FSRMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_FSRFrameGeneration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_bDLSSSupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_bFrameGenerationSupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_bFSRSupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_bFSRFrameGenerationSupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSettingsDataObject_Statics::NewProp_ScreenResolution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallSettingsDataObject_Statics::PropPointers) < 2048);
// ********** End Class UZonefallSettingsDataObject Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UZonefallSettingsDataObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallSettingsDataObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallSettingsDataObject_Statics::ClassParams = {
	&UZonefallSettingsDataObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallSettingsDataObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallSettingsDataObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallSettingsDataObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallSettingsDataObject_Statics::Class_MetaDataParams)
};
void UZonefallSettingsDataObject::StaticRegisterNativesUZonefallSettingsDataObject()
{
	UClass* Class = UZonefallSettingsDataObject::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallSettingsDataObject_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallSettingsDataObject()
{
	if (!Z_Registration_Info_UClass_UZonefallSettingsDataObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallSettingsDataObject.OuterSingleton, Z_Construct_UClass_UZonefallSettingsDataObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallSettingsDataObject.OuterSingleton;
}
UZonefallSettingsDataObject::UZonefallSettingsDataObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallSettingsDataObject);
UZonefallSettingsDataObject::~UZonefallSettingsDataObject() {}
// ********** End Class UZonefallSettingsDataObject ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsDataObject_h__Script_UIWorld_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EZonefallGraphicsPreset_StaticEnum, TEXT("EZonefallGraphicsPreset"), &Z_Registration_Info_UEnum_EZonefallGraphicsPreset, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2227815438U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZonefallSettingsDataObject, UZonefallSettingsDataObject::StaticClass, TEXT("UZonefallSettingsDataObject"), &Z_Registration_Info_UClass_UZonefallSettingsDataObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallSettingsDataObject), 3667559918U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsDataObject_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsDataObject_h__Script_UIWorld_1809538974{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsDataObject_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsDataObject_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsDataObject_h__Script_UIWorld_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSettingsDataObject_h__Script_UIWorld_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
