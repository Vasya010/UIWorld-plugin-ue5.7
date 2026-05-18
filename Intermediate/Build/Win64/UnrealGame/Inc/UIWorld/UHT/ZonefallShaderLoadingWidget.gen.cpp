// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZonefallShaderLoadingWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallShaderLoadingWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallShaderLoadingWidget();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallShaderLoadingWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UZonefallShaderLoadingWidget Function HandleTextAnimTick *****************
struct Z_Construct_UFunction_UZonefallShaderLoadingWidget_HandleTextAnimTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleTextAnimTick constinit property declarations ********************
// ********** End Function HandleTextAnimTick constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallShaderLoadingWidget_HandleTextAnimTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallShaderLoadingWidget, nullptr, "HandleTextAnimTick", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallShaderLoadingWidget_HandleTextAnimTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallShaderLoadingWidget_HandleTextAnimTick_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallShaderLoadingWidget_HandleTextAnimTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallShaderLoadingWidget_HandleTextAnimTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallShaderLoadingWidget::execHandleTextAnimTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTextAnimTick();
	P_NATIVE_END;
}
// ********** End Class UZonefallShaderLoadingWidget Function HandleTextAnimTick *******************

// ********** Begin Class UZonefallShaderLoadingWidget Function IsShaderCompilationLikelyFinished **
struct Z_Construct_UFunction_UZonefallShaderLoadingWidget_IsShaderCompilationLikelyFinished_Statics
{
	struct ZonefallShaderLoadingWidget_eventIsShaderCompilationLikelyFinished_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|Startup" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsShaderCompilationLikelyFinished constinit property declarations *****
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsShaderCompilationLikelyFinished constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsShaderCompilationLikelyFinished Property Definitions ****************
void Z_Construct_UFunction_UZonefallShaderLoadingWidget_IsShaderCompilationLikelyFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ZonefallShaderLoadingWidget_eventIsShaderCompilationLikelyFinished_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZonefallShaderLoadingWidget_IsShaderCompilationLikelyFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallShaderLoadingWidget_eventIsShaderCompilationLikelyFinished_Parms), &Z_Construct_UFunction_UZonefallShaderLoadingWidget_IsShaderCompilationLikelyFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallShaderLoadingWidget_IsShaderCompilationLikelyFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallShaderLoadingWidget_IsShaderCompilationLikelyFinished_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallShaderLoadingWidget_IsShaderCompilationLikelyFinished_Statics::PropPointers) < 2048);
// ********** End Function IsShaderCompilationLikelyFinished Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallShaderLoadingWidget_IsShaderCompilationLikelyFinished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallShaderLoadingWidget, nullptr, "IsShaderCompilationLikelyFinished", 	Z_Construct_UFunction_UZonefallShaderLoadingWidget_IsShaderCompilationLikelyFinished_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallShaderLoadingWidget_IsShaderCompilationLikelyFinished_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallShaderLoadingWidget_IsShaderCompilationLikelyFinished_Statics::ZonefallShaderLoadingWidget_eventIsShaderCompilationLikelyFinished_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallShaderLoadingWidget_IsShaderCompilationLikelyFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallShaderLoadingWidget_IsShaderCompilationLikelyFinished_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallShaderLoadingWidget_IsShaderCompilationLikelyFinished_Statics::ZonefallShaderLoadingWidget_eventIsShaderCompilationLikelyFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallShaderLoadingWidget_IsShaderCompilationLikelyFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallShaderLoadingWidget_IsShaderCompilationLikelyFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallShaderLoadingWidget::execIsShaderCompilationLikelyFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsShaderCompilationLikelyFinished();
	P_NATIVE_END;
}
// ********** End Class UZonefallShaderLoadingWidget Function IsShaderCompilationLikelyFinished ****

