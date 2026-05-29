// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZonefallConfirmDialogWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallConfirmDialogWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallConfirmDialogWidget();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallConfirmDialogWidget_NoRegister();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallDialogCancelled__DelegateSignature();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallDialogConfirmed__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnZonefallDialogConfirmed ********************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnZonefallDialogConfirmed__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallConfirmDialogWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnZonefallDialogConfirmed constinit property declarations ************
// ********** End Delegate FOnZonefallDialogConfirmed constinit property declarations **************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnZonefallDialogConfirmed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnZonefallDialogConfirmed__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallDialogConfirmed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnZonefallDialogConfirmed__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallDialogConfirmed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnZonefallDialogConfirmed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnZonefallDialogConfirmed_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallDialogConfirmed)
{
	OnZonefallDialogConfirmed.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnZonefallDialogConfirmed **********************************************

// ********** Begin Delegate FOnZonefallDialogCancelled ********************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnZonefallDialogCancelled__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallConfirmDialogWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnZonefallDialogCancelled constinit property declarations ************
// ********** End Delegate FOnZonefallDialogCancelled constinit property declarations **************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnZonefallDialogCancelled__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnZonefallDialogCancelled__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallDialogCancelled__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnZonefallDialogCancelled__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallDialogCancelled__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnZonefallDialogCancelled__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnZonefallDialogCancelled_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallDialogCancelled)
{
	OnZonefallDialogCancelled.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnZonefallDialogCancelled **********************************************

// ********** Begin Class UZonefallConfirmDialogWidget Function HandleCancel ***********************
struct Z_Construct_UFunction_UZonefallConfirmDialogWidget_HandleCancel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallConfirmDialogWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCancel constinit property declarations **************************
// ********** End Function HandleCancel constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallConfirmDialogWidget_HandleCancel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallConfirmDialogWidget, nullptr, "HandleCancel", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallConfirmDialogWidget_HandleCancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallConfirmDialogWidget_HandleCancel_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallConfirmDialogWidget_HandleCancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallConfirmDialogWidget_HandleCancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallConfirmDialogWidget::execHandleCancel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCancel();
	P_NATIVE_END;
}
// ********** End Class UZonefallConfirmDialogWidget Function HandleCancel *************************

// ********** Begin Class UZonefallConfirmDialogWidget Function HandleConfirm **********************
struct Z_Construct_UFunction_UZonefallConfirmDialogWidget_HandleConfirm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallConfirmDialogWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleConfirm constinit property declarations *************************
// ********** End Function HandleConfirm constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallConfirmDialogWidget_HandleConfirm_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallConfirmDialogWidget, nullptr, "HandleConfirm", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallConfirmDialogWidget_HandleConfirm_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallConfirmDialogWidget_HandleConfirm_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallConfirmDialogWidget_HandleConfirm()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallConfirmDialogWidget_HandleConfirm_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallConfirmDialogWidget::execHandleConfirm)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleConfirm();
	P_NATIVE_END;
}
// ********** End Class UZonefallConfirmDialogWidget Function HandleConfirm ************************

