// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Save/UIWorldSaveGame.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeUIWorldSaveGame() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
UIWORLD_API UClass* Z_Construct_UClass_UUIWorldSaveGame();
UIWORLD_API UClass* Z_Construct_UClass_UUIWorldSaveGame_NoRegister();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUIWorldSaveGame *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UUIWorldSaveGame;
UClass* UUIWorldSaveGame::GetPrivateStaticClass()
{
	using TClass = UUIWorldSaveGame;
	if (!Z_Registration_Info_UClass_UUIWorldSaveGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UIWorldSaveGame"),
			Z_Registration_Info_UClass_UUIWorldSaveGame.InnerSingleton,
			StaticRegisterNativesUUIWorldSaveGame,
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
	return Z_Registration_Info_UClass_UUIWorldSaveGame.InnerSingleton;
}
UClass* Z_Construct_UClass_UUIWorldSaveGame_NoRegister()
{
	return UUIWorldSaveGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUIWorldSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Save/UIWorldSaveGame.h" },
		{ "ModuleRelativePath", "Public/Save/UIWorldSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedLevelName_MetaData[] = {
		{ "Category", "UIWorld|Save" },
		{ "ModuleRelativePath", "Public/Save/UIWorldSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedAtUtc_MetaData[] = {
		{ "Category", "UIWorld|Save" },
		{ "ModuleRelativePath", "Public/Save/UIWorldSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveVersion_MetaData[] = {
		{ "Category", "UIWorld|Save" },
		{ "ModuleRelativePath", "Public/Save/UIWorldSaveGame.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UUIWorldSaveGame constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SavedLevelName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedAtUtc;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SaveVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UUIWorldSaveGame constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIWorldSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UUIWorldSaveGame_Statics

// ********** Begin Class UUIWorldSaveGame Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUIWorldSaveGame_Statics::NewProp_SavedLevelName = { "SavedLevelName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldSaveGame, SavedLevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedLevelName_MetaData), NewProp_SavedLevelName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIWorldSaveGame_Statics::NewProp_SavedAtUtc = { "SavedAtUtc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldSaveGame, SavedAtUtc), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedAtUtc_MetaData), NewProp_SavedAtUtc_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUIWorldSaveGame_Statics::NewProp_SaveVersion = { "SaveVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldSaveGame, SaveVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveVersion_MetaData), NewProp_SaveVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIWorldSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldSaveGame_Statics::NewProp_SavedLevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldSaveGame_Statics::NewProp_SavedAtUtc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldSaveGame_Statics::NewProp_SaveVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIWorldSaveGame_Statics::PropPointers) < 2048);
// ********** End Class UUIWorldSaveGame Property Definitions **************************************
UObject* (*const Z_Construct_UClass_UUIWorldSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIWorldSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIWorldSaveGame_Statics::ClassParams = {
	&UUIWorldSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUIWorldSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUIWorldSaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIWorldSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIWorldSaveGame_Statics::Class_MetaDataParams)
};
void UUIWorldSaveGame::StaticRegisterNativesUUIWorldSaveGame()
{
}
UClass* Z_Construct_UClass_UUIWorldSaveGame()
{
	if (!Z_Registration_Info_UClass_UUIWorldSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIWorldSaveGame.OuterSingleton, Z_Construct_UClass_UUIWorldSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIWorldSaveGame.OuterSingleton;
}
UUIWorldSaveGame::UUIWorldSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUIWorldSaveGame);
UUIWorldSaveGame::~UUIWorldSaveGame() {}
// ********** End Class UUIWorldSaveGame ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_Save_UIWorldSaveGame_h__Script_UIWorld_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUIWorldSaveGame, UUIWorldSaveGame::StaticClass, TEXT("UUIWorldSaveGame"), &Z_Registration_Info_UClass_UUIWorldSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIWorldSaveGame), 1768510882U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_Save_UIWorldSaveGame_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_Save_UIWorldSaveGame_h__Script_UIWorld_69895419{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_Save_UIWorldSaveGame_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_Save_UIWorldSaveGame_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
