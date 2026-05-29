// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZonefallStartupIntroWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallStartupIntroWidget() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallStartupIntroWidget();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallStartupIntroWidget_NoRegister();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallStartupIntroFinished__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnZonefallStartupIntroFinished ***************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnZonefallStartupIntroFinished__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallStartupIntroWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnZonefallStartupIntroFinished constinit property declarations *******
// ********** End Delegate FOnZonefallStartupIntroFinished constinit property declarations *********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnZonefallStartupIntroFinished__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnZonefallStartupIntroFinished__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallStartupIntroFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnZonefallStartupIntroFinished__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallStartupIntroFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnZonefallStartupIntroFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnZonefallStartupIntroFinished_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallStartupIntroFinished)
{
	OnZonefallStartupIntroFinished.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnZonefallStartupIntroFinished *****************************************

// ********** Begin Class UZonefallStartupIntroWidget Function FinishIntro *************************
struct Z_Construct_UFunction_UZonefallStartupIntroWidget_FinishIntro_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|Startup|Intro" },
		{ "ModuleRelativePath", "Public/UI/ZonefallStartupIntroWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function FinishIntro constinit property declarations ***************************
// ********** End Function FinishIntro constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallStartupIntroWidget_FinishIntro_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallStartupIntroWidget, nullptr, "FinishIntro", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallStartupIntroWidget_FinishIntro_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallStartupIntroWidget_FinishIntro_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallStartupIntroWidget_FinishIntro()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallStartupIntroWidget_FinishIntro_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallStartupIntroWidget::execFinishIntro)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishIntro();
	P_NATIVE_END;
}
// ********** End Class UZonefallStartupIntroWidget Function FinishIntro ***************************

// ********** Begin Class UZonefallStartupIntroWidget Function HandleMediaEndReached ***************
struct Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaEndReached_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallStartupIntroWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleMediaEndReached constinit property declarations *****************
// ********** End Function HandleMediaEndReached constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaEndReached_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallStartupIntroWidget, nullptr, "HandleMediaEndReached", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaEndReached_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaEndReached_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaEndReached()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaEndReached_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallStartupIntroWidget::execHandleMediaEndReached)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleMediaEndReached();
	P_NATIVE_END;
}
// ********** End Class UZonefallStartupIntroWidget Function HandleMediaEndReached *****************

