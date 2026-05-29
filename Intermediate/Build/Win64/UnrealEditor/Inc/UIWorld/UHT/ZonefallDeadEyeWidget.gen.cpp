// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZonefallDeadEyeWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallDeadEyeWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
UIWORLD_API UClass* Z_Construct_UClass_AZonefallPlayerCharacter_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallDeadEyeWidget();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallDeadEyeWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UZonefallDeadEyeWidget Function BindToCharacter **************************
struct Z_Construct_UFunction_UZonefallDeadEyeWidget_BindToCharacter_Statics
{
	struct ZonefallDeadEyeWidget_eventBindToCharacter_Parms
	{
		AZonefallPlayerCharacter* InCharacter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|DeadEye" },
		{ "ModuleRelativePath", "Public/UI/ZonefallDeadEyeWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BindToCharacter constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BindToCharacter constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BindToCharacter Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZonefallDeadEyeWidget_BindToCharacter_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallDeadEyeWidget_eventBindToCharacter_Parms, InCharacter), Z_Construct_UClass_AZonefallPlayerCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallDeadEyeWidget_BindToCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallDeadEyeWidget_BindToCharacter_Statics::NewProp_InCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallDeadEyeWidget_BindToCharacter_Statics::PropPointers) < 2048);
// ********** End Function BindToCharacter Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallDeadEyeWidget_BindToCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallDeadEyeWidget, nullptr, "BindToCharacter", 	Z_Construct_UFunction_UZonefallDeadEyeWidget_BindToCharacter_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallDeadEyeWidget_BindToCharacter_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallDeadEyeWidget_BindToCharacter_Statics::ZonefallDeadEyeWidget_eventBindToCharacter_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallDeadEyeWidget_BindToCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallDeadEyeWidget_BindToCharacter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallDeadEyeWidget_BindToCharacter_Statics::ZonefallDeadEyeWidget_eventBindToCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallDeadEyeWidget_BindToCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallDeadEyeWidget_BindToCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallDeadEyeWidget::execBindToCharacter)
{
	P_GET_OBJECT(AZonefallPlayerCharacter,Z_Param_InCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToCharacter(Z_Param_InCharacter);
	P_NATIVE_END;
}
// ********** End Class UZonefallDeadEyeWidget Function BindToCharacter ****************************

// ********** Begin Class UZonefallDeadEyeWidget ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallDeadEyeWidget;
UClass* UZonefallDeadEyeWidget::GetPrivateStaticClass()
{
	using TClass = UZonefallDeadEyeWidget;
	if (!Z_Registration_Info_UClass_UZonefallDeadEyeWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallDeadEyeWidget"),
			Z_Registration_Info_UClass_UZonefallDeadEyeWidget.InnerSingleton,
			StaticRegisterNativesUZonefallDeadEyeWidget,
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
	return Z_Registration_Info_UClass_UZonefallDeadEyeWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallDeadEyeWidget_NoRegister()
{
	return UZonefallDeadEyeWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallDeadEyeWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Self-assembling Dead Eye meter HUD. Reads the bound character's Dead Eye fraction every\n * tick and draws a draining bar (RDR2-style). No Blueprint required.\n */" },
#endif
		{ "IncludePath", "UI/ZonefallDeadEyeWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallDeadEyeWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Self-assembling Dead Eye meter HUD. Reads the bound character's Dead Eye fraction every\ntick and draws a draining bar (RDR2-style). No Blueprint required." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillColor_MetaData[] = {
		{ "Category", "Zonefall|DeadEye|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallDeadEyeWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallDeadEyeWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Meter_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallDeadEyeWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallDeadEyeWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallDeadEyeWidget constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_FillColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Meter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Label;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallDeadEyeWidget constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BindToCharacter"), .Pointer = &UZonefallDeadEyeWidget::execBindToCharacter },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallDeadEyeWidget_BindToCharacter, "BindToCharacter" }, // 2753978993
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallDeadEyeWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallDeadEyeWidget_Statics

// ********** Begin Class UZonefallDeadEyeWidget Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallDeadEyeWidget_Statics::NewProp_FillColor = { "FillColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallDeadEyeWidget, FillColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillColor_MetaData), NewProp_FillColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallDeadEyeWidget_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallDeadEyeWidget, Character), Z_Construct_UClass_AZonefallPlayerCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallDeadEyeWidget_Statics::NewProp_Meter = { "Meter", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallDeadEyeWidget, Meter), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Meter_MetaData), NewProp_Meter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallDeadEyeWidget_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallDeadEyeWidget, Label), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallDeadEyeWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallDeadEyeWidget_Statics::NewProp_FillColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallDeadEyeWidget_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallDeadEyeWidget_Statics::NewProp_Meter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallDeadEyeWidget_Statics::NewProp_Label,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallDeadEyeWidget_Statics::PropPointers) < 2048);
// ********** End Class UZonefallDeadEyeWidget Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UZonefallDeadEyeWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallDeadEyeWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallDeadEyeWidget_Statics::ClassParams = {
	&UZonefallDeadEyeWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallDeadEyeWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallDeadEyeWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallDeadEyeWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallDeadEyeWidget_Statics::Class_MetaDataParams)
};
void UZonefallDeadEyeWidget::StaticRegisterNativesUZonefallDeadEyeWidget()
{
	UClass* Class = UZonefallDeadEyeWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallDeadEyeWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallDeadEyeWidget()
{
	if (!Z_Registration_Info_UClass_UZonefallDeadEyeWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallDeadEyeWidget.OuterSingleton, Z_Construct_UClass_UZonefallDeadEyeWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallDeadEyeWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallDeadEyeWidget);
UZonefallDeadEyeWidget::~UZonefallDeadEyeWidget() {}
// ********** End Class UZonefallDeadEyeWidget *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallDeadEyeWidget_h__Script_UIWorld_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZonefallDeadEyeWidget, UZonefallDeadEyeWidget::StaticClass, TEXT("UZonefallDeadEyeWidget"), &Z_Registration_Info_UClass_UZonefallDeadEyeWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallDeadEyeWidget), 850137936U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallDeadEyeWidget_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallDeadEyeWidget_h__Script_UIWorld_1275169784{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallDeadEyeWidget_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallDeadEyeWidget_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