// ********** Begin Class UZonefallShaderLoadingWidget Function SetInitialShaderJobCount ***********
struct Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetInitialShaderJobCount_Statics
{
	struct ZonefallShaderLoadingWidget_eventSetInitialShaderJobCount_Parms
	{
		int32 InInitialJobCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|Startup" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetInitialShaderJobCount constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InInitialJobCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetInitialShaderJobCount constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetInitialShaderJobCount Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetInitialShaderJobCount_Statics::NewProp_InInitialJobCount = { "InInitialJobCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallShaderLoadingWidget_eventSetInitialShaderJobCount_Parms, InInitialJobCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetInitialShaderJobCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetInitialShaderJobCount_Statics::NewProp_InInitialJobCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetInitialShaderJobCount_Statics::PropPointers) < 2048);
// ********** End Function SetInitialShaderJobCount Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetInitialShaderJobCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallShaderLoadingWidget, nullptr, "SetInitialShaderJobCount", 	Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetInitialShaderJobCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetInitialShaderJobCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetInitialShaderJobCount_Statics::ZonefallShaderLoadingWidget_eventSetInitialShaderJobCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetInitialShaderJobCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetInitialShaderJobCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetInitialShaderJobCount_Statics::ZonefallShaderLoadingWidget_eventSetInitialShaderJobCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetInitialShaderJobCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetInitialShaderJobCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallShaderLoadingWidget::execSetInitialShaderJobCount)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InInitialJobCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInitialShaderJobCount(Z_Param_InInitialJobCount);
	P_NATIVE_END;
}
// ********** End Class UZonefallShaderLoadingWidget Function SetInitialShaderJobCount *************

// ********** Begin Class UZonefallShaderLoadingWidget Function SetShaderCompileProgress ***********
struct Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetShaderCompileProgress_Statics
{
	struct ZonefallShaderLoadingWidget_eventSetShaderCompileProgress_Parms
	{
		float NewPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|Startup" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetShaderCompileProgress constinit property declarations **************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetShaderCompileProgress constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetShaderCompileProgress Property Definitions *************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetShaderCompileProgress_Statics::NewProp_NewPercent = { "NewPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallShaderLoadingWidget_eventSetShaderCompileProgress_Parms, NewPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetShaderCompileProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetShaderCompileProgress_Statics::NewProp_NewPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetShaderCompileProgress_Statics::PropPointers) < 2048);
// ********** End Function SetShaderCompileProgress Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetShaderCompileProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallShaderLoadingWidget, nullptr, "SetShaderCompileProgress", 	Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetShaderCompileProgress_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetShaderCompileProgress_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetShaderCompileProgress_Statics::ZonefallShaderLoadingWidget_eventSetShaderCompileProgress_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetShaderCompileProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetShaderCompileProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetShaderCompileProgress_Statics::ZonefallShaderLoadingWidget_eventSetShaderCompileProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetShaderCompileProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetShaderCompileProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallShaderLoadingWidget::execSetShaderCompileProgress)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewPercent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShaderCompileProgress(Z_Param_NewPercent);
	P_NATIVE_END;
}
// ********** End Class UZonefallShaderLoadingWidget Function SetShaderCompileProgress *************

