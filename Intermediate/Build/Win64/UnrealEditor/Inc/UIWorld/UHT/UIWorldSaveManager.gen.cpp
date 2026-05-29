// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Save/UIWorldSaveManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeUIWorldSaveManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UIWORLD_API UClass* Z_Construct_UClass_UUIWorldSaveManager();
UIWORLD_API UClass* Z_Construct_UClass_UUIWorldSaveManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUIWorldSaveManager Function DeleteSave **********************************
struct Z_Construct_UFunction_UUIWorldSaveManager_DeleteSave_Statics
{
	struct UIWorldSaveManager_eventDeleteSave_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Save" },
		{ "ModuleRelativePath", "Public/Save/UIWorldSaveManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeleteSave constinit property declarations ****************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeleteSave constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeleteSave Property Definitions ***************************************
void Z_Construct_UFunction_UUIWorldSaveManager_DeleteSave_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UIWorldSaveManager_eventDeleteSave_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldSaveManager_DeleteSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldSaveManager_eventDeleteSave_Parms), &Z_Construct_UFunction_UUIWorldSaveManager_DeleteSave_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldSaveManager_DeleteSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldSaveManager_DeleteSave_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldSaveManager_DeleteSave_Statics::PropPointers) < 2048);
// ********** End Function DeleteSave Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldSaveManager_DeleteSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldSaveManager, nullptr, "DeleteSave", 	Z_Construct_UFunction_UUIWorldSaveManager_DeleteSave_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldSaveManager_DeleteSave_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldSaveManager_DeleteSave_Statics::UIWorldSaveManager_eventDeleteSave_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldSaveManager_DeleteSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldSaveManager_DeleteSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldSaveManager_DeleteSave_Statics::UIWorldSaveManager_eventDeleteSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldSaveManager_DeleteSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldSaveManager_DeleteSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldSaveManager::execDeleteSave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DeleteSave();
	P_NATIVE_END;
}
// ********** End Class UUIWorldSaveManager Function DeleteSave ************************************

// ********** Begin Class UUIWorldSaveManager Function HasSave *************************************
struct Z_Construct_UFunction_UUIWorldSaveManager_HasSave_Statics
{
	struct UIWorldSaveManager_eventHasSave_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Save" },
		{ "ModuleRelativePath", "Public/Save/UIWorldSaveManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasSave constinit property declarations *******************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasSave constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasSave Property Definitions ******************************************
void Z_Construct_UFunction_UUIWorldSaveManager_HasSave_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UIWorldSaveManager_eventHasSave_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldSaveManager_HasSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldSaveManager_eventHasSave_Parms), &Z_Construct_UFunction_UUIWorldSaveManager_HasSave_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldSaveManager_HasSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldSaveManager_HasSave_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldSaveManager_HasSave_Statics::PropPointers) < 2048);
// ********** End Function HasSave Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldSaveManager_HasSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldSaveManager, nullptr, "HasSave", 	Z_Construct_UFunction_UUIWorldSaveManager_HasSave_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldSaveManager_HasSave_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldSaveManager_HasSave_Statics::UIWorldSaveManager_eventHasSave_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldSaveManager_HasSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldSaveManager_HasSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldSaveManager_HasSave_Statics::UIWorldSaveManager_eventHasSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldSaveManager_HasSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldSaveManager_HasSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldSaveManager::execHasSave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasSave();
	P_NATIVE_END;
}
// ********** End Class UUIWorldSaveManager Function HasSave ***************************************

