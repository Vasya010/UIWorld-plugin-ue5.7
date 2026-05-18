// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZonefallModernButtonWidget.h"
#include "Fonts/SlateFontInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallModernButtonWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallModernButtonWidget();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallModernButtonWidget_NoRegister();
UIWORLD_API UEnum* Z_Construct_UEnum_UIWorld_EZonefallModernButtonTheme();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallModernButtonClicked__DelegateSignature();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallStartGameRequested__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnZonefallModernButtonClicked ****************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnZonefallModernButtonClicked__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnZonefallModernButtonClicked constinit property declarations ********
// ********** End Delegate FOnZonefallModernButtonClicked constinit property declarations **********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnZonefallModernButtonClicked__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnZonefallModernButtonClicked__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallModernButtonClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnZonefallModernButtonClicked__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallModernButtonClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnZonefallModernButtonClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnZonefallModernButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallModernButtonClicked)
{
	OnZonefallModernButtonClicked.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnZonefallModernButtonClicked ******************************************

// ********** Begin Delegate FOnZonefallStartGameRequested *****************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnZonefallStartGameRequested__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnZonefallStartGameRequested constinit property declarations *********
// ********** End Delegate FOnZonefallStartGameRequested constinit property declarations ***********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnZonefallStartGameRequested__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnZonefallStartGameRequested__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallStartGameRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnZonefallStartGameRequested__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallStartGameRequested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnZonefallStartGameRequested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnZonefallStartGameRequested_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallStartGameRequested)
{
	OnZonefallStartGameRequested.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnZonefallStartGameRequested *******************************************

// ********** Begin Enum EZonefallModernButtonTheme ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EZonefallModernButtonTheme;
static UEnum* EZonefallModernButtonTheme_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EZonefallModernButtonTheme.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EZonefallModernButtonTheme.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UIWorld_EZonefallModernButtonTheme, (UObject*)Z_Construct_UPackage__Script_UIWorld(), TEXT("EZonefallModernButtonTheme"));
	}
	return Z_Registration_Info_UEnum_EZonefallModernButtonTheme.OuterSingleton;
}
template<> UIWORLD_NON_ATTRIBUTED_API UEnum* StaticEnum<EZonefallModernButtonTheme>()
{
	return EZonefallModernButtonTheme_StaticEnum();
}
struct Z_Construct_UEnum_UIWorld_EZonefallModernButtonTheme_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dark.DisplayName", "Dark" },
		{ "Dark.Name", "EZonefallModernButtonTheme::Dark" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
		{ "Neon.DisplayName", "Neon" },
		{ "Neon.Name", "EZonefallModernButtonTheme::Neon" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EZonefallModernButtonTheme::Dark", (int64)EZonefallModernButtonTheme::Dark },
		{ "EZonefallModernButtonTheme::Neon", (int64)EZonefallModernButtonTheme::Neon },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_UIWorld_EZonefallModernButtonTheme_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UIWorld_EZonefallModernButtonTheme_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UIWorld,
	nullptr,
	"EZonefallModernButtonTheme",
	"EZonefallModernButtonTheme",
	Z_Construct_UEnum_UIWorld_EZonefallModernButtonTheme_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UIWorld_EZonefallModernButtonTheme_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UIWorld_EZonefallModernButtonTheme_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UIWorld_EZonefallModernButtonTheme_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UIWorld_EZonefallModernButtonTheme()
{
	if (!Z_Registration_Info_UEnum_EZonefallModernButtonTheme.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EZonefallModernButtonTheme.InnerSingleton, Z_Construct_UEnum_UIWorld_EZonefallModernButtonTheme_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EZonefallModernButtonTheme.InnerSingleton;
}
// ********** End Enum EZonefallModernButtonTheme **************************************************

// ********** Begin Class UZonefallModernButtonWidget Function ApplyThemePreset ********************
struct Z_Construct_UFunction_UZonefallModernButtonWidget_ApplyThemePreset_Statics
{
	struct ZonefallModernButtonWidget_eventApplyThemePreset_Parms
	{
		EZonefallModernButtonTheme NewTheme;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|ModernButton" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyThemePreset constinit property declarations **********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewTheme_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewTheme;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyThemePreset constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyThemePreset Property Definitions *********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZonefallModernButtonWidget_ApplyThemePreset_Statics::NewProp_NewTheme_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UZonefallModernButtonWidget_ApplyThemePreset_Statics::NewProp_NewTheme = { "NewTheme", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallModernButtonWidget_eventApplyThemePreset_Parms, NewTheme), Z_Construct_UEnum_UIWorld_EZonefallModernButtonTheme, METADATA_PARAMS(0, nullptr) }; // 3382823800
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallModernButtonWidget_ApplyThemePreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallModernButtonWidget_ApplyThemePreset_Statics::NewProp_NewTheme_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallModernButtonWidget_ApplyThemePreset_Statics::NewProp_NewTheme,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernButtonWidget_ApplyThemePreset_Statics::PropPointers) < 2048);
// ********** End Function ApplyThemePreset Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernButtonWidget_ApplyThemePreset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernButtonWidget, nullptr, "ApplyThemePreset", 	Z_Construct_UFunction_UZonefallModernButtonWidget_ApplyThemePreset_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernButtonWidget_ApplyThemePreset_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallModernButtonWidget_ApplyThemePreset_Statics::ZonefallModernButtonWidget_eventApplyThemePreset_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernButtonWidget_ApplyThemePreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernButtonWidget_ApplyThemePreset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallModernButtonWidget_ApplyThemePreset_Statics::ZonefallModernButtonWidget_eventApplyThemePreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallModernButtonWidget_ApplyThemePreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernButtonWidget_ApplyThemePreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallModernButtonWidget::execApplyThemePreset)
{
	P_GET_ENUM(EZonefallModernButtonTheme,Z_Param_NewTheme);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyThemePreset(EZonefallModernButtonTheme(Z_Param_NewTheme));
	P_NATIVE_END;
}
// ********** End Class UZonefallModernButtonWidget Function ApplyThemePreset **********************

// ********** Begin Class UZonefallModernButtonWidget Function ApplyVisualStyle ********************
struct Z_Construct_UFunction_UZonefallModernButtonWidget_ApplyVisualStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|ModernButton" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyVisualStyle constinit property declarations **********************
// ********** End Function ApplyVisualStyle constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernButtonWidget_ApplyVisualStyle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernButtonWidget, nullptr, "ApplyVisualStyle", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernButtonWidget_ApplyVisualStyle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernButtonWidget_ApplyVisualStyle_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallModernButtonWidget_ApplyVisualStyle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernButtonWidget_ApplyVisualStyle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallModernButtonWidget::execApplyVisualStyle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyVisualStyle();
	P_NATIVE_END;
}
// ********** End Class UZonefallModernButtonWidget Function ApplyVisualStyle **********************

// ********** Begin Class UZonefallModernButtonWidget Function BP_OnButtonClicked ******************
static FName NAME_UZonefallModernButtonWidget_BP_OnButtonClicked = FName(TEXT("BP_OnButtonClicked"));
void UZonefallModernButtonWidget::BP_OnButtonClicked()
{
	UFunction* Func = FindFunctionChecked(NAME_UZonefallModernButtonWidget_BP_OnButtonClicked);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|ModernButton|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Direct BP events (appear as regular Event nodes in widget graph).\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Direct BP events (appear as regular Event nodes in widget graph)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BP_OnButtonClicked constinit property declarations ********************
// ********** End Function BP_OnButtonClicked constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnButtonClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernButtonWidget, nullptr, "BP_OnButtonClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnButtonClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UZonefallModernButtonWidget Function BP_OnButtonClicked ********************

// ********** Begin Class UZonefallModernButtonWidget Function BP_OnButtonHovered ******************
static FName NAME_UZonefallModernButtonWidget_BP_OnButtonHovered = FName(TEXT("BP_OnButtonHovered"));
void UZonefallModernButtonWidget::BP_OnButtonHovered()
{
	UFunction* Func = FindFunctionChecked(NAME_UZonefallModernButtonWidget_BP_OnButtonHovered);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnButtonHovered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|ModernButton|Events" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BP_OnButtonHovered constinit property declarations ********************
// ********** End Function BP_OnButtonHovered constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnButtonHovered_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernButtonWidget, nullptr, "BP_OnButtonHovered", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnButtonHovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnButtonHovered_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnButtonHovered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnButtonHovered_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UZonefallModernButtonWidget Function BP_OnButtonHovered ********************

// ********** Begin Class UZonefallModernButtonWidget Function BP_OnButtonPressed ******************
static FName NAME_UZonefallModernButtonWidget_BP_OnButtonPressed = FName(TEXT("BP_OnButtonPressed"));
void UZonefallModernButtonWidget::BP_OnButtonPressed()
{
	UFunction* Func = FindFunctionChecked(NAME_UZonefallModernButtonWidget_BP_OnButtonPressed);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnButtonPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|ModernButton|Events" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BP_OnButtonPressed constinit property declarations ********************
// ********** End Function BP_OnButtonPressed constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnButtonPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernButtonWidget, nullptr, "BP_OnButtonPressed", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnButtonPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnButtonPressed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnButtonPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnButtonPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UZonefallModernButtonWidget Function BP_OnButtonPressed ********************

// ********** Begin Class UZonefallModernButtonWidget Function BP_OnStartGameRequested *************
static FName NAME_UZonefallModernButtonWidget_BP_OnStartGameRequested = FName(TEXT("BP_OnStartGameRequested"));
void UZonefallModernButtonWidget::BP_OnStartGameRequested()
{
	UFunction* Func = FindFunctionChecked(NAME_UZonefallModernButtonWidget_BP_OnStartGameRequested);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnStartGameRequested_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|ModernButton|Events" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BP_OnStartGameRequested constinit property declarations ***************
// ********** End Function BP_OnStartGameRequested constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnStartGameRequested_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernButtonWidget, nullptr, "BP_OnStartGameRequested", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnStartGameRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnStartGameRequested_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnStartGameRequested()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnStartGameRequested_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UZonefallModernButtonWidget Function BP_OnStartGameRequested ***************

// ********** Begin Class UZonefallModernButtonWidget Function HandleClicked ***********************
struct Z_Construct_UFunction_UZonefallModernButtonWidget_HandleClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleClicked constinit property declarations *************************
// ********** End Function HandleClicked constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernButtonWidget_HandleClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernButtonWidget, nullptr, "HandleClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernButtonWidget_HandleClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernButtonWidget_HandleClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallModernButtonWidget_HandleClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernButtonWidget_HandleClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallModernButtonWidget::execHandleClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallModernButtonWidget Function HandleClicked *************************

// ********** Begin Class UZonefallModernButtonWidget Function HandleHovered ***********************
struct Z_Construct_UFunction_UZonefallModernButtonWidget_HandleHovered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleHovered constinit property declarations *************************
// ********** End Function HandleHovered constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernButtonWidget_HandleHovered_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernButtonWidget, nullptr, "HandleHovered", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernButtonWidget_HandleHovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernButtonWidget_HandleHovered_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallModernButtonWidget_HandleHovered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernButtonWidget_HandleHovered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallModernButtonWidget::execHandleHovered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleHovered();
	P_NATIVE_END;
}
// ********** End Class UZonefallModernButtonWidget Function HandleHovered *************************

// ********** Begin Class UZonefallModernButtonWidget Function HandlePressed ***********************
struct Z_Construct_UFunction_UZonefallModernButtonWidget_HandlePressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandlePressed constinit property declarations *************************
// ********** End Function HandlePressed constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernButtonWidget_HandlePressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernButtonWidget, nullptr, "HandlePressed", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernButtonWidget_HandlePressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernButtonWidget_HandlePressed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallModernButtonWidget_HandlePressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernButtonWidget_HandlePressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallModernButtonWidget::execHandlePressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePressed();
	P_NATIVE_END;
}
// ********** End Class UZonefallModernButtonWidget Function HandlePressed *************************

// ********** Begin Class UZonefallModernButtonWidget Function HandleReleased **********************
struct Z_Construct_UFunction_UZonefallModernButtonWidget_HandleReleased_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleReleased constinit property declarations ************************
// ********** End Function HandleReleased constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernButtonWidget_HandleReleased_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernButtonWidget, nullptr, "HandleReleased", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernButtonWidget_HandleReleased_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernButtonWidget_HandleReleased_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallModernButtonWidget_HandleReleased()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernButtonWidget_HandleReleased_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallModernButtonWidget::execHandleReleased)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleReleased();
	P_NATIVE_END;
}
// ********** End Class UZonefallModernButtonWidget Function HandleReleased ************************

// ********** Begin Class UZonefallModernButtonWidget Function HandleUnhovered *********************
struct Z_Construct_UFunction_UZonefallModernButtonWidget_HandleUnhovered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleUnhovered constinit property declarations ***********************
// ********** End Function HandleUnhovered constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernButtonWidget_HandleUnhovered_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernButtonWidget, nullptr, "HandleUnhovered", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernButtonWidget_HandleUnhovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernButtonWidget_HandleUnhovered_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallModernButtonWidget_HandleUnhovered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernButtonWidget_HandleUnhovered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallModernButtonWidget::execHandleUnhovered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleUnhovered();
	P_NATIVE_END;
}
// ********** End Class UZonefallModernButtonWidget Function HandleUnhovered ***********************

// ********** Begin Class UZonefallModernButtonWidget Function RequestStartGame ********************
struct Z_Construct_UFunction_UZonefallModernButtonWidget_RequestStartGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|ModernButton" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestStartGame constinit property declarations **********************
// ********** End Function RequestStartGame constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernButtonWidget_RequestStartGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernButtonWidget, nullptr, "RequestStartGame", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernButtonWidget_RequestStartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernButtonWidget_RequestStartGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallModernButtonWidget_RequestStartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernButtonWidget_RequestStartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallModernButtonWidget::execRequestStartGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestStartGame();
	P_NATIVE_END;
}
// ********** End Class UZonefallModernButtonWidget Function RequestStartGame **********************

// ********** Begin Class UZonefallModernButtonWidget Function SetLabel ****************************
struct Z_Construct_UFunction_UZonefallModernButtonWidget_SetLabel_Statics
{
	struct ZonefallModernButtonWidget_eventSetLabel_Parms
	{
		FText InLabel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|ModernButton" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLabel constinit property declarations ******************************
	static const UECodeGen_Private::FTextPropertyParams NewProp_InLabel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLabel constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLabel Property Definitions *****************************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UZonefallModernButtonWidget_SetLabel_Statics::NewProp_InLabel = { "InLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallModernButtonWidget_eventSetLabel_Parms, InLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLabel_MetaData), NewProp_InLabel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallModernButtonWidget_SetLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallModernButtonWidget_SetLabel_Statics::NewProp_InLabel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernButtonWidget_SetLabel_Statics::PropPointers) < 2048);
// ********** End Function SetLabel Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernButtonWidget_SetLabel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernButtonWidget, nullptr, "SetLabel", 	Z_Construct_UFunction_UZonefallModernButtonWidget_SetLabel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernButtonWidget_SetLabel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallModernButtonWidget_SetLabel_Statics::ZonefallModernButtonWidget_eventSetLabel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernButtonWidget_SetLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernButtonWidget_SetLabel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallModernButtonWidget_SetLabel_Statics::ZonefallModernButtonWidget_eventSetLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallModernButtonWidget_SetLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernButtonWidget_SetLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallModernButtonWidget::execSetLabel)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InLabel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLabel(Z_Param_Out_InLabel);
	P_NATIVE_END;
}
// ********** End Class UZonefallModernButtonWidget Function SetLabel ******************************

// ********** Begin Class UZonefallModernButtonWidget Function ValidateAndBindWidgets **************
struct Z_Construct_UFunction_UZonefallModernButtonWidget_ValidateAndBindWidgets_Statics
{
	struct ZonefallModernButtonWidget_eventValidateAndBindWidgets_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|UI|ModernButton|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ValidateAndBindWidgets constinit property declarations ****************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ValidateAndBindWidgets constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ValidateAndBindWidgets Property Definitions ***************************
void Z_Construct_UFunction_UZonefallModernButtonWidget_ValidateAndBindWidgets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ZonefallModernButtonWidget_eventValidateAndBindWidgets_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZonefallModernButtonWidget_ValidateAndBindWidgets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallModernButtonWidget_eventValidateAndBindWidgets_Parms), &Z_Construct_UFunction_UZonefallModernButtonWidget_ValidateAndBindWidgets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallModernButtonWidget_ValidateAndBindWidgets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallModernButtonWidget_ValidateAndBindWidgets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernButtonWidget_ValidateAndBindWidgets_Statics::PropPointers) < 2048);
// ********** End Function ValidateAndBindWidgets Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallModernButtonWidget_ValidateAndBindWidgets_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallModernButtonWidget, nullptr, "ValidateAndBindWidgets", 	Z_Construct_UFunction_UZonefallModernButtonWidget_ValidateAndBindWidgets_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernButtonWidget_ValidateAndBindWidgets_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallModernButtonWidget_ValidateAndBindWidgets_Statics::ZonefallModernButtonWidget_eventValidateAndBindWidgets_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallModernButtonWidget_ValidateAndBindWidgets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallModernButtonWidget_ValidateAndBindWidgets_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallModernButtonWidget_ValidateAndBindWidgets_Statics::ZonefallModernButtonWidget_eventValidateAndBindWidgets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallModernButtonWidget_ValidateAndBindWidgets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallModernButtonWidget_ValidateAndBindWidgets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallModernButtonWidget::execValidateAndBindWidgets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ValidateAndBindWidgets();
	P_NATIVE_END;
}
// ********** End Class UZonefallModernButtonWidget Function ValidateAndBindWidgets ****************