// ********** Begin Class UZonefallConfirmDialogWidget Function Setup ******************************
struct Z_Construct_UFunction_UZonefallConfirmDialogWidget_Setup_Statics
{
	struct ZonefallConfirmDialogWidget_eventSetup_Parms
	{
		FText Title;
		FText Message;
		FText ConfirmLabel;
		FText CancelLabel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Dialog" },
		{ "ModuleRelativePath", "Public/UI/ZonefallConfirmDialogWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfirmLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Setup constinit property declarations *********************************
	static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ConfirmLabel;
	static const UECodeGen_Private::FTextPropertyParams NewProp_CancelLabel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Setup constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Setup Property Definitions ********************************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UZonefallConfirmDialogWidget_Setup_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallConfirmDialogWidget_eventSetup_Parms, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UZonefallConfirmDialogWidget_Setup_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallConfirmDialogWidget_eventSetup_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UZonefallConfirmDialogWidget_Setup_Statics::NewProp_ConfirmLabel = { "ConfirmLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallConfirmDialogWidget_eventSetup_Parms, ConfirmLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfirmLabel_MetaData), NewProp_ConfirmLabel_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UZonefallConfirmDialogWidget_Setup_Statics::NewProp_CancelLabel = { "CancelLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallConfirmDialogWidget_eventSetup_Parms, CancelLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelLabel_MetaData), NewProp_CancelLabel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallConfirmDialogWidget_Setup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallConfirmDialogWidget_Setup_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallConfirmDialogWidget_Setup_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallConfirmDialogWidget_Setup_Statics::NewProp_ConfirmLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallConfirmDialogWidget_Setup_Statics::NewProp_CancelLabel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallConfirmDialogWidget_Setup_Statics::PropPointers) < 2048);
// ********** End Function Setup Property Definitions **********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallConfirmDialogWidget_Setup_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallConfirmDialogWidget, nullptr, "Setup", 	Z_Construct_UFunction_UZonefallConfirmDialogWidget_Setup_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallConfirmDialogWidget_Setup_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallConfirmDialogWidget_Setup_Statics::ZonefallConfirmDialogWidget_eventSetup_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallConfirmDialogWidget_Setup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallConfirmDialogWidget_Setup_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallConfirmDialogWidget_Setup_Statics::ZonefallConfirmDialogWidget_eventSetup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallConfirmDialogWidget_Setup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallConfirmDialogWidget_Setup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallConfirmDialogWidget::execSetup)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Title);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Message);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_ConfirmLabel);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_CancelLabel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Setup(Z_Param_Out_Title,Z_Param_Out_Message,Z_Param_Out_ConfirmLabel,Z_Param_Out_CancelLabel);
	P_NATIVE_END;
}
// ********** End Class UZonefallConfirmDialogWidget Function Setup ********************************

