// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZonefallOnlineLobbyWidget.h"
#include "orldMenuGameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallOnlineLobbyWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallOnlineLobbyWidget();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallOnlineLobbyWidget_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallSessionCardButton();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallSessionCardButton_NoRegister();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallSessionCardClicked__DelegateSignature();
UIWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnZonefallSessionCardClicked *****************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnZonefallSessionCardClicked__DelegateSignature_Statics
{
	struct _Script_UIWorld_eventOnZonefallSessionCardClicked_Parms
	{
		int32 CardIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnZonefallSessionCardClicked constinit property declarations *********
	static const UECodeGen_Private::FIntPropertyParams NewProp_CardIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnZonefallSessionCardClicked constinit property declarations ***********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnZonefallSessionCardClicked Property Definitions ********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UIWorld_OnZonefallSessionCardClicked__DelegateSignature_Statics::NewProp_CardIndex = { "CardIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UIWorld_eventOnZonefallSessionCardClicked_Parms, CardIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UIWorld_OnZonefallSessionCardClicked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIWorld_OnZonefallSessionCardClicked__DelegateSignature_Statics::NewProp_CardIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallSessionCardClicked__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnZonefallSessionCardClicked Property Definitions **********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnZonefallSessionCardClicked__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnZonefallSessionCardClicked__DelegateSignature", 	Z_Construct_UDelegateFunction_UIWorld_OnZonefallSessionCardClicked__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallSessionCardClicked__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_UIWorld_OnZonefallSessionCardClicked__DelegateSignature_Statics::_Script_UIWorld_eventOnZonefallSessionCardClicked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallSessionCardClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnZonefallSessionCardClicked__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UIWorld_OnZonefallSessionCardClicked__DelegateSignature_Statics::_Script_UIWorld_eventOnZonefallSessionCardClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallSessionCardClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnZonefallSessionCardClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnZonefallSessionCardClicked_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallSessionCardClicked, int32 CardIndex)
{
	struct _Script_UIWorld_eventOnZonefallSessionCardClicked_Parms
	{
		int32 CardIndex;
	};
	_Script_UIWorld_eventOnZonefallSessionCardClicked_Parms Parms;
	Parms.CardIndex=CardIndex;
	OnZonefallSessionCardClicked.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnZonefallSessionCardClicked *******************************************

// ********** Begin Class UZonefallSessionCardButton Function HandleInternalClicked ****************
struct Z_Construct_UFunction_UZonefallSessionCardButton_HandleInternalClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleInternalClicked constinit property declarations *****************
// ********** End Function HandleInternalClicked constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSessionCardButton_HandleInternalClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSessionCardButton, nullptr, "HandleInternalClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSessionCardButton_HandleInternalClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSessionCardButton_HandleInternalClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallSessionCardButton_HandleInternalClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSessionCardButton_HandleInternalClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSessionCardButton::execHandleInternalClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleInternalClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallSessionCardButton Function HandleInternalClicked ******************

// ********** Begin Class UZonefallSessionCardButton ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallSessionCardButton;
UClass* UZonefallSessionCardButton::GetPrivateStaticClass()
{
	using TClass = UZonefallSessionCardButton;
	if (!Z_Registration_Info_UClass_UZonefallSessionCardButton.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallSessionCardButton"),
			Z_Registration_Info_UClass_UZonefallSessionCardButton.InnerSingleton,
			StaticRegisterNativesUZonefallSessionCardButton,
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
	return Z_Registration_Info_UClass_UZonefallSessionCardButton.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallSessionCardButton_NoRegister()
{
	return UZonefallSessionCardButton::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallSessionCardButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A UButton that remembers which session row it represents and re-broadcasts its\n * click carrying that index. Dynamic delegates can't capture an index by themselves,\n * so this lets the lobby map a click back to the correct search result reliably.\n */" },
#endif
		{ "IncludePath", "UI/ZonefallOnlineLobbyWidget.h" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A UButton that remembers which session row it represents and re-broadcasts its\nclick carrying that index. Dynamic delegates can't capture an index by themselves,\nso this lets the lobby map a click back to the correct search result reliably." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Index into the lobby's cached session list that this card represents. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index into the lobby's cached session list that this card represents." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCardClicked_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fired when this card is clicked, carrying CardIndex. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fired when this card is clicked, carrying CardIndex." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallSessionCardButton constinit property declarations ***************
	static const UECodeGen_Private::FIntPropertyParams NewProp_CardIndex;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCardClicked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallSessionCardButton constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleInternalClicked"), .Pointer = &UZonefallSessionCardButton::execHandleInternalClicked },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallSessionCardButton_HandleInternalClicked, "HandleInternalClicked" }, // 3540157739
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallSessionCardButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallSessionCardButton_Statics

// ********** Begin Class UZonefallSessionCardButton Property Definitions **************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallSessionCardButton_Statics::NewProp_CardIndex = { "CardIndex", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSessionCardButton, CardIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardIndex_MetaData), NewProp_CardIndex_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallSessionCardButton_Statics::NewProp_OnCardClicked = { "OnCardClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSessionCardButton, OnCardClicked), Z_Construct_UDelegateFunction_UIWorld_OnZonefallSessionCardClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCardClicked_MetaData), NewProp_OnCardClicked_MetaData) }; // 668566327
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallSessionCardButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSessionCardButton_Statics::NewProp_CardIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSessionCardButton_Statics::NewProp_OnCardClicked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallSessionCardButton_Statics::PropPointers) < 2048);
// ********** End Class UZonefallSessionCardButton Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UZonefallSessionCardButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UButton,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallSessionCardButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallSessionCardButton_Statics::ClassParams = {
	&UZonefallSessionCardButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallSessionCardButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallSessionCardButton_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallSessionCardButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallSessionCardButton_Statics::Class_MetaDataParams)
};
void UZonefallSessionCardButton::StaticRegisterNativesUZonefallSessionCardButton()
{
	UClass* Class = UZonefallSessionCardButton::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallSessionCardButton_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallSessionCardButton()
{
	if (!Z_Registration_Info_UClass_UZonefallSessionCardButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallSessionCardButton.OuterSingleton, Z_Construct_UClass_UZonefallSessionCardButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallSessionCardButton.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallSessionCardButton);
UZonefallSessionCardButton::~UZonefallSessionCardButton() {}
// ********** End Class UZonefallSessionCardButton *************************************************

// ********** Begin Class UZonefallOnlineLobbyWidget Function HandleAutoRefreshTick ****************
struct Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleAutoRefreshTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleAutoRefreshTick constinit property declarations *****************
// ********** End Function HandleAutoRefreshTick constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleAutoRefreshTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallOnlineLobbyWidget, nullptr, "HandleAutoRefreshTick", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleAutoRefreshTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleAutoRefreshTick_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleAutoRefreshTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleAutoRefreshTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallOnlineLobbyWidget::execHandleAutoRefreshTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleAutoRefreshTick();
	P_NATIVE_END;
}
// ********** End Class UZonefallOnlineLobbyWidget Function HandleAutoRefreshTick ******************

// ********** Begin Class UZonefallOnlineLobbyWidget Function HandleBackClicked ********************
struct Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleBackClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleBackClicked constinit property declarations *********************
// ********** End Function HandleBackClicked constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleBackClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallOnlineLobbyWidget, nullptr, "HandleBackClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleBackClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleBackClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleBackClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleBackClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallOnlineLobbyWidget::execHandleBackClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleBackClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallOnlineLobbyWidget Function HandleBackClicked **********************

// ********** Begin Class UZonefallOnlineLobbyWidget Function HandleCardClicked ********************
struct Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleCardClicked_Statics
{
	struct ZonefallOnlineLobbyWidget_eventHandleCardClicked_Parms
	{
		int32 CardIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCardClicked constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_CardIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCardClicked constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCardClicked Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleCardClicked_Statics::NewProp_CardIndex = { "CardIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallOnlineLobbyWidget_eventHandleCardClicked_Parms, CardIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleCardClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleCardClicked_Statics::NewProp_CardIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleCardClicked_Statics::PropPointers) < 2048);
// ********** End Function HandleCardClicked Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleCardClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallOnlineLobbyWidget, nullptr, "HandleCardClicked", 	Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleCardClicked_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleCardClicked_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleCardClicked_Statics::ZonefallOnlineLobbyWidget_eventHandleCardClicked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleCardClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleCardClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleCardClicked_Statics::ZonefallOnlineLobbyWidget_eventHandleCardClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleCardClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleCardClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallOnlineLobbyWidget::execHandleCardClicked)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CardIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCardClicked(Z_Param_CardIndex);
	P_NATIVE_END;
}
// ********** End Class UZonefallOnlineLobbyWidget Function HandleCardClicked **********************

// ********** Begin Class UZonefallOnlineLobbyWidget Function HandleHostClicked ********************
struct Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleHostClicked constinit property declarations *********************
// ********** End Function HandleHostClicked constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallOnlineLobbyWidget, nullptr, "HandleHostClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallOnlineLobbyWidget::execHandleHostClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleHostClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallOnlineLobbyWidget Function HandleHostClicked **********************

// ********** Begin Class UZonefallOnlineLobbyWidget Function HandleHostCompleted ******************
struct Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostCompleted_Statics
{
	struct ZonefallOnlineLobbyWidget_eventHandleHostCompleted_Parms
	{
		bool bSuccess;
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleHostCompleted constinit property declarations *******************
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleHostCompleted constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleHostCompleted Property Definitions ******************************
void Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostCompleted_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((ZonefallOnlineLobbyWidget_eventHandleHostCompleted_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostCompleted_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallOnlineLobbyWidget_eventHandleHostCompleted_Parms), &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostCompleted_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostCompleted_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallOnlineLobbyWidget_eventHandleHostCompleted_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostCompleted_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostCompleted_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostCompleted_Statics::PropPointers) < 2048);
// ********** End Function HandleHostCompleted Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallOnlineLobbyWidget, nullptr, "HandleHostCompleted", 	Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostCompleted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostCompleted_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostCompleted_Statics::ZonefallOnlineLobbyWidget_eventHandleHostCompleted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostCompleted_Statics::ZonefallOnlineLobbyWidget_eventHandleHostCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallOnlineLobbyWidget::execHandleHostCompleted)
{
	P_GET_UBOOL(Z_Param_bSuccess);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleHostCompleted(Z_Param_bSuccess,Z_Param_Message);
	P_NATIVE_END;
}
// ********** End Class UZonefallOnlineLobbyWidget Function HandleHostCompleted ********************

// ********** Begin Class UZonefallOnlineLobbyWidget Function HandleJoinByIdClicked ****************
struct Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinByIdClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleJoinByIdClicked constinit property declarations *****************
// ********** End Function HandleJoinByIdClicked constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinByIdClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallOnlineLobbyWidget, nullptr, "HandleJoinByIdClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinByIdClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinByIdClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinByIdClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinByIdClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallOnlineLobbyWidget::execHandleJoinByIdClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleJoinByIdClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallOnlineLobbyWidget Function HandleJoinByIdClicked ******************

// ********** Begin Class UZonefallOnlineLobbyWidget Function HandleJoinClicked ********************
struct Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleJoinClicked constinit property declarations *********************
// ********** End Function HandleJoinClicked constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallOnlineLobbyWidget, nullptr, "HandleJoinClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallOnlineLobbyWidget::execHandleJoinClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleJoinClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallOnlineLobbyWidget Function HandleJoinClicked **********************

// ********** Begin Class UZonefallOnlineLobbyWidget Function HandleJoinCompleted ******************
struct Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinCompleted_Statics
{
	struct ZonefallOnlineLobbyWidget_eventHandleJoinCompleted_Parms
	{
		bool bSuccess;
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleJoinCompleted constinit property declarations *******************
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleJoinCompleted constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleJoinCompleted Property Definitions ******************************
void Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinCompleted_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((ZonefallOnlineLobbyWidget_eventHandleJoinCompleted_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinCompleted_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallOnlineLobbyWidget_eventHandleJoinCompleted_Parms), &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinCompleted_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinCompleted_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallOnlineLobbyWidget_eventHandleJoinCompleted_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinCompleted_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinCompleted_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinCompleted_Statics::PropPointers) < 2048);
// ********** End Function HandleJoinCompleted Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallOnlineLobbyWidget, nullptr, "HandleJoinCompleted", 	Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinCompleted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinCompleted_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinCompleted_Statics::ZonefallOnlineLobbyWidget_eventHandleJoinCompleted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinCompleted_Statics::ZonefallOnlineLobbyWidget_eventHandleJoinCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallOnlineLobbyWidget::execHandleJoinCompleted)
{
	P_GET_UBOOL(Z_Param_bSuccess);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleJoinCompleted(Z_Param_bSuccess,Z_Param_Message);
	P_NATIVE_END;
}
// ********** End Class UZonefallOnlineLobbyWidget Function HandleJoinCompleted ********************

// ********** Begin Class UZonefallOnlineLobbyWidget Function HandleLanCheckChanged ****************
struct Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLanCheckChanged_Statics
{
	struct ZonefallOnlineLobbyWidget_eventHandleLanCheckChanged_Parms
	{
		bool bIsChecked;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleLanCheckChanged constinit property declarations *****************
	static void NewProp_bIsChecked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChecked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleLanCheckChanged constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleLanCheckChanged Property Definitions ****************************
void Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLanCheckChanged_Statics::NewProp_bIsChecked_SetBit(void* Obj)
{
	((ZonefallOnlineLobbyWidget_eventHandleLanCheckChanged_Parms*)Obj)->bIsChecked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLanCheckChanged_Statics::NewProp_bIsChecked = { "bIsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallOnlineLobbyWidget_eventHandleLanCheckChanged_Parms), &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLanCheckChanged_Statics::NewProp_bIsChecked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLanCheckChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLanCheckChanged_Statics::NewProp_bIsChecked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLanCheckChanged_Statics::PropPointers) < 2048);
// ********** End Function HandleLanCheckChanged Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLanCheckChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallOnlineLobbyWidget, nullptr, "HandleLanCheckChanged", 	Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLanCheckChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLanCheckChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLanCheckChanged_Statics::ZonefallOnlineLobbyWidget_eventHandleLanCheckChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLanCheckChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLanCheckChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLanCheckChanged_Statics::ZonefallOnlineLobbyWidget_eventHandleLanCheckChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLanCheckChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLanCheckChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallOnlineLobbyWidget::execHandleLanCheckChanged)
{
	P_GET_UBOOL(Z_Param_bIsChecked);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleLanCheckChanged(Z_Param_bIsChecked);
	P_NATIVE_END;
}
// ********** End Class UZonefallOnlineLobbyWidget Function HandleLanCheckChanged ******************

// ********** Begin Class UZonefallOnlineLobbyWidget Function HandleLeaveClicked *******************
struct Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleLeaveClicked constinit property declarations ********************
// ********** End Function HandleLeaveClicked constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallOnlineLobbyWidget, nullptr, "HandleLeaveClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallOnlineLobbyWidget::execHandleLeaveClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleLeaveClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallOnlineLobbyWidget Function HandleLeaveClicked *********************

// ********** Begin Class UZonefallOnlineLobbyWidget Function HandleLeaveCompleted *****************
struct Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveCompleted_Statics
{
	struct ZonefallOnlineLobbyWidget_eventHandleLeaveCompleted_Parms
	{
		bool bSuccess;
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleLeaveCompleted constinit property declarations ******************
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleLeaveCompleted constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleLeaveCompleted Property Definitions *****************************
void Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveCompleted_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((ZonefallOnlineLobbyWidget_eventHandleLeaveCompleted_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveCompleted_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallOnlineLobbyWidget_eventHandleLeaveCompleted_Parms), &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveCompleted_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveCompleted_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallOnlineLobbyWidget_eventHandleLeaveCompleted_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveCompleted_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveCompleted_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveCompleted_Statics::PropPointers) < 2048);
// ********** End Function HandleLeaveCompleted Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallOnlineLobbyWidget, nullptr, "HandleLeaveCompleted", 	Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveCompleted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveCompleted_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveCompleted_Statics::ZonefallOnlineLobbyWidget_eventHandleLeaveCompleted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveCompleted_Statics::ZonefallOnlineLobbyWidget_eventHandleLeaveCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallOnlineLobbyWidget::execHandleLeaveCompleted)
{
	P_GET_UBOOL(Z_Param_bSuccess);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleLeaveCompleted(Z_Param_bSuccess,Z_Param_Message);
	P_NATIVE_END;
}
// ********** End Class UZonefallOnlineLobbyWidget Function HandleLeaveCompleted *******************

// ********** Begin Class UZonefallOnlineLobbyWidget Function HandleOnlineMatchReady ***************
struct Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleOnlineMatchReady_Statics
{
	struct ZonefallOnlineLobbyWidget_eventHandleOnlineMatchReady_Parms
	{
		UWorld* World;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleOnlineMatchReady constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleOnlineMatchReady constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleOnlineMatchReady Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleOnlineMatchReady_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallOnlineLobbyWidget_eventHandleOnlineMatchReady_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleOnlineMatchReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleOnlineMatchReady_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleOnlineMatchReady_Statics::PropPointers) < 2048);
// ********** End Function HandleOnlineMatchReady Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleOnlineMatchReady_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallOnlineLobbyWidget, nullptr, "HandleOnlineMatchReady", 	Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleOnlineMatchReady_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleOnlineMatchReady_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleOnlineMatchReady_Statics::ZonefallOnlineLobbyWidget_eventHandleOnlineMatchReady_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleOnlineMatchReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleOnlineMatchReady_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleOnlineMatchReady_Statics::ZonefallOnlineLobbyWidget_eventHandleOnlineMatchReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleOnlineMatchReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleOnlineMatchReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallOnlineLobbyWidget::execHandleOnlineMatchReady)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleOnlineMatchReady(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UZonefallOnlineLobbyWidget Function HandleOnlineMatchReady *****************

// ********** Begin Class UZonefallOnlineLobbyWidget Function HandleOpenLevelClicked ***************
struct Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleOpenLevelClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleOpenLevelClicked constinit property declarations ****************
// ********** End Function HandleOpenLevelClicked constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleOpenLevelClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallOnlineLobbyWidget, nullptr, "HandleOpenLevelClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleOpenLevelClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleOpenLevelClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleOpenLevelClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleOpenLevelClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallOnlineLobbyWidget::execHandleOpenLevelClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleOpenLevelClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallOnlineLobbyWidget Function HandleOpenLevelClicked *****************

// ********** Begin Class UZonefallOnlineLobbyWidget Function HandleQuickJoinClicked ***************
struct Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleQuickJoinClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleQuickJoinClicked constinit property declarations ****************
// ********** End Function HandleQuickJoinClicked constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleQuickJoinClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallOnlineLobbyWidget, nullptr, "HandleQuickJoinClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleQuickJoinClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleQuickJoinClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleQuickJoinClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleQuickJoinClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallOnlineLobbyWidget::execHandleQuickJoinClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleQuickJoinClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallOnlineLobbyWidget Function HandleQuickJoinClicked *****************

// ********** Begin Class UZonefallOnlineLobbyWidget Function HandleRefreshClicked *****************
struct Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleRefreshClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleRefreshClicked constinit property declarations ******************
// ********** End Function HandleRefreshClicked constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleRefreshClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallOnlineLobbyWidget, nullptr, "HandleRefreshClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleRefreshClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleRefreshClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleRefreshClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleRefreshClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallOnlineLobbyWidget::execHandleRefreshClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleRefreshClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallOnlineLobbyWidget Function HandleRefreshClicked *******************

// ********** Begin Class UZonefallOnlineLobbyWidget Function HandleServerNameChanged **************
struct Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleServerNameChanged_Statics
{
	struct ZonefallOnlineLobbyWidget_eventHandleServerNameChanged_Parms
	{
		FText NewText;
		TEnumAsByte<ETextCommit::Type> CommitType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleServerNameChanged constinit property declarations ***************
	static const UECodeGen_Private::FTextPropertyParams NewProp_NewText;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleServerNameChanged constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleServerNameChanged Property Definitions **************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleServerNameChanged_Statics::NewProp_NewText = { "NewText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallOnlineLobbyWidget_eventHandleServerNameChanged_Parms, NewText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewText_MetaData), NewProp_NewText_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleServerNameChanged_Statics::NewProp_CommitType = { "CommitType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallOnlineLobbyWidget_eventHandleServerNameChanged_Parms, CommitType), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1235926667
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleServerNameChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleServerNameChanged_Statics::NewProp_NewText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleServerNameChanged_Statics::NewProp_CommitType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleServerNameChanged_Statics::PropPointers) < 2048);
// ********** End Function HandleServerNameChanged Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleServerNameChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallOnlineLobbyWidget, nullptr, "HandleServerNameChanged", 	Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleServerNameChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleServerNameChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleServerNameChanged_Statics::ZonefallOnlineLobbyWidget_eventHandleServerNameChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleServerNameChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleServerNameChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleServerNameChanged_Statics::ZonefallOnlineLobbyWidget_eventHandleServerNameChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleServerNameChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleServerNameChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallOnlineLobbyWidget::execHandleServerNameChanged)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NewText);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleServerNameChanged(Z_Param_Out_NewText,ETextCommit::Type(Z_Param_CommitType));
	P_NATIVE_END;
}
// ********** End Class UZonefallOnlineLobbyWidget Function HandleServerNameChanged ****************

// ********** Begin Class UZonefallOnlineLobbyWidget Function HandleSessionsFound ******************
struct Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleSessionsFound_Statics
{
	struct ZonefallOnlineLobbyWidget_eventHandleSessionsFound_Parms
	{
		TArray<FUIWorldOnlineSessionResult> Results;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleSessionsFound constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Results_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Results;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleSessionsFound constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleSessionsFound Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleSessionsFound_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult, METADATA_PARAMS(0, nullptr) }; // 11846451
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleSessionsFound_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallOnlineLobbyWidget_eventHandleSessionsFound_Parms, Results), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Results_MetaData), NewProp_Results_MetaData) }; // 11846451
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleSessionsFound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleSessionsFound_Statics::NewProp_Results_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleSessionsFound_Statics::NewProp_Results,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleSessionsFound_Statics::PropPointers) < 2048);
// ********** End Function HandleSessionsFound Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleSessionsFound_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallOnlineLobbyWidget, nullptr, "HandleSessionsFound", 	Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleSessionsFound_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleSessionsFound_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleSessionsFound_Statics::ZonefallOnlineLobbyWidget_eventHandleSessionsFound_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleSessionsFound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleSessionsFound_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleSessionsFound_Statics::ZonefallOnlineLobbyWidget_eventHandleSessionsFound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleSessionsFound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleSessionsFound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallOnlineLobbyWidget::execHandleSessionsFound)
{
	P_GET_TARRAY_REF(FUIWorldOnlineSessionResult,Z_Param_Out_Results);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSessionsFound(Z_Param_Out_Results);
	P_NATIVE_END;
}
// ********** End Class UZonefallOnlineLobbyWidget Function HandleSessionsFound ********************

// ********** Begin Class UZonefallOnlineLobbyWidget Function HostFromUI ***************************
struct Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HostFromUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Lobby" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HostFromUI constinit property declarations ****************************
// ********** End Function HostFromUI constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HostFromUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallOnlineLobbyWidget, nullptr, "HostFromUI", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HostFromUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HostFromUI_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HostFromUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HostFromUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallOnlineLobbyWidget::execHostFromUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HostFromUI();
	P_NATIVE_END;
}
// ********** End Class UZonefallOnlineLobbyWidget Function HostFromUI *****************************

// ********** Begin Class UZonefallOnlineLobbyWidget Function JoinSelectedSession ******************
struct Z_Construct_UFunction_UZonefallOnlineLobbyWidget_JoinSelectedSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Lobby" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function JoinSelectedSession constinit property declarations *******************
// ********** End Function JoinSelectedSession constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_JoinSelectedSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallOnlineLobbyWidget, nullptr, "JoinSelectedSession", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_JoinSelectedSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallOnlineLobbyWidget_JoinSelectedSession_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallOnlineLobbyWidget_JoinSelectedSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallOnlineLobbyWidget_JoinSelectedSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallOnlineLobbyWidget::execJoinSelectedSession)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JoinSelectedSession();
	P_NATIVE_END;
}
// ********** End Class UZonefallOnlineLobbyWidget Function JoinSelectedSession ********************

// ********** Begin Class UZonefallOnlineLobbyWidget Function LeaveCurrentSession ******************
struct Z_Construct_UFunction_UZonefallOnlineLobbyWidget_LeaveCurrentSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Lobby" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function LeaveCurrentSession constinit property declarations *******************
// ********** End Function LeaveCurrentSession constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_LeaveCurrentSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallOnlineLobbyWidget, nullptr, "LeaveCurrentSession", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_LeaveCurrentSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallOnlineLobbyWidget_LeaveCurrentSession_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallOnlineLobbyWidget_LeaveCurrentSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallOnlineLobbyWidget_LeaveCurrentSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallOnlineLobbyWidget::execLeaveCurrentSession)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LeaveCurrentSession();
	P_NATIVE_END;
}
// ********** End Class UZonefallOnlineLobbyWidget Function LeaveCurrentSession ********************

// ********** Begin Class UZonefallOnlineLobbyWidget Function QuickJoinFromUI **********************
struct Z_Construct_UFunction_UZonefallOnlineLobbyWidget_QuickJoinFromUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Lobby" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** GTA-style: auto-pick best open session (lowest ping, same build). */" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GTA-style: auto-pick best open session (lowest ping, same build)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function QuickJoinFromUI constinit property declarations ***********************
// ********** End Function QuickJoinFromUI constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_QuickJoinFromUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallOnlineLobbyWidget, nullptr, "QuickJoinFromUI", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_QuickJoinFromUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallOnlineLobbyWidget_QuickJoinFromUI_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallOnlineLobbyWidget_QuickJoinFromUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallOnlineLobbyWidget_QuickJoinFromUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallOnlineLobbyWidget::execQuickJoinFromUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuickJoinFromUI();
	P_NATIVE_END;
}
// ********** End Class UZonefallOnlineLobbyWidget Function QuickJoinFromUI ************************

// ********** Begin Class UZonefallOnlineLobbyWidget Function RefreshSessionList *******************
struct Z_Construct_UFunction_UZonefallOnlineLobbyWidget_RefreshSessionList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Lobby" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RefreshSessionList constinit property declarations ********************
// ********** End Function RefreshSessionList constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallOnlineLobbyWidget_RefreshSessionList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallOnlineLobbyWidget, nullptr, "RefreshSessionList", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallOnlineLobbyWidget_RefreshSessionList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallOnlineLobbyWidget_RefreshSessionList_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallOnlineLobbyWidget_RefreshSessionList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallOnlineLobbyWidget_RefreshSessionList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallOnlineLobbyWidget::execRefreshSessionList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshSessionList();
	P_NATIVE_END;
}
// ********** End Class UZonefallOnlineLobbyWidget Function RefreshSessionList *********************

// ********** Begin Class UZonefallOnlineLobbyWidget ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallOnlineLobbyWidget;
UClass* UZonefallOnlineLobbyWidget::GetPrivateStaticClass()
{
	using TClass = UZonefallOnlineLobbyWidget;
	if (!Z_Registration_Info_UClass_UZonefallOnlineLobbyWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallOnlineLobbyWidget"),
			Z_Registration_Info_UClass_UZonefallOnlineLobbyWidget.InnerSingleton,
			StaticRegisterNativesUZonefallOnlineLobbyWidget,
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
	return Z_Registration_Info_UClass_UZonefallOnlineLobbyWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallOnlineLobbyWidget_NoRegister()
{
	return UZonefallOnlineLobbyWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Fully self-assembled (no Blueprint required) online lobby UI for UIWorld.\n *\n *  - Modern card-based session list (server name, players, ping, LAN/Online badge)\n *  - Refresh + Auto-refresh\n *  - Host with name / max players / LAN toggle\n *  - Join by selection\n *  - Status bar with live messages\n *  - Hooks directly into UUIWorldMenuGameInstance online APIs\n *\n * Drop it in as MainMenuGameInstance->OnlineMenuWidgetClass = UZonefallOnlineLobbyWidget::StaticClass();\n */" },
#endif
		{ "IncludePath", "UI/ZonefallOnlineLobbyWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fully self-assembled (no Blueprint required) online lobby UI for UIWorld.\n\n - Modern card-based session list (server name, players, ping, LAN/Online badge)\n - Refresh + Auto-refresh\n - Host with name / max players / LAN toggle\n - Join by selection\n - Status bar with live messages\n - Hooks directly into UUIWorldMenuGameInstance online APIs\n\nDrop it in as MainMenuGameInstance->OnlineMenuWidgetClass = UZonefallOnlineLobbyWidget::StaticClass();" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundTint_MetaData[] = {
		{ "Category", "Zonefall|Lobby|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccentColor_MetaData[] = {
		{ "Category", "Zonefall|Lobby|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardTint_MetaData[] = {
		{ "Category", "Zonefall|Lobby|Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Translucent glass card fill (frosted look).\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Translucent glass card fill (frosted look)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardHoverTint_MetaData[] = {
		{ "Category", "Zonefall|Lobby|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleFontSize_MetaData[] = {
		{ "Category", "Zonefall|Lobby|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyFontSize_MetaData[] = {
		{ "Category", "Zonefall|Lobby|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRefreshOnConstruct_MetaData[] = {
		{ "Category", "Zonefall|Lobby|Behavior" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoRefreshIntervalSeconds_MetaData[] = {
		{ "Category", "Zonefall|Lobby|Behavior" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSessionResults_MetaData[] = {
		{ "Category", "Zonefall|Lobby|Behavior" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLanByDefault_MetaData[] = {
		{ "Category", "Zonefall|Lobby|Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default OFF: with Steam as the platform service the lobby uses internet\n// sessions/lobbies by default. Tick LAN in the UI for local-network play.\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default OFF: with Steam as the platform service the lobby uses internet\nsessions/lobbies by default. Tick LAN in the UI for local-network play." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableMaps_MetaData[] = {
		{ "Category", "Zonefall|Lobby|Maps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maps selectable in the lobby. Used both for hosting and for \"Open Level\".\n// Use short names (\"Menu\") or full package paths (\"/Game/Maps/Arena\").\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maps selectable in the lobby. Used both for hosting and for \"Open Level\".\nUse short names (\"Menu\") or full package paths (\"/Game/Maps/Arena\")." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBorder_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitleText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerBannerText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModeBadgeText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionListHeaderText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentRow_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HostColumn_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HostBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerNameInput_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapSelectBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayersBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LanCheck_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrivacyBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HostPasswordInput_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinPasswordInput_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HideFullCheck_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuickJoinButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HostButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefreshButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenLevelButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinByIdInput_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Direct connect by typed address / ID (public join).\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Direct connect by typed address / ID (public join)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinByIdButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionList_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BusyBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionCardButtons_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedSessions_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedSessionIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBusy_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Host / join / leave in progress \xe2\x80\x94 blocks JOIN. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Host / join / leave in progress \xe2\x80\x94 blocks JOIN." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSinceLastRefresh_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastClickedCardIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Double-click-to-join tracking.\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Double-click-to-join tracking." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoubleClickJoinSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Zonefall|Lobby|Behavior" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A click on the already-selected card within this window joins immediately.\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallOnlineLobbyWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A click on the already-selected card within this window joins immediately." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallOnlineLobbyWidget constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundTint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccentColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CardTint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CardHoverTint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TitleFontSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BodyFontSize;
	static void NewProp_bAutoRefreshOnConstruct_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRefreshOnConstruct;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoRefreshIntervalSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSessionResults;
	static void NewProp_bLanByDefault_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLanByDefault;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AvailableMaps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableMaps;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubtitleText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerBannerText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModeBadgeText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SessionListHeaderText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContentRow;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HostColumn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HostBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerNameInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapSelectBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaxPlayersBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LanCheck;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrivacyBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HostPasswordInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JoinPasswordInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HideFullCheck;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuickJoinButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HostButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RefreshButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JoinButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeaveButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpenLevelButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JoinByIdInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JoinByIdButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SessionList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatusText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BusyBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SessionCardButtons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SessionCardButtons;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedSessions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedSessions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedSessionIndex;
	static void NewProp_bBusy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBusy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSinceLastRefresh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastClickedCardIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DoubleClickJoinSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallOnlineLobbyWidget constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleAutoRefreshTick"), .Pointer = &UZonefallOnlineLobbyWidget::execHandleAutoRefreshTick },
		{ .NameUTF8 = UTF8TEXT("HandleBackClicked"), .Pointer = &UZonefallOnlineLobbyWidget::execHandleBackClicked },
		{ .NameUTF8 = UTF8TEXT("HandleCardClicked"), .Pointer = &UZonefallOnlineLobbyWidget::execHandleCardClicked },
		{ .NameUTF8 = UTF8TEXT("HandleHostClicked"), .Pointer = &UZonefallOnlineLobbyWidget::execHandleHostClicked },
		{ .NameUTF8 = UTF8TEXT("HandleHostCompleted"), .Pointer = &UZonefallOnlineLobbyWidget::execHandleHostCompleted },
		{ .NameUTF8 = UTF8TEXT("HandleJoinByIdClicked"), .Pointer = &UZonefallOnlineLobbyWidget::execHandleJoinByIdClicked },
		{ .NameUTF8 = UTF8TEXT("HandleJoinClicked"), .Pointer = &UZonefallOnlineLobbyWidget::execHandleJoinClicked },
		{ .NameUTF8 = UTF8TEXT("HandleJoinCompleted"), .Pointer = &UZonefallOnlineLobbyWidget::execHandleJoinCompleted },
		{ .NameUTF8 = UTF8TEXT("HandleLanCheckChanged"), .Pointer = &UZonefallOnlineLobbyWidget::execHandleLanCheckChanged },
		{ .NameUTF8 = UTF8TEXT("HandleLeaveClicked"), .Pointer = &UZonefallOnlineLobbyWidget::execHandleLeaveClicked },
		{ .NameUTF8 = UTF8TEXT("HandleLeaveCompleted"), .Pointer = &UZonefallOnlineLobbyWidget::execHandleLeaveCompleted },
		{ .NameUTF8 = UTF8TEXT("HandleOnlineMatchReady"), .Pointer = &UZonefallOnlineLobbyWidget::execHandleOnlineMatchReady },
		{ .NameUTF8 = UTF8TEXT("HandleOpenLevelClicked"), .Pointer = &UZonefallOnlineLobbyWidget::execHandleOpenLevelClicked },
		{ .NameUTF8 = UTF8TEXT("HandleQuickJoinClicked"), .Pointer = &UZonefallOnlineLobbyWidget::execHandleQuickJoinClicked },
		{ .NameUTF8 = UTF8TEXT("HandleRefreshClicked"), .Pointer = &UZonefallOnlineLobbyWidget::execHandleRefreshClicked },
		{ .NameUTF8 = UTF8TEXT("HandleServerNameChanged"), .Pointer = &UZonefallOnlineLobbyWidget::execHandleServerNameChanged },
		{ .NameUTF8 = UTF8TEXT("HandleSessionsFound"), .Pointer = &UZonefallOnlineLobbyWidget::execHandleSessionsFound },
		{ .NameUTF8 = UTF8TEXT("HostFromUI"), .Pointer = &UZonefallOnlineLobbyWidget::execHostFromUI },
		{ .NameUTF8 = UTF8TEXT("JoinSelectedSession"), .Pointer = &UZonefallOnlineLobbyWidget::execJoinSelectedSession },
		{ .NameUTF8 = UTF8TEXT("LeaveCurrentSession"), .Pointer = &UZonefallOnlineLobbyWidget::execLeaveCurrentSession },
		{ .NameUTF8 = UTF8TEXT("QuickJoinFromUI"), .Pointer = &UZonefallOnlineLobbyWidget::execQuickJoinFromUI },
		{ .NameUTF8 = UTF8TEXT("RefreshSessionList"), .Pointer = &UZonefallOnlineLobbyWidget::execRefreshSessionList },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleAutoRefreshTick, "HandleAutoRefreshTick" }, // 1781670778
		{ &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleBackClicked, "HandleBackClicked" }, // 4075887083
		{ &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleCardClicked, "HandleCardClicked" }, // 2991695786
		{ &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostClicked, "HandleHostClicked" }, // 3996318946
		{ &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleHostCompleted, "HandleHostCompleted" }, // 914698036
		{ &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinByIdClicked, "HandleJoinByIdClicked" }, // 492987946
		{ &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinClicked, "HandleJoinClicked" }, // 2335469504
		{ &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleJoinCompleted, "HandleJoinCompleted" }, // 1389254333
		{ &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLanCheckChanged, "HandleLanCheckChanged" }, // 1210986440
		{ &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveClicked, "HandleLeaveClicked" }, // 1067105416
		{ &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleLeaveCompleted, "HandleLeaveCompleted" }, // 3978061332
		{ &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleOnlineMatchReady, "HandleOnlineMatchReady" }, // 3419208893
		{ &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleOpenLevelClicked, "HandleOpenLevelClicked" }, // 2563702423
		{ &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleQuickJoinClicked, "HandleQuickJoinClicked" }, // 3611874575
		{ &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleRefreshClicked, "HandleRefreshClicked" }, // 1497418260
		{ &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleServerNameChanged, "HandleServerNameChanged" }, // 1767982013
		{ &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HandleSessionsFound, "HandleSessionsFound" }, // 1152829634
		{ &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_HostFromUI, "HostFromUI" }, // 2919217
		{ &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_JoinSelectedSession, "JoinSelectedSession" }, // 1411720711
		{ &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_LeaveCurrentSession, "LeaveCurrentSession" }, // 4019919126
		{ &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_QuickJoinFromUI, "QuickJoinFromUI" }, // 1689686026
		{ &Z_Construct_UFunction_UZonefallOnlineLobbyWidget_RefreshSessionList, "RefreshSessionList" }, // 3004216544
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallOnlineLobbyWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics

// ********** Begin Class UZonefallOnlineLobbyWidget Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_BackgroundTint = { "BackgroundTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, BackgroundTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundTint_MetaData), NewProp_BackgroundTint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_AccentColor = { "AccentColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, AccentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccentColor_MetaData), NewProp_AccentColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_CardTint = { "CardTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, CardTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardTint_MetaData), NewProp_CardTint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_CardHoverTint = { "CardHoverTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, CardHoverTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardHoverTint_MetaData), NewProp_CardHoverTint_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_TitleFontSize = { "TitleFontSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, TitleFontSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleFontSize_MetaData), NewProp_TitleFontSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_BodyFontSize = { "BodyFontSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, BodyFontSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyFontSize_MetaData), NewProp_BodyFontSize_MetaData) };
void Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_bAutoRefreshOnConstruct_SetBit(void* Obj)
{
	((UZonefallOnlineLobbyWidget*)Obj)->bAutoRefreshOnConstruct = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_bAutoRefreshOnConstruct = { "bAutoRefreshOnConstruct", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallOnlineLobbyWidget), &Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_bAutoRefreshOnConstruct_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoRefreshOnConstruct_MetaData), NewProp_bAutoRefreshOnConstruct_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_AutoRefreshIntervalSeconds = { "AutoRefreshIntervalSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, AutoRefreshIntervalSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoRefreshIntervalSeconds_MetaData), NewProp_AutoRefreshIntervalSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_MaxSessionResults = { "MaxSessionResults", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, MaxSessionResults), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSessionResults_MetaData), NewProp_MaxSessionResults_MetaData) };
void Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_bLanByDefault_SetBit(void* Obj)
{
	((UZonefallOnlineLobbyWidget*)Obj)->bLanByDefault = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_bLanByDefault = { "bLanByDefault", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallOnlineLobbyWidget), &Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_bLanByDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLanByDefault_MetaData), NewProp_bLanByDefault_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_AvailableMaps_Inner = { "AvailableMaps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_AvailableMaps = { "AvailableMaps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, AvailableMaps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableMaps_MetaData), NewProp_AvailableMaps_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_RootBorder = { "RootBorder", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, RootBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBorder_MetaData), NewProp_RootBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_RootBox = { "RootBox", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, RootBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBox_MetaData), NewProp_RootBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, TitleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleText_MetaData), NewProp_TitleText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_SubtitleText = { "SubtitleText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, SubtitleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitleText_MetaData), NewProp_SubtitleText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_PlayerBannerText = { "PlayerBannerText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, PlayerBannerText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerBannerText_MetaData), NewProp_PlayerBannerText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_ModeBadgeText = { "ModeBadgeText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, ModeBadgeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModeBadgeText_MetaData), NewProp_ModeBadgeText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_SessionListHeaderText = { "SessionListHeaderText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, SessionListHeaderText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionListHeaderText_MetaData), NewProp_SessionListHeaderText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_ContentRow = { "ContentRow", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, ContentRow), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentRow_MetaData), NewProp_ContentRow_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_HostColumn = { "HostColumn", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, HostColumn), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HostColumn_MetaData), NewProp_HostColumn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_HostBar = { "HostBar", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, HostBar), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HostBar_MetaData), NewProp_HostBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_ServerNameInput = { "ServerNameInput", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, ServerNameInput), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerNameInput_MetaData), NewProp_ServerNameInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_MapSelectBox = { "MapSelectBox", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, MapSelectBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapSelectBox_MetaData), NewProp_MapSelectBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_MaxPlayersBox = { "MaxPlayersBox", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, MaxPlayersBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlayersBox_MetaData), NewProp_MaxPlayersBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_LanCheck = { "LanCheck", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, LanCheck), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LanCheck_MetaData), NewProp_LanCheck_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_PrivacyBox = { "PrivacyBox", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, PrivacyBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrivacyBox_MetaData), NewProp_PrivacyBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_HostPasswordInput = { "HostPasswordInput", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, HostPasswordInput), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HostPasswordInput_MetaData), NewProp_HostPasswordInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_JoinPasswordInput = { "JoinPasswordInput", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, JoinPasswordInput), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinPasswordInput_MetaData), NewProp_JoinPasswordInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_HideFullCheck = { "HideFullCheck", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, HideFullCheck), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HideFullCheck_MetaData), NewProp_HideFullCheck_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_QuickJoinButton = { "QuickJoinButton", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, QuickJoinButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuickJoinButton_MetaData), NewProp_QuickJoinButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_HostButton = { "HostButton", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, HostButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HostButton_MetaData), NewProp_HostButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_RefreshButton = { "RefreshButton", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, RefreshButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefreshButton_MetaData), NewProp_RefreshButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_JoinButton = { "JoinButton", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, JoinButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinButton_MetaData), NewProp_JoinButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_LeaveButton = { "LeaveButton", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, LeaveButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveButton_MetaData), NewProp_LeaveButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_OpenLevelButton = { "OpenLevelButton", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, OpenLevelButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenLevelButton_MetaData), NewProp_OpenLevelButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_BackButton = { "BackButton", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, BackButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackButton_MetaData), NewProp_BackButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_JoinByIdInput = { "JoinByIdInput", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, JoinByIdInput), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinByIdInput_MetaData), NewProp_JoinByIdInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_JoinByIdButton = { "JoinByIdButton", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, JoinByIdButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinByIdButton_MetaData), NewProp_JoinByIdButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_SessionList = { "SessionList", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, SessionList), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionList_MetaData), NewProp_SessionList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_StatusText = { "StatusText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, StatusText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusText_MetaData), NewProp_StatusText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_BusyBar = { "BusyBar", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, BusyBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BusyBar_MetaData), NewProp_BusyBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_SessionCardButtons_Inner = { "SessionCardButtons", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UZonefallSessionCardButton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_SessionCardButtons = { "SessionCardButtons", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, SessionCardButtons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionCardButtons_MetaData), NewProp_SessionCardButtons_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_CachedSessions_Inner = { "CachedSessions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult, METADATA_PARAMS(0, nullptr) }; // 11846451
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_CachedSessions = { "CachedSessions", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, CachedSessions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedSessions_MetaData), NewProp_CachedSessions_MetaData) }; // 11846451
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_SelectedSessionIndex = { "SelectedSessionIndex", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, SelectedSessionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedSessionIndex_MetaData), NewProp_SelectedSessionIndex_MetaData) };
void Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_bBusy_SetBit(void* Obj)
{
	((UZonefallOnlineLobbyWidget*)Obj)->bBusy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_bBusy = { "bBusy", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallOnlineLobbyWidget), &Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_bBusy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBusy_MetaData), NewProp_bBusy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_TimeSinceLastRefresh = { "TimeSinceLastRefresh", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, TimeSinceLastRefresh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSinceLastRefresh_MetaData), NewProp_TimeSinceLastRefresh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_LastClickedCardIndex = { "LastClickedCardIndex", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, LastClickedCardIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastClickedCardIndex_MetaData), NewProp_LastClickedCardIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_DoubleClickJoinSeconds = { "DoubleClickJoinSeconds", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallOnlineLobbyWidget, DoubleClickJoinSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoubleClickJoinSeconds_MetaData), NewProp_DoubleClickJoinSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_BackgroundTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_AccentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_CardTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_CardHoverTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_TitleFontSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_BodyFontSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_bAutoRefreshOnConstruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_AutoRefreshIntervalSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_MaxSessionResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_bLanByDefault,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_AvailableMaps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_AvailableMaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_RootBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_RootBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_TitleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_SubtitleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_PlayerBannerText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_ModeBadgeText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_SessionListHeaderText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_ContentRow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_HostColumn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_HostBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_ServerNameInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_MapSelectBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_MaxPlayersBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_LanCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_PrivacyBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_HostPasswordInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_JoinPasswordInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_HideFullCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_QuickJoinButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_HostButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_RefreshButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_JoinButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_LeaveButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_OpenLevelButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_BackButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_JoinByIdInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_JoinByIdButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_SessionList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_StatusText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_BusyBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_SessionCardButtons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_SessionCardButtons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_CachedSessions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_CachedSessions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_SelectedSessionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_bBusy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_TimeSinceLastRefresh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_LastClickedCardIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::NewProp_DoubleClickJoinSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::PropPointers) < 2048);
// ********** End Class UZonefallOnlineLobbyWidget Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::ClassParams = {
	&UZonefallOnlineLobbyWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::Class_MetaDataParams)
};
void UZonefallOnlineLobbyWidget::StaticRegisterNativesUZonefallOnlineLobbyWidget()
{
	UClass* Class = UZonefallOnlineLobbyWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallOnlineLobbyWidget()
{
	if (!Z_Registration_Info_UClass_UZonefallOnlineLobbyWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallOnlineLobbyWidget.OuterSingleton, Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallOnlineLobbyWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallOnlineLobbyWidget);
UZonefallOnlineLobbyWidget::~UZonefallOnlineLobbyWidget() {}
// ********** End Class UZonefallOnlineLobbyWidget *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallOnlineLobbyWidget_h__Script_UIWorld_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZonefallSessionCardButton, UZonefallSessionCardButton::StaticClass, TEXT("UZonefallSessionCardButton"), &Z_Registration_Info_UClass_UZonefallSessionCardButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallSessionCardButton), 1564584325U) },
		{ Z_Construct_UClass_UZonefallOnlineLobbyWidget, UZonefallOnlineLobbyWidget::StaticClass, TEXT("UZonefallOnlineLobbyWidget"), &Z_Registration_Info_UClass_UZonefallOnlineLobbyWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallOnlineLobbyWidget), 4023972113U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallOnlineLobbyWidget_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallOnlineLobbyWidget_h__Script_UIWorld_4061994882{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallOnlineLobbyWidget_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallOnlineLobbyWidget_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
