// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZonefallMasterSettingsWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallMasterSettingsWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallKeybindButton();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallKeybindButton_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallMasterSettingsWidget();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallMasterSettingsWidget_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallSettingsDataObject_NoRegister();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallKeybindClicked__DelegateSignature();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallMasterSettingsBack__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnZonefallMasterSettingsBack *****************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnZonefallMasterSettingsBack__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnZonefallMasterSettingsBack constinit property declarations *********
// ********** End Delegate FOnZonefallMasterSettingsBack constinit property declarations ***********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnZonefallMasterSettingsBack__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnZonefallMasterSettingsBack__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallMasterSettingsBack__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnZonefallMasterSettingsBack__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallMasterSettingsBack__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnZonefallMasterSettingsBack__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnZonefallMasterSettingsBack_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallMasterSettingsBack)
{
	OnZonefallMasterSettingsBack.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnZonefallMasterSettingsBack *******************************************

// ********** Begin Delegate FOnZonefallKeybindClicked *********************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnZonefallKeybindClicked__DelegateSignature_Statics
{
	struct _Script_UIWorld_eventOnZonefallKeybindClicked_Parms
	{
		FName ActionId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnZonefallKeybindClicked constinit property declarations *************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActionId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnZonefallKeybindClicked constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnZonefallKeybindClicked Property Definitions ************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UIWorld_OnZonefallKeybindClicked__DelegateSignature_Statics::NewProp_ActionId = { "ActionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UIWorld_eventOnZonefallKeybindClicked_Parms, ActionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UIWorld_OnZonefallKeybindClicked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIWorld_OnZonefallKeybindClicked__DelegateSignature_Statics::NewProp_ActionId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallKeybindClicked__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnZonefallKeybindClicked Property Definitions **************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnZonefallKeybindClicked__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnZonefallKeybindClicked__DelegateSignature", 	Z_Construct_UDelegateFunction_UIWorld_OnZonefallKeybindClicked__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallKeybindClicked__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_UIWorld_OnZonefallKeybindClicked__DelegateSignature_Statics::_Script_UIWorld_eventOnZonefallKeybindClicked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallKeybindClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnZonefallKeybindClicked__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UIWorld_OnZonefallKeybindClicked__DelegateSignature_Statics::_Script_UIWorld_eventOnZonefallKeybindClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallKeybindClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnZonefallKeybindClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnZonefallKeybindClicked_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallKeybindClicked, FName ActionId)
{
	struct _Script_UIWorld_eventOnZonefallKeybindClicked_Parms
	{
		FName ActionId;
	};
	_Script_UIWorld_eventOnZonefallKeybindClicked_Parms Parms;
	Parms.ActionId=ActionId;
	OnZonefallKeybindClicked.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnZonefallKeybindClicked ***********************************************

// ********** Begin Class UZonefallKeybindButton Function HandleInternalClicked ********************
struct Z_Construct_UFunction_UZonefallKeybindButton_HandleInternalClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleInternalClicked constinit property declarations *****************
// ********** End Function HandleInternalClicked constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallKeybindButton_HandleInternalClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallKeybindButton, nullptr, "HandleInternalClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallKeybindButton_HandleInternalClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallKeybindButton_HandleInternalClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallKeybindButton_HandleInternalClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallKeybindButton_HandleInternalClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallKeybindButton::execHandleInternalClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleInternalClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallKeybindButton Function HandleInternalClicked **********************

// ********** Begin Class UZonefallKeybindButton ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallKeybindButton;
UClass* UZonefallKeybindButton::GetPrivateStaticClass()
{
	using TClass = UZonefallKeybindButton;
	if (!Z_Registration_Info_UClass_UZonefallKeybindButton.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallKeybindButton"),
			Z_Registration_Info_UClass_UZonefallKeybindButton.InnerSingleton,
			StaticRegisterNativesUZonefallKeybindButton,
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
	return Z_Registration_Info_UClass_UZonefallKeybindButton.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallKeybindButton_NoRegister()
{
	return UZonefallKeybindButton::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallKeybindButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** UButton that remembers a control's ActionId and re-broadcasts clicks with it. */" },
#endif
		{ "IncludePath", "UI/ZonefallMasterSettingsWidget.h" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UButton that remembers a control's ActionId and re-broadcasts clicks with it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionId_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnKeybindClicked_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallKeybindButton constinit property declarations *******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActionId;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKeybindClicked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallKeybindButton constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleInternalClicked"), .Pointer = &UZonefallKeybindButton::execHandleInternalClicked },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallKeybindButton_HandleInternalClicked, "HandleInternalClicked" }, // 1979454536
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallKeybindButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallKeybindButton_Statics

// ********** Begin Class UZonefallKeybindButton Property Definitions ******************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallKeybindButton_Statics::NewProp_ActionId = { "ActionId", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallKeybindButton, ActionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionId_MetaData), NewProp_ActionId_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallKeybindButton_Statics::NewProp_OnKeybindClicked = { "OnKeybindClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallKeybindButton, OnKeybindClicked), Z_Construct_UDelegateFunction_UIWorld_OnZonefallKeybindClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnKeybindClicked_MetaData), NewProp_OnKeybindClicked_MetaData) }; // 4010293144
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallKeybindButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallKeybindButton_Statics::NewProp_ActionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallKeybindButton_Statics::NewProp_OnKeybindClicked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallKeybindButton_Statics::PropPointers) < 2048);
// ********** End Class UZonefallKeybindButton Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UZonefallKeybindButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UButton,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallKeybindButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallKeybindButton_Statics::ClassParams = {
	&UZonefallKeybindButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallKeybindButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallKeybindButton_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallKeybindButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallKeybindButton_Statics::Class_MetaDataParams)
};
void UZonefallKeybindButton::StaticRegisterNativesUZonefallKeybindButton()
{
	UClass* Class = UZonefallKeybindButton::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallKeybindButton_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallKeybindButton()
{
	if (!Z_Registration_Info_UClass_UZonefallKeybindButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallKeybindButton.OuterSingleton, Z_Construct_UClass_UZonefallKeybindButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallKeybindButton.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallKeybindButton);
UZonefallKeybindButton::~UZonefallKeybindButton() {}
// ********** End Class UZonefallKeybindButton *****************************************************

// ********** Begin Class UZonefallMasterSettingsWidget Function ApplyNow **************************
struct Z_Construct_UFunction_UZonefallMasterSettingsWidget_ApplyNow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyNow constinit property declarations ******************************
// ********** End Function ApplyNow constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallMasterSettingsWidget_ApplyNow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallMasterSettingsWidget, nullptr, "ApplyNow", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_ApplyNow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallMasterSettingsWidget_ApplyNow_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallMasterSettingsWidget_ApplyNow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallMasterSettingsWidget_ApplyNow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallMasterSettingsWidget::execApplyNow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyNow();
	P_NATIVE_END;
}
// ********** End Class UZonefallMasterSettingsWidget Function ApplyNow ****************************

// ********** Begin Class UZonefallMasterSettingsWidget Function HandleApplyClicked ****************
struct Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleApplyClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleApplyClicked constinit property declarations ********************
// ********** End Function HandleApplyClicked constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleApplyClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallMasterSettingsWidget, nullptr, "HandleApplyClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleApplyClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleApplyClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleApplyClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleApplyClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallMasterSettingsWidget::execHandleApplyClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleApplyClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallMasterSettingsWidget Function HandleApplyClicked ******************

// ********** Begin Class UZonefallMasterSettingsWidget Function HandleBackClicked *****************
struct Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleBackClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleBackClicked constinit property declarations *********************
// ********** End Function HandleBackClicked constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleBackClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallMasterSettingsWidget, nullptr, "HandleBackClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleBackClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleBackClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleBackClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleBackClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallMasterSettingsWidget::execHandleBackClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleBackClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallMasterSettingsWidget Function HandleBackClicked *******************

// ********** Begin Class UZonefallMasterSettingsWidget Function HandleInvertYChanged **************
struct Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleInvertYChanged_Statics
{
	struct ZonefallMasterSettingsWidget_eventHandleInvertYChanged_Parms
	{
		bool bIsChecked;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleInvertYChanged constinit property declarations ******************
	static void NewProp_bIsChecked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChecked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleInvertYChanged constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleInvertYChanged Property Definitions *****************************
void Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleInvertYChanged_Statics::NewProp_bIsChecked_SetBit(void* Obj)
{
	((ZonefallMasterSettingsWidget_eventHandleInvertYChanged_Parms*)Obj)->bIsChecked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleInvertYChanged_Statics::NewProp_bIsChecked = { "bIsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallMasterSettingsWidget_eventHandleInvertYChanged_Parms), &Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleInvertYChanged_Statics::NewProp_bIsChecked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleInvertYChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleInvertYChanged_Statics::NewProp_bIsChecked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleInvertYChanged_Statics::PropPointers) < 2048);
// ********** End Function HandleInvertYChanged Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleInvertYChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallMasterSettingsWidget, nullptr, "HandleInvertYChanged", 	Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleInvertYChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleInvertYChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleInvertYChanged_Statics::ZonefallMasterSettingsWidget_eventHandleInvertYChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleInvertYChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleInvertYChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleInvertYChanged_Statics::ZonefallMasterSettingsWidget_eventHandleInvertYChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleInvertYChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleInvertYChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallMasterSettingsWidget::execHandleInvertYChanged)
{
	P_GET_UBOOL(Z_Param_bIsChecked);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleInvertYChanged(Z_Param_bIsChecked);
	P_NATIVE_END;
}
// ********** End Class UZonefallMasterSettingsWidget Function HandleInvertYChanged ****************

// ********** Begin Class UZonefallMasterSettingsWidget Function HandleKeybindClicked **************
struct Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleKeybindClicked_Statics
{
	struct ZonefallMasterSettingsWidget_eventHandleKeybindClicked_Parms
	{
		FName ActionId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleKeybindClicked constinit property declarations ******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActionId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleKeybindClicked constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleKeybindClicked Property Definitions *****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleKeybindClicked_Statics::NewProp_ActionId = { "ActionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallMasterSettingsWidget_eventHandleKeybindClicked_Parms, ActionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleKeybindClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleKeybindClicked_Statics::NewProp_ActionId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleKeybindClicked_Statics::PropPointers) < 2048);
// ********** End Function HandleKeybindClicked Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleKeybindClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallMasterSettingsWidget, nullptr, "HandleKeybindClicked", 	Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleKeybindClicked_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleKeybindClicked_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleKeybindClicked_Statics::ZonefallMasterSettingsWidget_eventHandleKeybindClicked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleKeybindClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleKeybindClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleKeybindClicked_Statics::ZonefallMasterSettingsWidget_eventHandleKeybindClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleKeybindClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleKeybindClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallMasterSettingsWidget::execHandleKeybindClicked)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ActionId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleKeybindClicked(Z_Param_ActionId);
	P_NATIVE_END;
}
// ********** End Class UZonefallMasterSettingsWidget Function HandleKeybindClicked ****************

// ********** Begin Class UZonefallMasterSettingsWidget Function HandleLanguageComboChanged ********
struct Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleLanguageComboChanged_Statics
{
	struct ZonefallMasterSettingsWidget_eventHandleLanguageComboChanged_Parms
	{
		FString SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleLanguageComboChanged constinit property declarations ************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleLanguageComboChanged constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleLanguageComboChanged Property Definitions ***********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleLanguageComboChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallMasterSettingsWidget_eventHandleLanguageComboChanged_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleLanguageComboChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallMasterSettingsWidget_eventHandleLanguageComboChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4243707124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleLanguageComboChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleLanguageComboChanged_Statics::NewProp_SelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleLanguageComboChanged_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleLanguageComboChanged_Statics::PropPointers) < 2048);
// ********** End Function HandleLanguageComboChanged Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleLanguageComboChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallMasterSettingsWidget, nullptr, "HandleLanguageComboChanged", 	Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleLanguageComboChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleLanguageComboChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleLanguageComboChanged_Statics::ZonefallMasterSettingsWidget_eventHandleLanguageComboChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleLanguageComboChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleLanguageComboChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleLanguageComboChanged_Statics::ZonefallMasterSettingsWidget_eventHandleLanguageComboChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleLanguageComboChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleLanguageComboChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallMasterSettingsWidget::execHandleLanguageComboChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleLanguageComboChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
	P_NATIVE_END;
}
// ********** End Class UZonefallMasterSettingsWidget Function HandleLanguageComboChanged **********

// ********** Begin Class UZonefallMasterSettingsWidget Function HandlePresetChanged ***************
struct Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandlePresetChanged_Statics
{
	struct ZonefallMasterSettingsWidget_eventHandlePresetChanged_Parms
	{
		FString SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandlePresetChanged constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandlePresetChanged constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandlePresetChanged Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandlePresetChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallMasterSettingsWidget_eventHandlePresetChanged_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandlePresetChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallMasterSettingsWidget_eventHandlePresetChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4243707124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandlePresetChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandlePresetChanged_Statics::NewProp_SelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandlePresetChanged_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandlePresetChanged_Statics::PropPointers) < 2048);
// ********** End Function HandlePresetChanged Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandlePresetChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallMasterSettingsWidget, nullptr, "HandlePresetChanged", 	Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandlePresetChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandlePresetChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandlePresetChanged_Statics::ZonefallMasterSettingsWidget_eventHandlePresetChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandlePresetChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandlePresetChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandlePresetChanged_Statics::ZonefallMasterSettingsWidget_eventHandlePresetChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandlePresetChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandlePresetChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallMasterSettingsWidget::execHandlePresetChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePresetChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
	P_NATIVE_END;
}
// ********** End Class UZonefallMasterSettingsWidget Function HandlePresetChanged *****************

// ********** Begin Class UZonefallMasterSettingsWidget Function HandleResetClicked ****************
struct Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleResetClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleResetClicked constinit property declarations ********************
// ********** End Function HandleResetClicked constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleResetClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallMasterSettingsWidget, nullptr, "HandleResetClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleResetClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleResetClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleResetClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleResetClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallMasterSettingsWidget::execHandleResetClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleResetClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallMasterSettingsWidget Function HandleResetClicked ******************

// ********** Begin Class UZonefallMasterSettingsWidget Function HandleRestartConfirmed ************
struct Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleRestartConfirmed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleRestartConfirmed constinit property declarations ****************
// ********** End Function HandleRestartConfirmed constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleRestartConfirmed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallMasterSettingsWidget, nullptr, "HandleRestartConfirmed", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleRestartConfirmed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleRestartConfirmed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleRestartConfirmed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleRestartConfirmed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallMasterSettingsWidget::execHandleRestartConfirmed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleRestartConfirmed();
	P_NATIVE_END;
}
// ********** End Class UZonefallMasterSettingsWidget Function HandleRestartConfirmed **************

// ********** Begin Class UZonefallMasterSettingsWidget Function HandleSliderChanged ***************
struct Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleSliderChanged_Statics
{
	struct ZonefallMasterSettingsWidget_eventHandleSliderChanged_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleSliderChanged constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleSliderChanged constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleSliderChanged Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleSliderChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallMasterSettingsWidget_eventHandleSliderChanged_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleSliderChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleSliderChanged_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleSliderChanged_Statics::PropPointers) < 2048);
// ********** End Function HandleSliderChanged Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleSliderChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallMasterSettingsWidget, nullptr, "HandleSliderChanged", 	Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleSliderChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleSliderChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleSliderChanged_Statics::ZonefallMasterSettingsWidget_eventHandleSliderChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleSliderChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleSliderChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleSliderChanged_Statics::ZonefallMasterSettingsWidget_eventHandleSliderChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleSliderChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleSliderChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallMasterSettingsWidget::execHandleSliderChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSliderChanged(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UZonefallMasterSettingsWidget Function HandleSliderChanged *****************

// ********** Begin Class UZonefallMasterSettingsWidget Function HandleTabAudio ********************
struct Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabAudio_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleTabAudio constinit property declarations ************************
// ********** End Function HandleTabAudio constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallMasterSettingsWidget, nullptr, "HandleTabAudio", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabAudio_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallMasterSettingsWidget::execHandleTabAudio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTabAudio();
	P_NATIVE_END;
}
// ********** End Class UZonefallMasterSettingsWidget Function HandleTabAudio **********************

// ********** Begin Class UZonefallMasterSettingsWidget Function HandleTabControls *****************
struct Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabControls_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleTabControls constinit property declarations *********************
// ********** End Function HandleTabControls constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabControls_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallMasterSettingsWidget, nullptr, "HandleTabControls", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabControls_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabControls_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabControls()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabControls_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallMasterSettingsWidget::execHandleTabControls)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTabControls();
	P_NATIVE_END;
}
// ********** End Class UZonefallMasterSettingsWidget Function HandleTabControls *******************

// ********** Begin Class UZonefallMasterSettingsWidget Function HandleTabGraphics *****************
struct Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabGraphics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleTabGraphics constinit property declarations *********************
// ********** End Function HandleTabGraphics constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabGraphics_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallMasterSettingsWidget, nullptr, "HandleTabGraphics", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabGraphics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabGraphics_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabGraphics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabGraphics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallMasterSettingsWidget::execHandleTabGraphics)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTabGraphics();
	P_NATIVE_END;
}
// ********** End Class UZonefallMasterSettingsWidget Function HandleTabGraphics *******************

// ********** Begin Class UZonefallMasterSettingsWidget Function HandleTabLanguage *****************
struct Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabLanguage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleTabLanguage constinit property declarations *********************
// ********** End Function HandleTabLanguage constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabLanguage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallMasterSettingsWidget, nullptr, "HandleTabLanguage", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabLanguage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabLanguage_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabLanguage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabLanguage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallMasterSettingsWidget::execHandleTabLanguage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTabLanguage();
	P_NATIVE_END;
}
// ********** End Class UZonefallMasterSettingsWidget Function HandleTabLanguage *******************

// ********** Begin Class UZonefallMasterSettingsWidget Function RefreshFromSettings ***************
struct Z_Construct_UFunction_UZonefallMasterSettingsWidget_RefreshFromSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RefreshFromSettings constinit property declarations *******************
// ********** End Function RefreshFromSettings constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallMasterSettingsWidget_RefreshFromSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallMasterSettingsWidget, nullptr, "RefreshFromSettings", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_RefreshFromSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallMasterSettingsWidget_RefreshFromSettings_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallMasterSettingsWidget_RefreshFromSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallMasterSettingsWidget_RefreshFromSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallMasterSettingsWidget::execRefreshFromSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshFromSettings();
	P_NATIVE_END;
}
// ********** End Class UZonefallMasterSettingsWidget Function RefreshFromSettings *****************

// ********** Begin Class UZonefallMasterSettingsWidget Function ResetToDefaults *******************
struct Z_Construct_UFunction_UZonefallMasterSettingsWidget_ResetToDefaults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetToDefaults constinit property declarations ***********************
// ********** End Function ResetToDefaults constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallMasterSettingsWidget_ResetToDefaults_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallMasterSettingsWidget, nullptr, "ResetToDefaults", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMasterSettingsWidget_ResetToDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallMasterSettingsWidget_ResetToDefaults_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallMasterSettingsWidget_ResetToDefaults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallMasterSettingsWidget_ResetToDefaults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallMasterSettingsWidget::execResetToDefaults)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetToDefaults();
	P_NATIVE_END;
}
// ********** End Class UZonefallMasterSettingsWidget Function ResetToDefaults *********************

// ********** Begin Class UZonefallMasterSettingsWidget ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallMasterSettingsWidget;
UClass* UZonefallMasterSettingsWidget::GetPrivateStaticClass()
{
	using TClass = UZonefallMasterSettingsWidget;
	if (!Z_Registration_Info_UClass_UZonefallMasterSettingsWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallMasterSettingsWidget"),
			Z_Registration_Info_UClass_UZonefallMasterSettingsWidget.InnerSingleton,
			StaticRegisterNativesUZonefallMasterSettingsWidget,
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
	return Z_Registration_Info_UClass_UZonefallMasterSettingsWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallMasterSettingsWidget_NoRegister()
{
	return UZonefallMasterSettingsWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Fully self-assembling master settings screen (no Blueprint needed).\n * Tabs: GRAPHICS | AUDIO | CONTROLS.\n *  - Graphics & Audio are driven by UZonefallSettingsDataObject.\n *  - Controls rebind the player character's Enhanced Input keys live (click + press a key).\n */" },
#endif
		{ "IncludePath", "UI/ZonefallMasterSettingsWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fully self-assembling master settings screen (no Blueprint needed).\nTabs: GRAPHICS | AUDIO | CONTROLS.\n - Graphics & Audio are driven by UZonefallSettingsDataObject.\n - Controls rebind the player character's Enhanced Input keys live (click + press a key)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBackRequested_MetaData[] = {
		{ "Category", "Zonefall|Settings" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundTint_MetaData[] = {
		{ "Category", "Zonefall|Settings|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccentColor_MetaData[] = {
		{ "Category", "Zonefall|Settings|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PanelTint_MetaData[] = {
		{ "Category", "Zonefall|Settings|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleFontSize_MetaData[] = {
		{ "Category", "Zonefall|Settings|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyFontSize_MetaData[] = {
		{ "Category", "Zonefall|Settings|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBorder_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodySwitcher_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabGraphicsButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabAudioButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabControlsButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabLanguageButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LanguageCombo_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Language tab.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Language tab." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetCombo_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Graphics controls.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Graphics controls." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayModeCombo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QualityCombo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionCombo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VSyncCombo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPSLimitCombo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LumenCombo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloudsCombo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResScaleCombo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DLSSCombo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameGenCombo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FSRCombo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FSRFrameGenCombo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectXCombo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingCombo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrightnessSlider_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVSlider_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedQualityCombos_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Advanced per-group quality combos (parallel arrays: combo[i] <-> group[i]).\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Advanced per-group quality combos (parallel arrays: combo[i] <-> group[i])." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedQualityGroups_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SensitivitySlider_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Look / mouse controls.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look / mouse controls." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvertYCheck_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterSlider_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Audio controls.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Audio controls." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SfxSlider_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicSlider_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceSlider_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlsBox_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Controls tab.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls tab." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeybindButtons_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderValueLabels_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map of slider -> value label for live numeric readouts.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of slider -> value label for live numeric readouts." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bListeningForKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListeningActionId_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMasterSettingsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallMasterSettingsWidget constinit property declarations ************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBackRequested;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundTint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccentColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PanelTint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TitleFontSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BodyFontSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingsObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodySwitcher;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatusText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TabGraphicsButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TabAudioButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TabControlsButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TabLanguageButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LanguageCombo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PresetCombo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayModeCombo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QualityCombo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResolutionCombo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VSyncCombo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FPSLimitCombo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LumenCombo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CloudsCombo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResScaleCombo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DLSSCombo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrameGenCombo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FSRCombo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FSRFrameGenCombo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DirectXCombo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RayTracingCombo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrightnessSlider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FOVSlider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdvancedQualityCombos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdvancedQualityCombos;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AdvancedQualityGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdvancedQualityGroups;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SensitivitySlider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InvertYCheck;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterSlider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SfxSlider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MusicSlider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceSlider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlsBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeybindButtons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KeybindButtons;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SliderValueLabels_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SliderValueLabels_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SliderValueLabels;
	static void NewProp_bListeningForKey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bListeningForKey;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ListeningActionId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallMasterSettingsWidget constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ApplyNow"), .Pointer = &UZonefallMasterSettingsWidget::execApplyNow },
		{ .NameUTF8 = UTF8TEXT("HandleApplyClicked"), .Pointer = &UZonefallMasterSettingsWidget::execHandleApplyClicked },
		{ .NameUTF8 = UTF8TEXT("HandleBackClicked"), .Pointer = &UZonefallMasterSettingsWidget::execHandleBackClicked },
		{ .NameUTF8 = UTF8TEXT("HandleInvertYChanged"), .Pointer = &UZonefallMasterSettingsWidget::execHandleInvertYChanged },
		{ .NameUTF8 = UTF8TEXT("HandleKeybindClicked"), .Pointer = &UZonefallMasterSettingsWidget::execHandleKeybindClicked },
		{ .NameUTF8 = UTF8TEXT("HandleLanguageComboChanged"), .Pointer = &UZonefallMasterSettingsWidget::execHandleLanguageComboChanged },
		{ .NameUTF8 = UTF8TEXT("HandlePresetChanged"), .Pointer = &UZonefallMasterSettingsWidget::execHandlePresetChanged },
		{ .NameUTF8 = UTF8TEXT("HandleResetClicked"), .Pointer = &UZonefallMasterSettingsWidget::execHandleResetClicked },
		{ .NameUTF8 = UTF8TEXT("HandleRestartConfirmed"), .Pointer = &UZonefallMasterSettingsWidget::execHandleRestartConfirmed },
		{ .NameUTF8 = UTF8TEXT("HandleSliderChanged"), .Pointer = &UZonefallMasterSettingsWidget::execHandleSliderChanged },
		{ .NameUTF8 = UTF8TEXT("HandleTabAudio"), .Pointer = &UZonefallMasterSettingsWidget::execHandleTabAudio },
		{ .NameUTF8 = UTF8TEXT("HandleTabControls"), .Pointer = &UZonefallMasterSettingsWidget::execHandleTabControls },
		{ .NameUTF8 = UTF8TEXT("HandleTabGraphics"), .Pointer = &UZonefallMasterSettingsWidget::execHandleTabGraphics },
		{ .NameUTF8 = UTF8TEXT("HandleTabLanguage"), .Pointer = &UZonefallMasterSettingsWidget::execHandleTabLanguage },
		{ .NameUTF8 = UTF8TEXT("RefreshFromSettings"), .Pointer = &UZonefallMasterSettingsWidget::execRefreshFromSettings },
		{ .NameUTF8 = UTF8TEXT("ResetToDefaults"), .Pointer = &UZonefallMasterSettingsWidget::execResetToDefaults },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallMasterSettingsWidget_ApplyNow, "ApplyNow" }, // 2949509689
		{ &Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleApplyClicked, "HandleApplyClicked" }, // 3452300343
		{ &Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleBackClicked, "HandleBackClicked" }, // 404815370
		{ &Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleInvertYChanged, "HandleInvertYChanged" }, // 2265949887
		{ &Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleKeybindClicked, "HandleKeybindClicked" }, // 2017256098
		{ &Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleLanguageComboChanged, "HandleLanguageComboChanged" }, // 1780583309
		{ &Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandlePresetChanged, "HandlePresetChanged" }, // 3692130054
		{ &Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleResetClicked, "HandleResetClicked" }, // 3369448625
		{ &Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleRestartConfirmed, "HandleRestartConfirmed" }, // 128507039
		{ &Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleSliderChanged, "HandleSliderChanged" }, // 3201436560
		{ &Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabAudio, "HandleTabAudio" }, // 2877514471
		{ &Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabControls, "HandleTabControls" }, // 2622578343
		{ &Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabGraphics, "HandleTabGraphics" }, // 3732438045
		{ &Z_Construct_UFunction_UZonefallMasterSettingsWidget_HandleTabLanguage, "HandleTabLanguage" }, // 3520360209
		{ &Z_Construct_UFunction_UZonefallMasterSettingsWidget_RefreshFromSettings, "RefreshFromSettings" }, // 3061308522
		{ &Z_Construct_UFunction_UZonefallMasterSettingsWidget_ResetToDefaults, "ResetToDefaults" }, // 3820828065
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallMasterSettingsWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics

// ********** Begin Class UZonefallMasterSettingsWidget Property Definitions ***********************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_OnBackRequested = { "OnBackRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, OnBackRequested), Z_Construct_UDelegateFunction_UIWorld_OnZonefallMasterSettingsBack__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBackRequested_MetaData), NewProp_OnBackRequested_MetaData) }; // 3884372182
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_BackgroundTint = { "BackgroundTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, BackgroundTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundTint_MetaData), NewProp_BackgroundTint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_AccentColor = { "AccentColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, AccentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccentColor_MetaData), NewProp_AccentColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_PanelTint = { "PanelTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, PanelTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PanelTint_MetaData), NewProp_PanelTint_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_TitleFontSize = { "TitleFontSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, TitleFontSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleFontSize_MetaData), NewProp_TitleFontSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_BodyFontSize = { "BodyFontSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, BodyFontSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyFontSize_MetaData), NewProp_BodyFontSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_SettingsObject = { "SettingsObject", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, SettingsObject), Z_Construct_UClass_UZonefallSettingsDataObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsObject_MetaData), NewProp_SettingsObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_RootBorder = { "RootBorder", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, RootBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBorder_MetaData), NewProp_RootBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_BodySwitcher = { "BodySwitcher", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, BodySwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodySwitcher_MetaData), NewProp_BodySwitcher_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_StatusText = { "StatusText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, StatusText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusText_MetaData), NewProp_StatusText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_TabGraphicsButton = { "TabGraphicsButton", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, TabGraphicsButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabGraphicsButton_MetaData), NewProp_TabGraphicsButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_TabAudioButton = { "TabAudioButton", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, TabAudioButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabAudioButton_MetaData), NewProp_TabAudioButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_TabControlsButton = { "TabControlsButton", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, TabControlsButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabControlsButton_MetaData), NewProp_TabControlsButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_TabLanguageButton = { "TabLanguageButton", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, TabLanguageButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabLanguageButton_MetaData), NewProp_TabLanguageButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_LanguageCombo = { "LanguageCombo", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, LanguageCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LanguageCombo_MetaData), NewProp_LanguageCombo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_PresetCombo = { "PresetCombo", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, PresetCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetCombo_MetaData), NewProp_PresetCombo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_DisplayModeCombo = { "DisplayModeCombo", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, DisplayModeCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayModeCombo_MetaData), NewProp_DisplayModeCombo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_QualityCombo = { "QualityCombo", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, QualityCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QualityCombo_MetaData), NewProp_QualityCombo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_ResolutionCombo = { "ResolutionCombo", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, ResolutionCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionCombo_MetaData), NewProp_ResolutionCombo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_VSyncCombo = { "VSyncCombo", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, VSyncCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VSyncCombo_MetaData), NewProp_VSyncCombo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_FPSLimitCombo = { "FPSLimitCombo", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, FPSLimitCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPSLimitCombo_MetaData), NewProp_FPSLimitCombo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_LumenCombo = { "LumenCombo", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, LumenCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LumenCombo_MetaData), NewProp_LumenCombo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_CloudsCombo = { "CloudsCombo", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, CloudsCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloudsCombo_MetaData), NewProp_CloudsCombo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_ResScaleCombo = { "ResScaleCombo", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, ResScaleCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResScaleCombo_MetaData), NewProp_ResScaleCombo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_DLSSCombo = { "DLSSCombo", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, DLSSCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DLSSCombo_MetaData), NewProp_DLSSCombo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_FrameGenCombo = { "FrameGenCombo", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, FrameGenCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameGenCombo_MetaData), NewProp_FrameGenCombo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_FSRCombo = { "FSRCombo", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, FSRCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FSRCombo_MetaData), NewProp_FSRCombo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_FSRFrameGenCombo = { "FSRFrameGenCombo", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, FSRFrameGenCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FSRFrameGenCombo_MetaData), NewProp_FSRFrameGenCombo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_DirectXCombo = { "DirectXCombo", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, DirectXCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectXCombo_MetaData), NewProp_DirectXCombo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_RayTracingCombo = { "RayTracingCombo", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, RayTracingCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayTracingCombo_MetaData), NewProp_RayTracingCombo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_BrightnessSlider = { "BrightnessSlider", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, BrightnessSlider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrightnessSlider_MetaData), NewProp_BrightnessSlider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_FOVSlider = { "FOVSlider", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, FOVSlider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVSlider_MetaData), NewProp_FOVSlider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_AdvancedQualityCombos_Inner = { "AdvancedQualityCombos", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_AdvancedQualityCombos = { "AdvancedQualityCombos", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, AdvancedQualityCombos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedQualityCombos_MetaData), NewProp_AdvancedQualityCombos_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_AdvancedQualityGroups_Inner = { "AdvancedQualityGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_AdvancedQualityGroups = { "AdvancedQualityGroups", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, AdvancedQualityGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedQualityGroups_MetaData), NewProp_AdvancedQualityGroups_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_SensitivitySlider = { "SensitivitySlider", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, SensitivitySlider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SensitivitySlider_MetaData), NewProp_SensitivitySlider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_InvertYCheck = { "InvertYCheck", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, InvertYCheck), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvertYCheck_MetaData), NewProp_InvertYCheck_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_MasterSlider = { "MasterSlider", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, MasterSlider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterSlider_MetaData), NewProp_MasterSlider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_SfxSlider = { "SfxSlider", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, SfxSlider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SfxSlider_MetaData), NewProp_SfxSlider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_MusicSlider = { "MusicSlider", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, MusicSlider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicSlider_MetaData), NewProp_MusicSlider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_VoiceSlider = { "VoiceSlider", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, VoiceSlider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceSlider_MetaData), NewProp_VoiceSlider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_ControlsBox = { "ControlsBox", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, ControlsBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlsBox_MetaData), NewProp_ControlsBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_KeybindButtons_Inner = { "KeybindButtons", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UZonefallKeybindButton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_KeybindButtons = { "KeybindButtons", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, KeybindButtons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeybindButtons_MetaData), NewProp_KeybindButtons_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_SliderValueLabels_ValueProp = { "SliderValueLabels", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_SliderValueLabels_Key_KeyProp = { "SliderValueLabels_Key", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_SliderValueLabels = { "SliderValueLabels", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, SliderValueLabels), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderValueLabels_MetaData), NewProp_SliderValueLabels_MetaData) };
void Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_bListeningForKey_SetBit(void* Obj)
{
	((UZonefallMasterSettingsWidget*)Obj)->bListeningForKey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_bListeningForKey = { "bListeningForKey", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallMasterSettingsWidget), &Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_bListeningForKey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bListeningForKey_MetaData), NewProp_bListeningForKey_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_ListeningActionId = { "ListeningActionId", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMasterSettingsWidget, ListeningActionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListeningActionId_MetaData), NewProp_ListeningActionId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_OnBackRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_BackgroundTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_AccentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_PanelTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_TitleFontSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_BodyFontSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_SettingsObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_RootBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_BodySwitcher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_StatusText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_TabGraphicsButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_TabAudioButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_TabControlsButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_TabLanguageButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_LanguageCombo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_PresetCombo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_DisplayModeCombo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_QualityCombo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_ResolutionCombo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_VSyncCombo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_FPSLimitCombo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_LumenCombo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_CloudsCombo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_ResScaleCombo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_DLSSCombo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_FrameGenCombo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_FSRCombo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_FSRFrameGenCombo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_DirectXCombo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_RayTracingCombo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_BrightnessSlider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_FOVSlider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_AdvancedQualityCombos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_AdvancedQualityCombos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_AdvancedQualityGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_AdvancedQualityGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_SensitivitySlider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_InvertYCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_MasterSlider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_SfxSlider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_MusicSlider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_VoiceSlider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_ControlsBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_KeybindButtons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_KeybindButtons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_SliderValueLabels_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_SliderValueLabels_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_SliderValueLabels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_bListeningForKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::NewProp_ListeningActionId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::PropPointers) < 2048);
// ********** End Class UZonefallMasterSettingsWidget Property Definitions *************************
UObject* (*const Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::ClassParams = {
	&UZonefallMasterSettingsWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::Class_MetaDataParams)
};
void UZonefallMasterSettingsWidget::StaticRegisterNativesUZonefallMasterSettingsWidget()
{
	UClass* Class = UZonefallMasterSettingsWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallMasterSettingsWidget()
{
	if (!Z_Registration_Info_UClass_UZonefallMasterSettingsWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallMasterSettingsWidget.OuterSingleton, Z_Construct_UClass_UZonefallMasterSettingsWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallMasterSettingsWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallMasterSettingsWidget);
UZonefallMasterSettingsWidget::~UZonefallMasterSettingsWidget() {}
// ********** End Class UZonefallMasterSettingsWidget **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMasterSettingsWidget_h__Script_UIWorld_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZonefallKeybindButton, UZonefallKeybindButton::StaticClass, TEXT("UZonefallKeybindButton"), &Z_Registration_Info_UClass_UZonefallKeybindButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallKeybindButton), 1674345772U) },
		{ Z_Construct_UClass_UZonefallMasterSettingsWidget, UZonefallMasterSettingsWidget::StaticClass, TEXT("UZonefallMasterSettingsWidget"), &Z_Registration_Info_UClass_UZonefallMasterSettingsWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallMasterSettingsWidget), 3027121376U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMasterSettingsWidget_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMasterSettingsWidget_h__Script_UIWorld_2760096485{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMasterSettingsWidget_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMasterSettingsWidget_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
