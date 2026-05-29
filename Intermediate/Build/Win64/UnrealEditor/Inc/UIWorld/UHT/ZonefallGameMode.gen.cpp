// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMode/ZonefallGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UIWORLD_API UClass* Z_Construct_UClass_AZonefallGameMode();
UIWORLD_API UClass* Z_Construct_UClass_AZonefallGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AZonefallGameMode ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AZonefallGameMode;
UClass* AZonefallGameMode::GetPrivateStaticClass()
{
	using TClass = AZonefallGameMode;
	if (!Z_Registration_Info_UClass_AZonefallGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallGameMode"),
			Z_Registration_Info_UClass_AZonefallGameMode.InnerSingleton,
			StaticRegisterNativesAZonefallGameMode,
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
	return Z_Registration_Info_UClass_AZonefallGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AZonefallGameMode_NoRegister()
{
	return AZonefallGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AZonefallGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Default gameplay GameMode for Zonefall.\n *\n * Spawns AZonefallPlayerCharacter (third/first-person, Enhanced Input, replicated\n * inventory) as the default pawn so the hero works out of the box. Seamless travel\n * is enabled for clean online map transitions.\n *\n * Wired via Config/DefaultEngine.ini -> GlobalDefaultGameMode = /Script/UIWorld.ZonefallGameMode.\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/ZonefallGameMode.h" },
		{ "ModuleRelativePath", "Public/GameMode/ZonefallGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default gameplay GameMode for Zonefall.\n\nSpawns AZonefallPlayerCharacter (third/first-person, Enhanced Input, replicated\ninventory) as the default pawn so the hero works out of the box. Seamless travel\nis enabled for clean online map transitions.\n\nWired via Config/DefaultEngine.ini -> GlobalDefaultGameMode = /Script/UIWorld.ZonefallGameMode." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AZonefallGameMode constinit property declarations ************************
// ********** End Class AZonefallGameMode constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZonefallGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AZonefallGameMode_Statics
UObject* (*const Z_Construct_UClass_AZonefallGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZonefallGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AZonefallGameMode_Statics::ClassParams = {
	&AZonefallGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AZonefallGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AZonefallGameMode_Statics::Class_MetaDataParams)
};
void AZonefallGameMode::StaticRegisterNativesAZonefallGameMode()
{
}
UClass* Z_Construct_UClass_AZonefallGameMode()
{
	if (!Z_Registration_Info_UClass_AZonefallGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AZonefallGameMode.OuterSingleton, Z_Construct_UClass_AZonefallGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AZonefallGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AZonefallGameMode);
AZonefallGameMode::~AZonefallGameMode() {}
// ********** End Class AZonefallGameMode **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_GameMode_ZonefallGameMode_h__Script_UIWorld_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AZonefallGameMode, AZonefallGameMode::StaticClass, TEXT("AZonefallGameMode"), &Z_Registration_Info_UClass_AZonefallGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZonefallGameMode), 2823842410U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_GameMode_ZonefallGameMode_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_GameMode_ZonefallGameMode_h__Script_UIWorld_3993423938{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_GameMode_ZonefallGameMode_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_GameMode_ZonefallGameMode_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
