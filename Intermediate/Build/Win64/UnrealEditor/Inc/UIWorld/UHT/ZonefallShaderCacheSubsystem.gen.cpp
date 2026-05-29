// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZonefallShaderCacheSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallShaderCacheSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallShaderCacheSubsystem();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallShaderCacheSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UZonefallShaderCacheSubsystem Function GetInitialPSOCount ****************
struct Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetInitialPSOCount_Statics
{
	struct ZonefallShaderCacheSubsystem_eventGetInitialPSOCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Shader Cache" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Total PSOs in the cache that this subsystem began with. */" },
#endif
		{ "ModuleRelativePath", "Public/ZonefallShaderCacheSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Total PSOs in the cache that this subsystem began with." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetInitialPSOCount constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInitialPSOCount constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInitialPSOCount Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetInitialPSOCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallShaderCacheSubsystem_eventGetInitialPSOCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetInitialPSOCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetInitialPSOCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetInitialPSOCount_Statics::PropPointers) < 2048);
// ********** End Function GetInitialPSOCount Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetInitialPSOCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallShaderCacheSubsystem, nullptr, "GetInitialPSOCount", 	Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetInitialPSOCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetInitialPSOCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetInitialPSOCount_Statics::ZonefallShaderCacheSubsystem_eventGetInitialPSOCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetInitialPSOCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetInitialPSOCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetInitialPSOCount_Statics::ZonefallShaderCacheSubsystem_eventGetInitialPSOCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetInitialPSOCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetInitialPSOCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallShaderCacheSubsystem::execGetInitialPSOCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetInitialPSOCount();
	P_NATIVE_END;
}
// ********** End Class UZonefallShaderCacheSubsystem Function GetInitialPSOCount ******************

// ********** Begin Class UZonefallShaderCacheSubsystem Function GetNumPSOsRemaining ***************
struct Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetNumPSOsRemaining_Statics
{
	struct ZonefallShaderCacheSubsystem_eventGetNumPSOsRemaining_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Shader Cache" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How many PSOs are still being compiled. */" },
#endif
		{ "ModuleRelativePath", "Public/ZonefallShaderCacheSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many PSOs are still being compiled." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetNumPSOsRemaining constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNumPSOsRemaining constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNumPSOsRemaining Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetNumPSOsRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallShaderCacheSubsystem_eventGetNumPSOsRemaining_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetNumPSOsRemaining_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetNumPSOsRemaining_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetNumPSOsRemaining_Statics::PropPointers) < 2048);
// ********** End Function GetNumPSOsRemaining Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetNumPSOsRemaining_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallShaderCacheSubsystem, nullptr, "GetNumPSOsRemaining", 	Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetNumPSOsRemaining_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetNumPSOsRemaining_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetNumPSOsRemaining_Statics::ZonefallShaderCacheSubsystem_eventGetNumPSOsRemaining_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetNumPSOsRemaining_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetNumPSOsRemaining_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetNumPSOsRemaining_Statics::ZonefallShaderCacheSubsystem_eventGetNumPSOsRemaining_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetNumPSOsRemaining()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetNumPSOsRemaining_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallShaderCacheSubsystem::execGetNumPSOsRemaining)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumPSOsRemaining();
	P_NATIVE_END;
}
// ********** End Class UZonefallShaderCacheSubsystem Function GetNumPSOsRemaining *****************

// ********** Begin Class UZonefallShaderCacheSubsystem Function GetPrecompileProgress *************
struct Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetPrecompileProgress_Statics
{
	struct ZonefallShaderCacheSubsystem_eventGetPrecompileProgress_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Shader Cache" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns 0..1 progress of PSO precompile (1.0 means done or no cache). */" },
#endif
		{ "ModuleRelativePath", "Public/ZonefallShaderCacheSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns 0..1 progress of PSO precompile (1.0 means done or no cache)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetPrecompileProgress constinit property declarations *****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPrecompileProgress constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPrecompileProgress Property Definitions ****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetPrecompileProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallShaderCacheSubsystem_eventGetPrecompileProgress_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetPrecompileProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetPrecompileProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetPrecompileProgress_Statics::PropPointers) < 2048);
// ********** End Function GetPrecompileProgress Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetPrecompileProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallShaderCacheSubsystem, nullptr, "GetPrecompileProgress", 	Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetPrecompileProgress_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetPrecompileProgress_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetPrecompileProgress_Statics::ZonefallShaderCacheSubsystem_eventGetPrecompileProgress_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetPrecompileProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetPrecompileProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetPrecompileProgress_Statics::ZonefallShaderCacheSubsystem_eventGetPrecompileProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetPrecompileProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetPrecompileProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallShaderCacheSubsystem::execGetPrecompileProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPrecompileProgress();
	P_NATIVE_END;
}
// ********** End Class UZonefallShaderCacheSubsystem Function GetPrecompileProgress ***************