// ********** Begin Class UUIWorldSaveManager Function LoadSavedLevelName **************************
struct Z_Construct_UFunction_UUIWorldSaveManager_LoadSavedLevelName_Statics
{
	struct UIWorldSaveManager_eventLoadSavedLevelName_Parms
	{
		FString OutLevelName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Save" },
		{ "ModuleRelativePath", "Public/Save/UIWorldSaveManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadSavedLevelName constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutLevelName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadSavedLevelName constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadSavedLevelName Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUIWorldSaveManager_LoadSavedLevelName_Statics::NewProp_OutLevelName = { "OutLevelName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldSaveManager_eventLoadSavedLevelName_Parms, OutLevelName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUIWorldSaveManager_LoadSavedLevelName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UIWorldSaveManager_eventLoadSavedLevelName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldSaveManager_LoadSavedLevelName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldSaveManager_eventLoadSavedLevelName_Parms), &Z_Construct_UFunction_UUIWorldSaveManager_LoadSavedLevelName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldSaveManager_LoadSavedLevelName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldSaveManager_LoadSavedLevelName_Statics::NewProp_OutLevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldSaveManager_LoadSavedLevelName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldSaveManager_LoadSavedLevelName_Statics::PropPointers) < 2048);
// ********** End Function LoadSavedLevelName Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldSaveManager_LoadSavedLevelName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldSaveManager, nullptr, "LoadSavedLevelName", 	Z_Construct_UFunction_UUIWorldSaveManager_LoadSavedLevelName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldSaveManager_LoadSavedLevelName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldSaveManager_LoadSavedLevelName_Statics::UIWorldSaveManager_eventLoadSavedLevelName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldSaveManager_LoadSavedLevelName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldSaveManager_LoadSavedLevelName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldSaveManager_LoadSavedLevelName_Statics::UIWorldSaveManager_eventLoadSavedLevelName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldSaveManager_LoadSavedLevelName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldSaveManager_LoadSavedLevelName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldSaveManager::execLoadSavedLevelName)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutLevelName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadSavedLevelName(Z_Param_Out_OutLevelName);
	P_NATIVE_END;
}
// ********** End Class UUIWorldSaveManager Function LoadSavedLevelName ****************************

// ********** Begin Class UUIWorldSaveManager Function SaveLevelProgress ***************************
struct Z_Construct_UFunction_UUIWorldSaveManager_SaveLevelProgress_Statics
{
	struct UIWorldSaveManager_eventSaveLevelProgress_Parms
	{
		FString LevelName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Save" },
		{ "ModuleRelativePath", "Public/Save/UIWorldSaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SaveLevelProgress constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SaveLevelProgress constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SaveLevelProgress Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUIWorldSaveManager_SaveLevelProgress_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldSaveManager_eventSaveLevelProgress_Parms, LevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelName_MetaData), NewProp_LevelName_MetaData) };
void Z_Construct_UFunction_UUIWorldSaveManager_SaveLevelProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UIWorldSaveManager_eventSaveLevelProgress_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldSaveManager_SaveLevelProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldSaveManager_eventSaveLevelProgress_Parms), &Z_Construct_UFunction_UUIWorldSaveManager_SaveLevelProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldSaveManager_SaveLevelProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldSaveManager_SaveLevelProgress_Statics::NewProp_LevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldSaveManager_SaveLevelProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldSaveManager_SaveLevelProgress_Statics::PropPointers) < 2048);
// ********** End Function SaveLevelProgress Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldSaveManager_SaveLevelProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldSaveManager, nullptr, "SaveLevelProgress", 	Z_Construct_UFunction_UUIWorldSaveManager_SaveLevelProgress_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldSaveManager_SaveLevelProgress_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldSaveManager_SaveLevelProgress_Statics::UIWorldSaveManager_eventSaveLevelProgress_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldSaveManager_SaveLevelProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldSaveManager_SaveLevelProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldSaveManager_SaveLevelProgress_Statics::UIWorldSaveManager_eventSaveLevelProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldSaveManager_SaveLevelProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldSaveManager_SaveLevelProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldSaveManager::execSaveLevelProgress)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LevelName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SaveLevelProgress(Z_Param_LevelName);
	P_NATIVE_END;
}
// ********** End Class UUIWorldSaveManager Function SaveLevelProgress *****************************

