// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZonefallPauseMenuWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallPauseMenuWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallPauseItemButton();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallPauseItemButton_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallPauseMenuWidget();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallPauseMenuWidget_NoRegister();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnPauseItemClicked__DelegateSignature();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnPauseMainMenuRequested__DelegateSignature();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnPauseQuitRequested__DelegateSignature();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnPauseResumeRequested__DelegateSignature();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnPauseSaveRequested__DelegateSignature();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnPauseSettingsRequested__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnPauseResumeRequested ***********************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnPauseResumeRequested__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnPauseResumeRequested constinit property declarations ***************
// ********** End Delegate FOnPauseResumeRequested constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnPauseResumeRequested__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnPauseResumeRequested__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnPauseResumeRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnPauseResumeRequested__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnPauseResumeRequested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnPauseResumeRequested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPauseResumeRequested_DelegateWrapper(const FMulticastScriptDelegate& OnPauseResumeRequested)
{
	OnPauseResumeRequested.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnPauseResumeRequested *************************************************

// ********** Begin Delegate FOnPauseSaveRequested *************************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnPauseSaveRequested__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnPauseSaveRequested constinit property declarations *****************
// ********** End Delegate FOnPauseSaveRequested constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnPauseSaveRequested__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnPauseSaveRequested__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnPauseSaveRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnPauseSaveRequested__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnPauseSaveRequested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnPauseSaveRequested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPauseSaveRequested_DelegateWrapper(const FMulticastScriptDelegate& OnPauseSaveRequested)
{
	OnPauseSaveRequested.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnPauseSaveRequested ***************************************************

// ********** Begin Delegate FOnPauseSettingsRequested *********************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnPauseSettingsRequested__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnPauseSettingsRequested constinit property declarations *************
// ********** End Delegate FOnPauseSettingsRequested constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnPauseSettingsRequested__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnPauseSettingsRequested__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnPauseSettingsRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnPauseSettingsRequested__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnPauseSettingsRequested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnPauseSettingsRequested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPauseSettingsRequested_DelegateWrapper(const FMulticastScriptDelegate& OnPauseSettingsRequested)
{
	OnPauseSettingsRequested.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnPauseSettingsRequested ***********************************************

// ********** Begin Delegate FOnPauseMainMenuRequested *********************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnPauseMainMenuRequested__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnPauseMainMenuRequested constinit property declarations *************
// ********** End Delegate FOnPauseMainMenuRequested constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnPauseMainMenuRequested__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnPauseMainMenuRequested__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnPauseMainMenuRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnPauseMainMenuRequested__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnPauseMainMenuRequested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnPauseMainMenuRequested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPauseMainMenuRequested_DelegateWrapper(const FMulticastScriptDelegate& OnPauseMainMenuRequested)
{
	OnPauseMainMenuRequested.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnPauseMainMenuRequested ***********************************************

// ********** Begin Delegate FOnPauseQuitRequested *************************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnPauseQuitRequested__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnPauseQuitRequested constinit property declarations *****************
// ********** End Delegate FOnPauseQuitRequested constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnPauseQuitRequested__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnPauseQuitRequested__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnPauseQuitRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnPauseQuitRequested__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnPauseQuitRequested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnPauseQuitRequested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPauseQuitRequested_DelegateWrapper(const FMulticastScriptDelegate& OnPauseQuitRequested)
{
	OnPauseQuitRequested.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnPauseQuitRequested ***************************************************

// ********** Begin Delegate FOnPauseItemClicked ***************************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnPauseItemClicked__DelegateSignature_Statics
{
	struct _Script_UIWorld_eventOnPauseItemClicked_Parms
	{
		int32 ItemId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnPauseItemClicked constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnPauseItemClicked constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnPauseItemClicked Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UIWorld_OnPauseItemClicked__DelegateSignature_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UIWorld_eventOnPauseItemClicked_Parms, ItemId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UIWorld_OnPauseItemClicked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIWorld_OnPauseItemClicked__DelegateSignature_Statics::NewProp_ItemId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnPauseItemClicked__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnPauseItemClicked Property Definitions ********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnPauseItemClicked__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnPauseItemClicked__DelegateSignature", 	Z_Construct_UDelegateFunction_UIWorld_OnPauseItemClicked__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnPauseItemClicked__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_UIWorld_OnPauseItemClicked__DelegateSignature_Statics::_Script_UIWorld_eventOnPauseItemClicked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnPauseItemClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnPauseItemClicked__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UIWorld_OnPauseItemClicked__DelegateSignature_Statics::_Script_UIWorld_eventOnPauseItemClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnPauseItemClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnPauseItemClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPauseItemClicked_DelegateWrapper(const FMulticastScriptDelegate& OnPauseItemClicked, int32 ItemId)
{
	struct _Script_UIWorld_eventOnPauseItemClicked_Parms
	{
		int32 ItemId;
	};
	_Script_UIWorld_eventOnPauseItemClicked_Parms Parms;
	Parms.ItemId=ItemId;
	OnPauseItemClicked.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPauseItemClicked *****************************************************

// ********** Begin Class UZonefallPauseItemButton Function HandleInternalClicked ******************
struct Z_Construct_UFunction_UZonefallPauseItemButton_HandleInternalClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleInternalClicked constinit property declarations *****************
// ********** End Function HandleInternalClicked constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallPauseItemButton_HandleInternalClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallPauseItemButton, nullptr, "HandleInternalClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallPauseItemButton_HandleInternalClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallPauseItemButton_HandleInternalClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallPauseItemButton_HandleInternalClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallPauseItemButton_HandleInternalClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallPauseItemButton::execHandleInternalClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleInternalClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallPauseItemButton Function HandleInternalClicked ********************

// ********** Begin Class UZonefallPauseItemButton *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallPauseItemButton;
UClass* UZonefallPauseItemButton::GetPrivateStaticClass()
{
	using TClass = UZonefallPauseItemButton;
	if (!Z_Registration_Info_UClass_UZonefallPauseItemButton.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallPauseItemButton"),
			Z_Registration_Info_UClass_UZonefallPauseItemButton.InnerSingleton,
			StaticRegisterNativesUZonefallPauseItemButton,
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
	return Z_Registration_Info_UClass_UZonefallPauseItemButton.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallPauseItemButton_NoRegister()
{
	return UZonefallPauseItemButton::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallPauseItemButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Menu button that remembers its row id and re-broadcasts clicks with it. */" },
#endif
		{ "IncludePath", "UI/ZonefallPauseMenuWidget.h" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Menu button that remembers its row id and re-broadcasts clicks with it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemClicked_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallPauseItemButton constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemClicked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallPauseItemButton constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleInternalClicked"), .Pointer = &UZonefallPauseItemButton::execHandleInternalClicked },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallPauseItemButton_HandleInternalClicked, "HandleInternalClicked" }, // 3942915358
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallPauseItemButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallPauseItemButton_Statics

// ********** Begin Class UZonefallPauseItemButton Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallPauseItemButton_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseItemButton, ItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallPauseItemButton_Statics::NewProp_OnItemClicked = { "OnItemClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseItemButton, OnItemClicked), Z_Construct_UDelegateFunction_UIWorld_OnPauseItemClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemClicked_MetaData), NewProp_OnItemClicked_MetaData) }; // 21508018
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallPauseItemButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseItemButton_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseItemButton_Statics::NewProp_OnItemClicked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallPauseItemButton_Statics::PropPointers) < 2048);
// ********** End Class UZonefallPauseItemButton Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UZonefallPauseItemButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UButton,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallPauseItemButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallPauseItemButton_Statics::ClassParams = {
	&UZonefallPauseItemButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallPauseItemButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallPauseItemButton_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallPauseItemButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallPauseItemButton_Statics::Class_MetaDataParams)
};
void UZonefallPauseItemButton::StaticRegisterNativesUZonefallPauseItemButton()
{
	UClass* Class = UZonefallPauseItemButton::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallPauseItemButton_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallPauseItemButton()
{
	if (!Z_Registration_Info_UClass_UZonefallPauseItemButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallPauseItemButton.OuterSingleton, Z_Construct_UClass_UZonefallPauseItemButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallPauseItemButton.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallPauseItemButton);
UZonefallPauseItemButton::~UZonefallPauseItemButton() {}
// ********** End Class UZonefallPauseItemButton ***************************************************

// ********** Begin Class UZonefallPauseMenuWidget Function HandleItemClicked **********************
struct Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleItemClicked_Statics
{
	struct ZonefallPauseMenuWidget_eventHandleItemClicked_Parms
	{
		int32 ItemId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleItemClicked constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleItemClicked constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleItemClicked Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleItemClicked_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPauseMenuWidget_eventHandleItemClicked_Parms, ItemId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleItemClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleItemClicked_Statics::NewProp_ItemId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleItemClicked_Statics::PropPointers) < 2048);
// ********** End Function HandleItemClicked Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleItemClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallPauseMenuWidget, nullptr, "HandleItemClicked", 	Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleItemClicked_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleItemClicked_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleItemClicked_Statics::ZonefallPauseMenuWidget_eventHandleItemClicked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleItemClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleItemClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleItemClicked_Statics::ZonefallPauseMenuWidget_eventHandleItemClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleItemClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleItemClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallPauseMenuWidget::execHandleItemClicked)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleItemClicked(Z_Param_ItemId);
	P_NATIVE_END;
}
// ********** End Class UZonefallPauseMenuWidget Function HandleItemClicked ************************

// ********** Begin Class UZonefallPauseMenuWidget *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallPauseMenuWidget;
UClass* UZonefallPauseMenuWidget::GetPrivateStaticClass()
{
	using TClass = UZonefallPauseMenuWidget;
	if (!Z_Registration_Info_UClass_UZonefallPauseMenuWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallPauseMenuWidget"),
			Z_Registration_Info_UClass_UZonefallPauseMenuWidget.InnerSingleton,
			StaticRegisterNativesUZonefallPauseMenuWidget,
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
	return Z_Registration_Info_UClass_UZonefallPauseMenuWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallPauseMenuWidget_NoRegister()
{
	return UZonefallPauseMenuWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallPauseMenuWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Fully self-assembling pause menu (no Blueprint required): dim backdrop, animated panel,\n * Resume / Save / Settings / Main Menu / Quit. All actions route through the game instance\n * with safe fallbacks, so it works out of the box. Esc resumes.\n */" },
#endif
		{ "IncludePath", "UI/ZonefallPauseMenuWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fully self-assembling pause menu (no Blueprint required): dim backdrop, animated panel,\nResume / Save / Settings / Main Menu / Quit. All actions route through the game instance\nwith safe fallbacks, so it works out of the box. Esc resumes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnResumeRequested_MetaData[] = {
		{ "Category", "Zonefall|Pause" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSaveRequested_MetaData[] = {
		{ "Category", "Zonefall|Pause" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSettingsRequested_MetaData[] = {
		{ "Category", "Zonefall|Pause" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMainMenuRequested_MetaData[] = {
		{ "Category", "Zonefall|Pause" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQuitRequested_MetaData[] = {
		{ "Category", "Zonefall|Pause" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[] = {
		{ "Category", "Zonefall|Pause|Text" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackdropTint_MetaData[] = {
		{ "Category", "Zonefall|Pause|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PanelTint_MetaData[] = {
		{ "Category", "Zonefall|Pause|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccentColor_MetaData[] = {
		{ "Category", "Zonefall|Pause|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleFontSize_MetaData[] = {
		{ "Category", "Zonefall|Pause|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyFontSize_MetaData[] = {
		{ "Category", "Zonefall|Pause|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Backdrop_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Panel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccentLine_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleLabel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusLabel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuButtons_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallPauseMenuWidget constinit property declarations *****************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResumeRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSaveRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSettingsRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMainMenuRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuitRequested;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TitleText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackdropTint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PanelTint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccentColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TitleFontSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BodyFontSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Backdrop;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Panel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AccentLine;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleLabel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatusLabel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuButtons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MenuButtons;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallPauseMenuWidget constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleItemClicked"), .Pointer = &UZonefallPauseMenuWidget::execHandleItemClicked },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleItemClicked, "HandleItemClicked" }, // 1917279924
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallPauseMenuWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallPauseMenuWidget_Statics

// ********** Begin Class UZonefallPauseMenuWidget Property Definitions ****************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_OnResumeRequested = { "OnResumeRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, OnResumeRequested), Z_Construct_UDelegateFunction_UIWorld_OnPauseResumeRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnResumeRequested_MetaData), NewProp_OnResumeRequested_MetaData) }; // 642338935
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_OnSaveRequested = { "OnSaveRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, OnSaveRequested), Z_Construct_UDelegateFunction_UIWorld_OnPauseSaveRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSaveRequested_MetaData), NewProp_OnSaveRequested_MetaData) }; // 3703241052
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_OnSettingsRequested = { "OnSettingsRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, OnSettingsRequested), Z_Construct_UDelegateFunction_UIWorld_OnPauseSettingsRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSettingsRequested_MetaData), NewProp_OnSettingsRequested_MetaData) }; // 1040841450
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_OnMainMenuRequested = { "OnMainMenuRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, OnMainMenuRequested), Z_Construct_UDelegateFunction_UIWorld_OnPauseMainMenuRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMainMenuRequested_MetaData), NewProp_OnMainMenuRequested_MetaData) }; // 3428320536
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_OnQuitRequested = { "OnQuitRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, OnQuitRequested), Z_Construct_UDelegateFunction_UIWorld_OnPauseQuitRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQuitRequested_MetaData), NewProp_OnQuitRequested_MetaData) }; // 702847300
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, TitleText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleText_MetaData), NewProp_TitleText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_BackdropTint = { "BackdropTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, BackdropTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackdropTint_MetaData), NewProp_BackdropTint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_PanelTint = { "PanelTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, PanelTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PanelTint_MetaData), NewProp_PanelTint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_AccentColor = { "AccentColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, AccentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccentColor_MetaData), NewProp_AccentColor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_TitleFontSize = { "TitleFontSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, TitleFontSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleFontSize_MetaData), NewProp_TitleFontSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_BodyFontSize = { "BodyFontSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, BodyFontSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyFontSize_MetaData), NewProp_BodyFontSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_Backdrop = { "Backdrop", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, Backdrop), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Backdrop_MetaData), NewProp_Backdrop_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_Panel = { "Panel", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, Panel), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Panel_MetaData), NewProp_Panel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_AccentLine = { "AccentLine", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, AccentLine), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccentLine_MetaData), NewProp_AccentLine_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_TitleLabel = { "TitleLabel", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, TitleLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleLabel_MetaData), NewProp_TitleLabel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_StatusLabel = { "StatusLabel", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, StatusLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusLabel_MetaData), NewProp_StatusLabel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_MenuButtons_Inner = { "MenuButtons", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UZonefallPauseItemButton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_MenuButtons = { "MenuButtons", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, MenuButtons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuButtons_MetaData), NewProp_MenuButtons_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_OnResumeRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_OnSaveRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_OnSettingsRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_OnMainMenuRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_OnQuitRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_TitleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_BackdropTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_PanelTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_AccentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_TitleFontSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_BodyFontSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_Backdrop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_Panel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_AccentLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_TitleLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_StatusLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_MenuButtons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_MenuButtons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::PropPointers) < 2048);
// ********** End Class UZonefallPauseMenuWidget Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::ClassParams = {
	&UZonefallPauseMenuWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::Class_MetaDataParams)
};
void UZonefallPauseMenuWidget::StaticRegisterNativesUZonefallPauseMenuWidget()
{
	UClass* Class = UZonefallPauseMenuWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallPauseMenuWidget()
{
	if (!Z_Registration_Info_UClass_UZonefallPauseMenuWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallPauseMenuWidget.OuterSingleton, Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallPauseMenuWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallPauseMenuWidget);
UZonefallPauseMenuWidget::~UZonefallPauseMenuWidget() {}
// ********** End Class UZonefallPauseMenuWidget ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallPauseMenuWidget_h__Script_UIWorld_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZonefallPauseItemButton, UZonefallPauseItemButton::StaticClass, TEXT("UZonefallPauseItemButton"), &Z_Registration_Info_UClass_UZonefallPauseItemButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallPauseItemButton), 2623654598U) },
		{ Z_Construct_UClass_UZonefallPauseMenuWidget, UZonefallPauseMenuWidget::StaticClass, TEXT("UZonefallPauseMenuWidget"), &Z_Registration_Info_UClass_UZonefallPauseMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallPauseMenuWidget), 3532996386U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallPauseMenuWidget_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallPauseMenuWidget_h__Script_UIWorld_1136179203{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallPauseMenuWidget_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallPauseMenuWidget_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
