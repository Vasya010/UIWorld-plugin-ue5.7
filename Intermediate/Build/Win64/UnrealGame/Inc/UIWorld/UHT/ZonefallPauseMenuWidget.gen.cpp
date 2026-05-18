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
UIWORLD_API UClass* Z_Construct_UClass_UZonefallPauseMenuWidget();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallPauseMenuWidget_NoRegister();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnPauseMainMenuRequested__DelegateSignature();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnPauseQuitRequested__DelegateSignature();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnPauseResumeRequested__DelegateSignature();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnPauseSettingsRequested__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
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

// ********** Begin Class UZonefallPauseMenuWidget Function HandleAnyUnhovered *********************
struct Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleAnyUnhovered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleAnyUnhovered constinit property declarations ********************
// ********** End Function HandleAnyUnhovered constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleAnyUnhovered_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallPauseMenuWidget, nullptr, "HandleAnyUnhovered", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleAnyUnhovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleAnyUnhovered_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleAnyUnhovered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleAnyUnhovered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallPauseMenuWidget::execHandleAnyUnhovered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleAnyUnhovered();
	P_NATIVE_END;
}
// ********** End Class UZonefallPauseMenuWidget Function HandleAnyUnhovered ***********************

// ********** Begin Class UZonefallPauseMenuWidget Function HandleMainMenuClicked ******************
struct Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleMainMenuClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleMainMenuClicked constinit property declarations *****************
// ********** End Function HandleMainMenuClicked constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleMainMenuClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallPauseMenuWidget, nullptr, "HandleMainMenuClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleMainMenuClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleMainMenuClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleMainMenuClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleMainMenuClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallPauseMenuWidget::execHandleMainMenuClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleMainMenuClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallPauseMenuWidget Function HandleMainMenuClicked ********************

// ********** Begin Class UZonefallPauseMenuWidget Function HandleMainMenuHovered ******************
struct Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleMainMenuHovered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleMainMenuHovered constinit property declarations *****************
// ********** End Function HandleMainMenuHovered constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleMainMenuHovered_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallPauseMenuWidget, nullptr, "HandleMainMenuHovered", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleMainMenuHovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleMainMenuHovered_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleMainMenuHovered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleMainMenuHovered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallPauseMenuWidget::execHandleMainMenuHovered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleMainMenuHovered();
	P_NATIVE_END;
}
// ********** End Class UZonefallPauseMenuWidget Function HandleMainMenuHovered ********************

// ********** Begin Class UZonefallPauseMenuWidget Function HandleQuitClicked **********************
struct Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleQuitClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleQuitClicked constinit property declarations *********************
// ********** End Function HandleQuitClicked constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleQuitClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallPauseMenuWidget, nullptr, "HandleQuitClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleQuitClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleQuitClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleQuitClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleQuitClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallPauseMenuWidget::execHandleQuitClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleQuitClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallPauseMenuWidget Function HandleQuitClicked ************************

// ********** Begin Class UZonefallPauseMenuWidget Function HandleQuitHovered **********************
struct Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleQuitHovered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleQuitHovered constinit property declarations *********************
// ********** End Function HandleQuitHovered constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleQuitHovered_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallPauseMenuWidget, nullptr, "HandleQuitHovered", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleQuitHovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleQuitHovered_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleQuitHovered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleQuitHovered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallPauseMenuWidget::execHandleQuitHovered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleQuitHovered();
	P_NATIVE_END;
}
// ********** End Class UZonefallPauseMenuWidget Function HandleQuitHovered ************************

// ********** Begin Class UZonefallPauseMenuWidget Function HandleResumeClicked ********************
struct Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleResumeClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleResumeClicked constinit property declarations *******************
// ********** End Function HandleResumeClicked constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleResumeClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallPauseMenuWidget, nullptr, "HandleResumeClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleResumeClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleResumeClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleResumeClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleResumeClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallPauseMenuWidget::execHandleResumeClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleResumeClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallPauseMenuWidget Function HandleResumeClicked **********************

// ********** Begin Class UZonefallPauseMenuWidget Function HandleResumeHovered ********************
struct Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleResumeHovered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleResumeHovered constinit property declarations *******************
// ********** End Function HandleResumeHovered constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleResumeHovered_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallPauseMenuWidget, nullptr, "HandleResumeHovered", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleResumeHovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleResumeHovered_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleResumeHovered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleResumeHovered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallPauseMenuWidget::execHandleResumeHovered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleResumeHovered();
	P_NATIVE_END;
}
// ********** End Class UZonefallPauseMenuWidget Function HandleResumeHovered **********************