// ********** Begin Class UUIWorldSaveManager ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UUIWorldSaveManager;
UClass* UUIWorldSaveManager::GetPrivateStaticClass()
{
	using TClass = UUIWorldSaveManager;
	if (!Z_Registration_Info_UClass_UUIWorldSaveManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UIWorldSaveManager"),
			Z_Registration_Info_UClass_UUIWorldSaveManager.InnerSingleton,
			StaticRegisterNativesUUIWorldSaveManager,
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
	return Z_Registration_Info_UClass_UUIWorldSaveManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UUIWorldSaveManager_NoRegister()
{
	return UUIWorldSaveManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUIWorldSaveManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Save/UIWorldSaveManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Save/UIWorldSaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[] = {
		{ "Category", "UIWorld|Save" },
		{ "ModuleRelativePath", "Public/Save/UIWorldSaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[] = {
		{ "Category", "UIWorld|Save" },
		{ "ModuleRelativePath", "Public/Save/UIWorldSaveManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UUIWorldSaveManager constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UUIWorldSaveManager constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DeleteSave"), .Pointer = &UUIWorldSaveManager::execDeleteSave },
		{ .NameUTF8 = UTF8TEXT("HasSave"), .Pointer = &UUIWorldSaveManager::execHasSave },
		{ .NameUTF8 = UTF8TEXT("LoadSavedLevelName"), .Pointer = &UUIWorldSaveManager::execLoadSavedLevelName },
		{ .NameUTF8 = UTF8TEXT("SaveLevelProgress"), .Pointer = &UUIWorldSaveManager::execSaveLevelProgress },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIWorldSaveManager_DeleteSave, "DeleteSave" }, // 2132863111
		{ &Z_Construct_UFunction_UUIWorldSaveManager_HasSave, "HasSave" }, // 1005098899
		{ &Z_Construct_UFunction_UUIWorldSaveManager_LoadSavedLevelName, "LoadSavedLevelName" }, // 361849412
		{ &Z_Construct_UFunction_UUIWorldSaveManager_SaveLevelProgress, "SaveLevelProgress" }, // 2887266473
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIWorldSaveManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UUIWorldSaveManager_Statics

// ********** Begin Class UUIWorldSaveManager Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUIWorldSaveManager_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldSaveManager, SaveSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveSlotName_MetaData), NewProp_SaveSlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUIWorldSaveManager_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldSaveManager, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIndex_MetaData), NewProp_UserIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIWorldSaveManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldSaveManager_Statics::NewProp_SaveSlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldSaveManager_Statics::NewProp_UserIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIWorldSaveManager_Statics::PropPointers) < 2048);
// ********** End Class UUIWorldSaveManager Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UUIWorldSaveManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIWorldSaveManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIWorldSaveManager_Statics::ClassParams = {
	&UUIWorldSaveManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUIWorldSaveManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUIWorldSaveManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIWorldSaveManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIWorldSaveManager_Statics::Class_MetaDataParams)
};
void UUIWorldSaveManager::StaticRegisterNativesUUIWorldSaveManager()
{
	UClass* Class = UUIWorldSaveManager::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UUIWorldSaveManager_Statics::Funcs));
}
UClass* Z_Construct_UClass_UUIWorldSaveManager()
{
	if (!Z_Registration_Info_UClass_UUIWorldSaveManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIWorldSaveManager.OuterSingleton, Z_Construct_UClass_UUIWorldSaveManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIWorldSaveManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUIWorldSaveManager);
UUIWorldSaveManager::~UUIWorldSaveManager() {}
// ********** End Class UUIWorldSaveManager ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Save_UIWorldSaveManager_h__Script_UIWorld_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUIWorldSaveManager, UUIWorldSaveManager::StaticClass, TEXT("UUIWorldSaveManager"), &Z_Registration_Info_UClass_UUIWorldSaveManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIWorldSaveManager), 284224086U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Save_UIWorldSaveManager_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Save_UIWorldSaveManager_h__Script_UIWorld_1497061372{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Save_UIWorldSaveManager_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Save_UIWorldSaveManager_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
