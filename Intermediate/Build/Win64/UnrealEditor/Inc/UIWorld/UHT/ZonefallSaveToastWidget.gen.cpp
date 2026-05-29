// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZonefallSaveToastWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallSaveToastWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallSaveToastWidget();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallSaveToastWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCircularThrobber_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UZonefallSaveToastWidget Function ShowToast ******************************
struct Z_Construct_UFunction_UZonefallSaveToastWidget_ShowToast_Statics
{
	struct ZonefallSaveToastWidget_eventShowToast_Parms
	{
		FText Title;
		FText Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Save" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSaveToastWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShowToast constinit property declarations *****************************
	static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShowToast constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShowToast Property Definitions ****************************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UZonefallSaveToastWidget_ShowToast_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSaveToastWidget_eventShowToast_Parms, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UZonefallSaveToastWidget_ShowToast_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallSaveToastWidget_eventShowToast_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallSaveToastWidget_ShowToast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSaveToastWidget_ShowToast_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallSaveToastWidget_ShowToast_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSaveToastWidget_ShowToast_Statics::PropPointers) < 2048);
// ********** End Function ShowToast Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallSaveToastWidget_ShowToast_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallSaveToastWidget, nullptr, "ShowToast", 	Z_Construct_UFunction_UZonefallSaveToastWidget_ShowToast_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSaveToastWidget_ShowToast_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallSaveToastWidget_ShowToast_Statics::ZonefallSaveToastWidget_eventShowToast_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallSaveToastWidget_ShowToast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallSaveToastWidget_ShowToast_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallSaveToastWidget_ShowToast_Statics::ZonefallSaveToastWidget_eventShowToast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallSaveToastWidget_ShowToast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallSaveToastWidget_ShowToast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallSaveToastWidget::execShowToast)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Title);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowToast(Z_Param_Out_Title,Z_Param_Out_Message);
	P_NATIVE_END;
}
// ********** End Class UZonefallSaveToastWidget Function ShowToast ********************************

// ********** Begin Class UZonefallSaveToastWidget *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallSaveToastWidget;
UClass* UZonefallSaveToastWidget::GetPrivateStaticClass()
{
	using TClass = UZonefallSaveToastWidget;
	if (!Z_Registration_Info_UClass_UZonefallSaveToastWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallSaveToastWidget"),
			Z_Registration_Info_UClass_UZonefallSaveToastWidget.InnerSingleton,
			StaticRegisterNativesUZonefallSaveToastWidget,
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
	return Z_Registration_Info_UClass_UZonefallSaveToastWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallSaveToastWidget_NoRegister()
{
	return UZonefallSaveToastWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallSaveToastWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Self-managing \"saved\" toast that slides in from the right edge, holds, then slides\n * out and removes itself. GTA-style save indicator. Add to viewport and call ShowToast.\n */" },
#endif
		{ "IncludePath", "UI/ZonefallSaveToastWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSaveToastWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Self-managing \"saved\" toast that slides in from the right edge, holds, then slides\nout and removes itself. GTA-style save indicator. Add to viewport and call ShowToast." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTitle_MetaData[] = {
		{ "Category", "Zonefall|Save|Toast" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSaveToastWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayDuration_MetaData[] = {
		{ "Category", "Zonefall|Save|Toast" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.5" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSaveToastWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PanelTint_MetaData[] = {
		{ "Category", "Zonefall|Save|Toast|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSaveToastWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccentColor_MetaData[] = {
		{ "Category", "Zonefall|Save|Toast|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSaveToastWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Panel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSaveToastWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spinner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSaveToastWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSaveToastWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallSaveToastWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallSaveToastWidget constinit property declarations *****************
	static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultTitle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplayDuration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PanelTint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccentColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Panel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spinner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MessageText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallSaveToastWidget constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ShowToast"), .Pointer = &UZonefallSaveToastWidget::execShowToast },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallSaveToastWidget_ShowToast, "ShowToast" }, // 461331749
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallSaveToastWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallSaveToastWidget_Statics

// ********** Begin Class UZonefallSaveToastWidget Property Definitions ****************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallSaveToastWidget_Statics::NewProp_DefaultTitle = { "DefaultTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSaveToastWidget, DefaultTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTitle_MetaData), NewProp_DefaultTitle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZonefallSaveToastWidget_Statics::NewProp_DisplayDuration = { "DisplayDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSaveToastWidget, DisplayDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayDuration_MetaData), NewProp_DisplayDuration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallSaveToastWidget_Statics::NewProp_PanelTint = { "PanelTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSaveToastWidget, PanelTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PanelTint_MetaData), NewProp_PanelTint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallSaveToastWidget_Statics::NewProp_AccentColor = { "AccentColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSaveToastWidget, AccentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccentColor_MetaData), NewProp_AccentColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSaveToastWidget_Statics::NewProp_Panel = { "Panel", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSaveToastWidget, Panel), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Panel_MetaData), NewProp_Panel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSaveToastWidget_Statics::NewProp_Spinner = { "Spinner", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSaveToastWidget, Spinner), Z_Construct_UClass_UCircularThrobber_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spinner_MetaData), NewProp_Spinner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSaveToastWidget_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSaveToastWidget, TitleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleText_MetaData), NewProp_TitleText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallSaveToastWidget_Statics::NewProp_MessageText = { "MessageText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallSaveToastWidget, MessageText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageText_MetaData), NewProp_MessageText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallSaveToastWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSaveToastWidget_Statics::NewProp_DefaultTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSaveToastWidget_Statics::NewProp_DisplayDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSaveToastWidget_Statics::NewProp_PanelTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSaveToastWidget_Statics::NewProp_AccentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSaveToastWidget_Statics::NewProp_Panel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSaveToastWidget_Statics::NewProp_Spinner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSaveToastWidget_Statics::NewProp_TitleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallSaveToastWidget_Statics::NewProp_MessageText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallSaveToastWidget_Statics::PropPointers) < 2048);
// ********** End Class UZonefallSaveToastWidget Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UZonefallSaveToastWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallSaveToastWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallSaveToastWidget_Statics::ClassParams = {
	&UZonefallSaveToastWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallSaveToastWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallSaveToastWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallSaveToastWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallSaveToastWidget_Statics::Class_MetaDataParams)
};
void UZonefallSaveToastWidget::StaticRegisterNativesUZonefallSaveToastWidget()
{
	UClass* Class = UZonefallSaveToastWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallSaveToastWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallSaveToastWidget()
{
	if (!Z_Registration_Info_UClass_UZonefallSaveToastWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallSaveToastWidget.OuterSingleton, Z_Construct_UClass_UZonefallSaveToastWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallSaveToastWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallSaveToastWidget);
UZonefallSaveToastWidget::~UZonefallSaveToastWidget() {}
// ********** End Class UZonefallSaveToastWidget ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSaveToastWidget_h__Script_UIWorld_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZonefallSaveToastWidget, UZonefallSaveToastWidget::StaticClass, TEXT("UZonefallSaveToastWidget"), &Z_Registration_Info_UClass_UZonefallSaveToastWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallSaveToastWidget), 1705144929U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSaveToastWidget_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSaveToastWidget_h__Script_UIWorld_458905404{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSaveToastWidget_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallSaveToastWidget_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