// ********** Begin Class UZonefallPauseMenuWidget Function HandleSettingsClicked ******************
struct Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleSettingsClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleSettingsClicked constinit property declarations *****************
// ********** End Function HandleSettingsClicked constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleSettingsClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallPauseMenuWidget, nullptr, "HandleSettingsClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleSettingsClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleSettingsClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleSettingsClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleSettingsClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallPauseMenuWidget::execHandleSettingsClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSettingsClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallPauseMenuWidget Function HandleSettingsClicked ********************

// ********** Begin Class UZonefallPauseMenuWidget Function HandleSettingsHovered ******************
struct Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleSettingsHovered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleSettingsHovered constinit property declarations *****************
// ********** End Function HandleSettingsHovered constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleSettingsHovered_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallPauseMenuWidget, nullptr, "HandleSettingsHovered", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleSettingsHovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleSettingsHovered_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleSettingsHovered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleSettingsHovered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallPauseMenuWidget::execHandleSettingsHovered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSettingsHovered();
	P_NATIVE_END;
}
// ********** End Class UZonefallPauseMenuWidget Function HandleSettingsHovered ********************

// ********** Begin Class UZonefallPauseMenuWidget Function ResetActionInProgress ******************
struct Z_Construct_UFunction_UZonefallPauseMenuWidget_ResetActionInProgress_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetActionInProgress constinit property declarations *****************
// ********** End Function ResetActionInProgress constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallPauseMenuWidget_ResetActionInProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallPauseMenuWidget, nullptr, "ResetActionInProgress", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallPauseMenuWidget_ResetActionInProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallPauseMenuWidget_ResetActionInProgress_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallPauseMenuWidget_ResetActionInProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallPauseMenuWidget_ResetActionInProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallPauseMenuWidget::execResetActionInProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetActionInProgress();
	P_NATIVE_END;
}
// ********** End Class UZonefallPauseMenuWidget Function ResetActionInProgress ********************

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
		{ "IncludePath", "UI/ZonefallPauseMenuWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnResumeRequested_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSettingsRequested_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMainMenuRequested_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQuitRequested_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause|Text" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResumeText_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause|Text" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsText_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause|Text" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuText_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause|Text" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuitText_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause|Text" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionInfoPrefixText_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause|Text" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResumeButtonName_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause|Designer" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsButtonName_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause|Designer" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuButtonName_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause|Designer" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuitButtonName_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause|Designer" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextNormalColor_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextHoverColor_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PanelTint_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccentColor_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackdropTint_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PanelWidth_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause|Style" },
		{ "ClampMax", "1200.0" },
		{ "ClampMin", "320.0" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBackdropFilmGrain_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilmGrainOpacity_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause|Style" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSubtlePulse_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause|FX" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableIntroAnimation_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause|FX" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntroDuration_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause|FX" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntroSlideDistance_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause|FX" },
		{ "ClampMax", "120.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBorder_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackdropBorder_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainPanelBorder_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccentLineBorder_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccentGlowImage_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootMenuBox_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleLabel_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionInfoLabel_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionDateLabel_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResumeButton_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsButton_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuButton_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[] = {
		{ "Category", "Zonefall|UI|Pause" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallPauseMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallPauseMenuWidget constinit property declarations *****************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResumeRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSettingsRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMainMenuRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuitRequested;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TitleText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ResumeText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_SettingsText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_MainMenuText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_QuitText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_SessionInfoPrefixText;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ResumeButtonName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SettingsButtonName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MainMenuButtonName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuitButtonName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextNormalColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextHoverColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PanelTint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccentColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackdropTint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PanelWidth;
	static void NewProp_bEnableBackdropFilmGrain_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBackdropFilmGrain;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmGrainOpacity;
	static void NewProp_bEnableSubtlePulse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSubtlePulse;
	static void NewProp_bEnableIntroAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableIntroAnimation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IntroDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IntroSlideDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackdropBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainPanelBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AccentLineBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AccentGlowImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootMenuBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleLabel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SessionInfoLabel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SessionDateLabel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResumeButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingsButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainMenuButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuitButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallPauseMenuWidget constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleAnyUnhovered"), .Pointer = &UZonefallPauseMenuWidget::execHandleAnyUnhovered },
		{ .NameUTF8 = UTF8TEXT("HandleMainMenuClicked"), .Pointer = &UZonefallPauseMenuWidget::execHandleMainMenuClicked },
		{ .NameUTF8 = UTF8TEXT("HandleMainMenuHovered"), .Pointer = &UZonefallPauseMenuWidget::execHandleMainMenuHovered },
		{ .NameUTF8 = UTF8TEXT("HandleQuitClicked"), .Pointer = &UZonefallPauseMenuWidget::execHandleQuitClicked },
		{ .NameUTF8 = UTF8TEXT("HandleQuitHovered"), .Pointer = &UZonefallPauseMenuWidget::execHandleQuitHovered },
		{ .NameUTF8 = UTF8TEXT("HandleResumeClicked"), .Pointer = &UZonefallPauseMenuWidget::execHandleResumeClicked },
		{ .NameUTF8 = UTF8TEXT("HandleResumeHovered"), .Pointer = &UZonefallPauseMenuWidget::execHandleResumeHovered },
		{ .NameUTF8 = UTF8TEXT("HandleSettingsClicked"), .Pointer = &UZonefallPauseMenuWidget::execHandleSettingsClicked },
		{ .NameUTF8 = UTF8TEXT("HandleSettingsHovered"), .Pointer = &UZonefallPauseMenuWidget::execHandleSettingsHovered },
		{ .NameUTF8 = UTF8TEXT("ResetActionInProgress"), .Pointer = &UZonefallPauseMenuWidget::execResetActionInProgress },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleAnyUnhovered, "HandleAnyUnhovered" }, // 3024056193
		{ &Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleMainMenuClicked, "HandleMainMenuClicked" }, // 1603453928
		{ &Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleMainMenuHovered, "HandleMainMenuHovered" }, // 2587463157
		{ &Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleQuitClicked, "HandleQuitClicked" }, // 4155258810
		{ &Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleQuitHovered, "HandleQuitHovered" }, // 5626136
		{ &Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleResumeClicked, "HandleResumeClicked" }, // 853366189
		{ &Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleResumeHovered, "HandleResumeHovered" }, // 3854483304
		{ &Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleSettingsClicked, "HandleSettingsClicked" }, // 853146093
		{ &Z_Construct_UFunction_UZonefallPauseMenuWidget_HandleSettingsHovered, "HandleSettingsHovered" }, // 1752502428
		{ &Z_Construct_UFunction_UZonefallPauseMenuWidget_ResetActionInProgress, "ResetActionInProgress" }, // 390568671
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallPauseMenuWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallPauseMenuWidget_Statics

// ********** Begin Class UZonefallPauseMenuWidget Property Definitions ****************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_OnResumeRequested = { "OnResumeRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, OnResumeRequested), Z_Construct_UDelegateFunction_UIWorld_OnPauseResumeRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnResumeRequested_MetaData), NewProp_OnResumeRequested_MetaData) }; // 642338935
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_OnSettingsRequested = { "OnSettingsRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, OnSettingsRequested), Z_Construct_UDelegateFunction_UIWorld_OnPauseSettingsRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSettingsRequested_MetaData), NewProp_OnSettingsRequested_MetaData) }; // 1040841450
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_OnMainMenuRequested = { "OnMainMenuRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, OnMainMenuRequested), Z_Construct_UDelegateFunction_UIWorld_OnPauseMainMenuRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMainMenuRequested_MetaData), NewProp_OnMainMenuRequested_MetaData) }; // 3428320536
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_OnQuitRequested = { "OnQuitRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, OnQuitRequested), Z_Construct_UDelegateFunction_UIWorld_OnPauseQuitRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQuitRequested_MetaData), NewProp_OnQuitRequested_MetaData) }; // 702847300
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, TitleText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleText_MetaData), NewProp_TitleText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_ResumeText = { "ResumeText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, ResumeText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResumeText_MetaData), NewProp_ResumeText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_SettingsText = { "SettingsText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, SettingsText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsText_MetaData), NewProp_SettingsText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_MainMenuText = { "MainMenuText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, MainMenuText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuText_MetaData), NewProp_MainMenuText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_QuitText = { "QuitText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, QuitText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuitText_MetaData), NewProp_QuitText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_SessionInfoPrefixText = { "SessionInfoPrefixText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, SessionInfoPrefixText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionInfoPrefixText_MetaData), NewProp_SessionInfoPrefixText_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_ResumeButtonName = { "ResumeButtonName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, ResumeButtonName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResumeButtonName_MetaData), NewProp_ResumeButtonName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_SettingsButtonName = { "SettingsButtonName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, SettingsButtonName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsButtonName_MetaData), NewProp_SettingsButtonName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_MainMenuButtonName = { "MainMenuButtonName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, MainMenuButtonName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuButtonName_MetaData), NewProp_MainMenuButtonName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_QuitButtonName = { "QuitButtonName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, QuitButtonName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuitButtonName_MetaData), NewProp_QuitButtonName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_TextNormalColor = { "TextNormalColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, TextNormalColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextNormalColor_MetaData), NewProp_TextNormalColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_TextHoverColor = { "TextHoverColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, TextHoverColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextHoverColor_MetaData), NewProp_TextHoverColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_PanelTint = { "PanelTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, PanelTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PanelTint_MetaData), NewProp_PanelTint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_AccentColor = { "AccentColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, AccentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccentColor_MetaData), NewProp_AccentColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_BackdropTint = { "BackdropTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, BackdropTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackdropTint_MetaData), NewProp_BackdropTint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_PanelWidth = { "PanelWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, PanelWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PanelWidth_MetaData), NewProp_PanelWidth_MetaData) };
void Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_bEnableBackdropFilmGrain_SetBit(void* Obj)
{
	((UZonefallPauseMenuWidget*)Obj)->bEnableBackdropFilmGrain = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_bEnableBackdropFilmGrain = { "bEnableBackdropFilmGrain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallPauseMenuWidget), &Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_bEnableBackdropFilmGrain_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableBackdropFilmGrain_MetaData), NewProp_bEnableBackdropFilmGrain_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_FilmGrainOpacity = { "FilmGrainOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, FilmGrainOpacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilmGrainOpacity_MetaData), NewProp_FilmGrainOpacity_MetaData) };
void Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_bEnableSubtlePulse_SetBit(void* Obj)
{
	((UZonefallPauseMenuWidget*)Obj)->bEnableSubtlePulse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_bEnableSubtlePulse = { "bEnableSubtlePulse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallPauseMenuWidget), &Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_bEnableSubtlePulse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSubtlePulse_MetaData), NewProp_bEnableSubtlePulse_MetaData) };
void Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_bEnableIntroAnimation_SetBit(void* Obj)
{
	((UZonefallPauseMenuWidget*)Obj)->bEnableIntroAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_bEnableIntroAnimation = { "bEnableIntroAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallPauseMenuWidget), &Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_bEnableIntroAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableIntroAnimation_MetaData), NewProp_bEnableIntroAnimation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_IntroDuration = { "IntroDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, IntroDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntroDuration_MetaData), NewProp_IntroDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_IntroSlideDistance = { "IntroSlideDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, IntroSlideDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntroSlideDistance_MetaData), NewProp_IntroSlideDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_RootBorder = { "RootBorder", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, RootBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBorder_MetaData), NewProp_RootBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_BackdropBorder = { "BackdropBorder", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, BackdropBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackdropBorder_MetaData), NewProp_BackdropBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_MainPanelBorder = { "MainPanelBorder", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, MainPanelBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainPanelBorder_MetaData), NewProp_MainPanelBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_AccentLineBorder = { "AccentLineBorder", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, AccentLineBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccentLineBorder_MetaData), NewProp_AccentLineBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_AccentGlowImage = { "AccentGlowImage", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, AccentGlowImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccentGlowImage_MetaData), NewProp_AccentGlowImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_RootMenuBox = { "RootMenuBox", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, RootMenuBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootMenuBox_MetaData), NewProp_RootMenuBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_TitleLabel = { "TitleLabel", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, TitleLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleLabel_MetaData), NewProp_TitleLabel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_SessionInfoLabel = { "SessionInfoLabel", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, SessionInfoLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionInfoLabel_MetaData), NewProp_SessionInfoLabel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_SessionDateLabel = { "SessionDateLabel", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, SessionDateLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionDateLabel_MetaData), NewProp_SessionDateLabel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_ResumeButton = { "ResumeButton", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, ResumeButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResumeButton_MetaData), NewProp_ResumeButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_SettingsButton = { "SettingsButton", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, SettingsButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsButton_MetaData), NewProp_SettingsButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_MainMenuButton = { "MainMenuButton", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, MainMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuButton_MetaData), NewProp_MainMenuButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallPauseMenuWidget, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuitButton_MetaData), NewProp_QuitButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_OnResumeRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_OnSettingsRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_OnMainMenuRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_OnQuitRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_TitleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_ResumeText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_SettingsText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_MainMenuText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_QuitText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_SessionInfoPrefixText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_ResumeButtonName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_SettingsButtonName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_MainMenuButtonName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_QuitButtonName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_TextNormalColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_TextHoverColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_PanelTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_AccentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_BackdropTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_PanelWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_bEnableBackdropFilmGrain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_FilmGrainOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_bEnableSubtlePulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_bEnableIntroAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_IntroDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_IntroSlideDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_RootBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_BackdropBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_MainPanelBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_AccentLineBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_AccentGlowImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_RootMenuBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_TitleLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_SessionInfoLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_SessionDateLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_ResumeButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_SettingsButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_MainMenuButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallPauseMenuWidget_Statics::NewProp_QuitButton,
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
struct Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallPauseMenuWidget_h__Script_UIWorld_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZonefallPauseMenuWidget, UZonefallPauseMenuWidget::StaticClass, TEXT("UZonefallPauseMenuWidget"), &Z_Registration_Info_UClass_UZonefallPauseMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallPauseMenuWidget), 1445448378U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallPauseMenuWidget_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallPauseMenuWidget_h__Script_UIWorld_4098556625{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallPauseMenuWidget_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallPauseMenuWidget_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
