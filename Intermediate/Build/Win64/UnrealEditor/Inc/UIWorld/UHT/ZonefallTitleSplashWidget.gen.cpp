// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZonefallTitleSplashWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallTitleSplashWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallTitleSplashWidget();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallTitleSplashWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UZonefallTitleSplashWidget ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallTitleSplashWidget;
UClass* UZonefallTitleSplashWidget::GetPrivateStaticClass()
{
	using TClass = UZonefallTitleSplashWidget;
	if (!Z_Registration_Info_UClass_UZonefallTitleSplashWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallTitleSplashWidget"),
			Z_Registration_Info_UClass_UZonefallTitleSplashWidget.InnerSingleton,
			StaticRegisterNativesUZonefallTitleSplashWidget,
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
	return Z_Registration_Info_UClass_UZonefallTitleSplashWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallTitleSplashWidget_NoRegister()
{
	return UZonefallTitleSplashWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallTitleSplashWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Self-assembling animated title splash shown BEFORE shader compilation.\n * Big game name reveal + accent line draw-in + subtitle fade + scan sweep.\n * The game instance controls how long it stays on screen.\n */" },
#endif
		{ "IncludePath", "UI/ZonefallTitleSplashWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallTitleSplashWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Self-assembling animated title splash shown BEFORE shader compilation.\nBig game name reveal + accent line draw-in + subtitle fade + scan sweep.\nThe game instance controls how long it stays on screen." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameTitle_MetaData[] = {
		{ "Category", "Zonefall|Splash" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Editable game name shown large in the center.\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallTitleSplashWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Editable game name shown large in the center." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subtitle_MetaData[] = {
		{ "Category", "Zonefall|Splash" },
		{ "ModuleRelativePath", "Public/UI/ZonefallTitleSplashWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Zonefall|Splash|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallTitleSplashWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccentColor_MetaData[] = {
		{ "Category", "Zonefall|Splash|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallTitleSplashWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleFontSize_MetaData[] = {
		{ "Category", "Zonefall|Splash|Style" },
		{ "ClampMax", "120" },
		{ "ClampMin", "20" },
		{ "ModuleRelativePath", "Public/UI/ZonefallTitleSplashWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBorder_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallTitleSplashWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallTitleSplashWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitleText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallTitleSplashWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccentLine_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallTitleSplashWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScanBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallTitleSplashWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallTitleSplashWidget constinit property declarations ***************
	static const UECodeGen_Private::FTextPropertyParams NewProp_GameTitle;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Subtitle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccentColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TitleFontSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubtitleText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AccentLine;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScanBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallTitleSplashWidget constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallTitleSplashWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallTitleSplashWidget_Statics

// ********** Begin Class UZonefallTitleSplashWidget Property Definitions **************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::NewProp_GameTitle = { "GameTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallTitleSplashWidget, GameTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameTitle_MetaData), NewProp_GameTitle_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::NewProp_Subtitle = { "Subtitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallTitleSplashWidget, Subtitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subtitle_MetaData), NewProp_Subtitle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallTitleSplashWidget, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::NewProp_AccentColor = { "AccentColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallTitleSplashWidget, AccentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccentColor_MetaData), NewProp_AccentColor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::NewProp_TitleFontSize = { "TitleFontSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallTitleSplashWidget, TitleFontSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleFontSize_MetaData), NewProp_TitleFontSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::NewProp_RootBorder = { "RootBorder", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallTitleSplashWidget, RootBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBorder_MetaData), NewProp_RootBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallTitleSplashWidget, TitleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleText_MetaData), NewProp_TitleText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::NewProp_SubtitleText = { "SubtitleText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallTitleSplashWidget, SubtitleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitleText_MetaData), NewProp_SubtitleText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::NewProp_AccentLine = { "AccentLine", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallTitleSplashWidget, AccentLine), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccentLine_MetaData), NewProp_AccentLine_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::NewProp_ScanBar = { "ScanBar", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallTitleSplashWidget, ScanBar), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScanBar_MetaData), NewProp_ScanBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::NewProp_GameTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::NewProp_Subtitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::NewProp_BackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::NewProp_AccentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::NewProp_TitleFontSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::NewProp_RootBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::NewProp_TitleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::NewProp_SubtitleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::NewProp_AccentLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::NewProp_ScanBar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::PropPointers) < 2048);
// ********** End Class UZonefallTitleSplashWidget Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::ClassParams = {
	&UZonefallTitleSplashWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::Class_MetaDataParams)
};
void UZonefallTitleSplashWidget::StaticRegisterNativesUZonefallTitleSplashWidget()
{
}
UClass* Z_Construct_UClass_UZonefallTitleSplashWidget()
{
	if (!Z_Registration_Info_UClass_UZonefallTitleSplashWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallTitleSplashWidget.OuterSingleton, Z_Construct_UClass_UZonefallTitleSplashWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallTitleSplashWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallTitleSplashWidget);
UZonefallTitleSplashWidget::~UZonefallTitleSplashWidget() {}
// ********** End Class UZonefallTitleSplashWidget *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallTitleSplashWidget_h__Script_UIWorld_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZonefallTitleSplashWidget, UZonefallTitleSplashWidget::StaticClass, TEXT("UZonefallTitleSplashWidget"), &Z_Registration_Info_UClass_UZonefallTitleSplashWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallTitleSplashWidget), 1295999107U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallTitleSplashWidget_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallTitleSplashWidget_h__Script_UIWorld_1341604322{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallTitleSplashWidget_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallTitleSplashWidget_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
