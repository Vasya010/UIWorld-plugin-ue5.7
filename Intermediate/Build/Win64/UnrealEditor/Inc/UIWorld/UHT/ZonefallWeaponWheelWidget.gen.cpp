// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZonefallWeaponWheelWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallWeaponWheelWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
UIWORLD_API UClass* Z_Construct_UClass_AZonefallPlayerCharacter_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallWeaponInventoryComponent_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallWeaponWheelButton();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallWeaponWheelButton_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallWeaponWheelWidget();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallWeaponWheelWidget_NoRegister();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallWeaponSlotClicked__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnZonefallWeaponSlotClicked ******************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnZonefallWeaponSlotClicked__DelegateSignature_Statics
{
	struct _Script_UIWorld_eventOnZonefallWeaponSlotClicked_Parms
	{
		int32 WeaponIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallWeaponWheelWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnZonefallWeaponSlotClicked constinit property declarations **********
	static const UECodeGen_Private::FIntPropertyParams NewProp_WeaponIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnZonefallWeaponSlotClicked constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnZonefallWeaponSlotClicked Property Definitions *********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UIWorld_OnZonefallWeaponSlotClicked__DelegateSignature_Statics::NewProp_WeaponIndex = { "WeaponIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UIWorld_eventOnZonefallWeaponSlotClicked_Parms, WeaponIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UIWorld_OnZonefallWeaponSlotClicked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIWorld_OnZonefallWeaponSlotClicked__DelegateSignature_Statics::NewProp_WeaponIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallWeaponSlotClicked__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnZonefallWeaponSlotClicked Property Definitions ***********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnZonefallWeaponSlotClicked__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnZonefallWeaponSlotClicked__DelegateSignature", 	Z_Construct_UDelegateFunction_UIWorld_OnZonefallWeaponSlotClicked__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallWeaponSlotClicked__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_UIWorld_OnZonefallWeaponSlotClicked__DelegateSignature_Statics::_Script_UIWorld_eventOnZonefallWeaponSlotClicked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallWeaponSlotClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnZonefallWeaponSlotClicked__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UIWorld_OnZonefallWeaponSlotClicked__DelegateSignature_Statics::_Script_UIWorld_eventOnZonefallWeaponSlotClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallWeaponSlotClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnZonefallWeaponSlotClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnZonefallWeaponSlotClicked_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallWeaponSlotClicked, int32 WeaponIndex)
{
	struct _Script_UIWorld_eventOnZonefallWeaponSlotClicked_Parms
	{
		int32 WeaponIndex;
	};
	_Script_UIWorld_eventOnZonefallWeaponSlotClicked_Parms Parms;
	Parms.WeaponIndex=WeaponIndex;
	OnZonefallWeaponSlotClicked.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnZonefallWeaponSlotClicked ********************************************

// ********** Begin Class UZonefallWeaponWheelButton Function HandleInternalClicked ****************
struct Z_Construct_UFunction_UZonefallWeaponWheelButton_HandleInternalClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallWeaponWheelWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleInternalClicked constinit property declarations *****************
// ********** End Function HandleInternalClicked constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallWeaponWheelButton_HandleInternalClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallWeaponWheelButton, nullptr, "HandleInternalClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponWheelButton_HandleInternalClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallWeaponWheelButton_HandleInternalClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallWeaponWheelButton_HandleInternalClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallWeaponWheelButton_HandleInternalClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallWeaponWheelButton::execHandleInternalClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleInternalClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallWeaponWheelButton Function HandleInternalClicked ******************

// ********** Begin Class UZonefallWeaponWheelButton ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallWeaponWheelButton;
UClass* UZonefallWeaponWheelButton::GetPrivateStaticClass()
{
	using TClass = UZonefallWeaponWheelButton;
	if (!Z_Registration_Info_UClass_UZonefallWeaponWheelButton.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallWeaponWheelButton"),
			Z_Registration_Info_UClass_UZonefallWeaponWheelButton.InnerSingleton,
			StaticRegisterNativesUZonefallWeaponWheelButton,
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
	return Z_Registration_Info_UClass_UZonefallWeaponWheelButton.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallWeaponWheelButton_NoRegister()
{
	return UZonefallWeaponWheelButton::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallWeaponWheelButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A UButton that remembers its weapon index and re-broadcasts clicks with it. */" },
#endif
		{ "IncludePath", "UI/ZonefallWeaponWheelWidget.h" },
		{ "ModuleRelativePath", "Public/UI/ZonefallWeaponWheelWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A UButton that remembers its weapon index and re-broadcasts clicks with it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallWeaponWheelWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWeaponSlotClicked_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallWeaponWheelWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallWeaponWheelButton constinit property declarations ***************
	static const UECodeGen_Private::FIntPropertyParams NewProp_WeaponIndex;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeaponSlotClicked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallWeaponWheelButton constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleInternalClicked"), .Pointer = &UZonefallWeaponWheelButton::execHandleInternalClicked },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallWeaponWheelButton_HandleInternalClicked, "HandleInternalClicked" }, // 2891523395
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallWeaponWheelButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallWeaponWheelButton_Statics

// ********** Begin Class UZonefallWeaponWheelButton Property Definitions **************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallWeaponWheelButton_Statics::NewProp_WeaponIndex = { "WeaponIndex", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallWeaponWheelButton, WeaponIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponIndex_MetaData), NewProp_WeaponIndex_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallWeaponWheelButton_Statics::NewProp_OnWeaponSlotClicked = { "OnWeaponSlotClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallWeaponWheelButton, OnWeaponSlotClicked), Z_Construct_UDelegateFunction_UIWorld_OnZonefallWeaponSlotClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWeaponSlotClicked_MetaData), NewProp_OnWeaponSlotClicked_MetaData) }; // 3064167301
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallWeaponWheelButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallWeaponWheelButton_Statics::NewProp_WeaponIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallWeaponWheelButton_Statics::NewProp_OnWeaponSlotClicked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallWeaponWheelButton_Statics::PropPointers) < 2048);
// ********** End Class UZonefallWeaponWheelButton Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UZonefallWeaponWheelButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UButton,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallWeaponWheelButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallWeaponWheelButton_Statics::ClassParams = {
	&UZonefallWeaponWheelButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallWeaponWheelButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallWeaponWheelButton_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallWeaponWheelButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallWeaponWheelButton_Statics::Class_MetaDataParams)
};
void UZonefallWeaponWheelButton::StaticRegisterNativesUZonefallWeaponWheelButton()
{
	UClass* Class = UZonefallWeaponWheelButton::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallWeaponWheelButton_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallWeaponWheelButton()
{
	if (!Z_Registration_Info_UClass_UZonefallWeaponWheelButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallWeaponWheelButton.OuterSingleton, Z_Construct_UClass_UZonefallWeaponWheelButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallWeaponWheelButton.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallWeaponWheelButton);
UZonefallWeaponWheelButton::~UZonefallWeaponWheelButton() {}
// ********** End Class UZonefallWeaponWheelButton *************************************************

// ********** Begin Class UZonefallWeaponWheelWidget Function GetSelectedWeaponIndex ***************
struct Z_Construct_UFunction_UZonefallWeaponWheelWidget_GetSelectedWeaponIndex_Statics
{
	struct ZonefallWeaponWheelWidget_eventGetSelectedWeaponIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Weapon" },
		{ "ModuleRelativePath", "Public/UI/ZonefallWeaponWheelWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSelectedWeaponIndex constinit property declarations ****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSelectedWeaponIndex constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSelectedWeaponIndex Property Definitions ***************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZonefallWeaponWheelWidget_GetSelectedWeaponIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallWeaponWheelWidget_eventGetSelectedWeaponIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallWeaponWheelWidget_GetSelectedWeaponIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallWeaponWheelWidget_GetSelectedWeaponIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponWheelWidget_GetSelectedWeaponIndex_Statics::PropPointers) < 2048);
// ********** End Function GetSelectedWeaponIndex Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallWeaponWheelWidget_GetSelectedWeaponIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallWeaponWheelWidget, nullptr, "GetSelectedWeaponIndex", 	Z_Construct_UFunction_UZonefallWeaponWheelWidget_GetSelectedWeaponIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponWheelWidget_GetSelectedWeaponIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallWeaponWheelWidget_GetSelectedWeaponIndex_Statics::ZonefallWeaponWheelWidget_eventGetSelectedWeaponIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponWheelWidget_GetSelectedWeaponIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallWeaponWheelWidget_GetSelectedWeaponIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallWeaponWheelWidget_GetSelectedWeaponIndex_Statics::ZonefallWeaponWheelWidget_eventGetSelectedWeaponIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallWeaponWheelWidget_GetSelectedWeaponIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallWeaponWheelWidget_GetSelectedWeaponIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallWeaponWheelWidget::execGetSelectedWeaponIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSelectedWeaponIndex();
	P_NATIVE_END;
}
// ********** End Class UZonefallWeaponWheelWidget Function GetSelectedWeaponIndex *****************

// ********** Begin Class UZonefallWeaponWheelWidget Function HandleWeaponSlotClicked **************
struct Z_Construct_UFunction_UZonefallWeaponWheelWidget_HandleWeaponSlotClicked_Statics
{
	struct ZonefallWeaponWheelWidget_eventHandleWeaponSlotClicked_Parms
	{
		int32 WeaponIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallWeaponWheelWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleWeaponSlotClicked constinit property declarations ***************
	static const UECodeGen_Private::FIntPropertyParams NewProp_WeaponIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleWeaponSlotClicked constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleWeaponSlotClicked Property Definitions **************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZonefallWeaponWheelWidget_HandleWeaponSlotClicked_Statics::NewProp_WeaponIndex = { "WeaponIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallWeaponWheelWidget_eventHandleWeaponSlotClicked_Parms, WeaponIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallWeaponWheelWidget_HandleWeaponSlotClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallWeaponWheelWidget_HandleWeaponSlotClicked_Statics::NewProp_WeaponIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponWheelWidget_HandleWeaponSlotClicked_Statics::PropPointers) < 2048);
// ********** End Function HandleWeaponSlotClicked Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallWeaponWheelWidget_HandleWeaponSlotClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallWeaponWheelWidget, nullptr, "HandleWeaponSlotClicked", 	Z_Construct_UFunction_UZonefallWeaponWheelWidget_HandleWeaponSlotClicked_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponWheelWidget_HandleWeaponSlotClicked_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallWeaponWheelWidget_HandleWeaponSlotClicked_Statics::ZonefallWeaponWheelWidget_eventHandleWeaponSlotClicked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponWheelWidget_HandleWeaponSlotClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallWeaponWheelWidget_HandleWeaponSlotClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallWeaponWheelWidget_HandleWeaponSlotClicked_Statics::ZonefallWeaponWheelWidget_eventHandleWeaponSlotClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallWeaponWheelWidget_HandleWeaponSlotClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallWeaponWheelWidget_HandleWeaponSlotClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallWeaponWheelWidget::execHandleWeaponSlotClicked)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_WeaponIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleWeaponSlotClicked(Z_Param_WeaponIndex);
	P_NATIVE_END;
}
// ********** End Class UZonefallWeaponWheelWidget Function HandleWeaponSlotClicked ****************

// ********** Begin Class UZonefallWeaponWheelWidget Function RefreshFromWeapons *******************
struct Z_Construct_UFunction_UZonefallWeaponWheelWidget_RefreshFromWeapons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Weapon" },
		{ "ModuleRelativePath", "Public/UI/ZonefallWeaponWheelWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RefreshFromWeapons constinit property declarations ********************
// ********** End Function RefreshFromWeapons constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallWeaponWheelWidget_RefreshFromWeapons_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallWeaponWheelWidget, nullptr, "RefreshFromWeapons", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponWheelWidget_RefreshFromWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallWeaponWheelWidget_RefreshFromWeapons_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallWeaponWheelWidget_RefreshFromWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallWeaponWheelWidget_RefreshFromWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallWeaponWheelWidget::execRefreshFromWeapons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshFromWeapons();
	P_NATIVE_END;
}
// ********** End Class UZonefallWeaponWheelWidget Function RefreshFromWeapons *********************

// ********** Begin Class UZonefallWeaponWheelWidget Function SetupForCharacter ********************
struct Z_Construct_UFunction_UZonefallWeaponWheelWidget_SetupForCharacter_Statics
{
	struct ZonefallWeaponWheelWidget_eventSetupForCharacter_Parms
	{
		AZonefallPlayerCharacter* InCharacter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Weapon" },
		{ "ModuleRelativePath", "Public/UI/ZonefallWeaponWheelWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetupForCharacter constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetupForCharacter constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetupForCharacter Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZonefallWeaponWheelWidget_SetupForCharacter_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallWeaponWheelWidget_eventSetupForCharacter_Parms, InCharacter), Z_Construct_UClass_AZonefallPlayerCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallWeaponWheelWidget_SetupForCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallWeaponWheelWidget_SetupForCharacter_Statics::NewProp_InCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponWheelWidget_SetupForCharacter_Statics::PropPointers) < 2048);
// ********** End Function SetupForCharacter Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallWeaponWheelWidget_SetupForCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallWeaponWheelWidget, nullptr, "SetupForCharacter", 	Z_Construct_UFunction_UZonefallWeaponWheelWidget_SetupForCharacter_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponWheelWidget_SetupForCharacter_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallWeaponWheelWidget_SetupForCharacter_Statics::ZonefallWeaponWheelWidget_eventSetupForCharacter_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallWeaponWheelWidget_SetupForCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallWeaponWheelWidget_SetupForCharacter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallWeaponWheelWidget_SetupForCharacter_Statics::ZonefallWeaponWheelWidget_eventSetupForCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallWeaponWheelWidget_SetupForCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallWeaponWheelWidget_SetupForCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallWeaponWheelWidget::execSetupForCharacter)
{
	P_GET_OBJECT(AZonefallPlayerCharacter,Z_Param_InCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupForCharacter(Z_Param_InCharacter);
	P_NATIVE_END;
}
// ********** End Class UZonefallWeaponWheelWidget Function SetupForCharacter **********************

// ********** Begin Class UZonefallWeaponWheelWidget ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallWeaponWheelWidget;
UClass* UZonefallWeaponWheelWidget::GetPrivateStaticClass()
{
	using TClass = UZonefallWeaponWheelWidget;
	if (!Z_Registration_Info_UClass_UZonefallWeaponWheelWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallWeaponWheelWidget"),
			Z_Registration_Info_UClass_UZonefallWeaponWheelWidget.InnerSingleton,
			StaticRegisterNativesUZonefallWeaponWheelWidget,
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
	return Z_Registration_Info_UClass_UZonefallWeaponWheelWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallWeaponWheelWidget_NoRegister()
{
	return UZonefallWeaponWheelWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Self-assembling RDR2-style radial weapon wheel. Reads the character's weapon store and\n * lays the weapons out around a circle. Click a slot to select; the character equips the\n * selection when the wheel closes. No Blueprint required.\n */" },
#endif
		{ "IncludePath", "UI/ZonefallWeaponWheelWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallWeaponWheelWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Self-assembling RDR2-style radial weapon wheel. Reads the character's weapon store and\nlays the weapons out around a circle. Click a slot to select; the character equips the\nselection when the wheel closes. No Blueprint required." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccentColor_MetaData[] = {
		{ "Category", "Zonefall|Weapon|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallWeaponWheelWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelRadius_MetaData[] = {
		{ "Category", "Zonefall|Weapon|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallWeaponWheelWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallWeaponWheelWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponInv_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallWeaponWheelWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelCanvas_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallWeaponWheelWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterLabel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallWeaponWheelWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotButtons_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallWeaponWheelWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotBorders_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallWeaponWheelWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallWeaponWheelWidget constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccentColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponInv;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WheelCanvas;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CenterLabel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotButtons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SlotButtons;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotBorders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SlotBorders;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallWeaponWheelWidget constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetSelectedWeaponIndex"), .Pointer = &UZonefallWeaponWheelWidget::execGetSelectedWeaponIndex },
		{ .NameUTF8 = UTF8TEXT("HandleWeaponSlotClicked"), .Pointer = &UZonefallWeaponWheelWidget::execHandleWeaponSlotClicked },
		{ .NameUTF8 = UTF8TEXT("RefreshFromWeapons"), .Pointer = &UZonefallWeaponWheelWidget::execRefreshFromWeapons },
		{ .NameUTF8 = UTF8TEXT("SetupForCharacter"), .Pointer = &UZonefallWeaponWheelWidget::execSetupForCharacter },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallWeaponWheelWidget_GetSelectedWeaponIndex, "GetSelectedWeaponIndex" }, // 2609666073
		{ &Z_Construct_UFunction_UZonefallWeaponWheelWidget_HandleWeaponSlotClicked, "HandleWeaponSlotClicked" }, // 948859057
		{ &Z_Construct_UFunction_UZonefallWeaponWheelWidget_RefreshFromWeapons, "RefreshFromWeapons" }, // 4020402372
		{ &Z_Construct_UFunction_UZonefallWeaponWheelWidget_SetupForCharacter, "SetupForCharacter" }, // 611875493
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallWeaponWheelWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics

// ********** Begin Class UZonefallWeaponWheelWidget Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::NewProp_AccentColor = { "AccentColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallWeaponWheelWidget, AccentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccentColor_MetaData), NewProp_AccentColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::NewProp_WheelRadius = { "WheelRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallWeaponWheelWidget, WheelRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelRadius_MetaData), NewProp_WheelRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallWeaponWheelWidget, Character), Z_Construct_UClass_AZonefallPlayerCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::NewProp_WeaponInv = { "WeaponInv", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallWeaponWheelWidget, WeaponInv), Z_Construct_UClass_UZonefallWeaponInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponInv_MetaData), NewProp_WeaponInv_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::NewProp_WheelCanvas = { "WheelCanvas", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallWeaponWheelWidget, WheelCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelCanvas_MetaData), NewProp_WheelCanvas_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::NewProp_CenterLabel = { "CenterLabel", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallWeaponWheelWidget, CenterLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterLabel_MetaData), NewProp_CenterLabel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::NewProp_SlotButtons_Inner = { "SlotButtons", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UZonefallWeaponWheelButton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::NewProp_SlotButtons = { "SlotButtons", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallWeaponWheelWidget, SlotButtons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotButtons_MetaData), NewProp_SlotButtons_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::NewProp_SlotBorders_Inner = { "SlotBorders", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::NewProp_SlotBorders = { "SlotBorders", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallWeaponWheelWidget, SlotBorders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotBorders_MetaData), NewProp_SlotBorders_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::NewProp_AccentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::NewProp_WheelRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::NewProp_WeaponInv,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::NewProp_WheelCanvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::NewProp_CenterLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::NewProp_SlotButtons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::NewProp_SlotButtons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::NewProp_SlotBorders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::NewProp_SlotBorders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::PropPointers) < 2048);
// ********** End Class UZonefallWeaponWheelWidget Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::ClassParams = {
	&UZonefallWeaponWheelWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::Class_MetaDataParams)
};
void UZonefallWeaponWheelWidget::StaticRegisterNativesUZonefallWeaponWheelWidget()
{
	UClass* Class = UZonefallWeaponWheelWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallWeaponWheelWidget()
{
	if (!Z_Registration_Info_UClass_UZonefallWeaponWheelWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallWeaponWheelWidget.OuterSingleton, Z_Construct_UClass_UZonefallWeaponWheelWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallWeaponWheelWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallWeaponWheelWidget);
UZonefallWeaponWheelWidget::~UZonefallWeaponWheelWidget() {}
// ********** End Class UZonefallWeaponWheelWidget *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallWeaponWheelWidget_h__Script_UIWorld_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZonefallWeaponWheelButton, UZonefallWeaponWheelButton::StaticClass, TEXT("UZonefallWeaponWheelButton"), &Z_Registration_Info_UClass_UZonefallWeaponWheelButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallWeaponWheelButton), 3025376738U) },
		{ Z_Construct_UClass_UZonefallWeaponWheelWidget, UZonefallWeaponWheelWidget::StaticClass, TEXT("UZonefallWeaponWheelWidget"), &Z_Registration_Info_UClass_UZonefallWeaponWheelWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallWeaponWheelWidget), 3552217186U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallWeaponWheelWidget_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallWeaponWheelWidget_h__Script_UIWorld_3664144536{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallWeaponWheelWidget_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallWeaponWheelWidget_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