// ********** Begin Class UZonefallShaderCacheSubsystem Function IsPrecompiling ********************
struct Z_Construct_UFunction_UZonefallShaderCacheSubsystem_IsPrecompiling_Statics
{
	struct ZonefallShaderCacheSubsystem_eventIsPrecompiling_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Shader Cache" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if the PSO cache is currently precompiling pipelines. */" },
#endif
		{ "ModuleRelativePath", "Public/ZonefallShaderCacheSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the PSO cache is currently precompiling pipelines." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsPrecompiling constinit property declarations ************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPrecompiling constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPrecompiling Property Definitions ***********************************
void Z_Construct_UFunction_UZonefallShaderCacheSubsystem_IsPrecompiling_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ZonefallShaderCacheSubsystem_eventIsPrecompiling_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZonefallShaderCacheSubsystem_IsPrecompiling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallShaderCacheSubsystem_eventIsPrecompiling_Parms), &Z_Construct_UFunction_UZonefallShaderCacheSubsystem_IsPrecompiling_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallShaderCacheSubsystem_IsPrecompiling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallShaderCacheSubsystem_IsPrecompiling_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallShaderCacheSubsystem_IsPrecompiling_Statics::PropPointers) < 2048);
// ********** End Function IsPrecompiling Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallShaderCacheSubsystem_IsPrecompiling_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallShaderCacheSubsystem, nullptr, "IsPrecompiling", 	Z_Construct_UFunction_UZonefallShaderCacheSubsystem_IsPrecompiling_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallShaderCacheSubsystem_IsPrecompiling_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallShaderCacheSubsystem_IsPrecompiling_Statics::ZonefallShaderCacheSubsystem_eventIsPrecompiling_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallShaderCacheSubsystem_IsPrecompiling_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallShaderCacheSubsystem_IsPrecompiling_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallShaderCacheSubsystem_IsPrecompiling_Statics::ZonefallShaderCacheSubsystem_eventIsPrecompiling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallShaderCacheSubsystem_IsPrecompiling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallShaderCacheSubsystem_IsPrecompiling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallShaderCacheSubsystem::execIsPrecompiling)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPrecompiling();
	P_NATIVE_END;
}
// ********** End Class UZonefallShaderCacheSubsystem Function IsPrecompiling **********************

// ********** Begin Class UZonefallShaderCacheSubsystem Function SaveUsageCacheNow *****************
struct Z_Construct_UFunction_UZonefallShaderCacheSubsystem_SaveUsageCacheNow_Statics
{
	struct ZonefallShaderCacheSubsystem_eventSaveUsageCacheNow_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Shader Cache" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Triggers an explicit save of the runtime usage cache to disk. */" },
#endif
		{ "ModuleRelativePath", "Public/ZonefallShaderCacheSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Triggers an explicit save of the runtime usage cache to disk." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SaveUsageCacheNow constinit property declarations *********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SaveUsageCacheNow constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SaveUsageCacheNow Property Definitions ********************************
void Z_Construct_UFunction_UZonefallShaderCacheSubsystem_SaveUsageCacheNow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ZonefallShaderCacheSubsystem_eventSaveUsageCacheNow_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZonefallShaderCacheSubsystem_SaveUsageCacheNow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallShaderCacheSubsystem_eventSaveUsageCacheNow_Parms), &Z_Construct_UFunction_UZonefallShaderCacheSubsystem_SaveUsageCacheNow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallShaderCacheSubsystem_SaveUsageCacheNow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallShaderCacheSubsystem_SaveUsageCacheNow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallShaderCacheSubsystem_SaveUsageCacheNow_Statics::PropPointers) < 2048);
// ********** End Function SaveUsageCacheNow Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallShaderCacheSubsystem_SaveUsageCacheNow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallShaderCacheSubsystem, nullptr, "SaveUsageCacheNow", 	Z_Construct_UFunction_UZonefallShaderCacheSubsystem_SaveUsageCacheNow_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallShaderCacheSubsystem_SaveUsageCacheNow_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallShaderCacheSubsystem_SaveUsageCacheNow_Statics::ZonefallShaderCacheSubsystem_eventSaveUsageCacheNow_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallShaderCacheSubsystem_SaveUsageCacheNow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallShaderCacheSubsystem_SaveUsageCacheNow_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallShaderCacheSubsystem_SaveUsageCacheNow_Statics::ZonefallShaderCacheSubsystem_eventSaveUsageCacheNow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallShaderCacheSubsystem_SaveUsageCacheNow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallShaderCacheSubsystem_SaveUsageCacheNow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallShaderCacheSubsystem::execSaveUsageCacheNow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SaveUsageCacheNow();
	P_NATIVE_END;
}
// ********** End Class UZonefallShaderCacheSubsystem Function SaveUsageCacheNow *******************

