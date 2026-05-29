// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZonefallInventoryWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallInventoryWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallInventoryComponent_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallInventorySlotButton();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallInventorySlotButton_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallInventoryWidget();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallInventoryWidget_NoRegister();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallInventoryClosed__DelegateSignature();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallInventorySlotClicked__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWrapBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnZonefallInventorySlotClicked ***************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnZonefallInventorySlotClicked__DelegateSignature_Statics
{
	struct _Script_UIWorld_eventOnZonefallInventorySlotClicked_Parms
	{
		int32 SlotIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnZonefallInventorySlotClicked constinit property declarations *******
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnZonefallInventorySlotClicked constinit property declarations *********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnZonefallInventorySlotClicked Property Definitions ******************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UIWorld_OnZonefallInventorySlotClicked__DelegateSignature_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UIWorld_eventOnZonefallInventorySlotClicked_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UIWorld_OnZonefallInventorySlotClicked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIWorld_OnZonefallInventorySlotClicked__DelegateSignature_Statics::NewProp_SlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallInventorySlotClicked__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnZonefallInventorySlotClicked Property Definitions ********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnZonefallInventorySlotClicked__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnZonefallInventorySlotClicked__DelegateSignature", 	Z_Construct_UDelegateFunction_UIWorld_OnZonefallInventorySlotClicked__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallInventorySlotClicked__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_UIWorld_OnZonefallInventorySlotClicked__DelegateSignature_Statics::_Script_UIWorld_eventOnZonefallInventorySlotClicked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallInventorySlotClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnZonefallInventorySlotClicked__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UIWorld_OnZonefallInventorySlotClicked__DelegateSignature_Statics::_Script_UIWorld_eventOnZonefallInventorySlotClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallInventorySlotClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnZonefallInventorySlotClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnZonefallInventorySlotClicked_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallInventorySlotClicked, int32 SlotIndex)
{
	struct _Script_UIWorld_eventOnZonefallInventorySlotClicked_Parms
	{
		int32 SlotIndex;
	};
	_Script_UIWorld_eventOnZonefallInventorySlotClicked_Parms Parms;
	Parms.SlotIndex=SlotIndex;
	OnZonefallInventorySlotClicked.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnZonefallInventorySlotClicked *****************************************

// ********** Begin Delegate FOnZonefallInventoryClosed ********************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnZonefallInventoryClosed__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnZonefallInventoryClosed constinit property declarations ************
// ********** End Delegate FOnZonefallInventoryClosed constinit property declarations **************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnZonefallInventoryClosed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnZonefallInventoryClosed__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallInventoryClosed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnZonefallInventoryClosed__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallInventoryClosed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnZonefallInventoryClosed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnZonefallInventoryClosed_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallInventoryClosed)
{
	OnZonefallInventoryClosed.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnZonefallInventoryClosed **********************************************

// ********** Begin Class UZonefallInventorySlotButton Function HandleInternalClicked **************
struct Z_Construct_UFunction_UZonefallInventorySlotButton_HandleInternalClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleInternalClicked constinit property declarations *****************
// ********** End Function HandleInternalClicked constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallInventorySlotButton_HandleInternalClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallInventorySlotButton, nullptr, "HandleInternalClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventorySlotButton_HandleInternalClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallInventorySlotButton_HandleInternalClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallInventorySlotButton_HandleInternalClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallInventorySlotButton_HandleInternalClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallInventorySlotButton::execHandleInternalClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleInternalClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallInventorySlotButton Function HandleInternalClicked ****************

// ********** Begin Class UZonefallInventorySlotButton *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallInventorySlotButton;
UClass* UZonefallInventorySlotButton::GetPrivateStaticClass()
{
	using TClass = UZonefallInventorySlotButton;
	if (!Z_Registration_Info_UClass_UZonefallInventorySlotButton.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallInventorySlotButton"),
			Z_Registration_Info_UClass_UZonefallInventorySlotButton.InnerSingleton,
			StaticRegisterNativesUZonefallInventorySlotButton,
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
	return Z_Registration_Info_UClass_UZonefallInventorySlotButton.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallInventorySlotButton_NoRegister()
{
	return UZonefallInventorySlotButton::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallInventorySlotButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A UButton that remembers an integer id (slot index or category) and re-broadcasts clicks with it. */" },
#endif
		{ "IncludePath", "UI/ZonefallInventoryWidget.h" },
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A UButton that remembers an integer id (slot index or category) and re-broadcasts clicks with it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSlotClicked_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallInventorySlotButton constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSlotClicked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallInventorySlotButton constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleInternalClicked"), .Pointer = &UZonefallInventorySlotButton::execHandleInternalClicked },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallInventorySlotButton_HandleInternalClicked, "HandleInternalClicked" }, // 2017473873
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallInventorySlotButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallInventorySlotButton_Statics

// ********** Begin Class UZonefallInventorySlotButton Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallInventorySlotButton_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventorySlotButton, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotIndex_MetaData), NewProp_SlotIndex_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallInventorySlotButton_Statics::NewProp_OnSlotClicked = { "OnSlotClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventorySlotButton, OnSlotClicked), Z_Construct_UDelegateFunction_UIWorld_OnZonefallInventorySlotClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSlotClicked_MetaData), NewProp_OnSlotClicked_MetaData) }; // 1278016691
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallInventorySlotButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventorySlotButton_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventorySlotButton_Statics::NewProp_OnSlotClicked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallInventorySlotButton_Statics::PropPointers) < 2048);
// ********** End Class UZonefallInventorySlotButton Property Definitions **************************
UObject* (*const Z_Construct_UClass_UZonefallInventorySlotButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UButton,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallInventorySlotButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallInventorySlotButton_Statics::ClassParams = {
	&UZonefallInventorySlotButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallInventorySlotButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallInventorySlotButton_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallInventorySlotButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallInventorySlotButton_Statics::Class_MetaDataParams)
};
void UZonefallInventorySlotButton::StaticRegisterNativesUZonefallInventorySlotButton()
{
	UClass* Class = UZonefallInventorySlotButton::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallInventorySlotButton_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallInventorySlotButton()
{
	if (!Z_Registration_Info_UClass_UZonefallInventorySlotButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallInventorySlotButton.OuterSingleton, Z_Construct_UClass_UZonefallInventorySlotButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallInventorySlotButton.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallInventorySlotButton);
UZonefallInventorySlotButton::~UZonefallInventorySlotButton() {}
// ********** End Class UZonefallInventorySlotButton ***********************************************

// ********** Begin Class UZonefallInventoryWidget Function HandleBackClicked **********************
struct Z_Construct_UFunction_UZonefallInventoryWidget_HandleBackClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleBackClicked constinit property declarations *********************
// ********** End Function HandleBackClicked constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallInventoryWidget_HandleBackClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallInventoryWidget, nullptr, "HandleBackClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryWidget_HandleBackClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallInventoryWidget_HandleBackClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallInventoryWidget_HandleBackClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallInventoryWidget_HandleBackClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallInventoryWidget::execHandleBackClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleBackClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallInventoryWidget Function HandleBackClicked ************************

// ********** Begin Class UZonefallInventoryWidget Function HandleCategoryClicked ******************
struct Z_Construct_UFunction_UZonefallInventoryWidget_HandleCategoryClicked_Statics
{
	struct ZonefallInventoryWidget_eventHandleCategoryClicked_Parms
	{
		int32 CategoryId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCategoryClicked constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_CategoryId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCategoryClicked constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCategoryClicked Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZonefallInventoryWidget_HandleCategoryClicked_Statics::NewProp_CategoryId = { "CategoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallInventoryWidget_eventHandleCategoryClicked_Parms, CategoryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallInventoryWidget_HandleCategoryClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallInventoryWidget_HandleCategoryClicked_Statics::NewProp_CategoryId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryWidget_HandleCategoryClicked_Statics::PropPointers) < 2048);
// ********** End Function HandleCategoryClicked Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallInventoryWidget_HandleCategoryClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallInventoryWidget, nullptr, "HandleCategoryClicked", 	Z_Construct_UFunction_UZonefallInventoryWidget_HandleCategoryClicked_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryWidget_HandleCategoryClicked_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallInventoryWidget_HandleCategoryClicked_Statics::ZonefallInventoryWidget_eventHandleCategoryClicked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryWidget_HandleCategoryClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallInventoryWidget_HandleCategoryClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallInventoryWidget_HandleCategoryClicked_Statics::ZonefallInventoryWidget_eventHandleCategoryClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallInventoryWidget_HandleCategoryClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallInventoryWidget_HandleCategoryClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallInventoryWidget::execHandleCategoryClicked)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CategoryId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCategoryClicked(Z_Param_CategoryId);
	P_NATIVE_END;
}
// ********** End Class UZonefallInventoryWidget Function HandleCategoryClicked ********************

// ********** Begin Class UZonefallInventoryWidget Function HandleDropClicked **********************
struct Z_Construct_UFunction_UZonefallInventoryWidget_HandleDropClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleDropClicked constinit property declarations *********************
// ********** End Function HandleDropClicked constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallInventoryWidget_HandleDropClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallInventoryWidget, nullptr, "HandleDropClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryWidget_HandleDropClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallInventoryWidget_HandleDropClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallInventoryWidget_HandleDropClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallInventoryWidget_HandleDropClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallInventoryWidget::execHandleDropClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDropClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallInventoryWidget Function HandleDropClicked ************************

// ********** Begin Class UZonefallInventoryWidget Function HandleInventoryChanged *****************
struct Z_Construct_UFunction_UZonefallInventoryWidget_HandleInventoryChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleInventoryChanged constinit property declarations ****************
// ********** End Function HandleInventoryChanged constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallInventoryWidget_HandleInventoryChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallInventoryWidget, nullptr, "HandleInventoryChanged", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryWidget_HandleInventoryChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallInventoryWidget_HandleInventoryChanged_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallInventoryWidget_HandleInventoryChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallInventoryWidget_HandleInventoryChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallInventoryWidget::execHandleInventoryChanged)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleInventoryChanged();
	P_NATIVE_END;
}
// ********** End Class UZonefallInventoryWidget Function HandleInventoryChanged *******************

// ********** Begin Class UZonefallInventoryWidget Function HandleSlotClicked **********************
struct Z_Construct_UFunction_UZonefallInventoryWidget_HandleSlotClicked_Statics
{
	struct ZonefallInventoryWidget_eventHandleSlotClicked_Parms
	{
		int32 SlotIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleSlotClicked constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleSlotClicked constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleSlotClicked Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZonefallInventoryWidget_HandleSlotClicked_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallInventoryWidget_eventHandleSlotClicked_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallInventoryWidget_HandleSlotClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallInventoryWidget_HandleSlotClicked_Statics::NewProp_SlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryWidget_HandleSlotClicked_Statics::PropPointers) < 2048);
// ********** End Function HandleSlotClicked Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallInventoryWidget_HandleSlotClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallInventoryWidget, nullptr, "HandleSlotClicked", 	Z_Construct_UFunction_UZonefallInventoryWidget_HandleSlotClicked_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryWidget_HandleSlotClicked_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallInventoryWidget_HandleSlotClicked_Statics::ZonefallInventoryWidget_eventHandleSlotClicked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryWidget_HandleSlotClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallInventoryWidget_HandleSlotClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallInventoryWidget_HandleSlotClicked_Statics::ZonefallInventoryWidget_eventHandleSlotClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallInventoryWidget_HandleSlotClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallInventoryWidget_HandleSlotClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallInventoryWidget::execHandleSlotClicked)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSlotClicked(Z_Param_SlotIndex);
	P_NATIVE_END;
}
// ********** End Class UZonefallInventoryWidget Function HandleSlotClicked ************************

// ********** Begin Class UZonefallInventoryWidget Function HandleUseClicked ***********************
struct Z_Construct_UFunction_UZonefallInventoryWidget_HandleUseClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleUseClicked constinit property declarations **********************
// ********** End Function HandleUseClicked constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallInventoryWidget_HandleUseClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallInventoryWidget, nullptr, "HandleUseClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryWidget_HandleUseClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallInventoryWidget_HandleUseClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallInventoryWidget_HandleUseClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallInventoryWidget_HandleUseClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallInventoryWidget::execHandleUseClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleUseClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallInventoryWidget Function HandleUseClicked *************************

// ********** Begin Class UZonefallInventoryWidget Function SetInventory ***************************
struct Z_Construct_UFunction_UZonefallInventoryWidget_SetInventory_Statics
{
	struct ZonefallInventoryWidget_eventSetInventory_Parms
	{
		UZonefallInventoryComponent* InInventory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Binds this widget to an inventory and does an initial build. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Binds this widget to an inventory and does an initial build." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetInventory constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InInventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetInventory constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetInventory Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZonefallInventoryWidget_SetInventory_Statics::NewProp_InInventory = { "InInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallInventoryWidget_eventSetInventory_Parms, InInventory), Z_Construct_UClass_UZonefallInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InInventory_MetaData), NewProp_InInventory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallInventoryWidget_SetInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallInventoryWidget_SetInventory_Statics::NewProp_InInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryWidget_SetInventory_Statics::PropPointers) < 2048);
// ********** End Function SetInventory Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallInventoryWidget_SetInventory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallInventoryWidget, nullptr, "SetInventory", 	Z_Construct_UFunction_UZonefallInventoryWidget_SetInventory_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryWidget_SetInventory_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallInventoryWidget_SetInventory_Statics::ZonefallInventoryWidget_eventSetInventory_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallInventoryWidget_SetInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallInventoryWidget_SetInventory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallInventoryWidget_SetInventory_Statics::ZonefallInventoryWidget_eventSetInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallInventoryWidget_SetInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallInventoryWidget_SetInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallInventoryWidget::execSetInventory)
{
	P_GET_OBJECT(UZonefallInventoryComponent,Z_Param_InInventory);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInventory(Z_Param_InInventory);
	P_NATIVE_END;
}
// ********** End Class UZonefallInventoryWidget Function SetInventory *****************************

// ********** Begin Class UZonefallInventoryWidget *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallInventoryWidget;
UClass* UZonefallInventoryWidget::GetPrivateStaticClass()
{
	using TClass = UZonefallInventoryWidget;
	if (!Z_Registration_Info_UClass_UZonefallInventoryWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallInventoryWidget"),
			Z_Registration_Info_UClass_UZonefallInventoryWidget.InnerSingleton,
			StaticRegisterNativesUZonefallInventoryWidget,
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
	return Z_Registration_Info_UClass_UZonefallInventoryWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallInventoryWidget_NoRegister()
{
	return UZonefallInventoryWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallInventoryWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Fully self-assembled RDR2-satchel-style inventory UI (no Blueprint required).\n *\n *  - Category tabs across the top (ALL / PROVISIONS / MATERIALS / ...).\n *  - A 4-column grid of item slots with a quantity badge and a selection highlight.\n *  - A detail panel showing the selected item's name, description and \"At hand: X of Y\".\n *  - DROP / USE / BACK actions that route through the owning character's server RPCs.\n *\n * Rebuilds itself automatically whenever the bound inventory changes.\n */" },
#endif
		{ "IncludePath", "UI/ZonefallInventoryWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fully self-assembled RDR2-satchel-style inventory UI (no Blueprint required).\n\n - Category tabs across the top (ALL / PROVISIONS / MATERIALS / ...).\n - A 4-column grid of item slots with a quantity badge and a selection highlight.\n - A detail panel showing the selected item's name, description and \"At hand: X of Y\".\n - DROP / USE / BACK actions that route through the owning character's server RPCs.\n\nRebuilds itself automatically whenever the bound inventory changes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCloseRequested_MetaData[] = {
		{ "Category", "Zonefall|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fired when the player presses BACK (the character closes the satchel). */" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fired when the player presses BACK (the character closes the satchel)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundTint_MetaData[] = {
		{ "Category", "Zonefall|Inventory|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotTint_MetaData[] = {
		{ "Category", "Zonefall|Inventory|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionColor_MetaData[] = {
		{ "Category", "Zonefall|Inventory|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccentColor_MetaData[] = {
		{ "Category", "Zonefall|Inventory|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleFontSize_MetaData[] = {
		{ "Category", "Zonefall|Inventory|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyFontSize_MetaData[] = {
		{ "Category", "Zonefall|Inventory|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridColumns_MetaData[] = {
		{ "Category", "Zonefall|Inventory|Style" },
		{ "ClampMax", "8" },
		{ "ClampMin", "2" },
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBorder_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grid_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetailNameText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetailDescText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetailCountText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotButtons_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotBorders_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryButtons_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleItemIndices_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maps a grid cell -> real item index in the bound inventory (after category filtering).\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maps a grid cell -> real item index in the bound inventory (after category filtering)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCategoryFilter_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -1 = All, otherwise an EZonefallItemCategory value.\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-1 = All, otherwise an EZonefallItemCategory value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedItemIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallInventoryWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallInventoryWidget constinit property declarations *****************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCloseRequested;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundTint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectionColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccentColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TitleFontSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BodyFontSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridColumns;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundInventory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CountText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CategoryBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Grid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetailNameText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetailDescText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetailCountText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DropButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UseButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotButtons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SlotButtons;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotBorders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SlotBorders;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CategoryButtons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CategoryButtons;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VisibleItemIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VisibleItemIndices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentCategoryFilter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedItemIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallInventoryWidget constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleBackClicked"), .Pointer = &UZonefallInventoryWidget::execHandleBackClicked },
		{ .NameUTF8 = UTF8TEXT("HandleCategoryClicked"), .Pointer = &UZonefallInventoryWidget::execHandleCategoryClicked },
		{ .NameUTF8 = UTF8TEXT("HandleDropClicked"), .Pointer = &UZonefallInventoryWidget::execHandleDropClicked },
		{ .NameUTF8 = UTF8TEXT("HandleInventoryChanged"), .Pointer = &UZonefallInventoryWidget::execHandleInventoryChanged },
		{ .NameUTF8 = UTF8TEXT("HandleSlotClicked"), .Pointer = &UZonefallInventoryWidget::execHandleSlotClicked },
		{ .NameUTF8 = UTF8TEXT("HandleUseClicked"), .Pointer = &UZonefallInventoryWidget::execHandleUseClicked },
		{ .NameUTF8 = UTF8TEXT("SetInventory"), .Pointer = &UZonefallInventoryWidget::execSetInventory },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallInventoryWidget_HandleBackClicked, "HandleBackClicked" }, // 2282033605
		{ &Z_Construct_UFunction_UZonefallInventoryWidget_HandleCategoryClicked, "HandleCategoryClicked" }, // 261209624
		{ &Z_Construct_UFunction_UZonefallInventoryWidget_HandleDropClicked, "HandleDropClicked" }, // 1149090331
		{ &Z_Construct_UFunction_UZonefallInventoryWidget_HandleInventoryChanged, "HandleInventoryChanged" }, // 4179970036
		{ &Z_Construct_UFunction_UZonefallInventoryWidget_HandleSlotClicked, "HandleSlotClicked" }, // 176818694
		{ &Z_Construct_UFunction_UZonefallInventoryWidget_HandleUseClicked, "HandleUseClicked" }, // 4027827106
		{ &Z_Construct_UFunction_UZonefallInventoryWidget_SetInventory, "SetInventory" }, // 671450111
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallInventoryWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallInventoryWidget_Statics

// ********** Begin Class UZonefallInventoryWidget Property Definitions ****************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_OnCloseRequested = { "OnCloseRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, OnCloseRequested), Z_Construct_UDelegateFunction_UIWorld_OnZonefallInventoryClosed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCloseRequested_MetaData), NewProp_OnCloseRequested_MetaData) }; // 784186022
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_BackgroundTint = { "BackgroundTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, BackgroundTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundTint_MetaData), NewProp_BackgroundTint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_SlotTint = { "SlotTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, SlotTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotTint_MetaData), NewProp_SlotTint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_SelectionColor = { "SelectionColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, SelectionColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionColor_MetaData), NewProp_SelectionColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_AccentColor = { "AccentColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, AccentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccentColor_MetaData), NewProp_AccentColor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_TitleFontSize = { "TitleFontSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, TitleFontSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleFontSize_MetaData), NewProp_TitleFontSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_BodyFontSize = { "BodyFontSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, BodyFontSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyFontSize_MetaData), NewProp_BodyFontSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_GridColumns = { "GridColumns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, GridColumns), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridColumns_MetaData), NewProp_GridColumns_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_BoundInventory = { "BoundInventory", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, BoundInventory), Z_Construct_UClass_UZonefallInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundInventory_MetaData), NewProp_BoundInventory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_RootBorder = { "RootBorder", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, RootBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBorder_MetaData), NewProp_RootBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_RootBox = { "RootBox", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, RootBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBox_MetaData), NewProp_RootBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, TitleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleText_MetaData), NewProp_TitleText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_CountText = { "CountText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, CountText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountText_MetaData), NewProp_CountText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_CategoryBar = { "CategoryBar", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, CategoryBar), Z_Construct_UClass_UWrapBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryBar_MetaData), NewProp_CategoryBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_Grid = { "Grid", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, Grid), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grid_MetaData), NewProp_Grid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_DetailNameText = { "DetailNameText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, DetailNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetailNameText_MetaData), NewProp_DetailNameText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_DetailDescText = { "DetailDescText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, DetailDescText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetailDescText_MetaData), NewProp_DetailDescText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_DetailCountText = { "DetailCountText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, DetailCountText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetailCountText_MetaData), NewProp_DetailCountText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_DropButton = { "DropButton", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, DropButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropButton_MetaData), NewProp_DropButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_UseButton = { "UseButton", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, UseButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseButton_MetaData), NewProp_UseButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_BackButton = { "BackButton", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, BackButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackButton_MetaData), NewProp_BackButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_SlotButtons_Inner = { "SlotButtons", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UZonefallInventorySlotButton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_SlotButtons = { "SlotButtons", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, SlotButtons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotButtons_MetaData), NewProp_SlotButtons_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_SlotBorders_Inner = { "SlotBorders", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_SlotBorders = { "SlotBorders", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, SlotBorders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotBorders_MetaData), NewProp_SlotBorders_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_CategoryButtons_Inner = { "CategoryButtons", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UZonefallInventorySlotButton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_CategoryButtons = { "CategoryButtons", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, CategoryButtons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryButtons_MetaData), NewProp_CategoryButtons_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_VisibleItemIndices_Inner = { "VisibleItemIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_VisibleItemIndices = { "VisibleItemIndices", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, VisibleItemIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleItemIndices_MetaData), NewProp_VisibleItemIndices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_CurrentCategoryFilter = { "CurrentCategoryFilter", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, CurrentCategoryFilter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCategoryFilter_MetaData), NewProp_CurrentCategoryFilter_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_SelectedItemIndex = { "SelectedItemIndex", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallInventoryWidget, SelectedItemIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedItemIndex_MetaData), NewProp_SelectedItemIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallInventoryWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_OnCloseRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_BackgroundTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_SlotTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_SelectionColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_AccentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_TitleFontSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_BodyFontSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_GridColumns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_BoundInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_RootBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_RootBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_TitleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_CountText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_CategoryBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_Grid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_DetailNameText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_DetailDescText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_DetailCountText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_DropButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_UseButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_BackButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_SlotButtons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_SlotButtons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_SlotBorders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_SlotBorders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_CategoryButtons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_CategoryButtons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_VisibleItemIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_VisibleItemIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_CurrentCategoryFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallInventoryWidget_Statics::NewProp_SelectedItemIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallInventoryWidget_Statics::PropPointers) < 2048);
// ********** End Class UZonefallInventoryWidget Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UZonefallInventoryWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallInventoryWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallInventoryWidget_Statics::ClassParams = {
	&UZonefallInventoryWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallInventoryWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallInventoryWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallInventoryWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallInventoryWidget_Statics::Class_MetaDataParams)
};
void UZonefallInventoryWidget::StaticRegisterNativesUZonefallInventoryWidget()
{
	UClass* Class = UZonefallInventoryWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallInventoryWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallInventoryWidget()
{
	if (!Z_Registration_Info_UClass_UZonefallInventoryWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallInventoryWidget.OuterSingleton, Z_Construct_UClass_UZonefallInventoryWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallInventoryWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallInventoryWidget);
UZonefallInventoryWidget::~UZonefallInventoryWidget() {}
// ********** End Class UZonefallInventoryWidget ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallInventoryWidget_h__Script_UIWorld_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZonefallInventorySlotButton, UZonefallInventorySlotButton::StaticClass, TEXT("UZonefallInventorySlotButton"), &Z_Registration_Info_UClass_UZonefallInventorySlotButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallInventorySlotButton), 2176923698U) },
		{ Z_Construct_UClass_UZonefallInventoryWidget, UZonefallInventoryWidget::StaticClass, TEXT("UZonefallInventoryWidget"), &Z_Registration_Info_UClass_UZonefallInventoryWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallInventoryWidget), 2632809839U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallInventoryWidget_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallInventoryWidget_h__Script_UIWorld_2694077992{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallInventoryWidget_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallInventoryWidget_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
