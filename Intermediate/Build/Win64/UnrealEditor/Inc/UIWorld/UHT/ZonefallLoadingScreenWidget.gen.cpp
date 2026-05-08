// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZonefallLoadingScreenWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallLoadingScreenWidget() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallLoadingScreenWidget();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallLoadingScreenWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UZonefallLoadingScreenWidget Function CompleteLoading ********************
struct Z_Construct_UFunction_UZonefallLoadingScreenWidget_CompleteLoading_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|Loading" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CompleteLoading constinit property declarations ***********************
// ********** End Function CompleteLoading constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallLoadingScreenWidget_CompleteLoading_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallLoadingScreenWidget, nullptr, "CompleteLoading", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLoadingScreenWidget_CompleteLoading_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallLoadingScreenWidget_CompleteLoading_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallLoadingScreenWidget_CompleteLoading()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallLoadingScreenWidget_CompleteLoading_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallLoadingScreenWidget::execCompleteLoading)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CompleteLoading();
	P_NATIVE_END;
}
// ********** End Class UZonefallLoadingScreenWidget Function CompleteLoading **********************

// ********** Begin Class UZonefallLoadingScreenWidget Function EnterFinalizingPhase ***************
struct Z_Construct_UFunction_UZonefallLoadingScreenWidget_EnterFinalizingPhase_Statics
{
	struct ZonefallLoadingScreenWidget_eventEnterFinalizingPhase_Parms
	{
		float InPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|Loading" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pushes text progress near the end before blocking map load starts.\n" },
#endif
		{ "CPP_Default_InPercent", "90.000000" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pushes text progress near the end before blocking map load starts." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EnterFinalizingPhase constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnterFinalizingPhase constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnterFinalizingPhase Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UZonefallLoadingScreenWidget_EnterFinalizingPhase_Statics::NewProp_InPercent = { "InPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallLoadingScreenWidget_eventEnterFinalizingPhase_Parms, InPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallLoadingScreenWidget_EnterFinalizingPhase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallLoadingScreenWidget_EnterFinalizingPhase_Statics::NewProp_InPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLoadingScreenWidget_EnterFinalizingPhase_Statics::PropPointers) < 2048);
// ********** End Function EnterFinalizingPhase Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallLoadingScreenWidget_EnterFinalizingPhase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallLoadingScreenWidget, nullptr, "EnterFinalizingPhase", 	Z_Construct_UFunction_UZonefallLoadingScreenWidget_EnterFinalizingPhase_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLoadingScreenWidget_EnterFinalizingPhase_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallLoadingScreenWidget_EnterFinalizingPhase_Statics::ZonefallLoadingScreenWidget_eventEnterFinalizingPhase_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLoadingScreenWidget_EnterFinalizingPhase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallLoadingScreenWidget_EnterFinalizingPhase_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallLoadingScreenWidget_EnterFinalizingPhase_Statics::ZonefallLoadingScreenWidget_eventEnterFinalizingPhase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallLoadingScreenWidget_EnterFinalizingPhase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallLoadingScreenWidget_EnterFinalizingPhase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallLoadingScreenWidget::execEnterFinalizingPhase)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPercent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnterFinalizingPhase(Z_Param_InPercent);
	P_NATIVE_END;
}
// ********** End Class UZonefallLoadingScreenWidget Function EnterFinalizingPhase *****************

// ********** Begin Class UZonefallLoadingScreenWidget Function HandleImageRotateTick **************
struct Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleImageRotateTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleImageRotateTick constinit property declarations *****************
// ********** End Function HandleImageRotateTick constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleImageRotateTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallLoadingScreenWidget, nullptr, "HandleImageRotateTick", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleImageRotateTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleImageRotateTick_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleImageRotateTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleImageRotateTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallLoadingScreenWidget::execHandleImageRotateTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleImageRotateTick();
	P_NATIVE_END;
}
// ********** End Class UZonefallLoadingScreenWidget Function HandleImageRotateTick ****************