// ********** Begin Class UZonefallStartupIntroWidget Function HandleMediaOpened *******************
struct Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpened_Statics
{
	struct ZonefallStartupIntroWidget_eventHandleMediaOpened_Parms
	{
		FString OpenedUrl;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallStartupIntroWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleMediaOpened constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_OpenedUrl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleMediaOpened constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleMediaOpened Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpened_Statics::NewProp_OpenedUrl = { "OpenedUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallStartupIntroWidget_eventHandleMediaOpened_Parms, OpenedUrl), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpened_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpened_Statics::NewProp_OpenedUrl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpened_Statics::PropPointers) < 2048);
// ********** End Function HandleMediaOpened Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpened_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallStartupIntroWidget, nullptr, "HandleMediaOpened", 	Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpened_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpened_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpened_Statics::ZonefallStartupIntroWidget_eventHandleMediaOpened_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpened_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpened_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpened_Statics::ZonefallStartupIntroWidget_eventHandleMediaOpened_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpened()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpened_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallStartupIntroWidget::execHandleMediaOpened)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_OpenedUrl);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleMediaOpened(Z_Param_OpenedUrl);
	P_NATIVE_END;
}
// ********** End Class UZonefallStartupIntroWidget Function HandleMediaOpened *********************

// ********** Begin Class UZonefallStartupIntroWidget Function HandleMediaOpenFailed ***************
struct Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpenFailed_Statics
{
	struct ZonefallStartupIntroWidget_eventHandleMediaOpenFailed_Parms
	{
		FString FailedUrl;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallStartupIntroWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleMediaOpenFailed constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FailedUrl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleMediaOpenFailed constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleMediaOpenFailed Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpenFailed_Statics::NewProp_FailedUrl = { "FailedUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallStartupIntroWidget_eventHandleMediaOpenFailed_Parms, FailedUrl), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpenFailed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpenFailed_Statics::NewProp_FailedUrl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpenFailed_Statics::PropPointers) < 2048);
// ********** End Function HandleMediaOpenFailed Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpenFailed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallStartupIntroWidget, nullptr, "HandleMediaOpenFailed", 	Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpenFailed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpenFailed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpenFailed_Statics::ZonefallStartupIntroWidget_eventHandleMediaOpenFailed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpenFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpenFailed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpenFailed_Statics::ZonefallStartupIntroWidget_eventHandleMediaOpenFailed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpenFailed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpenFailed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallStartupIntroWidget::execHandleMediaOpenFailed)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FailedUrl);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleMediaOpenFailed(Z_Param_FailedUrl);
	P_NATIVE_END;
}
// ********** End Class UZonefallStartupIntroWidget Function HandleMediaOpenFailed *****************

// ********** Begin Class UZonefallStartupIntroWidget Function HandlePlaybackRetryTick *************
struct Z_Construct_UFunction_UZonefallStartupIntroWidget_HandlePlaybackRetryTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallStartupIntroWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandlePlaybackRetryTick constinit property declarations ***************
// ********** End Function HandlePlaybackRetryTick constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallStartupIntroWidget_HandlePlaybackRetryTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallStartupIntroWidget, nullptr, "HandlePlaybackRetryTick", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallStartupIntroWidget_HandlePlaybackRetryTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallStartupIntroWidget_HandlePlaybackRetryTick_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallStartupIntroWidget_HandlePlaybackRetryTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallStartupIntroWidget_HandlePlaybackRetryTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallStartupIntroWidget::execHandlePlaybackRetryTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePlaybackRetryTick();
	P_NATIVE_END;
}
// ********** End Class UZonefallStartupIntroWidget Function HandlePlaybackRetryTick ***************

// ********** Begin Class UZonefallStartupIntroWidget Function StartIntro **************************
struct Z_Construct_UFunction_UZonefallStartupIntroWidget_StartIntro_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|Startup|Intro" },
		{ "ModuleRelativePath", "Public/UI/ZonefallStartupIntroWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartIntro constinit property declarations ****************************
// ********** End Function StartIntro constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallStartupIntroWidget_StartIntro_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallStartupIntroWidget, nullptr, "StartIntro", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallStartupIntroWidget_StartIntro_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallStartupIntroWidget_StartIntro_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallStartupIntroWidget_StartIntro()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallStartupIntroWidget_StartIntro_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallStartupIntroWidget::execStartIntro)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartIntro();
	P_NATIVE_END;
}
// ********** End Class UZonefallStartupIntroWidget Function StartIntro ****************************

// ********** Begin Class UZonefallStartupIntroWidget **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallStartupIntroWidget;
UClass* UZonefallStartupIntroWidget::GetPrivateStaticClass()
{
	using TClass = UZonefallStartupIntroWidget;
	if (!Z_Registration_Info_UClass_UZonefallStartupIntroWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallStartupIntroWidget"),
			Z_Registration_Info_UClass_UZonefallStartupIntroWidget.InnerSingleton,
			StaticRegisterNativesUZonefallStartupIntroWidget,
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
	return Z_Registration_Info_UClass_UZonefallStartupIntroWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallStartupIntroWidget_NoRegister()
{
	return UZonefallStartupIntroWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallStartupIntroWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/ZonefallStartupIntroWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallStartupIntroWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnIntroFinished_MetaData[] = {
		{ "Category", "Zonefall|UI|Startup" },
		{ "ModuleRelativePath", "Public/UI/ZonefallStartupIntroWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntroMediaPlayer_MetaData[] = {
		{ "Category", "Zonefall|UI|Startup|Intro" },
		{ "ModuleRelativePath", "Public/UI/ZonefallStartupIntroWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntroMediaSource_MetaData[] = {
		{ "Category", "Zonefall|UI|Startup|Intro" },
		{ "ModuleRelativePath", "Public/UI/ZonefallStartupIntroWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntroMediaTexture_MetaData[] = {
		{ "Category", "Zonefall|UI|Startup|Intro" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Assign MediaTexture created from IntroMediaPlayer (Video Output Media Texture).\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallStartupIntroWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign MediaTexture created from IntroMediaPlayer (Video Output Media Texture)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntroVideoUIMaterial_MetaData[] = {
		{ "Category", "Zonefall|UI|Startup|Intro" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional. Preferred for UMG rendering stability: UI domain material with a Texture parameter.\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallStartupIntroWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional. Preferred for UMG rendering stability: UI domain material with a Texture parameter." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntroVideoTextureParameterName_MetaData[] = {
		{ "Category", "Zonefall|UI|Startup|Intro" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Texture parameter name inside IntroVideoUIMaterial.\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallStartupIntroWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Texture parameter name inside IntroVideoUIMaterial." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackIntroDuration_MetaData[] = {
		{ "Category", "Zonefall|UI|Startup|Intro" },
		{ "ClampMax", "60.0" },
		{ "ClampMin", "0.5" },
		{ "ModuleRelativePath", "Public/UI/ZonefallStartupIntroWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPlayOnConstruct_MetaData[] = {
		{ "Category", "Zonefall|UI|Startup|Intro" },
		{ "ModuleRelativePath", "Public/UI/ZonefallStartupIntroWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntroFallbackText_MetaData[] = {
		{ "Category", "Zonefall|UI|Startup|Intro" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fallback text if video source/texture is not ready.\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallStartupIntroWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fallback text if video source/texture is not ready." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBorder_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|Startup|Intro" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallStartupIntroWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VideoImage_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|Startup|Intro" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallStartupIntroWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|Startup|Intro" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallStartupIntroWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallStartupIntroWidget constinit property declarations **************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIntroFinished;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IntroMediaPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IntroMediaSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IntroMediaTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IntroVideoUIMaterial;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IntroVideoTextureParameterName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FallbackIntroDuration;
	static void NewProp_bAutoPlayOnConstruct_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlayOnConstruct;
	static const UECodeGen_Private::FTextPropertyParams NewProp_IntroFallbackText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VideoImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FallbackText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallStartupIntroWidget constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FinishIntro"), .Pointer = &UZonefallStartupIntroWidget::execFinishIntro },
		{ .NameUTF8 = UTF8TEXT("HandleMediaEndReached"), .Pointer = &UZonefallStartupIntroWidget::execHandleMediaEndReached },
		{ .NameUTF8 = UTF8TEXT("HandleMediaOpened"), .Pointer = &UZonefallStartupIntroWidget::execHandleMediaOpened },
		{ .NameUTF8 = UTF8TEXT("HandleMediaOpenFailed"), .Pointer = &UZonefallStartupIntroWidget::execHandleMediaOpenFailed },
		{ .NameUTF8 = UTF8TEXT("HandlePlaybackRetryTick"), .Pointer = &UZonefallStartupIntroWidget::execHandlePlaybackRetryTick },
		{ .NameUTF8 = UTF8TEXT("StartIntro"), .Pointer = &UZonefallStartupIntroWidget::execStartIntro },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallStartupIntroWidget_FinishIntro, "FinishIntro" }, // 3647398814
		{ &Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaEndReached, "HandleMediaEndReached" }, // 1558853795
		{ &Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpened, "HandleMediaOpened" }, // 634622588
		{ &Z_Construct_UFunction_UZonefallStartupIntroWidget_HandleMediaOpenFailed, "HandleMediaOpenFailed" }, // 2545164700
		{ &Z_Construct_UFunction_UZonefallStartupIntroWidget_HandlePlaybackRetryTick, "HandlePlaybackRetryTick" }, // 3070329941
		{ &Z_Construct_UFunction_UZonefallStartupIntroWidget_StartIntro, "StartIntro" }, // 3277994458
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallStartupIntroWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallStartupIntroWidget_Statics

// ********** Begin Class UZonefallStartupIntroWidget Property Definitions *************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_OnIntroFinished = { "OnIntroFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallStartupIntroWidget, OnIntroFinished), Z_Construct_UDelegateFunction_UIWorld_OnZonefallStartupIntroFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnIntroFinished_MetaData), NewProp_OnIntroFinished_MetaData) }; // 2337763657
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_IntroMediaPlayer = { "IntroMediaPlayer", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallStartupIntroWidget, IntroMediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntroMediaPlayer_MetaData), NewProp_IntroMediaPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_IntroMediaSource = { "IntroMediaSource", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallStartupIntroWidget, IntroMediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntroMediaSource_MetaData), NewProp_IntroMediaSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_IntroMediaTexture = { "IntroMediaTexture", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallStartupIntroWidget, IntroMediaTexture), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntroMediaTexture_MetaData), NewProp_IntroMediaTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_IntroVideoUIMaterial = { "IntroVideoUIMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallStartupIntroWidget, IntroVideoUIMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntroVideoUIMaterial_MetaData), NewProp_IntroVideoUIMaterial_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_IntroVideoTextureParameterName = { "IntroVideoTextureParameterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallStartupIntroWidget, IntroVideoTextureParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntroVideoTextureParameterName_MetaData), NewProp_IntroVideoTextureParameterName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_FallbackIntroDuration = { "FallbackIntroDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallStartupIntroWidget, FallbackIntroDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackIntroDuration_MetaData), NewProp_FallbackIntroDuration_MetaData) };
void Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_bAutoPlayOnConstruct_SetBit(void* Obj)
{
	((UZonefallStartupIntroWidget*)Obj)->bAutoPlayOnConstruct = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_bAutoPlayOnConstruct = { "bAutoPlayOnConstruct", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallStartupIntroWidget), &Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_bAutoPlayOnConstruct_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoPlayOnConstruct_MetaData), NewProp_bAutoPlayOnConstruct_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_IntroFallbackText = { "IntroFallbackText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallStartupIntroWidget, IntroFallbackText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntroFallbackText_MetaData), NewProp_IntroFallbackText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_RootBorder = { "RootBorder", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallStartupIntroWidget, RootBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBorder_MetaData), NewProp_RootBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_VideoImage = { "VideoImage", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallStartupIntroWidget, VideoImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VideoImage_MetaData), NewProp_VideoImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_FallbackText = { "FallbackText", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallStartupIntroWidget, FallbackText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackText_MetaData), NewProp_FallbackText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_OnIntroFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_IntroMediaPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_IntroMediaSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_IntroMediaTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_IntroVideoUIMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_IntroVideoTextureParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_FallbackIntroDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_bAutoPlayOnConstruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_IntroFallbackText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_RootBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_VideoImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::NewProp_FallbackText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::PropPointers) < 2048);
// ********** End Class UZonefallStartupIntroWidget Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::ClassParams = {
	&UZonefallStartupIntroWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::Class_MetaDataParams)
};
void UZonefallStartupIntroWidget::StaticRegisterNativesUZonefallStartupIntroWidget()
{
	UClass* Class = UZonefallStartupIntroWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallStartupIntroWidget()
{
	if (!Z_Registration_Info_UClass_UZonefallStartupIntroWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallStartupIntroWidget.OuterSingleton, Z_Construct_UClass_UZonefallStartupIntroWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallStartupIntroWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallStartupIntroWidget);
UZonefallStartupIntroWidget::~UZonefallStartupIntroWidget() {}
// ********** End Class UZonefallStartupIntroWidget ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallStartupIntroWidget_h__Script_UIWorld_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZonefallStartupIntroWidget, UZonefallStartupIntroWidget::StaticClass, TEXT("UZonefallStartupIntroWidget"), &Z_Registration_Info_UClass_UZonefallStartupIntroWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallStartupIntroWidget), 2376557319U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallStartupIntroWidget_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallStartupIntroWidget_h__Script_UIWorld_1079238260{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallStartupIntroWidget_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallStartupIntroWidget_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