// ********** Begin Class UZonefallConfirmDialogWidget *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallConfirmDialogWidget;
UClass* UZonefallConfirmDialogWidget::GetPrivateStaticClass()
{
	using TClass = UZonefallConfirmDialogWidget;
	if (!Z_Registration_Info_UClass_UZonefallConfirmDialogWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallConfirmDialogWidget"),
			Z_Registration_Info_UClass_UZonefallConfirmDialogWidget.InnerSingleton,
			StaticRegisterNativesUZonefallConfirmDialogWidget,
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
	return Z_Registration_Info_UClass_UZonefallConfirmDialogWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallConfirmDialogWidget_NoRegister()
{
	return UZonefallConfirmDialogWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reusable, self-assembling modal confirm dialog (dim backdrop + panel + two buttons). */" },
#endif
		{ "IncludePath", "UI/ZonefallConfirmDialogWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallConfirmDialogWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reusable, self-assembling modal confirm dialog (dim backdrop + panel + two buttons)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConfirmed_MetaData[] = {
		{ "Category", "Zonefall|Dialog" },
		{ "ModuleRelativePath", "Public/UI/ZonefallConfirmDialogWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCancelled_MetaData[] = {
		{ "Category", "Zonefall|Dialog" },
		{ "ModuleRelativePath", "Public/UI/ZonefallConfirmDialogWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PanelTint_MetaData[] = {
		{ "Category", "Zonefall|Dialog|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallConfirmDialogWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccentColor_MetaData[] = {
		{ "Category", "Zonefall|Dialog|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallConfirmDialogWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallConfirmDialogWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallConfirmDialogWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfirmButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallConfirmDialogWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallConfirmDialogWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfirmLabelText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallConfirmDialogWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelLabelText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallConfirmDialogWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallConfirmDialogWidget constinit property declarations *************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConfirmed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancelled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PanelTint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccentColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MessageText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConfirmButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CancelButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConfirmLabelText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CancelLabelText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallConfirmDialogWidget constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleCancel"), .Pointer = &UZonefallConfirmDialogWidget::execHandleCancel },
		{ .NameUTF8 = UTF8TEXT("HandleConfirm"), .Pointer = &UZonefallConfirmDialogWidget::execHandleConfirm },
		{ .NameUTF8 = UTF8TEXT("Setup"), .Pointer = &UZonefallConfirmDialogWidget::execSetup },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallConfirmDialogWidget_HandleCancel, "HandleCancel" }, // 3159404486
		{ &Z_Construct_UFunction_UZonefallConfirmDialogWidget_HandleConfirm, "HandleConfirm" }, // 4040749831
		{ &Z_Construct_UFunction_UZonefallConfirmDialogWidget_Setup, "Setup" }, // 1861386733
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallConfirmDialogWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics

// ********** Begin Class UZonefallConfirmDialogWidget Property Definitions ************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::NewProp_OnConfirmed = { "OnConfirmed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallConfirmDialogWidget, OnConfirmed), Z_Construct_UDelegateFunction_UIWorld_OnZonefallDialogConfirmed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConfirmed_MetaData), NewProp_OnConfirmed_MetaData) }; // 1715714280
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::NewProp_OnCancelled = { "OnCancelled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallConfirmDialogWidget, OnCancelled), Z_Construct_UDelegateFunction_UIWorld_OnZonefallDialogCancelled__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCancelled_MetaData), NewProp_OnCancelled_MetaData) }; // 13094748
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::NewProp_PanelTint = { "PanelTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallConfirmDialogWidget, PanelTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PanelTint_MetaData), NewProp_PanelTint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::NewProp_AccentColor = { "AccentColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallConfirmDialogWidget, AccentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccentColor_MetaData), NewProp_AccentColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallConfirmDialogWidget, TitleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleText_MetaData), NewProp_TitleText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::NewProp_MessageText = { "MessageText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallConfirmDialogWidget, MessageText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageText_MetaData), NewProp_MessageText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::NewProp_ConfirmButton = { "ConfirmButton", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallConfirmDialogWidget, ConfirmButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfirmButton_MetaData), NewProp_ConfirmButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::NewProp_CancelButton = { "CancelButton", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallConfirmDialogWidget, CancelButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelButton_MetaData), NewProp_CancelButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::NewProp_ConfirmLabelText = { "ConfirmLabelText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallConfirmDialogWidget, ConfirmLabelText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfirmLabelText_MetaData), NewProp_ConfirmLabelText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::NewProp_CancelLabelText = { "CancelLabelText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallConfirmDialogWidget, CancelLabelText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelLabelText_MetaData), NewProp_CancelLabelText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::NewProp_OnConfirmed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::NewProp_OnCancelled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::NewProp_PanelTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::NewProp_AccentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::NewProp_TitleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::NewProp_MessageText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::NewProp_ConfirmButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::NewProp_CancelButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::NewProp_ConfirmLabelText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::NewProp_CancelLabelText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::PropPointers) < 2048);
// ********** End Class UZonefallConfirmDialogWidget Property Definitions **************************
UObject* (*const Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::ClassParams = {
	&UZonefallConfirmDialogWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::Class_MetaDataParams)
};
void UZonefallConfirmDialogWidget::StaticRegisterNativesUZonefallConfirmDialogWidget()
{
	UClass* Class = UZonefallConfirmDialogWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallConfirmDialogWidget()
{
	if (!Z_Registration_Info_UClass_UZonefallConfirmDialogWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallConfirmDialogWidget.OuterSingleton, Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallConfirmDialogWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallConfirmDialogWidget);
UZonefallConfirmDialogWidget::~UZonefallConfirmDialogWidget() {}
// ********** End Class UZonefallConfirmDialogWidget ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallConfirmDialogWidget_h__Script_UIWorld_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZonefallConfirmDialogWidget, UZonefallConfirmDialogWidget::StaticClass, TEXT("UZonefallConfirmDialogWidget"), &Z_Registration_Info_UClass_UZonefallConfirmDialogWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallConfirmDialogWidget), 2360538074U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallConfirmDialogWidget_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallConfirmDialogWidget_h__Script_UIWorld_973074185{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallConfirmDialogWidget_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallConfirmDialogWidget_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