// ********** Begin Class UZonefallLoadingScreenWidget Function HandleLoadingTextTick **************
struct Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleLoadingTextTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleLoadingTextTick constinit property declarations *****************
// ********** End Function HandleLoadingTextTick constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleLoadingTextTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallLoadingScreenWidget, nullptr, "HandleLoadingTextTick", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleLoadingTextTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleLoadingTextTick_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleLoadingTextTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleLoadingTextTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallLoadingScreenWidget::execHandleLoadingTextTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleLoadingTextTick();
	P_NATIVE_END;
}
// ********** End Class UZonefallLoadingScreenWidget Function HandleLoadingTextTick ****************

// ********** Begin Class UZonefallLoadingScreenWidget Function HandleProgressTick *****************
struct Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleProgressTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleProgressTick constinit property declarations ********************
// ********** End Function HandleProgressTick constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleProgressTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallLoadingScreenWidget, nullptr, "HandleProgressTick", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleProgressTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleProgressTick_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleProgressTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleProgressTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallLoadingScreenWidget::execHandleProgressTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleProgressTick();
	P_NATIVE_END;
}
// ********** End Class UZonefallLoadingScreenWidget Function HandleProgressTick *******************

// ********** Begin Class UZonefallLoadingScreenWidget Function HandleStatusTextTick ***************
struct Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleStatusTextTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleStatusTextTick constinit property declarations ******************
// ********** End Function HandleStatusTextTick constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleStatusTextTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallLoadingScreenWidget, nullptr, "HandleStatusTextTick", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleStatusTextTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleStatusTextTick_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleStatusTextTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleStatusTextTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallLoadingScreenWidget::execHandleStatusTextTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleStatusTextTick();
	P_NATIVE_END;
}
// ********** End Class UZonefallLoadingScreenWidget Function HandleStatusTextTick *****************

// ********** Begin Class UZonefallLoadingScreenWidget Function StartImageRotation *****************
struct Z_Construct_UFunction_UZonefallLoadingScreenWidget_StartImageRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|Loading" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartImageRotation constinit property declarations ********************
// ********** End Function StartImageRotation constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallLoadingScreenWidget_StartImageRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallLoadingScreenWidget, nullptr, "StartImageRotation", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLoadingScreenWidget_StartImageRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallLoadingScreenWidget_StartImageRotation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallLoadingScreenWidget_StartImageRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallLoadingScreenWidget_StartImageRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallLoadingScreenWidget::execStartImageRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartImageRotation();
	P_NATIVE_END;
}
// ********** End Class UZonefallLoadingScreenWidget Function StartImageRotation *******************

// ********** Begin Class UZonefallLoadingScreenWidget Function StartLoading ***********************
struct Z_Construct_UFunction_UZonefallLoadingScreenWidget_StartLoading_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|Loading" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartLoading constinit property declarations **************************
// ********** End Function StartLoading constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallLoadingScreenWidget_StartLoading_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallLoadingScreenWidget, nullptr, "StartLoading", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLoadingScreenWidget_StartLoading_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallLoadingScreenWidget_StartLoading_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallLoadingScreenWidget_StartLoading()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallLoadingScreenWidget_StartLoading_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallLoadingScreenWidget::execStartLoading)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartLoading();
	P_NATIVE_END;
}
// ********** End Class UZonefallLoadingScreenWidget Function StartLoading *************************

// ********** Begin Class UZonefallLoadingScreenWidget Function StopImageRotation ******************
struct Z_Construct_UFunction_UZonefallLoadingScreenWidget_StopImageRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|Loading" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StopImageRotation constinit property declarations *********************
// ********** End Function StopImageRotation constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallLoadingScreenWidget_StopImageRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallLoadingScreenWidget, nullptr, "StopImageRotation", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallLoadingScreenWidget_StopImageRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallLoadingScreenWidget_StopImageRotation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallLoadingScreenWidget_StopImageRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallLoadingScreenWidget_StopImageRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallLoadingScreenWidget::execStopImageRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopImageRotation();
	P_NATIVE_END;
}
// ********** End Class UZonefallLoadingScreenWidget Function StopImageRotation ********************

