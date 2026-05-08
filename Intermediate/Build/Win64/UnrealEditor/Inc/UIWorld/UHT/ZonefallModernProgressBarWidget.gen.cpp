// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZonefallModernProgressBarWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallModernProgressBarWidget() {}

// ********** Begin Cross Module References ********************************************************
UIWORLD_API UClass* Z_Construct_UClass_UZonefallModernProgressBarWidget();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallModernProgressBarWidget_NoRegister();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallProgressChanged__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnZonefallProgressChanged ********************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnZonefallProgressChanged__DelegateSignature_Statics
{
	struct _Script_UIWorld_eventOnZonefallProgressChanged_Parms
	{
		float NormalizedValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallModernProgressBarWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnZonefallProgressChanged constinit property declarations ************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnZonefallProgressChanged constinit property declarations **************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnZonefallProgressChanged Property Definitions ***********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UIWorld_OnZonefallProgressChanged__DelegateSignature_Statics::NewProp_NormalizedValue = { "NormalizedValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UIWorld_eventOnZonefallProgressChanged_Parms, NormalizedValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UIWorld_OnZonefallProgressChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIWorld_OnZonefallProgressChanged__DelegateSignature_Statics::NewProp_NormalizedValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallProgressChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnZonefallProgressChanged Property Definitions *************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnZonefallProgressChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnZonefallProgressChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_UIWorld_OnZonefallProgressChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallProgressChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_UIWorld_OnZonefallProgressChanged__DelegateSignature_Statics::_Script_UIWorld_eventOnZonefallProgressChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallProgressChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnZonefallProgressChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UIWorld_OnZonefallProgressChanged__DelegateSignature_Statics::_Script_UIWorld_eventOnZonefallProgressChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallProgressChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnZonefallProgressChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnZonefallProgressChanged_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallProgressChanged, float NormalizedValue)
{
	struct _Script_UIWorld_eventOnZonefallProgressChanged_Parms
	{
		float NormalizedValue;
	};
	_Script_UIWorld_eventOnZonefallProgressChanged_Parms Parms;
	Parms.NormalizedValue=NormalizedValue;
	OnZonefallProgressChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnZonefallProgressChanged **********************************************

// ********** Begin Class UZonefallModernProgressBarWidget Function GetProgressNormalized **********
struct Z_Construct_UFunction_UZonefallModernProgressBarWidget_GetProgressNormalized_Statics
{
	struct ZonefallModernProgressBarWidget_eventGetProgressNormalized_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|Progress" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernProgressBarWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetProgressNormalized constinit property declarations *****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetProgressNormalized constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetProgressNormalized Property Definitions ****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UZonefallModernProgressBarWidget_GetProgressNormalized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallModernProgressBarWidget_eventGetProgressNormalized_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallModernProgressBarWidget_GetProgressNormalized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallModernProgressBarWidget_GetProgressNormalized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernProgressBarWidget_GetProgressNormalized_Statics::PropPointers) < 2048);
// ********** End Function GetProgressNormalized Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernProgressBarWidget_GetProgressNormalized_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernProgressBarWidget, nullptr, "GetProgressNormalized", 	Z_Construct_UFunction_UZonefallModernProgressBarWidget_GetProgressNormalized_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernProgressBarWidget_GetProgressNormalized_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallModernProgressBarWidget_GetProgressNormalized_Statics::ZonefallModernProgressBarWidget_eventGetProgressNormalized_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernProgressBarWidget_GetProgressNormalized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernProgressBarWidget_GetProgressNormalized_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallModernProgressBarWidget_GetProgressNormalized_Statics::ZonefallModernProgressBarWidget_eventGetProgressNormalized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallModernProgressBarWidget_GetProgressNormalized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernProgressBarWidget_GetProgressNormalized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallModernProgressBarWidget::execGetProgressNormalized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetProgressNormalized();
	P_NATIVE_END;
}
// ********** End Class UZonefallModernProgressBarWidget Function GetProgressNormalized ************

// ********** Begin Class UZonefallModernProgressBarWidget Function HandleAutoProgressTick *********
struct Z_Construct_UFunction_UZonefallModernProgressBarWidget_HandleAutoProgressTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallModernProgressBarWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleAutoProgressTick constinit property declarations ****************
// ********** End Function HandleAutoProgressTick constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernProgressBarWidget_HandleAutoProgressTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernProgressBarWidget, nullptr, "HandleAutoProgressTick", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernProgressBarWidget_HandleAutoProgressTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernProgressBarWidget_HandleAutoProgressTick_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallModernProgressBarWidget_HandleAutoProgressTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernProgressBarWidget_HandleAutoProgressTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallModernProgressBarWidget::execHandleAutoProgressTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleAutoProgressTick();
	P_NATIVE_END;
}
// ********** End Class UZonefallModernProgressBarWidget Function HandleAutoProgressTick ***********

// ********** Begin Class UZonefallModernProgressBarWidget Function SetProgressNormalized **********
struct Z_Construct_UFunction_UZonefallModernProgressBarWidget_SetProgressNormalized_Statics
{
	struct ZonefallModernProgressBarWidget_eventSetProgressNormalized_Parms
	{
		float InProgress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|Progress" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernProgressBarWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetProgressNormalized constinit property declarations *****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetProgressNormalized constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetProgressNormalized Property Definitions ****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UZonefallModernProgressBarWidget_SetProgressNormalized_Statics::NewProp_InProgress = { "InProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallModernProgressBarWidget_eventSetProgressNormalized_Parms, InProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallModernProgressBarWidget_SetProgressNormalized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallModernProgressBarWidget_SetProgressNormalized_Statics::NewProp_InProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernProgressBarWidget_SetProgressNormalized_Statics::PropPointers) < 2048);
// ********** End Function SetProgressNormalized Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernProgressBarWidget_SetProgressNormalized_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernProgressBarWidget, nullptr, "SetProgressNormalized", 	Z_Construct_UFunction_UZonefallModernProgressBarWidget_SetProgressNormalized_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernProgressBarWidget_SetProgressNormalized_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallModernProgressBarWidget_SetProgressNormalized_Statics::ZonefallModernProgressBarWidget_eventSetProgressNormalized_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernProgressBarWidget_SetProgressNormalized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernProgressBarWidget_SetProgressNormalized_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallModernProgressBarWidget_SetProgressNormalized_Statics::ZonefallModernProgressBarWidget_eventSetProgressNormalized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallModernProgressBarWidget_SetProgressNormalized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernProgressBarWidget_SetProgressNormalized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallModernProgressBarWidget::execSetProgressNormalized)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InProgress);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetProgressNormalized(Z_Param_InProgress);
	P_NATIVE_END;
}
// ********** End Class UZonefallModernProgressBarWidget Function SetProgressNormalized ************

// ********** Begin Class UZonefallModernProgressBarWidget Function StartAutoProgress **************
struct Z_Construct_UFunction_UZonefallModernProgressBarWidget_StartAutoProgress_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|Progress" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernProgressBarWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartAutoProgress constinit property declarations *********************
// ********** End Function StartAutoProgress constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernProgressBarWidget_StartAutoProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernProgressBarWidget, nullptr, "StartAutoProgress", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernProgressBarWidget_StartAutoProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernProgressBarWidget_StartAutoProgress_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallModernProgressBarWidget_StartAutoProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernProgressBarWidget_StartAutoProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallModernProgressBarWidget::execStartAutoProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAutoProgress();
	P_NATIVE_END;
}
// ********** End Class UZonefallModernProgressBarWidget Function StartAutoProgress ****************

// ********** Begin Class UZonefallModernProgressBarWidget Function StopAutoProgress ***************
struct Z_Construct_UFunction_UZonefallModernProgressBarWidget_StopAutoProgress_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|Progress" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernProgressBarWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StopAutoProgress constinit property declarations **********************
// ********** End Function StopAutoProgress constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernProgressBarWidget_StopAutoProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernProgressBarWidget, nullptr, "StopAutoProgress", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernProgressBarWidget_StopAutoProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernProgressBarWidget_StopAutoProgress_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallModernProgressBarWidget_StopAutoProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernProgressBarWidget_StopAutoProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallModernProgressBarWidget::execStopAutoProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopAutoProgress();
	P_NATIVE_END;
}
// ********** End Class UZonefallModernProgressBarWidget Function StopAutoProgress *****************