// ********** Begin Class UZonefallShaderLoadingWidget *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallShaderLoadingWidget;
UClass* UZonefallShaderLoadingWidget::GetPrivateStaticClass()
{
	using TClass = UZonefallShaderLoadingWidget;
	if (!Z_Registration_Info_UClass_UZonefallShaderLoadingWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallShaderLoadingWidget"),
			Z_Registration_Info_UClass_UZonefallShaderLoadingWidget.InnerSingleton,
			StaticRegisterNativesUZonefallShaderLoadingWidget,
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
	return Z_Registration_Info_UClass_UZonefallShaderLoadingWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallShaderLoadingWidget_NoRegister()
{
	return UZonefallShaderLoadingWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/ZonefallShaderLoadingWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartupTitleText_MetaData[] = {
		{ "Category", "Zonefall|UI|Startup" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShaderLoadingBaseText_MetaData[] = {
		{ "Category", "Zonefall|UI|Startup" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShaderCheckingCacheText_MetaData[] = {
		{ "Category", "Zonefall|UI|Startup" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShaderFinalizingText_MetaData[] = {
		{ "Category", "Zonefall|UI|Startup" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PleaseWaitText_MetaData[] = {
		{ "Category", "Zonefall|UI|Startup" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShaderCacheHintText_MetaData[] = {
		{ "Category", "Zonefall|UI|Startup" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShaderCompileProgressPercent_MetaData[] = {
		{ "Category", "Zonefall|UI|Startup" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextAnimInterval_MetaData[] = {
		{ "Category", "Zonefall|UI|Startup" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRealShaderCompilerProgress_MetaData[] = {
		{ "Category", "Zonefall|UI|Startup" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageTexture_MetaData[] = {
		{ "Category", "Zonefall|UI|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageTint_MetaData[] = {
		{ "Category", "Zonefall|UI|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BottomPanelTint_MetaData[] = {
		{ "Category", "Zonefall|UI|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleFontSize_MetaData[] = {
		{ "Category", "Zonefall|UI|Style" },
		{ "ClampMax", "72" },
		{ "ClampMin", "10" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyFontSize_MetaData[] = {
		{ "Category", "Zonefall|UI|Style" },
		{ "ClampMax", "48" },
		{ "ClampMin", "10" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothProgressSpeed_MetaData[] = {
		{ "Category", "Zonefall|UI|Style" },
		{ "ClampMax", "25.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressUnitsPerSecond_MetaData[] = {
		{ "Category", "Zonefall|UI|Style" },
		{ "ClampMax", "120.0" },
		{ "ClampMin", "5.0" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUiAnimations_MetaData[] = {
		{ "Category", "Zonefall|UI|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PanelPulseSpeed_MetaData[] = {
		{ "Category", "Zonefall|UI|Style" },
		{ "ClampMax", "8.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BarGlowSpeed_MetaData[] = {
		{ "Category", "Zonefall|UI|Style" },
		{ "ClampMax", "12.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTitleFont_MetaData[] = {
		{ "Category", "Zonefall|UI|Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional custom title font. If empty, engine default Roboto is used.\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional custom title font. If empty, engine default Roboto is used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomBodyFont_MetaData[] = {
		{ "Category", "Zonefall|UI|Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional custom body font for status/progress lines.\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional custom body font for status/progress lines." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBorder_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|Startup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageWidget_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|Startup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBox_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|Startup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BottomPanel_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|Startup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|Startup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShaderText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|Startup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|Startup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaitText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|Startup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheHintText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|Startup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompileProgressBar_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|Startup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallShaderLoadingWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallShaderLoadingWidget constinit property declarations *************
	static const UECodeGen_Private::FTextPropertyParams NewProp_StartupTitleText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ShaderLoadingBaseText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ShaderCheckingCacheText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ShaderFinalizingText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_PleaseWaitText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ShaderCacheHintText;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShaderCompileProgressPercent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TextAnimInterval;
	static void NewProp_bUseRealShaderCompilerProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRealShaderCompilerProgress;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BackgroundImageTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundImageTint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BottomPanelTint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TitleFontSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BodyFontSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothProgressSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProgressUnitsPerSecond;
	static void NewProp_bEnableUiAnimations_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUiAnimations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PanelPulseSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BarGlowSpeed;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CustomTitleFont;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CustomBodyFont;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundImageWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BottomPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShaderText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WaitText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CacheHintText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompileProgressBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallShaderLoadingWidget constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleTextAnimTick"), .Pointer = &UZonefallShaderLoadingWidget::execHandleTextAnimTick },
		{ .NameUTF8 = UTF8TEXT("IsShaderCompilationLikelyFinished"), .Pointer = &UZonefallShaderLoadingWidget::execIsShaderCompilationLikelyFinished },
		{ .NameUTF8 = UTF8TEXT("SetInitialShaderJobCount"), .Pointer = &UZonefallShaderLoadingWidget::execSetInitialShaderJobCount },
		{ .NameUTF8 = UTF8TEXT("SetShaderCompileProgress"), .Pointer = &UZonefallShaderLoadingWidget::execSetShaderCompileProgress },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallShaderLoadingWidget_HandleTextAnimTick, "HandleTextAnimTick" }, // 2366836966
		{ &Z_Construct_UFunction_UZonefallShaderLoadingWidget_IsShaderCompilationLikelyFinished, "IsShaderCompilationLikelyFinished" }, // 1714779513
		{ &Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetInitialShaderJobCount, "SetInitialShaderJobCount" }, // 4157586333
		{ &Z_Construct_UFunction_UZonefallShaderLoadingWidget_SetShaderCompileProgress, "SetShaderCompileProgress" }, // 4249215830
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallShaderLoadingWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics

// ********** Begin Class UZonefallShaderLoadingWidget Property Definitions ************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_StartupTitleText = { "StartupTitleText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, StartupTitleText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartupTitleText_MetaData), NewProp_StartupTitleText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_ShaderLoadingBaseText = { "ShaderLoadingBaseText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, ShaderLoadingBaseText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShaderLoadingBaseText_MetaData), NewProp_ShaderLoadingBaseText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_ShaderCheckingCacheText = { "ShaderCheckingCacheText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, ShaderCheckingCacheText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShaderCheckingCacheText_MetaData), NewProp_ShaderCheckingCacheText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_ShaderFinalizingText = { "ShaderFinalizingText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, ShaderFinalizingText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShaderFinalizingText_MetaData), NewProp_ShaderFinalizingText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_PleaseWaitText = { "PleaseWaitText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, PleaseWaitText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PleaseWaitText_MetaData), NewProp_PleaseWaitText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_ShaderCacheHintText = { "ShaderCacheHintText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, ShaderCacheHintText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShaderCacheHintText_MetaData), NewProp_ShaderCacheHintText_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_ShaderCompileProgressPercent = { "ShaderCompileProgressPercent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, ShaderCompileProgressPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShaderCompileProgressPercent_MetaData), NewProp_ShaderCompileProgressPercent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_TextAnimInterval = { "TextAnimInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, TextAnimInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextAnimInterval_MetaData), NewProp_TextAnimInterval_MetaData) };
void Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_bUseRealShaderCompilerProgress_SetBit(void* Obj)
{
	((UZonefallShaderLoadingWidget*)Obj)->bUseRealShaderCompilerProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_bUseRealShaderCompilerProgress = { "bUseRealShaderCompilerProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallShaderLoadingWidget), &Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_bUseRealShaderCompilerProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRealShaderCompilerProgress_MetaData), NewProp_bUseRealShaderCompilerProgress_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_BackgroundImageTexture = { "BackgroundImageTexture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, BackgroundImageTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImageTexture_MetaData), NewProp_BackgroundImageTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_BackgroundImageTint = { "BackgroundImageTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, BackgroundImageTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImageTint_MetaData), NewProp_BackgroundImageTint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_BottomPanelTint = { "BottomPanelTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, BottomPanelTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BottomPanelTint_MetaData), NewProp_BottomPanelTint_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_TitleFontSize = { "TitleFontSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, TitleFontSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleFontSize_MetaData), NewProp_TitleFontSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_BodyFontSize = { "BodyFontSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, BodyFontSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyFontSize_MetaData), NewProp_BodyFontSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_SmoothProgressSpeed = { "SmoothProgressSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, SmoothProgressSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothProgressSpeed_MetaData), NewProp_SmoothProgressSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_ProgressUnitsPerSecond = { "ProgressUnitsPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, ProgressUnitsPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressUnitsPerSecond_MetaData), NewProp_ProgressUnitsPerSecond_MetaData) };
void Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_bEnableUiAnimations_SetBit(void* Obj)
{
	((UZonefallShaderLoadingWidget*)Obj)->bEnableUiAnimations = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_bEnableUiAnimations = { "bEnableUiAnimations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallShaderLoadingWidget), &Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_bEnableUiAnimations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableUiAnimations_MetaData), NewProp_bEnableUiAnimations_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_PanelPulseSpeed = { "PanelPulseSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, PanelPulseSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PanelPulseSpeed_MetaData), NewProp_PanelPulseSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_BarGlowSpeed = { "BarGlowSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, BarGlowSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarGlowSpeed_MetaData), NewProp_BarGlowSpeed_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_CustomTitleFont = { "CustomTitleFont", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, CustomTitleFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTitleFont_MetaData), NewProp_CustomTitleFont_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_CustomBodyFont = { "CustomBodyFont", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, CustomBodyFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomBodyFont_MetaData), NewProp_CustomBodyFont_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_RootBorder = { "RootBorder", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, RootBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBorder_MetaData), NewProp_RootBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_BackgroundImageWidget = { "BackgroundImageWidget", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, BackgroundImageWidget), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImageWidget_MetaData), NewProp_BackgroundImageWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_RootBox = { "RootBox", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, RootBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBox_MetaData), NewProp_RootBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_BottomPanel = { "BottomPanel", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, BottomPanel), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BottomPanel_MetaData), NewProp_BottomPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, TitleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleText_MetaData), NewProp_TitleText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_ShaderText = { "ShaderText", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, ShaderText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShaderText_MetaData), NewProp_ShaderText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_ProgressText = { "ProgressText", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, ProgressText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressText_MetaData), NewProp_ProgressText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_WaitText = { "WaitText", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, WaitText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaitText_MetaData), NewProp_WaitText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_CacheHintText = { "CacheHintText", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, CacheHintText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheHintText_MetaData), NewProp_CacheHintText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_CompileProgressBar = { "CompileProgressBar", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallShaderLoadingWidget, CompileProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompileProgressBar_MetaData), NewProp_CompileProgressBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_StartupTitleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_ShaderLoadingBaseText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_ShaderCheckingCacheText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_ShaderFinalizingText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_PleaseWaitText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_ShaderCacheHintText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_ShaderCompileProgressPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_TextAnimInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_bUseRealShaderCompilerProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_BackgroundImageTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_BackgroundImageTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_BottomPanelTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_TitleFontSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_BodyFontSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_SmoothProgressSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_ProgressUnitsPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_bEnableUiAnimations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_PanelPulseSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_BarGlowSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_CustomTitleFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_CustomBodyFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_RootBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_BackgroundImageWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_RootBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_BottomPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_TitleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_ShaderText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_ProgressText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_WaitText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_CacheHintText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::NewProp_CompileProgressBar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::PropPointers) < 2048);
// ********** End Class UZonefallShaderLoadingWidget Property Definitions **************************
UObject* (*const Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::ClassParams = {
	&UZonefallShaderLoadingWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::Class_MetaDataParams)
};
void UZonefallShaderLoadingWidget::StaticRegisterNativesUZonefallShaderLoadingWidget()
{
	UClass* Class = UZonefallShaderLoadingWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallShaderLoadingWidget()
{
	if (!Z_Registration_Info_UClass_UZonefallShaderLoadingWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallShaderLoadingWidget.OuterSingleton, Z_Construct_UClass_UZonefallShaderLoadingWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallShaderLoadingWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallShaderLoadingWidget);
UZonefallShaderLoadingWidget::~UZonefallShaderLoadingWidget() {}
// ********** End Class UZonefallShaderLoadingWidget ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallShaderLoadingWidget_h__Script_UIWorld_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZonefallShaderLoadingWidget, UZonefallShaderLoadingWidget::StaticClass, TEXT("UZonefallShaderLoadingWidget"), &Z_Registration_Info_UClass_UZonefallShaderLoadingWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallShaderLoadingWidget), 2805734138U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallShaderLoadingWidget_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallShaderLoadingWidget_h__Script_UIWorld_3504919951{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallShaderLoadingWidget_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallShaderLoadingWidget_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