// ********** Begin Class UZonefallShaderCacheSubsystem ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallShaderCacheSubsystem;
UClass* UZonefallShaderCacheSubsystem::GetPrivateStaticClass()
{
	using TClass = UZonefallShaderCacheSubsystem;
	if (!Z_Registration_Info_UClass_UZonefallShaderCacheSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallShaderCacheSubsystem"),
			Z_Registration_Info_UClass_UZonefallShaderCacheSubsystem.InnerSingleton,
			StaticRegisterNativesUZonefallShaderCacheSubsystem,
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
	return Z_Registration_Info_UClass_UZonefallShaderCacheSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallShaderCacheSubsystem_NoRegister()
{
	return UZonefallShaderCacheSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Drives Unreal's pipeline state cache (PSO) so the game pre-compiles and re-uses\n * shader pipelines across launches. This is the real anti-stutter solution:\n *  - On first launch the cache records what pipelines the game uses.\n *  - On every subsequent launch those pipelines are compiled up front during the\n *    shader loading screen, eliminating runtime hitches when new materials appear.\n *\n * Everything is automatic \xe2\x80\x94 game just needs UIWorld plugin enabled.\n */" },
#endif
		{ "IncludePath", "ZonefallShaderCacheSubsystem.h" },
		{ "ModuleRelativePath", "Public/ZonefallShaderCacheSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drives Unreal's pipeline state cache (PSO) so the game pre-compiles and re-uses\nshader pipelines across launches. This is the real anti-stutter solution:\n - On first launch the cache records what pipelines the game uses.\n - On every subsequent launch those pipelines are compiled up front during the\n   shader loading screen, eliminating runtime hitches when new materials appear.\n\nEverything is automatic \xe2\x80\x94 game just needs UIWorld plugin enabled." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheKey_MetaData[] = {
		{ "Category", "Zonefall|Shader Cache" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Game name used to scope the cache file. Defaults to FApp::GetProjectName(). */" },
#endif
		{ "ModuleRelativePath", "Public/ZonefallShaderCacheSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game name used to scope the cache file. Defaults to FApp::GetProjectName()." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BatchSizePerFrame_MetaData[] = {
		{ "Category", "Zonefall|Shader Cache" },
		{ "ClampMax", "200" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of pipelines to precompile per frame during warmup. */" },
#endif
		{ "ModuleRelativePath", "Public/ZonefallShaderCacheSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of pipelines to precompile per frame during warmup." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSaveOnShutdown_MetaData[] = {
		{ "Category", "Zonefall|Shader Cache" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Auto-save cache on application shutdown. */" },
#endif
		{ "ModuleRelativePath", "Public/ZonefallShaderCacheSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto-save cache on application shutdown." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoSaveIntervalSeconds_MetaData[] = {
		{ "Category", "Zonefall|Shader Cache" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Auto-save cache periodically while playing (every N seconds). 0 disables. */" },
#endif
		{ "ModuleRelativePath", "Public/ZonefallShaderCacheSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto-save cache periodically while playing (every N seconds). 0 disables." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyAntiStutterCVars_MetaData[] = {
		{ "Category", "Zonefall|Shader Cache" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, applies recommended r.* CVars on startup that improve shader robustness. */" },
#endif
		{ "ModuleRelativePath", "Public/ZonefallShaderCacheSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, applies recommended r.* CVars on startup that improve shader robustness." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallShaderCacheSubsystem constinit property declarations ************
	static const UECodeGen_Private::FStrPropertyParams NewProp_CacheKey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BatchSizePerFrame;
	static void NewProp_bAutoSaveOnShutdown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSaveOnShutdown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoSaveIntervalSeconds;
	static void NewProp_bApplyAntiStutterCVars_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyAntiStutterCVars;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallShaderCacheSubsystem constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetInitialPSOCount"), .Pointer = &UZonefallShaderCacheSubsystem::execGetInitialPSOCount },
		{ .NameUTF8 = UTF8TEXT("GetNumPSOsRemaining"), .Pointer = &UZonefallShaderCacheSubsystem::execGetNumPSOsRemaining },
		{ .NameUTF8 = UTF8TEXT("GetPrecompileProgress"), .Pointer = &UZonefallShaderCacheSubsystem::execGetPrecompileProgress },
		{ .NameUTF8 = UTF8TEXT("IsPrecompiling"), .Pointer = &UZonefallShaderCacheSubsystem::execIsPrecompiling },
		{ .NameUTF8 = UTF8TEXT("SaveUsageCacheNow"), .Pointer = &UZonefallShaderCacheSubsystem::execSaveUsageCacheNow },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetInitialPSOCount, "GetInitialPSOCount" }, // 3143393888
		{ &Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetNumPSOsRemaining, "GetNumPSOsRemaining" }, // 2662491565
		{ &Z_Construct_UFunction_UZonefallShaderCacheSubsystem_GetPrecompileProgress, "GetPrecompileProgress" }, // 2884196482
		{ &Z_Construct_UFunction_UZonefallShaderCacheSubsystem_IsPrecompiling, "IsPrecompiling" }, // 967222618
		{ &Z_Construct_UFunction_UZonefallShaderCacheSubsystem_SaveUsageCacheNow, "SaveUsageCacheNow" }, // 2868975045
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallShaderCacheSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics

// ********** Begin Class UZonefallShaderCacheSubsystem Property Definitions ***********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics::NewProp_CacheKey = { "CacheKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderCacheSubsystem, CacheKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheKey_MetaData), NewProp_CacheKey_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics::NewProp_BatchSizePerFrame = { "BatchSizePerFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderCacheSubsystem, BatchSizePerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BatchSizePerFrame_MetaData), NewProp_BatchSizePerFrame_MetaData) };
void Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics::NewProp_bAutoSaveOnShutdown_SetBit(void* Obj)
{
	((UZonefallShaderCacheSubsystem*)Obj)->bAutoSaveOnShutdown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics::NewProp_bAutoSaveOnShutdown = { "bAutoSaveOnShutdown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallShaderCacheSubsystem), &Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics::NewProp_bAutoSaveOnShutdown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoSaveOnShutdown_MetaData), NewProp_bAutoSaveOnShutdown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics::NewProp_AutoSaveIntervalSeconds = { "AutoSaveIntervalSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderCacheSubsystem, AutoSaveIntervalSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoSaveIntervalSeconds_MetaData), NewProp_AutoSaveIntervalSeconds_MetaData) };
void Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics::NewProp_bApplyAntiStutterCVars_SetBit(void* Obj)
{
	((UZonefallShaderCacheSubsystem*)Obj)->bApplyAntiStutterCVars = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics::NewProp_bApplyAntiStutterCVars = { "bApplyAntiStutterCVars", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallShaderCacheSubsystem), &Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics::NewProp_bApplyAntiStutterCVars_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyAntiStutterCVars_MetaData), NewProp_bApplyAntiStutterCVars_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics::NewProp_CacheKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics::NewProp_BatchSizePerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics::NewProp_bAutoSaveOnShutdown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics::NewProp_AutoSaveIntervalSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics::NewProp_bApplyAntiStutterCVars,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics::PropPointers) < 2048);
// ********** End Class UZonefallShaderCacheSubsystem Property Definitions *************************
UObject* (*const Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics::ClassParams = {
	&UZonefallShaderCacheSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics::Class_MetaDataParams)
};
void UZonefallShaderCacheSubsystem::StaticRegisterNativesUZonefallShaderCacheSubsystem()
{
	UClass* Class = UZonefallShaderCacheSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallShaderCacheSubsystem()
{
	if (!Z_Registration_Info_UClass_UZonefallShaderCacheSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallShaderCacheSubsystem.OuterSingleton, Z_Construct_UClass_UZonefallShaderCacheSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallShaderCacheSubsystem.OuterSingleton;
}
UZonefallShaderCacheSubsystem::UZonefallShaderCacheSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallShaderCacheSubsystem);
UZonefallShaderCacheSubsystem::~UZonefallShaderCacheSubsystem() {}
// ********** End Class UZonefallShaderCacheSubsystem **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_ZonefallShaderCacheSubsystem_h__Script_UIWorld_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZonefallShaderCacheSubsystem, UZonefallShaderCacheSubsystem::StaticClass, TEXT("UZonefallShaderCacheSubsystem"), &Z_Registration_Info_UClass_UZonefallShaderCacheSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallShaderCacheSubsystem), 2178680718U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_ZonefallShaderCacheSubsystem_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_ZonefallShaderCacheSubsystem_h__Script_UIWorld_2140042544{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_ZonefallShaderCacheSubsystem_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_ZonefallShaderCacheSubsystem_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
