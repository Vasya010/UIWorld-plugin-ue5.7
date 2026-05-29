// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Localization/ZonefallLocalizationSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallLocalizationSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallLocalizationSubsystem();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallLocalizationSubsystem_NoRegister();
UIWORLD_API UEnum* Z_Construct_UEnum_UIWorld_EZonefallLanguage();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_ZonefallLanguageChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EZonefallLanguage *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EZonefallLanguage;
static UEnum* EZonefallLanguage_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EZonefallLanguage.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EZonefallLanguage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UIWorld_EZonefallLanguage, (UObject*)Z_Construct_UPackage__Script_UIWorld(), TEXT("EZonefallLanguage"));
	}
	return Z_Registration_Info_UEnum_EZonefallLanguage.OuterSingleton;
}
template<> UIWORLD_NON_ATTRIBUTED_API UEnum* StaticEnum<EZonefallLanguage>()
{
	return EZonefallLanguage_StaticEnum();
}
struct Z_Construct_UEnum_UIWorld_EZonefallLanguage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Chinese.DisplayName", "\xe4\xb8\xad\xe6\x96\x87" },
		{ "Chinese.Name", "EZonefallLanguage::Chinese" },
		{ "English.DisplayName", "English" },
		{ "English.Name", "EZonefallLanguage::English" },
		{ "ModuleRelativePath", "Public/Localization/ZonefallLocalizationSubsystem.h" },
		{ "Russian.DisplayName", "\xd0\xa0\xd1\x83\xd1\x81\xd1\x81\xd0\xba\xd0\xb8\xd0\xb9" },
		{ "Russian.Name", "EZonefallLanguage::Russian" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EZonefallLanguage::English", (int64)EZonefallLanguage::English },
		{ "EZonefallLanguage::Russian", (int64)EZonefallLanguage::Russian },
		{ "EZonefallLanguage::Chinese", (int64)EZonefallLanguage::Chinese },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_UIWorld_EZonefallLanguage_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UIWorld_EZonefallLanguage_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UIWorld,
	nullptr,
	"EZonefallLanguage",
	"EZonefallLanguage",
	Z_Construct_UEnum_UIWorld_EZonefallLanguage_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UIWorld_EZonefallLanguage_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UIWorld_EZonefallLanguage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UIWorld_EZonefallLanguage_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UIWorld_EZonefallLanguage()
{
	if (!Z_Registration_Info_UEnum_EZonefallLanguage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EZonefallLanguage.InnerSingleton, Z_Construct_UEnum_UIWorld_EZonefallLanguage_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EZonefallLanguage.InnerSingleton;
}
// ********** End Enum EZonefallLanguage ***********************************************************

// ********** Begin Delegate FZonefallLanguageChanged **********************************************
struct Z_Construct_UDelegateFunction_UIWorld_ZonefallLanguageChanged__DelegateSignature_Statics
{
	struct _Script_UIWorld_eventZonefallLanguageChanged_Parms
	{
		EZonefallLanguage NewLanguage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Localization/ZonefallLocalizationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FZonefallLanguageChanged constinit property declarations **************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewLanguage_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewLanguage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FZonefallLanguageChanged constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FZonefallLanguageChanged Property Definitions *************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UIWorld_ZonefallLanguageChanged__DelegateSignature_Statics::NewProp_NewLanguage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UIWorld_ZonefallLanguageChanged__DelegateSignature_Statics::NewProp_NewLanguage = { "NewLanguage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UIWorld_eventZonefallLanguageChanged_Parms, NewLanguage), Z_Construct_UEnum_UIWorld_EZonefallLanguage, METADATA_PARAMS(0, nullptr) }; // 1922273304
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UIWorld_ZonefallLanguageChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIWorld_ZonefallLanguageChanged__DelegateSignature_Statics::NewProp_NewLanguage_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIWorld_ZonefallLanguageChanged__DelegateSignature_Statics::NewProp_NewLanguage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_ZonefallLanguageChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FZonefallLanguageChanged Property Definitions ***************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_ZonefallLanguageChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "ZonefallLanguageChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_UIWorld_ZonefallLanguageChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_ZonefallLanguageChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_UIWorld_ZonefallLanguageChanged__DelegateSignature_Statics::_Script_UIWorld_eventZonefallLanguageChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_ZonefallLanguageChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_ZonefallLanguageChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UIWorld_ZonefallLanguageChanged__DelegateSignature_Statics::_Script_UIWorld_eventZonefallLanguageChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UIWorld_ZonefallLanguageChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_ZonefallLanguageChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FZonefallLanguageChanged_DelegateWrapper(const FMulticastScriptDelegate& ZonefallLanguageChanged, EZonefallLanguage NewLanguage)
{
	struct _Script_UIWorld_eventZonefallLanguageChanged_Parms
	{
		EZonefallLanguage NewLanguage;
	};
	_Script_UIWorld_eventZonefallLanguageChanged_Parms Parms;
	Parms.NewLanguage=NewLanguage;
	ZonefallLanguageChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FZonefallLanguageChanged ************************************************

// ********** Begin Class UZonefallLocalizationSubsystem Function Get ******************************
struct Z_Construct_UFunction_UZonefallLocalizationSubsystem_Get_Statics
{
	struct ZonefallLocalizationSubsystem_eventGet_Parms
	{
		const UObject* WorldContextObject;
		UZonefallLocalizationSubsystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Localization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Convenience accessor from any UObject with a world. */" },
#endif
		{ "ModuleRelativePath", "Public/Localization/ZonefallLocalizationSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience accessor from any UObject with a world." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Get constinit property declarations ***********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Get constinit property declarations *************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Get Property Definitions **********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZonefallLocalizationSubsystem_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallLocalizationSubsystem_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZonefallLocalizationSubsystem_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallLocalizationSubsystem_eventGet_Parms, ReturnValue), Z_Construct_UClass_UZonefallLocalizationSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallLocalizationSubsystem_Get_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallLocalizationSubsystem_Get_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallLocalizationSubsystem_Get_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLocalizationSubsystem_Get_Statics::PropPointers) < 2048);
// ********** End Function Get Property Definitions ************************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallLocalizationSubsystem_Get_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallLocalizationSubsystem, nullptr, "Get", 	Z_Construct_UFunction_UZonefallLocalizationSubsystem_Get_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLocalizationSubsystem_Get_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallLocalizationSubsystem_Get_Statics::ZonefallLocalizationSubsystem_eventGet_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLocalizationSubsystem_Get_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallLocalizationSubsystem_Get_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallLocalizationSubsystem_Get_Statics::ZonefallLocalizationSubsystem_eventGet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallLocalizationSubsystem_Get()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallLocalizationSubsystem_Get_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallLocalizationSubsystem::execGet)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UZonefallLocalizationSubsystem**)Z_Param__Result=UZonefallLocalizationSubsystem::Get(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UZonefallLocalizationSubsystem Function Get ********************************

// ********** Begin Class UZonefallLocalizationSubsystem Function GetLanguage **********************
struct Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguage_Statics
{
	struct ZonefallLocalizationSubsystem_eventGetLanguage_Parms
	{
		EZonefallLanguage ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Localization" },
		{ "ModuleRelativePath", "Public/Localization/ZonefallLocalizationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLanguage constinit property declarations ***************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLanguage constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLanguage Property Definitions **************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguage_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallLocalizationSubsystem_eventGetLanguage_Parms, ReturnValue), Z_Construct_UEnum_UIWorld_EZonefallLanguage, METADATA_PARAMS(0, nullptr) }; // 1922273304
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguage_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguage_Statics::PropPointers) < 2048);
// ********** End Function GetLanguage Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallLocalizationSubsystem, nullptr, "GetLanguage", 	Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguage_Statics::ZonefallLocalizationSubsystem_eventGetLanguage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguage_Statics::ZonefallLocalizationSubsystem_eventGetLanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallLocalizationSubsystem::execGetLanguage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EZonefallLanguage*)Z_Param__Result=P_THIS->GetLanguage();
	P_NATIVE_END;
}
// ********** End Class UZonefallLocalizationSubsystem Function GetLanguage ************************

// ********** Begin Class UZonefallLocalizationSubsystem Function GetLanguageDisplayNames **********
struct Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguageDisplayNames_Statics
{
	struct ZonefallLocalizationSubsystem_eventGetLanguageDisplayNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Localization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Display names for the language combo, in EZonefallLanguage order. */" },
#endif
		{ "ModuleRelativePath", "Public/Localization/ZonefallLocalizationSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Display names for the language combo, in EZonefallLanguage order." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetLanguageDisplayNames constinit property declarations ***************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLanguageDisplayNames constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLanguageDisplayNames Property Definitions **************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguageDisplayNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguageDisplayNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallLocalizationSubsystem_eventGetLanguageDisplayNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguageDisplayNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguageDisplayNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguageDisplayNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguageDisplayNames_Statics::PropPointers) < 2048);
// ********** End Function GetLanguageDisplayNames Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguageDisplayNames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallLocalizationSubsystem, nullptr, "GetLanguageDisplayNames", 	Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguageDisplayNames_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguageDisplayNames_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguageDisplayNames_Statics::ZonefallLocalizationSubsystem_eventGetLanguageDisplayNames_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguageDisplayNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguageDisplayNames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguageDisplayNames_Statics::ZonefallLocalizationSubsystem_eventGetLanguageDisplayNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguageDisplayNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguageDisplayNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallLocalizationSubsystem::execGetLanguageDisplayNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetLanguageDisplayNames();
	P_NATIVE_END;
}
// ********** End Class UZonefallLocalizationSubsystem Function GetLanguageDisplayNames ************

// ********** Begin Class UZonefallLocalizationSubsystem Function GetText **************************
struct Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetText_Statics
{
	struct ZonefallLocalizationSubsystem_eventGetText_Parms
	{
		FName Key;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Localization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Localised text for a key in the current language (falls back to English, then the key). */" },
#endif
		{ "ModuleRelativePath", "Public/Localization/ZonefallLocalizationSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Localised text for a key in the current language (falls back to English, then the key)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetText constinit property declarations *******************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetText constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetText Property Definitions ******************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetText_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallLocalizationSubsystem_eventGetText_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallLocalizationSubsystem_eventGetText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetText_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetText_Statics::PropPointers) < 2048);
// ********** End Function GetText Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallLocalizationSubsystem, nullptr, "GetText", 	Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetText_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetText_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetText_Statics::ZonefallLocalizationSubsystem_eventGetText_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetText_Statics::ZonefallLocalizationSubsystem_eventGetText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallLocalizationSubsystem::execGetText)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetText(Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UZonefallLocalizationSubsystem Function GetText ****************************

// ********** Begin Class UZonefallLocalizationSubsystem Function L ********************************
struct Z_Construct_UFunction_UZonefallLocalizationSubsystem_L_Statics
{
	struct ZonefallLocalizationSubsystem_eventL_Parms
	{
		const UObject* WorldContextObject;
		FName Key;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Localization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Static one-liner for widgets: ZLoc(this, \"menu.home\"). */" },
#endif
		{ "ModuleRelativePath", "Public/Localization/ZonefallLocalizationSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static one-liner for widgets: ZLoc(this, \"menu.home\")." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function L constinit property declarations *************************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function L constinit property declarations ***************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function L Property Definitions ************************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZonefallLocalizationSubsystem_L_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallLocalizationSubsystem_eventL_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UZonefallLocalizationSubsystem_L_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallLocalizationSubsystem_eventL_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UZonefallLocalizationSubsystem_L_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallLocalizationSubsystem_eventL_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallLocalizationSubsystem_L_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallLocalizationSubsystem_L_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallLocalizationSubsystem_L_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallLocalizationSubsystem_L_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLocalizationSubsystem_L_Statics::PropPointers) < 2048);
// ********** End Function L Property Definitions **************************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallLocalizationSubsystem_L_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallLocalizationSubsystem, nullptr, "L", 	Z_Construct_UFunction_UZonefallLocalizationSubsystem_L_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLocalizationSubsystem_L_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallLocalizationSubsystem_L_Statics::ZonefallLocalizationSubsystem_eventL_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLocalizationSubsystem_L_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallLocalizationSubsystem_L_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallLocalizationSubsystem_L_Statics::ZonefallLocalizationSubsystem_eventL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallLocalizationSubsystem_L()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallLocalizationSubsystem_L_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallLocalizationSubsystem::execL)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=UZonefallLocalizationSubsystem::L(Z_Param_WorldContextObject,Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UZonefallLocalizationSubsystem Function L **********************************

// ********** Begin Class UZonefallLocalizationSubsystem Function SetLanguage **********************
struct Z_Construct_UFunction_UZonefallLocalizationSubsystem_SetLanguage_Statics
{
	struct ZonefallLocalizationSubsystem_eventSetLanguage_Parms
	{
		EZonefallLanguage NewLanguage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Localization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Switch language: updates the engine culture, persists, and broadcasts OnLanguageChanged. */" },
#endif
		{ "ModuleRelativePath", "Public/Localization/ZonefallLocalizationSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Switch language: updates the engine culture, persists, and broadcasts OnLanguageChanged." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetLanguage constinit property declarations ***************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewLanguage_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewLanguage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLanguage constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLanguage Property Definitions **************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZonefallLocalizationSubsystem_SetLanguage_Statics::NewProp_NewLanguage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UZonefallLocalizationSubsystem_SetLanguage_Statics::NewProp_NewLanguage = { "NewLanguage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallLocalizationSubsystem_eventSetLanguage_Parms, NewLanguage), Z_Construct_UEnum_UIWorld_EZonefallLanguage, METADATA_PARAMS(0, nullptr) }; // 1922273304
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallLocalizationSubsystem_SetLanguage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallLocalizationSubsystem_SetLanguage_Statics::NewProp_NewLanguage_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallLocalizationSubsystem_SetLanguage_Statics::NewProp_NewLanguage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLocalizationSubsystem_SetLanguage_Statics::PropPointers) < 2048);
// ********** End Function SetLanguage Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallLocalizationSubsystem_SetLanguage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallLocalizationSubsystem, nullptr, "SetLanguage", 	Z_Construct_UFunction_UZonefallLocalizationSubsystem_SetLanguage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLocalizationSubsystem_SetLanguage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallLocalizationSubsystem_SetLanguage_Statics::ZonefallLocalizationSubsystem_eventSetLanguage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLocalizationSubsystem_SetLanguage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallLocalizationSubsystem_SetLanguage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallLocalizationSubsystem_SetLanguage_Statics::ZonefallLocalizationSubsystem_eventSetLanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallLocalizationSubsystem_SetLanguage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallLocalizationSubsystem_SetLanguage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallLocalizationSubsystem::execSetLanguage)
{
	P_GET_ENUM(EZonefallLanguage,Z_Param_NewLanguage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLanguage(EZonefallLanguage(Z_Param_NewLanguage));
	P_NATIVE_END;
}
// ********** End Class UZonefallLocalizationSubsystem Function SetLanguage ************************

// ********** Begin Class UZonefallLocalizationSubsystem *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallLocalizationSubsystem;
UClass* UZonefallLocalizationSubsystem::GetPrivateStaticClass()
{
	using TClass = UZonefallLocalizationSubsystem;
	if (!Z_Registration_Info_UClass_UZonefallLocalizationSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallLocalizationSubsystem"),
			Z_Registration_Info_UClass_UZonefallLocalizationSubsystem.InnerSingleton,
			StaticRegisterNativesUZonefallLocalizationSubsystem,
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
	return Z_Registration_Info_UClass_UZonefallLocalizationSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallLocalizationSubsystem_NoRegister()
{
	return UZonefallLocalizationSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallLocalizationSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Runtime, in-game language switching for Zonefall (English / Russian / Chinese).\n *\n *  - Holds a built-in C++ string table so the self-assembling UMG widgets can localise\n *    without any .locres assets.\n *  - Switches the engine culture (FInternationalization) so engine text follows too.\n *  - Persists the chosen language to GameUserSettings.ini.\n *  - Broadcasts OnLanguageChanged so menus can rebuild themselves live.\n *\n * Look up text with GetText(Key) / the static L() helper. Missing keys fall back to the\n * English entry, then to the key string itself, so nothing ever shows blank.\n */" },
#endif
		{ "IncludePath", "Localization/ZonefallLocalizationSubsystem.h" },
		{ "ModuleRelativePath", "Public/Localization/ZonefallLocalizationSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime, in-game language switching for Zonefall (English / Russian / Chinese).\n\n - Holds a built-in C++ string table so the self-assembling UMG widgets can localise\n   without any .locres assets.\n - Switches the engine culture (FInternationalization) so engine text follows too.\n - Persists the chosen language to GameUserSettings.ini.\n - Broadcasts OnLanguageChanged so menus can rebuild themselves live.\n\nLook up text with GetText(Key) / the static L() helper. Missing keys fall back to the\nEnglish entry, then to the key string itself, so nothing ever shows blank." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLanguageChanged_MetaData[] = {
		{ "Category", "Zonefall|Localization" },
		{ "ModuleRelativePath", "Public/Localization/ZonefallLocalizationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallLocalizationSubsystem constinit property declarations ***********
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLanguageChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallLocalizationSubsystem constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Get"), .Pointer = &UZonefallLocalizationSubsystem::execGet },
		{ .NameUTF8 = UTF8TEXT("GetLanguage"), .Pointer = &UZonefallLocalizationSubsystem::execGetLanguage },
		{ .NameUTF8 = UTF8TEXT("GetLanguageDisplayNames"), .Pointer = &UZonefallLocalizationSubsystem::execGetLanguageDisplayNames },
		{ .NameUTF8 = UTF8TEXT("GetText"), .Pointer = &UZonefallLocalizationSubsystem::execGetText },
		{ .NameUTF8 = UTF8TEXT("L"), .Pointer = &UZonefallLocalizationSubsystem::execL },
		{ .NameUTF8 = UTF8TEXT("SetLanguage"), .Pointer = &UZonefallLocalizationSubsystem::execSetLanguage },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallLocalizationSubsystem_Get, "Get" }, // 1731452056
		{ &Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguage, "GetLanguage" }, // 292135737
		{ &Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetLanguageDisplayNames, "GetLanguageDisplayNames" }, // 4276371364
		{ &Z_Construct_UFunction_UZonefallLocalizationSubsystem_GetText, "GetText" }, // 616973030
		{ &Z_Construct_UFunction_UZonefallLocalizationSubsystem_L, "L" }, // 1673889655
		{ &Z_Construct_UFunction_UZonefallLocalizationSubsystem_SetLanguage, "SetLanguage" }, // 1518236065
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallLocalizationSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallLocalizationSubsystem_Statics

// ********** Begin Class UZonefallLocalizationSubsystem Property Definitions **********************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallLocalizationSubsystem_Statics::NewProp_OnLanguageChanged = { "OnLanguageChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLocalizationSubsystem, OnLanguageChanged), Z_Construct_UDelegateFunction_UIWorld_ZonefallLanguageChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLanguageChanged_MetaData), NewProp_OnLanguageChanged_MetaData) }; // 1956731528
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallLocalizationSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLocalizationSubsystem_Statics::NewProp_OnLanguageChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallLocalizationSubsystem_Statics::PropPointers) < 2048);
// ********** End Class UZonefallLocalizationSubsystem Property Definitions ************************
UObject* (*const Z_Construct_UClass_UZonefallLocalizationSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallLocalizationSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallLocalizationSubsystem_Statics::ClassParams = {
	&UZonefallLocalizationSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallLocalizationSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallLocalizationSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallLocalizationSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallLocalizationSubsystem_Statics::Class_MetaDataParams)
};
void UZonefallLocalizationSubsystem::StaticRegisterNativesUZonefallLocalizationSubsystem()
{
	UClass* Class = UZonefallLocalizationSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallLocalizationSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallLocalizationSubsystem()
{
	if (!Z_Registration_Info_UClass_UZonefallLocalizationSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallLocalizationSubsystem.OuterSingleton, Z_Construct_UClass_UZonefallLocalizationSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallLocalizationSubsystem.OuterSingleton;
}
UZonefallLocalizationSubsystem::UZonefallLocalizationSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallLocalizationSubsystem);
UZonefallLocalizationSubsystem::~UZonefallLocalizationSubsystem() {}
// ********** End Class UZonefallLocalizationSubsystem *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Localization_ZonefallLocalizationSubsystem_h__Script_UIWorld_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EZonefallLanguage_StaticEnum, TEXT("EZonefallLanguage"), &Z_Registration_Info_UEnum_EZonefallLanguage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1922273304U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZonefallLocalizationSubsystem, UZonefallLocalizationSubsystem::StaticClass, TEXT("UZonefallLocalizationSubsystem"), &Z_Registration_Info_UClass_UZonefallLocalizationSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallLocalizationSubsystem), 2271739871U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Localization_ZonefallLocalizationSubsystem_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Localization_ZonefallLocalizationSubsystem_h__Script_UIWorld_2601297312{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Localization_ZonefallLocalizationSubsystem_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Localization_ZonefallLocalizationSubsystem_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Localization_ZonefallLocalizationSubsystem_h__Script_UIWorld_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Localization_ZonefallLocalizationSubsystem_h__Script_UIWorld_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