// ********** Begin Class UZonefallLoadingScreenWidget *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallLoadingScreenWidget;
UClass* UZonefallLoadingScreenWidget::GetPrivateStaticClass()
{
	using TClass = UZonefallLoadingScreenWidget;
	if (!Z_Registration_Info_UClass_UZonefallLoadingScreenWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallLoadingScreenWidget"),
			Z_Registration_Info_UClass_UZonefallLoadingScreenWidget.InnerSingleton,
			StaticRegisterNativesUZonefallLoadingScreenWidget,
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
	return Z_Registration_Info_UClass_UZonefallLoadingScreenWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallLoadingScreenWidget_NoRegister()
{
	return UZonefallLoadingScreenWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/ZonefallLoadingScreenWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingTitle_MetaData[] = {
		{ "Category", "Zonefall|UI|Loading" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingSubtitle_MetaData[] = {
		{ "Category", "Zonefall|UI|Loading" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStartProgress_MetaData[] = {
		{ "Category", "Zonefall|UI|Loading" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRotateImages_MetaData[] = {
		{ "Category", "Zonefall|UI|Loading|Background" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageRotateInterval_MetaData[] = {
		{ "Category", "Zonefall|UI|Loading|Background" },
		{ "ClampMax", "30.0" },
		{ "ClampMin", "0.2" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingImages_MetaData[] = {
		{ "Category", "Zonefall|UI|Loading|Background" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLoadingImage_MetaData[] = {
		{ "Category", "Zonefall|UI|Loading|Background" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageBorderName_MetaData[] = {
		{ "Category", "Zonefall|UI|Loading|Binding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional UMG widget names for auto-binding.\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional UMG widget names for auto-binding." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBorderName_MetaData[] = {
		{ "Category", "Zonefall|UI|Loading|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBoxName_MetaData[] = {
		{ "Category", "Zonefall|UI|Loading|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleTextName_MetaData[] = {
		{ "Category", "Zonefall|UI|Loading|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitleTextName_MetaData[] = {
		{ "Category", "Zonefall|UI|Loading|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBarName_MetaData[] = {
		{ "Category", "Zonefall|UI|Loading|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressTextName_MetaData[] = {
		{ "Category", "Zonefall|UI|Loading|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnimateLoadingText_MetaData[] = {
		{ "Category", "Zonefall|UI|Loading|Text" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingTextAnimInterval_MetaData[] = {
		{ "Category", "Zonefall|UI|Loading|Text" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnimateStatusText_MetaData[] = {
		{ "Category", "Zonefall|UI|Loading|Text" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusTextAnimInterval_MetaData[] = {
		{ "Category", "Zonefall|UI|Loading|Text" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.2" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingStatusPhrases_MetaData[] = {
		{ "Category", "Zonefall|UI|Loading|Text" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnimateSpinner_MetaData[] = {
		{ "Category", "Zonefall|UI|Loading|Text" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnimateProgress_MetaData[] = {
		{ "Category", "Zonefall|UI|Loading|Progress" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressDurationMinSeconds_MetaData[] = {
		{ "Category", "Zonefall|UI|Loading|Progress" },
		{ "ClampMax", "30.0" },
		{ "ClampMin", "0.2" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressDurationMaxSeconds_MetaData[] = {
		{ "Category", "Zonefall|UI|Loading|Progress" },
		{ "ClampMax", "60.0" },
		{ "ClampMin", "0.5" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressTickInterval_MetaData[] = {
		{ "Category", "Zonefall|UI|Loading|Progress" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.02" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBorder_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|Loading" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBox_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|Loading" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|Loading" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitleText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|Loading" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageBorder_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|Loading" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|Loading" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|Loading" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallLoadingScreenWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallLoadingScreenWidget constinit property declarations *************
	static const UECodeGen_Private::FTextPropertyParams NewProp_LoadingTitle;
	static const UECodeGen_Private::FTextPropertyParams NewProp_LoadingSubtitle;
	static void NewProp_bAutoStartProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStartProgress;
	static void NewProp_bAutoRotateImages_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRotateImages;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImageRotateInterval;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadingImages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadingImages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultLoadingImage;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ImageBorderName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RootBorderName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RootBoxName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TitleTextName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubtitleTextName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProgressBarName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProgressTextName;
	static void NewProp_bAnimateLoadingText_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimateLoadingText;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoadingTextAnimInterval;
	static void NewProp_bAnimateStatusText_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimateStatusText;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StatusTextAnimInterval;
	static const UECodeGen_Private::FTextPropertyParams NewProp_LoadingStatusPhrases_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadingStatusPhrases;
	static void NewProp_bAnimateSpinner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimateSpinner;
	static void NewProp_bAnimateProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimateProgress;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProgressDurationMinSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProgressDurationMaxSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProgressTickInterval;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubtitleText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImageBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallLoadingScreenWidget constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CompleteLoading"), .Pointer = &UZonefallLoadingScreenWidget::execCompleteLoading },
		{ .NameUTF8 = UTF8TEXT("EnterFinalizingPhase"), .Pointer = &UZonefallLoadingScreenWidget::execEnterFinalizingPhase },
		{ .NameUTF8 = UTF8TEXT("HandleImageRotateTick"), .Pointer = &UZonefallLoadingScreenWidget::execHandleImageRotateTick },
		{ .NameUTF8 = UTF8TEXT("HandleLoadingTextTick"), .Pointer = &UZonefallLoadingScreenWidget::execHandleLoadingTextTick },
		{ .NameUTF8 = UTF8TEXT("HandleProgressTick"), .Pointer = &UZonefallLoadingScreenWidget::execHandleProgressTick },
		{ .NameUTF8 = UTF8TEXT("HandleStatusTextTick"), .Pointer = &UZonefallLoadingScreenWidget::execHandleStatusTextTick },
		{ .NameUTF8 = UTF8TEXT("StartImageRotation"), .Pointer = &UZonefallLoadingScreenWidget::execStartImageRotation },
		{ .NameUTF8 = UTF8TEXT("StartLoading"), .Pointer = &UZonefallLoadingScreenWidget::execStartLoading },
		{ .NameUTF8 = UTF8TEXT("StopImageRotation"), .Pointer = &UZonefallLoadingScreenWidget::execStopImageRotation },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallLoadingScreenWidget_CompleteLoading, "CompleteLoading" }, // 3504810493
		{ &Z_Construct_UFunction_UZonefallLoadingScreenWidget_EnterFinalizingPhase, "EnterFinalizingPhase" }, // 3247486932
		{ &Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleImageRotateTick, "HandleImageRotateTick" }, // 2078912124
		{ &Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleLoadingTextTick, "HandleLoadingTextTick" }, // 1437709618
		{ &Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleProgressTick, "HandleProgressTick" }, // 2691102459
		{ &Z_Construct_UFunction_UZonefallLoadingScreenWidget_HandleStatusTextTick, "HandleStatusTextTick" }, // 108088006
		{ &Z_Construct_UFunction_UZonefallLoadingScreenWidget_StartImageRotation, "StartImageRotation" }, // 3661667335
		{ &Z_Construct_UFunction_UZonefallLoadingScreenWidget_StartLoading, "StartLoading" }, // 3888394451
		{ &Z_Construct_UFunction_UZonefallLoadingScreenWidget_StopImageRotation, "StopImageRotation" }, // 3463983822
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallLoadingScreenWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics

// ********** Begin Class UZonefallLoadingScreenWidget Property Definitions ************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_LoadingTitle = { "LoadingTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLoadingScreenWidget, LoadingTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingTitle_MetaData), NewProp_LoadingTitle_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_LoadingSubtitle = { "LoadingSubtitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLoadingScreenWidget, LoadingSubtitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingSubtitle_MetaData), NewProp_LoadingSubtitle_MetaData) };
void Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_bAutoStartProgress_SetBit(void* Obj)
{
	((UZonefallLoadingScreenWidget*)Obj)->bAutoStartProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_bAutoStartProgress = { "bAutoStartProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallLoadingScreenWidget), &Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_bAutoStartProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoStartProgress_MetaData), NewProp_bAutoStartProgress_MetaData) };
void Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_bAutoRotateImages_SetBit(void* Obj)
{
	((UZonefallLoadingScreenWidget*)Obj)->bAutoRotateImages = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_bAutoRotateImages = { "bAutoRotateImages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallLoadingScreenWidget), &Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_bAutoRotateImages_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoRotateImages_MetaData), NewProp_bAutoRotateImages_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_ImageRotateInterval = { "ImageRotateInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLoadingScreenWidget, ImageRotateInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageRotateInterval_MetaData), NewProp_ImageRotateInterval_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_LoadingImages_Inner = { "LoadingImages", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_LoadingImages = { "LoadingImages", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLoadingScreenWidget, LoadingImages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingImages_MetaData), NewProp_LoadingImages_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_DefaultLoadingImage = { "DefaultLoadingImage", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLoadingScreenWidget, DefaultLoadingImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLoadingImage_MetaData), NewProp_DefaultLoadingImage_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_ImageBorderName = { "ImageBorderName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLoadingScreenWidget, ImageBorderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageBorderName_MetaData), NewProp_ImageBorderName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_RootBorderName = { "RootBorderName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLoadingScreenWidget, RootBorderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBorderName_MetaData), NewProp_RootBorderName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_RootBoxName = { "RootBoxName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLoadingScreenWidget, RootBoxName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBoxName_MetaData), NewProp_RootBoxName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_TitleTextName = { "TitleTextName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLoadingScreenWidget, TitleTextName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleTextName_MetaData), NewProp_TitleTextName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_SubtitleTextName = { "SubtitleTextName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLoadingScreenWidget, SubtitleTextName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitleTextName_MetaData), NewProp_SubtitleTextName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_ProgressBarName = { "ProgressBarName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLoadingScreenWidget, ProgressBarName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressBarName_MetaData), NewProp_ProgressBarName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_ProgressTextName = { "ProgressTextName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLoadingScreenWidget, ProgressTextName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressTextName_MetaData), NewProp_ProgressTextName_MetaData) };
void Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_bAnimateLoadingText_SetBit(void* Obj)
{
	((UZonefallLoadingScreenWidget*)Obj)->bAnimateLoadingText = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_bAnimateLoadingText = { "bAnimateLoadingText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallLoadingScreenWidget), &Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_bAnimateLoadingText_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnimateLoadingText_MetaData), NewProp_bAnimateLoadingText_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_LoadingTextAnimInterval = { "LoadingTextAnimInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLoadingScreenWidget, LoadingTextAnimInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingTextAnimInterval_MetaData), NewProp_LoadingTextAnimInterval_MetaData) };
void Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_bAnimateStatusText_SetBit(void* Obj)
{
	((UZonefallLoadingScreenWidget*)Obj)->bAnimateStatusText = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_bAnimateStatusText = { "bAnimateStatusText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallLoadingScreenWidget), &Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_bAnimateStatusText_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnimateStatusText_MetaData), NewProp_bAnimateStatusText_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_StatusTextAnimInterval = { "StatusTextAnimInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLoadingScreenWidget, StatusTextAnimInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusTextAnimInterval_MetaData), NewProp_StatusTextAnimInterval_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_LoadingStatusPhrases_Inner = { "LoadingStatusPhrases", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_LoadingStatusPhrases = { "LoadingStatusPhrases", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLoadingScreenWidget, LoadingStatusPhrases), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingStatusPhrases_MetaData), NewProp_LoadingStatusPhrases_MetaData) };
void Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_bAnimateSpinner_SetBit(void* Obj)
{
	((UZonefallLoadingScreenWidget*)Obj)->bAnimateSpinner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_bAnimateSpinner = { "bAnimateSpinner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallLoadingScreenWidget), &Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_bAnimateSpinner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnimateSpinner_MetaData), NewProp_bAnimateSpinner_MetaData) };
void Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_bAnimateProgress_SetBit(void* Obj)
{
	((UZonefallLoadingScreenWidget*)Obj)->bAnimateProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_bAnimateProgress = { "bAnimateProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallLoadingScreenWidget), &Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_bAnimateProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnimateProgress_MetaData), NewProp_bAnimateProgress_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_ProgressDurationMinSeconds = { "ProgressDurationMinSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLoadingScreenWidget, ProgressDurationMinSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressDurationMinSeconds_MetaData), NewProp_ProgressDurationMinSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_ProgressDurationMaxSeconds = { "ProgressDurationMaxSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLoadingScreenWidget, ProgressDurationMaxSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressDurationMaxSeconds_MetaData), NewProp_ProgressDurationMaxSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_ProgressTickInterval = { "ProgressTickInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLoadingScreenWidget, ProgressTickInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressTickInterval_MetaData), NewProp_ProgressTickInterval_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_RootBorder = { "RootBorder", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLoadingScreenWidget, RootBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBorder_MetaData), NewProp_RootBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_RootBox = { "RootBox", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLoadingScreenWidget, RootBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBox_MetaData), NewProp_RootBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLoadingScreenWidget, TitleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleText_MetaData), NewProp_TitleText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_SubtitleText = { "SubtitleText", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLoadingScreenWidget, SubtitleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitleText_MetaData), NewProp_SubtitleText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_ImageBorder = { "ImageBorder", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLoadingScreenWidget, ImageBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageBorder_MetaData), NewProp_ImageBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_ProgressBar = { "ProgressBar", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLoadingScreenWidget, ProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressBar_MetaData), NewProp_ProgressBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_ProgressText = { "ProgressText", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallLoadingScreenWidget, ProgressText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressText_MetaData), NewProp_ProgressText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_LoadingTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_LoadingSubtitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_bAutoStartProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_bAutoRotateImages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_ImageRotateInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_LoadingImages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_LoadingImages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_DefaultLoadingImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_ImageBorderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_RootBorderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_RootBoxName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_TitleTextName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_SubtitleTextName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_ProgressBarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_ProgressTextName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_bAnimateLoadingText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_LoadingTextAnimInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_bAnimateStatusText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_StatusTextAnimInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_LoadingStatusPhrases_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_LoadingStatusPhrases,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_bAnimateSpinner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_bAnimateProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_ProgressDurationMinSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_ProgressDurationMaxSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_ProgressTickInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_RootBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_RootBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_TitleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_SubtitleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_ImageBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_ProgressBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::NewProp_ProgressText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::PropPointers) < 2048);
// ********** End Class UZonefallLoadingScreenWidget Property Definitions **************************
UObject* (*const Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::ClassParams = {
	&UZonefallLoadingScreenWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::Class_MetaDataParams)
};
void UZonefallLoadingScreenWidget::StaticRegisterNativesUZonefallLoadingScreenWidget()
{
	UClass* Class = UZonefallLoadingScreenWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallLoadingScreenWidget()
{
	if (!Z_Registration_Info_UClass_UZonefallLoadingScreenWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallLoadingScreenWidget.OuterSingleton, Z_Construct_UClass_UZonefallLoadingScreenWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallLoadingScreenWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallLoadingScreenWidget);
UZonefallLoadingScreenWidget::~UZonefallLoadingScreenWidget() {}
// ********** End Class UZonefallLoadingScreenWidget ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallLoadingScreenWidget_h__Script_UIWorld_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZonefallLoadingScreenWidget, UZonefallLoadingScreenWidget::StaticClass, TEXT("UZonefallLoadingScreenWidget"), &Z_Registration_Info_UClass_UZonefallLoadingScreenWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallLoadingScreenWidget), 1742541392U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallLoadingScreenWidget_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallLoadingScreenWidget_h__Script_UIWorld_3167666396{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallLoadingScreenWidget_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallLoadingScreenWidget_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