// ********** Begin Class UZonefallModernProgressBarWidget *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallModernProgressBarWidget;
UClass* UZonefallModernProgressBarWidget::GetPrivateStaticClass()
{
	using TClass = UZonefallModernProgressBarWidget;
	if (!Z_Registration_Info_UClass_UZonefallModernProgressBarWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallModernProgressBarWidget"),
			Z_Registration_Info_UClass_UZonefallModernProgressBarWidget.InnerSingleton,
			StaticRegisterNativesUZonefallModernProgressBarWidget,
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
	return Z_Registration_Info_UClass_UZonefallModernProgressBarWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallModernProgressBarWidget_NoRegister()
{
	return UZonefallModernProgressBarWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/ZonefallModernProgressBarWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernProgressBarWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnProgressChanged_MetaData[] = {
		{ "Category", "Zonefall|UI|Progress" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernProgressBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[] = {
		{ "Category", "Zonefall|UI|Progress" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernProgressBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoProgress_MetaData[] = {
		{ "Category", "Zonefall|UI|Progress" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernProgressBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoProgressStep_MetaData[] = {
		{ "Category", "Zonefall|UI|Progress" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.001" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernProgressBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoProgressInterval_MetaData[] = {
		{ "Category", "Zonefall|UI|Progress" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.005" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernProgressBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBarName_MetaData[] = {
		{ "Category", "Zonefall|UI|Progress|Binding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional UMG widget names for auto-binding.\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallModernProgressBarWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional UMG widget names for auto-binding." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBorderName_MetaData[] = {
		{ "Category", "Zonefall|UI|Progress|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernProgressBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBoxName_MetaData[] = {
		{ "Category", "Zonefall|UI|Progress|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernProgressBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleLabelName_MetaData[] = {
		{ "Category", "Zonefall|UI|Progress|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernProgressBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PercentLabelName_MetaData[] = {
		{ "Category", "Zonefall|UI|Progress|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernProgressBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBorder_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|Progress" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernProgressBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBox_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|Progress" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernProgressBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleLabel_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|Progress" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernProgressBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|Progress" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernProgressBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PercentLabel_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|Progress" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernProgressBarWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallModernProgressBarWidget constinit property declarations *********
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgressChanged;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TitleText;
	static void NewProp_bAutoProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoProgress;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoProgressStep;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoProgressInterval;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProgressBarName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RootBorderName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RootBoxName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TitleLabelName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PercentLabelName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleLabel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PercentLabel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallModernProgressBarWidget constinit property declarations ***********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetProgressNormalized"), .Pointer = &UZonefallModernProgressBarWidget::execGetProgressNormalized },
		{ .NameUTF8 = UTF8TEXT("HandleAutoProgressTick"), .Pointer = &UZonefallModernProgressBarWidget::execHandleAutoProgressTick },
		{ .NameUTF8 = UTF8TEXT("SetProgressNormalized"), .Pointer = &UZonefallModernProgressBarWidget::execSetProgressNormalized },
		{ .NameUTF8 = UTF8TEXT("StartAutoProgress"), .Pointer = &UZonefallModernProgressBarWidget::execStartAutoProgress },
		{ .NameUTF8 = UTF8TEXT("StopAutoProgress"), .Pointer = &UZonefallModernProgressBarWidget::execStopAutoProgress },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallModernProgressBarWidget_GetProgressNormalized, "GetProgressNormalized" }, // 456980758
		{ &Z_Construct_UFunction_UZonefallModernProgressBarWidget_HandleAutoProgressTick, "HandleAutoProgressTick" }, // 210964032
		{ &Z_Construct_UFunction_UZonefallModernProgressBarWidget_SetProgressNormalized, "SetProgressNormalized" }, // 2737435851
		{ &Z_Construct_UFunction_UZonefallModernProgressBarWidget_StartAutoProgress, "StartAutoProgress" }, // 1248525721
		{ &Z_Construct_UFunction_UZonefallModernProgressBarWidget_StopAutoProgress, "StopAutoProgress" }, // 1788377974
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallModernProgressBarWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics

// ********** Begin Class UZonefallModernProgressBarWidget Property Definitions ********************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_OnProgressChanged = { "OnProgressChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernProgressBarWidget, OnProgressChanged), Z_Construct_UDelegateFunction_UIWorld_OnZonefallProgressChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnProgressChanged_MetaData), NewProp_OnProgressChanged_MetaData) }; // 1145684118
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernProgressBarWidget, TitleText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleText_MetaData), NewProp_TitleText_MetaData) };
void Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_bAutoProgress_SetBit(void* Obj)
{
	((UZonefallModernProgressBarWidget*)Obj)->bAutoProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_bAutoProgress = { "bAutoProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallModernProgressBarWidget), &Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_bAutoProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoProgress_MetaData), NewProp_bAutoProgress_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_AutoProgressStep = { "AutoProgressStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernProgressBarWidget, AutoProgressStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoProgressStep_MetaData), NewProp_AutoProgressStep_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_AutoProgressInterval = { "AutoProgressInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernProgressBarWidget, AutoProgressInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoProgressInterval_MetaData), NewProp_AutoProgressInterval_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_ProgressBarName = { "ProgressBarName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernProgressBarWidget, ProgressBarName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressBarName_MetaData), NewProp_ProgressBarName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_RootBorderName = { "RootBorderName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernProgressBarWidget, RootBorderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBorderName_MetaData), NewProp_RootBorderName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_RootBoxName = { "RootBoxName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernProgressBarWidget, RootBoxName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBoxName_MetaData), NewProp_RootBoxName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_TitleLabelName = { "TitleLabelName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernProgressBarWidget, TitleLabelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleLabelName_MetaData), NewProp_TitleLabelName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_PercentLabelName = { "PercentLabelName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernProgressBarWidget, PercentLabelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PercentLabelName_MetaData), NewProp_PercentLabelName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_RootBorder = { "RootBorder", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernProgressBarWidget, RootBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBorder_MetaData), NewProp_RootBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_RootBox = { "RootBox", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernProgressBarWidget, RootBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBox_MetaData), NewProp_RootBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_TitleLabel = { "TitleLabel", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernProgressBarWidget, TitleLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleLabel_MetaData), NewProp_TitleLabel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_ProgressBar = { "ProgressBar", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernProgressBarWidget, ProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressBar_MetaData), NewProp_ProgressBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_PercentLabel = { "PercentLabel", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernProgressBarWidget, PercentLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PercentLabel_MetaData), NewProp_PercentLabel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_OnProgressChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_TitleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_bAutoProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_AutoProgressStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_AutoProgressInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_ProgressBarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_RootBorderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_RootBoxName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_TitleLabelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_PercentLabelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_RootBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_RootBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_TitleLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_ProgressBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::NewProp_PercentLabel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::PropPointers) < 2048);
// ********** End Class UZonefallModernProgressBarWidget Property Definitions **********************
UObject* (*const Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::ClassParams = {
	&UZonefallModernProgressBarWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::Class_MetaDataParams)
};
void UZonefallModernProgressBarWidget::StaticRegisterNativesUZonefallModernProgressBarWidget()
{
	UClass* Class = UZonefallModernProgressBarWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallModernProgressBarWidget()
{
	if (!Z_Registration_Info_UClass_UZonefallModernProgressBarWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallModernProgressBarWidget.OuterSingleton, Z_Construct_UClass_UZonefallModernProgressBarWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallModernProgressBarWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallModernProgressBarWidget);
UZonefallModernProgressBarWidget::~UZonefallModernProgressBarWidget() {}
// ********** End Class UZonefallModernProgressBarWidget *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernProgressBarWidget_h__Script_UIWorld_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZonefallModernProgressBarWidget, UZonefallModernProgressBarWidget::StaticClass, TEXT("UZonefallModernProgressBarWidget"), &Z_Registration_Info_UClass_UZonefallModernProgressBarWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallModernProgressBarWidget), 2189331532U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernProgressBarWidget_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernProgressBarWidget_h__Script_UIWorld_33866037{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernProgressBarWidget_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernProgressBarWidget_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
