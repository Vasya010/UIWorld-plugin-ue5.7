// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIWorldMainMenuWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeUIWorldMainMenuWidget() {}

// ********** Begin Cross Module References ********************************************************
UIWORLD_API UClass* Z_Construct_UClass_UUIWorldMainMenuWidget();
UIWORLD_API UClass* Z_Construct_UClass_UUIWorldMainMenuWidget_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallFancyMenuWidget();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUIWorldMainMenuWidget ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UUIWorldMainMenuWidget;
UClass* UUIWorldMainMenuWidget::GetPrivateStaticClass()
{
	using TClass = UUIWorldMainMenuWidget;
	if (!Z_Registration_Info_UClass_UUIWorldMainMenuWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UIWorldMainMenuWidget"),
			Z_Registration_Info_UClass_UUIWorldMainMenuWidget.InnerSingleton,
			StaticRegisterNativesUUIWorldMainMenuWidget,
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
	return Z_Registration_Info_UClass_UUIWorldMainMenuWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UUIWorldMainMenuWidget_NoRegister()
{
	return UUIWorldMainMenuWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUIWorldMainMenuWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dedicated main menu widget class for UIWorld plugin.\n// Inherits all existing C++ functionality from ZonefallFancyMenuWidget.\n" },
#endif
		{ "IncludePath", "UI/UIWorldMainMenuWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/UIWorldMainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dedicated main menu widget class for UIWorld plugin.\nInherits all existing C++ functionality from ZonefallFancyMenuWidget." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UUIWorldMainMenuWidget constinit property declarations *******************
// ********** End Class UUIWorldMainMenuWidget constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIWorldMainMenuWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UUIWorldMainMenuWidget_Statics
UObject* (*const Z_Construct_UClass_UUIWorldMainMenuWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UZonefallFancyMenuWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIWorldMainMenuWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIWorldMainMenuWidget_Statics::ClassParams = {
	&UUIWorldMainMenuWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIWorldMainMenuWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIWorldMainMenuWidget_Statics::Class_MetaDataParams)
};
void UUIWorldMainMenuWidget::StaticRegisterNativesUUIWorldMainMenuWidget()
{
}
UClass* Z_Construct_UClass_UUIWorldMainMenuWidget()
{
	if (!Z_Registration_Info_UClass_UUIWorldMainMenuWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIWorldMainMenuWidget.OuterSingleton, Z_Construct_UClass_UUIWorldMainMenuWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIWorldMainMenuWidget.OuterSingleton;
}
UUIWorldMainMenuWidget::UUIWorldMainMenuWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUIWorldMainMenuWidget);
UUIWorldMainMenuWidget::~UUIWorldMainMenuWidget() {}
// ********** End Class UUIWorldMainMenuWidget *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_UIWorldMainMenuWidget_h__Script_UIWorld_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUIWorldMainMenuWidget, UUIWorldMainMenuWidget::StaticClass, TEXT("UUIWorldMainMenuWidget"), &Z_Registration_Info_UClass_UUIWorldMainMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIWorldMainMenuWidget), 3972689224U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_UIWorldMainMenuWidget_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_UIWorldMainMenuWidget_h__Script_UIWorld_1184202464{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_UIWorldMainMenuWidget_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UI_UIWorldMainMenuWidget_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
