// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZonefallHUDWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallHUDWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_AZonefallMinimapCapture_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_AZonefallPlayerCharacter_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallHUDWidget();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallHUDWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UZonefallHUDWidget Function BindToCharacter ******************************
struct Z_Construct_UFunction_UZonefallHUDWidget_BindToCharacter_Statics
{
	struct ZonefallHUDWidget_eventBindToCharacter_Parms
	{
		AZonefallPlayerCharacter* InCharacter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|HUD" },
		{ "ModuleRelativePath", "Public/UI/ZonefallHUDWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BindToCharacter constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BindToCharacter constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BindToCharacter Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZonefallHUDWidget_BindToCharacter_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallHUDWidget_eventBindToCharacter_Parms, InCharacter), Z_Construct_UClass_AZonefallPlayerCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallHUDWidget_BindToCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallHUDWidget_BindToCharacter_Statics::NewProp_InCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallHUDWidget_BindToCharacter_Statics::PropPointers) < 2048);
// ********** End Function BindToCharacter Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallHUDWidget_BindToCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallHUDWidget, nullptr, "BindToCharacter", 	Z_Construct_UFunction_UZonefallHUDWidget_BindToCharacter_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallHUDWidget_BindToCharacter_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallHUDWidget_BindToCharacter_Statics::ZonefallHUDWidget_eventBindToCharacter_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallHUDWidget_BindToCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallHUDWidget_BindToCharacter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallHUDWidget_BindToCharacter_Statics::ZonefallHUDWidget_eventBindToCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallHUDWidget_BindToCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallHUDWidget_BindToCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallHUDWidget::execBindToCharacter)
{
	P_GET_OBJECT(AZonefallPlayerCharacter,Z_Param_InCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToCharacter(Z_Param_InCharacter);
	P_NATIVE_END;
}
// ********** End Class UZonefallHUDWidget Function BindToCharacter ********************************

// ********** Begin Class UZonefallHUDWidget *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallHUDWidget;
UClass* UZonefallHUDWidget::GetPrivateStaticClass()
{
	using TClass = UZonefallHUDWidget;
	if (!Z_Registration_Info_UClass_UZonefallHUDWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallHUDWidget"),
			Z_Registration_Info_UClass_UZonefallHUDWidget.InnerSingleton,
			StaticRegisterNativesUZonefallHUDWidget,
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
	return Z_Registration_Info_UClass_UZonefallHUDWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallHUDWidget_NoRegister()
{
	return UZonefallHUDWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallHUDWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Fully self-assembling in-game HUD (no Blueprint required):\n *  - Vitals panel on the RIGHT (glass card + vertical health meter)\n *  - Round minimap (bottom-left) with rotating player blip\n *  - Weapon name + ammo (bottom-right)\n */" },
#endif
		{ "IncludePath", "UI/ZonefallHUDWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallHUDWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fully self-assembling in-game HUD (no Blueprint required):\n - Vitals panel on the RIGHT (glass card + vertical health meter)\n - Round minimap (bottom-left) with rotating player blip\n - Weapon name + ammo (bottom-right)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccentColor_MetaData[] = {
		{ "Category", "Zonefall|HUD|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapSize_MetaData[] = {
		{ "Category", "Zonefall|HUD|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarHeight_MetaData[] = {
		{ "Category", "Zonefall|HUD|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidth_MetaData[] = {
		{ "Category", "Zonefall|HUD|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapMaterial_MetaData[] = {
		{ "Category", "Zonefall|HUD|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapCapture_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthPanel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthFillBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthFill_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthHeaderText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthSubText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapImage_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapBlip_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponNameText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapMID_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallHUDWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallHUDWidget constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccentColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimapSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthBarHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthBarWidth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MinimapMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MinimapCapture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthFillBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthFill;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthHeaderText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthSubText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MinimapImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MinimapBlip;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponNameText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AmmoText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MinimapMID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallHUDWidget constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BindToCharacter"), .Pointer = &UZonefallHUDWidget::execBindToCharacter },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallHUDWidget_BindToCharacter, "BindToCharacter" }, // 1506817084
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallHUDWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallHUDWidget_Statics

// ********** Begin Class UZonefallHUDWidget Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_AccentColor = { "AccentColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallHUDWidget, AccentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccentColor_MetaData), NewProp_AccentColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_MinimapSize = { "MinimapSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallHUDWidget, MinimapSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapSize_MetaData), NewProp_MinimapSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_HealthBarHeight = { "HealthBarHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallHUDWidget, HealthBarHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarHeight_MetaData), NewProp_HealthBarHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_HealthBarWidth = { "HealthBarWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallHUDWidget, HealthBarWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarWidth_MetaData), NewProp_HealthBarWidth_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_MinimapMaterial = { "MinimapMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallHUDWidget, MinimapMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapMaterial_MetaData), NewProp_MinimapMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallHUDWidget, Character), Z_Construct_UClass_AZonefallPlayerCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_MinimapCapture = { "MinimapCapture", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallHUDWidget, MinimapCapture), Z_Construct_UClass_AZonefallMinimapCapture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapCapture_MetaData), NewProp_MinimapCapture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_HealthPanel = { "HealthPanel", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallHUDWidget, HealthPanel), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthPanel_MetaData), NewProp_HealthPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_HealthFillBox = { "HealthFillBox", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallHUDWidget, HealthFillBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthFillBox_MetaData), NewProp_HealthFillBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_HealthFill = { "HealthFill", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallHUDWidget, HealthFill), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthFill_MetaData), NewProp_HealthFill_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_HealthHeaderText = { "HealthHeaderText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallHUDWidget, HealthHeaderText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthHeaderText_MetaData), NewProp_HealthHeaderText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_HealthText = { "HealthText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallHUDWidget, HealthText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthText_MetaData), NewProp_HealthText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_HealthSubText = { "HealthSubText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallHUDWidget, HealthSubText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthSubText_MetaData), NewProp_HealthSubText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_MinimapImage = { "MinimapImage", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallHUDWidget, MinimapImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapImage_MetaData), NewProp_MinimapImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_MinimapBlip = { "MinimapBlip", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallHUDWidget, MinimapBlip), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapBlip_MetaData), NewProp_MinimapBlip_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_WeaponNameText = { "WeaponNameText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallHUDWidget, WeaponNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponNameText_MetaData), NewProp_WeaponNameText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_AmmoText = { "AmmoText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallHUDWidget, AmmoText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoText_MetaData), NewProp_AmmoText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_MinimapMID = { "MinimapMID", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallHUDWidget, MinimapMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapMID_MetaData), NewProp_MinimapMID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallHUDWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_AccentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_MinimapSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_HealthBarHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_HealthBarWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_MinimapMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_MinimapCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_HealthPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_HealthFillBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_HealthFill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_HealthHeaderText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_HealthText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_HealthSubText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_MinimapImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_MinimapBlip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_WeaponNameText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_AmmoText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallHUDWidget_Statics::NewProp_MinimapMID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallHUDWidget_Statics::PropPointers) < 2048);
// ********** End Class UZonefallHUDWidget Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UZonefallHUDWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallHUDWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallHUDWidget_Statics::ClassParams = {
	&UZonefallHUDWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallHUDWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallHUDWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallHUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallHUDWidget_Statics::Class_MetaDataParams)
};
void UZonefallHUDWidget::StaticRegisterNativesUZonefallHUDWidget()
{
	UClass* Class = UZonefallHUDWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallHUDWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallHUDWidget()
{
	if (!Z_Registration_Info_UClass_UZonefallHUDWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallHUDWidget.OuterSingleton, Z_Construct_UClass_UZonefallHUDWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallHUDWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallHUDWidget);
UZonefallHUDWidget::~UZonefallHUDWidget() {}
// ********** End Class UZonefallHUDWidget *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallHUDWidget_h__Script_UIWorld_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZonefallHUDWidget, UZonefallHUDWidget::StaticClass, TEXT("UZonefallHUDWidget"), &Z_Registration_Info_UClass_UZonefallHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallHUDWidget), 3273921367U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallHUDWidget_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallHUDWidget_h__Script_UIWorld_3290029452{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallHUDWidget_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallHUDWidget_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