// ********** Begin Class UZonefallModernButtonWidget **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallModernButtonWidget;
UClass* UZonefallModernButtonWidget::GetPrivateStaticClass()
{
	using TClass = UZonefallModernButtonWidget;
	if (!Z_Registration_Info_UClass_UZonefallModernButtonWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallModernButtonWidget"),
			Z_Registration_Info_UClass_UZonefallModernButtonWidget.InnerSingleton,
			StaticRegisterNativesUZonefallModernButtonWidget,
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
	return Z_Registration_Info_UClass_UZonefallModernButtonWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallModernButtonWidget_NoRegister()
{
	return UZonefallModernButtonWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallModernButtonWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/ZonefallModernButtonWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnClicked_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernButton" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStartGameRequested_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernButton" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernButton" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackLabel_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernButton" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelFont_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernButton" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelFontSize_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernButton" },
		{ "ClampMax", "128" },
		{ "ClampMin", "10" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelColorNormal_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernButton|Colors" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelColorHover_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernButton|Colors" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelColorPressed_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernButton|Colors" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundNormal_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernButton|Colors" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundHover_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernButton|Colors" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundPressed_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernButton|Colors" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThemePreset_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernButton|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGlassGradientStyle_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernButton|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEmitStartGameOnClick_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernButton|Behavior" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverSound_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernButton|Audio" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressSound_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernButton|Audio" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickSound_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernButton|Audio" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetButtonWidgetName_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernButton|Binding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional explicit names to bind widgets from a designer-authored blueprint.\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional explicit names to bind widgets from a designer-authored blueprint." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTextWidgetName_MetaData[] = {
		{ "Category", "Zonefall|UI|ModernButton|Binding" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBorder_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|ModernButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickButton_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|ModernButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Zonefall|UI|ModernButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallModernButtonWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallModernButtonWidget constinit property declarations **************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClicked;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartGameRequested;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
	static const UECodeGen_Private::FTextPropertyParams NewProp_FallbackLabel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LabelFont;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LabelFontSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LabelColorNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LabelColorHover;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LabelColorPressed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundHover;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundPressed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThemePreset_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ThemePreset;
	static void NewProp_bUseGlassGradientStyle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGlassGradientStyle;
	static void NewProp_bEmitStartGameOnClick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmitStartGameOnClick;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoverSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PressSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickSound;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetButtonWidgetName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetTextWidgetName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LabelText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallModernButtonWidget constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ApplyThemePreset"), .Pointer = &UZonefallModernButtonWidget::execApplyThemePreset },
		{ .NameUTF8 = UTF8TEXT("ApplyVisualStyle"), .Pointer = &UZonefallModernButtonWidget::execApplyVisualStyle },
		{ .NameUTF8 = UTF8TEXT("HandleClicked"), .Pointer = &UZonefallModernButtonWidget::execHandleClicked },
		{ .NameUTF8 = UTF8TEXT("HandleHovered"), .Pointer = &UZonefallModernButtonWidget::execHandleHovered },
		{ .NameUTF8 = UTF8TEXT("HandlePressed"), .Pointer = &UZonefallModernButtonWidget::execHandlePressed },
		{ .NameUTF8 = UTF8TEXT("HandleReleased"), .Pointer = &UZonefallModernButtonWidget::execHandleReleased },
		{ .NameUTF8 = UTF8TEXT("HandleUnhovered"), .Pointer = &UZonefallModernButtonWidget::execHandleUnhovered },
		{ .NameUTF8 = UTF8TEXT("RequestStartGame"), .Pointer = &UZonefallModernButtonWidget::execRequestStartGame },
		{ .NameUTF8 = UTF8TEXT("SetLabel"), .Pointer = &UZonefallModernButtonWidget::execSetLabel },
		{ .NameUTF8 = UTF8TEXT("ValidateAndBindWidgets"), .Pointer = &UZonefallModernButtonWidget::execValidateAndBindWidgets },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallModernButtonWidget_ApplyThemePreset, "ApplyThemePreset" }, // 1520429727
		{ &Z_Construct_UFunction_UZonefallModernButtonWidget_ApplyVisualStyle, "ApplyVisualStyle" }, // 1303736034
		{ &Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnButtonClicked, "BP_OnButtonClicked" }, // 3557806198
		{ &Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnButtonHovered, "BP_OnButtonHovered" }, // 2492509440
		{ &Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnButtonPressed, "BP_OnButtonPressed" }, // 3214934721
		{ &Z_Construct_UFunction_UZonefallModernButtonWidget_BP_OnStartGameRequested, "BP_OnStartGameRequested" }, // 1641570106
		{ &Z_Construct_UFunction_UZonefallModernButtonWidget_HandleClicked, "HandleClicked" }, // 1812596757
		{ &Z_Construct_UFunction_UZonefallModernButtonWidget_HandleHovered, "HandleHovered" }, // 2002310455
		{ &Z_Construct_UFunction_UZonefallModernButtonWidget_HandlePressed, "HandlePressed" }, // 474849876
		{ &Z_Construct_UFunction_UZonefallModernButtonWidget_HandleReleased, "HandleReleased" }, // 3049130172
		{ &Z_Construct_UFunction_UZonefallModernButtonWidget_HandleUnhovered, "HandleUnhovered" }, // 1353470733
		{ &Z_Construct_UFunction_UZonefallModernButtonWidget_RequestStartGame, "RequestStartGame" }, // 2477425590
		{ &Z_Construct_UFunction_UZonefallModernButtonWidget_SetLabel, "SetLabel" }, // 1140951237
		{ &Z_Construct_UFunction_UZonefallModernButtonWidget_ValidateAndBindWidgets, "ValidateAndBindWidgets" }, // 2377505345
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallModernButtonWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallModernButtonWidget_Statics

// ********** Begin Class UZonefallModernButtonWidget Property Definitions *************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_OnClicked = { "OnClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernButtonWidget, OnClicked), Z_Construct_UDelegateFunction_UIWorld_OnZonefallModernButtonClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnClicked_MetaData), NewProp_OnClicked_MetaData) }; // 1311372136
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_OnStartGameRequested = { "OnStartGameRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernButtonWidget, OnStartGameRequested), Z_Construct_UDelegateFunction_UIWorld_OnZonefallStartGameRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStartGameRequested_MetaData), NewProp_OnStartGameRequested_MetaData) }; // 195922314
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernButtonWidget, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_FallbackLabel = { "FallbackLabel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernButtonWidget, FallbackLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackLabel_MetaData), NewProp_FallbackLabel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_LabelFont = { "LabelFont", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernButtonWidget, LabelFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelFont_MetaData), NewProp_LabelFont_MetaData) }; // 167205173
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_LabelFontSize = { "LabelFontSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernButtonWidget, LabelFontSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelFontSize_MetaData), NewProp_LabelFontSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_LabelColorNormal = { "LabelColorNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernButtonWidget, LabelColorNormal), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelColorNormal_MetaData), NewProp_LabelColorNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_LabelColorHover = { "LabelColorHover", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernButtonWidget, LabelColorHover), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelColorHover_MetaData), NewProp_LabelColorHover_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_LabelColorPressed = { "LabelColorPressed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernButtonWidget, LabelColorPressed), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelColorPressed_MetaData), NewProp_LabelColorPressed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_BackgroundNormal = { "BackgroundNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernButtonWidget, BackgroundNormal), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundNormal_MetaData), NewProp_BackgroundNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_BackgroundHover = { "BackgroundHover", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernButtonWidget, BackgroundHover), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundHover_MetaData), NewProp_BackgroundHover_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_BackgroundPressed = { "BackgroundPressed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernButtonWidget, BackgroundPressed), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundPressed_MetaData), NewProp_BackgroundPressed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_ThemePreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_ThemePreset = { "ThemePreset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernButtonWidget, ThemePreset), Z_Construct_UEnum_UIWorld_EZonefallModernButtonTheme, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThemePreset_MetaData), NewProp_ThemePreset_MetaData) }; // 3382823800
void Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_bUseGlassGradientStyle_SetBit(void* Obj)
{
	((UZonefallModernButtonWidget*)Obj)->bUseGlassGradientStyle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_bUseGlassGradientStyle = { "bUseGlassGradientStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallModernButtonWidget), &Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_bUseGlassGradientStyle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGlassGradientStyle_MetaData), NewProp_bUseGlassGradientStyle_MetaData) };
void Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_bEmitStartGameOnClick_SetBit(void* Obj)
{
	((UZonefallModernButtonWidget*)Obj)->bEmitStartGameOnClick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_bEmitStartGameOnClick = { "bEmitStartGameOnClick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallModernButtonWidget), &Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_bEmitStartGameOnClick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEmitStartGameOnClick_MetaData), NewProp_bEmitStartGameOnClick_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_HoverSound = { "HoverSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernButtonWidget, HoverSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverSound_MetaData), NewProp_HoverSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_PressSound = { "PressSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernButtonWidget, PressSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressSound_MetaData), NewProp_PressSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_ClickSound = { "ClickSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernButtonWidget, ClickSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickSound_MetaData), NewProp_ClickSound_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_TargetButtonWidgetName = { "TargetButtonWidgetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernButtonWidget, TargetButtonWidgetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetButtonWidgetName_MetaData), NewProp_TargetButtonWidgetName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_TargetTextWidgetName = { "TargetTextWidgetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernButtonWidget, TargetTextWidgetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTextWidgetName_MetaData), NewProp_TargetTextWidgetName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_RootBorder = { "RootBorder", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernButtonWidget, RootBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBorder_MetaData), NewProp_RootBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_ClickButton = { "ClickButton", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernButtonWidget, ClickButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickButton_MetaData), NewProp_ClickButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_LabelText = { "LabelText", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallModernButtonWidget, LabelText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelText_MetaData), NewProp_LabelText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallModernButtonWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_OnClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_OnStartGameRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_FallbackLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_LabelFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_LabelFontSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_LabelColorNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_LabelColorHover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_LabelColorPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_BackgroundNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_BackgroundHover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_BackgroundPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_ThemePreset_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_ThemePreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_bUseGlassGradientStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_bEmitStartGameOnClick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_HoverSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_PressSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_ClickSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_TargetButtonWidgetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_TargetTextWidgetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_RootBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_ClickButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallModernButtonWidget_Statics::NewProp_LabelText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallModernButtonWidget_Statics::PropPointers) < 2048);
// ********** End Class UZonefallModernButtonWidget Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UZonefallModernButtonWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallModernButtonWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallModernButtonWidget_Statics::ClassParams = {
	&UZonefallModernButtonWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallModernButtonWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallModernButtonWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallModernButtonWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallModernButtonWidget_Statics::Class_MetaDataParams)
};
void UZonefallModernButtonWidget::StaticRegisterNativesUZonefallModernButtonWidget()
{
	UClass* Class = UZonefallModernButtonWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallModernButtonWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallModernButtonWidget()
{
	if (!Z_Registration_Info_UClass_UZonefallModernButtonWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallModernButtonWidget.OuterSingleton, Z_Construct_UClass_UZonefallModernButtonWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallModernButtonWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallModernButtonWidget);
UZonefallModernButtonWidget::~UZonefallModernButtonWidget() {}
// ********** End Class UZonefallModernButtonWidget ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernButtonWidget_h__Script_UIWorld_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EZonefallModernButtonTheme_StaticEnum, TEXT("EZonefallModernButtonTheme"), &Z_Registration_Info_UEnum_EZonefallModernButtonTheme, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3382823800U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZonefallModernButtonWidget, UZonefallModernButtonWidget::StaticClass, TEXT("UZonefallModernButtonWidget"), &Z_Registration_Info_UClass_UZonefallModernButtonWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallModernButtonWidget), 2446560959U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernButtonWidget_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernButtonWidget_h__Script_UIWorld_989530972{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernButtonWidget_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernButtonWidget_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernButtonWidget_h__Script_UIWorld_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallModernButtonWidget_h__Script_UIWorld_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
