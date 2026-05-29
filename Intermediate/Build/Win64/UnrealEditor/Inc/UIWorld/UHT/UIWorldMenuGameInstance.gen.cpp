// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "orldMenuGameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeUIWorldMenuGameInstance() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UUIWorldMenuGameInstance();
UIWORLD_API UClass* Z_Construct_UClass_UUIWorldMenuGameInstance_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallShaderLoadingWidget_NoRegister();
UIWORLD_API UEnum* Z_Construct_UEnum_UIWorld_EUIWorldMenuScreen();
UIWORLD_API UEnum* Z_Construct_UEnum_UIWorld_EZonefallLanguage();
UIWORLD_API UEnum* Z_Construct_UEnum_UIWorld_EZonefallOnlineTravelPhase();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuScreenChanged__DelegateSignature();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuWidgetChanged__DelegateSignature();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineMatchReady__DelegateSignature();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineOpCompleted__DelegateSignature();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnUIWorldSessionsFound__DelegateSignature();
UIWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EUIWorldMenuScreen ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUIWorldMenuScreen;
static UEnum* EUIWorldMenuScreen_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUIWorldMenuScreen.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUIWorldMenuScreen.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UIWorld_EUIWorldMenuScreen, (UObject*)Z_Construct_UPackage__Script_UIWorld(), TEXT("EUIWorldMenuScreen"));
	}
	return Z_Registration_Info_UEnum_EUIWorldMenuScreen.OuterSingleton;
}
template<> UIWORLD_NON_ATTRIBUTED_API UEnum* StaticEnum<EUIWorldMenuScreen>()
{
	return EUIWorldMenuScreen_StaticEnum();
}
struct Z_Construct_UEnum_UIWorld_EUIWorldMenuScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Core reusable game instance for UIWorld plugin.\n" },
#endif
		{ "MainMenu.DisplayName", "Main Menu" },
		{ "MainMenu.Name", "EUIWorldMenuScreen::MainMenu" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
		{ "OnlineMenu.DisplayName", "Online Menu" },
		{ "OnlineMenu.Name", "EUIWorldMenuScreen::OnlineMenu" },
		{ "PauseMenu.DisplayName", "Pause Menu" },
		{ "PauseMenu.Name", "EUIWorldMenuScreen::PauseMenu" },
		{ "SettingsMenu.DisplayName", "Settings Menu" },
		{ "SettingsMenu.Name", "EUIWorldMenuScreen::SettingsMenu" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Core reusable game instance for UIWorld plugin." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUIWorldMenuScreen::MainMenu", (int64)EUIWorldMenuScreen::MainMenu },
		{ "EUIWorldMenuScreen::OnlineMenu", (int64)EUIWorldMenuScreen::OnlineMenu },
		{ "EUIWorldMenuScreen::PauseMenu", (int64)EUIWorldMenuScreen::PauseMenu },
		{ "EUIWorldMenuScreen::SettingsMenu", (int64)EUIWorldMenuScreen::SettingsMenu },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_UIWorld_EUIWorldMenuScreen_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UIWorld_EUIWorldMenuScreen_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UIWorld,
	nullptr,
	"EUIWorldMenuScreen",
	"EUIWorldMenuScreen",
	Z_Construct_UEnum_UIWorld_EUIWorldMenuScreen_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UIWorld_EUIWorldMenuScreen_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UIWorld_EUIWorldMenuScreen_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UIWorld_EUIWorldMenuScreen_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UIWorld_EUIWorldMenuScreen()
{
	if (!Z_Registration_Info_UEnum_EUIWorldMenuScreen.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUIWorldMenuScreen.InnerSingleton, Z_Construct_UEnum_UIWorld_EUIWorldMenuScreen_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUIWorldMenuScreen.InnerSingleton;
}
// ********** End Enum EUIWorldMenuScreen **********************************************************

// ********** Begin Enum EZonefallOnlineTravelPhase ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EZonefallOnlineTravelPhase;
static UEnum* EZonefallOnlineTravelPhase_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EZonefallOnlineTravelPhase.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EZonefallOnlineTravelPhase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UIWorld_EZonefallOnlineTravelPhase, (UObject*)Z_Construct_UPackage__Script_UIWorld(), TEXT("EZonefallOnlineTravelPhase"));
	}
	return Z_Registration_Info_UEnum_EZonefallOnlineTravelPhase.OuterSingleton;
}
template<> UIWORLD_NON_ATTRIBUTED_API UEnum* StaticEnum<EZonefallOnlineTravelPhase>()
{
	return EZonefallOnlineTravelPhase_StaticEnum();
}
struct Z_Construct_UEnum_UIWorld_EZonefallOnlineTravelPhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Host vs client online travel \xe2\x80\x94 drives loading-screen copy and pacing. */" },
#endif
		{ "Hosting.DisplayName", "Hosting" },
		{ "Hosting.Name", "EZonefallOnlineTravelPhase::Hosting" },
		{ "Joining.DisplayName", "Joining" },
		{ "Joining.Name", "EZonefallOnlineTravelPhase::Joining" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
		{ "Syncing.DisplayName", "Syncing" },
		{ "Syncing.Name", "EZonefallOnlineTravelPhase::Syncing" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Host vs client online travel \xe2\x80\x94 drives loading-screen copy and pacing." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EZonefallOnlineTravelPhase::Joining", (int64)EZonefallOnlineTravelPhase::Joining },
		{ "EZonefallOnlineTravelPhase::Hosting", (int64)EZonefallOnlineTravelPhase::Hosting },
		{ "EZonefallOnlineTravelPhase::Syncing", (int64)EZonefallOnlineTravelPhase::Syncing },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_UIWorld_EZonefallOnlineTravelPhase_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UIWorld_EZonefallOnlineTravelPhase_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UIWorld,
	nullptr,
	"EZonefallOnlineTravelPhase",
	"EZonefallOnlineTravelPhase",
	Z_Construct_UEnum_UIWorld_EZonefallOnlineTravelPhase_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UIWorld_EZonefallOnlineTravelPhase_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UIWorld_EZonefallOnlineTravelPhase_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UIWorld_EZonefallOnlineTravelPhase_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UIWorld_EZonefallOnlineTravelPhase()
{
	if (!Z_Registration_Info_UEnum_EZonefallOnlineTravelPhase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EZonefallOnlineTravelPhase.InnerSingleton, Z_Construct_UEnum_UIWorld_EZonefallOnlineTravelPhase_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EZonefallOnlineTravelPhase.InnerSingleton;
}
// ********** End Enum EZonefallOnlineTravelPhase **************************************************

// ********** Begin ScriptStruct FUIWorldOnlineSessionResult ***************************************
struct Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FUIWorldOnlineSessionResult); }
	static inline consteval int16 GetStructAlignment() { return alignof(FUIWorldOnlineSessionResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "Category", "UIWorld|Online" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningUserName_MetaData[] = {
		{ "Category", "UIWorld|Online" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[] = {
		{ "Category", "UIWorld|Online" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PingMs_MetaData[] = {
		{ "Category", "UIWorld|Online" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[] = {
		{ "Category", "UIWorld|Online" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayers_MetaData[] = {
		{ "Category", "UIWorld|Online" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLAN_MetaData[] = {
		{ "Category", "UIWorld|Online" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchResultIndex_MetaData[] = {
		{ "Category", "UIWorld|Online" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Index into the last OSS session search (used after UI filtering/sorting). */" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index into the last OSS session search (used after UI filtering/sorting)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapDisplayName_MetaData[] = {
		{ "Category", "UIWorld|Online" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFull_MetaData[] = {
		{ "Category", "UIWorld|Online" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPasswordProtected_MetaData[] = {
		{ "Category", "UIWorld|Online" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildId_MetaData[] = {
		{ "Category", "UIWorld|Online" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBuildCompatible_MetaData[] = {
		{ "Category", "UIWorld|Online" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** False when host build id does not match this client (Steam / packaged builds). */" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "False when host build id does not match this client (Steam / packaged builds)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FUIWorldOnlineSessionResult constinit property declarations *******
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OwningUserName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PingMs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPlayers;
	static void NewProp_bIsLAN_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLAN;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SearchResultIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapDisplayName;
	static void NewProp_bIsFull_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFull;
	static void NewProp_bPasswordProtected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPasswordProtected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BuildId;
	static void NewProp_bBuildCompatible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildCompatible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FUIWorldOnlineSessionResult constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIWorldOnlineSessionResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUIWorldOnlineSessionResult;
class UScriptStruct* FUIWorldOnlineSessionResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUIWorldOnlineSessionResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUIWorldOnlineSessionResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult, (UObject*)Z_Construct_UPackage__Script_UIWorld(), TEXT("UIWorldOnlineSessionResult"));
	}
	return Z_Registration_Info_UScriptStruct_FUIWorldOnlineSessionResult.OuterSingleton;
	}

// ********** Begin ScriptStruct FUIWorldOnlineSessionResult Property Definitions ******************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIWorldOnlineSessionResult, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_OwningUserName = { "OwningUserName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIWorldOnlineSessionResult, OwningUserName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningUserName_MetaData), NewProp_OwningUserName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIWorldOnlineSessionResult, ServerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerName_MetaData), NewProp_ServerName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_PingMs = { "PingMs", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIWorldOnlineSessionResult, PingMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PingMs_MetaData), NewProp_PingMs_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIWorldOnlineSessionResult, MaxPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlayers_MetaData), NewProp_MaxPlayers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_CurrentPlayers = { "CurrentPlayers", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIWorldOnlineSessionResult, CurrentPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPlayers_MetaData), NewProp_CurrentPlayers_MetaData) };
void Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_bIsLAN_SetBit(void* Obj)
{
	((FUIWorldOnlineSessionResult*)Obj)->bIsLAN = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_bIsLAN = { "bIsLAN", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUIWorldOnlineSessionResult), &Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_bIsLAN_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLAN_MetaData), NewProp_bIsLAN_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_SearchResultIndex = { "SearchResultIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIWorldOnlineSessionResult, SearchResultIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchResultIndex_MetaData), NewProp_SearchResultIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_MapDisplayName = { "MapDisplayName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIWorldOnlineSessionResult, MapDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapDisplayName_MetaData), NewProp_MapDisplayName_MetaData) };
void Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_bIsFull_SetBit(void* Obj)
{
	((FUIWorldOnlineSessionResult*)Obj)->bIsFull = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_bIsFull = { "bIsFull", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUIWorldOnlineSessionResult), &Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_bIsFull_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFull_MetaData), NewProp_bIsFull_MetaData) };
void Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_bPasswordProtected_SetBit(void* Obj)
{
	((FUIWorldOnlineSessionResult*)Obj)->bPasswordProtected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_bPasswordProtected = { "bPasswordProtected", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUIWorldOnlineSessionResult), &Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_bPasswordProtected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPasswordProtected_MetaData), NewProp_bPasswordProtected_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_BuildId = { "BuildId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIWorldOnlineSessionResult, BuildId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildId_MetaData), NewProp_BuildId_MetaData) };
void Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_bBuildCompatible_SetBit(void* Obj)
{
	((FUIWorldOnlineSessionResult*)Obj)->bBuildCompatible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_bBuildCompatible = { "bBuildCompatible", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUIWorldOnlineSessionResult), &Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_bBuildCompatible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBuildCompatible_MetaData), NewProp_bBuildCompatible_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_OwningUserName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_ServerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_PingMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_MaxPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_CurrentPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_bIsLAN,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_SearchResultIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_MapDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_bIsFull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_bPasswordProtected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_BuildId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_bBuildCompatible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FUIWorldOnlineSessionResult Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
	nullptr,
	&NewStructOps,
	"UIWorldOnlineSessionResult",
	Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::PropPointers),
	sizeof(FUIWorldOnlineSessionResult),
	alignof(FUIWorldOnlineSessionResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult()
{
	if (!Z_Registration_Info_UScriptStruct_FUIWorldOnlineSessionResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUIWorldOnlineSessionResult.InnerSingleton, Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FUIWorldOnlineSessionResult.InnerSingleton);
}
// ********** End ScriptStruct FUIWorldOnlineSessionResult *****************************************

// ********** Begin Delegate FOnUIWorldOnlineOpCompleted *******************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineOpCompleted__DelegateSignature_Statics
{
	struct _Script_UIWorld_eventOnUIWorldOnlineOpCompleted_Parms
	{
		bool bSuccess;
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnUIWorldOnlineOpCompleted constinit property declarations ***********
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnUIWorldOnlineOpCompleted constinit property declarations *************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnUIWorldOnlineOpCompleted Property Definitions **********************
void Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineOpCompleted__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_UIWorld_eventOnUIWorldOnlineOpCompleted_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineOpCompleted__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UIWorld_eventOnUIWorldOnlineOpCompleted_Parms), &Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineOpCompleted__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineOpCompleted__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UIWorld_eventOnUIWorldOnlineOpCompleted_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineOpCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineOpCompleted__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineOpCompleted__DelegateSignature_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineOpCompleted__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnUIWorldOnlineOpCompleted Property Definitions ************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineOpCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnUIWorldOnlineOpCompleted__DelegateSignature", 	Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineOpCompleted__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineOpCompleted__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineOpCompleted__DelegateSignature_Statics::_Script_UIWorld_eventOnUIWorldOnlineOpCompleted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineOpCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineOpCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineOpCompleted__DelegateSignature_Statics::_Script_UIWorld_eventOnUIWorldOnlineOpCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineOpCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineOpCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUIWorldOnlineOpCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnUIWorldOnlineOpCompleted, bool bSuccess, const FString& Message)
{
	struct _Script_UIWorld_eventOnUIWorldOnlineOpCompleted_Parms
	{
		bool bSuccess;
		FString Message;
	};
	_Script_UIWorld_eventOnUIWorldOnlineOpCompleted_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.Message=Message;
	OnUIWorldOnlineOpCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnUIWorldOnlineOpCompleted *********************************************

// ********** Begin Delegate FOnUIWorldSessionsFound ***********************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnUIWorldSessionsFound__DelegateSignature_Statics
{
	struct _Script_UIWorld_eventOnUIWorldSessionsFound_Parms
	{
		TArray<FUIWorldOnlineSessionResult> Results;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnUIWorldSessionsFound constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Results_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Results;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnUIWorldSessionsFound constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnUIWorldSessionsFound Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UIWorld_OnUIWorldSessionsFound__DelegateSignature_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult, METADATA_PARAMS(0, nullptr) }; // 11846451
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UIWorld_OnUIWorldSessionsFound__DelegateSignature_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UIWorld_eventOnUIWorldSessionsFound_Parms, Results), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Results_MetaData), NewProp_Results_MetaData) }; // 11846451
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UIWorld_OnUIWorldSessionsFound__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIWorld_OnUIWorldSessionsFound__DelegateSignature_Statics::NewProp_Results_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIWorld_OnUIWorldSessionsFound__DelegateSignature_Statics::NewProp_Results,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnUIWorldSessionsFound__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnUIWorldSessionsFound Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnUIWorldSessionsFound__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnUIWorldSessionsFound__DelegateSignature", 	Z_Construct_UDelegateFunction_UIWorld_OnUIWorldSessionsFound__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnUIWorldSessionsFound__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_UIWorld_OnUIWorldSessionsFound__DelegateSignature_Statics::_Script_UIWorld_eventOnUIWorldSessionsFound_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnUIWorldSessionsFound__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnUIWorldSessionsFound__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UIWorld_OnUIWorldSessionsFound__DelegateSignature_Statics::_Script_UIWorld_eventOnUIWorldSessionsFound_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnUIWorldSessionsFound__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnUIWorldSessionsFound__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUIWorldSessionsFound_DelegateWrapper(const FMulticastScriptDelegate& OnUIWorldSessionsFound, TArray<FUIWorldOnlineSessionResult> const& Results)
{
	struct _Script_UIWorld_eventOnUIWorldSessionsFound_Parms
	{
		TArray<FUIWorldOnlineSessionResult> Results;
	};
	_Script_UIWorld_eventOnUIWorldSessionsFound_Parms Parms;
	Parms.Results=Results;
	OnUIWorldSessionsFound.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnUIWorldSessionsFound *************************************************

// ********** Begin Delegate FOnUIWorldOnlineMatchReady ********************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineMatchReady__DelegateSignature_Statics
{
	struct _Script_UIWorld_eventOnUIWorldOnlineMatchReady_Parms
	{
		UWorld* World;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnUIWorldOnlineMatchReady constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnUIWorldOnlineMatchReady constinit property declarations **************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnUIWorldOnlineMatchReady Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineMatchReady__DelegateSignature_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UIWorld_eventOnUIWorldOnlineMatchReady_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineMatchReady__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineMatchReady__DelegateSignature_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineMatchReady__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnUIWorldOnlineMatchReady Property Definitions *************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineMatchReady__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnUIWorldOnlineMatchReady__DelegateSignature", 	Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineMatchReady__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineMatchReady__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineMatchReady__DelegateSignature_Statics::_Script_UIWorld_eventOnUIWorldOnlineMatchReady_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineMatchReady__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineMatchReady__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineMatchReady__DelegateSignature_Statics::_Script_UIWorld_eventOnUIWorldOnlineMatchReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineMatchReady__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineMatchReady__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUIWorldOnlineMatchReady_DelegateWrapper(const FMulticastScriptDelegate& OnUIWorldOnlineMatchReady, UWorld* World)
{
	struct _Script_UIWorld_eventOnUIWorldOnlineMatchReady_Parms
	{
		UWorld* World;
	};
	_Script_UIWorld_eventOnUIWorldOnlineMatchReady_Parms Parms;
	Parms.World=World;
	OnUIWorldOnlineMatchReady.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnUIWorldOnlineMatchReady **********************************************

// ********** Begin Delegate FOnUIWorldMenuWidgetChanged *******************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuWidgetChanged__DelegateSignature_Statics
{
	struct _Script_UIWorld_eventOnUIWorldMenuWidgetChanged_Parms
	{
		UUserWidget* ActiveWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnUIWorldMenuWidgetChanged constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnUIWorldMenuWidgetChanged constinit property declarations *************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnUIWorldMenuWidgetChanged Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuWidgetChanged__DelegateSignature_Statics::NewProp_ActiveWidget = { "ActiveWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UIWorld_eventOnUIWorldMenuWidgetChanged_Parms, ActiveWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveWidget_MetaData), NewProp_ActiveWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuWidgetChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuWidgetChanged__DelegateSignature_Statics::NewProp_ActiveWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuWidgetChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnUIWorldMenuWidgetChanged Property Definitions ************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuWidgetChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnUIWorldMenuWidgetChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuWidgetChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuWidgetChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuWidgetChanged__DelegateSignature_Statics::_Script_UIWorld_eventOnUIWorldMenuWidgetChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuWidgetChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuWidgetChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuWidgetChanged__DelegateSignature_Statics::_Script_UIWorld_eventOnUIWorldMenuWidgetChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuWidgetChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuWidgetChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUIWorldMenuWidgetChanged_DelegateWrapper(const FMulticastScriptDelegate& OnUIWorldMenuWidgetChanged, UUserWidget* ActiveWidget)
{
	struct _Script_UIWorld_eventOnUIWorldMenuWidgetChanged_Parms
	{
		UUserWidget* ActiveWidget;
	};
	_Script_UIWorld_eventOnUIWorldMenuWidgetChanged_Parms Parms;
	Parms.ActiveWidget=ActiveWidget;
	OnUIWorldMenuWidgetChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnUIWorldMenuWidgetChanged *********************************************

// ********** Begin Delegate FOnUIWorldMenuScreenChanged *******************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuScreenChanged__DelegateSignature_Statics
{
	struct _Script_UIWorld_eventOnUIWorldMenuScreenChanged_Parms
	{
		EUIWorldMenuScreen MenuScreen;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnUIWorldMenuScreenChanged constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_MenuScreen_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MenuScreen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnUIWorldMenuScreenChanged constinit property declarations *************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnUIWorldMenuScreenChanged Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuScreenChanged__DelegateSignature_Statics::NewProp_MenuScreen_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuScreenChanged__DelegateSignature_Statics::NewProp_MenuScreen = { "MenuScreen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UIWorld_eventOnUIWorldMenuScreenChanged_Parms, MenuScreen), Z_Construct_UEnum_UIWorld_EUIWorldMenuScreen, METADATA_PARAMS(0, nullptr) }; // 48686507
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuScreenChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuScreenChanged__DelegateSignature_Statics::NewProp_MenuScreen_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuScreenChanged__DelegateSignature_Statics::NewProp_MenuScreen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuScreenChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnUIWorldMenuScreenChanged Property Definitions ************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuScreenChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnUIWorldMenuScreenChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuScreenChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuScreenChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuScreenChanged__DelegateSignature_Statics::_Script_UIWorld_eventOnUIWorldMenuScreenChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuScreenChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuScreenChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuScreenChanged__DelegateSignature_Statics::_Script_UIWorld_eventOnUIWorldMenuScreenChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuScreenChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuScreenChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUIWorldMenuScreenChanged_DelegateWrapper(const FMulticastScriptDelegate& OnUIWorldMenuScreenChanged, EUIWorldMenuScreen MenuScreen)
{
	struct _Script_UIWorld_eventOnUIWorldMenuScreenChanged_Parms
	{
		EUIWorldMenuScreen MenuScreen;
	};
	_Script_UIWorld_eventOnUIWorldMenuScreenChanged_Parms Parms;
	Parms.MenuScreen=MenuScreen;
	OnUIWorldMenuScreenChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnUIWorldMenuScreenChanged *********************************************

// ********** Begin Class UUIWorldMenuGameInstance Function BackFromSettingsMainMenu ***************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMainMenu_Statics
{
	struct UIWorldMenuGameInstance_eventBackFromSettingsMainMenu_Parms
	{
		bool bForceRebuild;
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Explicit back route from settings to main menu.\n" },
#endif
		{ "CPP_Default_bForceRebuild", "false" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Explicit back route from settings to main menu." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function BackFromSettingsMainMenu constinit property declarations **************
	static void NewProp_bForceRebuild_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRebuild;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BackFromSettingsMainMenu constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BackFromSettingsMainMenu Property Definitions *************************
void Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMainMenu_Statics::NewProp_bForceRebuild_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventBackFromSettingsMainMenu_Parms*)Obj)->bForceRebuild = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMainMenu_Statics::NewProp_bForceRebuild = { "bForceRebuild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventBackFromSettingsMainMenu_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMainMenu_Statics::NewProp_bForceRebuild_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMainMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventBackFromSettingsMainMenu_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMainMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMainMenu_Statics::NewProp_bForceRebuild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMainMenu_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMainMenu_Statics::PropPointers) < 2048);
// ********** End Function BackFromSettingsMainMenu Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMainMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "BackFromSettingsMainMenu", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMainMenu_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMainMenu_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMainMenu_Statics::UIWorldMenuGameInstance_eventBackFromSettingsMainMenu_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMainMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMainMenu_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMainMenu_Statics::UIWorldMenuGameInstance_eventBackFromSettingsMainMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMainMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMainMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execBackFromSettingsMainMenu)
{
	P_GET_UBOOL(Z_Param_bForceRebuild);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->BackFromSettingsMainMenu(Z_Param_bForceRebuild);
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function BackFromSettingsMainMenu *****************

// ********** Begin Class UUIWorldMenuGameInstance Function BackFromSettingsMenuSmart **************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMenuSmart_Statics
{
	struct UIWorldMenuGameInstance_eventBackFromSettingsMenuSmart_Parms
	{
		bool bForceRebuild;
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Smart return from settings: routes to the previous menu context (main or pause).\n" },
#endif
		{ "CPP_Default_bForceRebuild", "false" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Smart return from settings: routes to the previous menu context (main or pause)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function BackFromSettingsMenuSmart constinit property declarations *************
	static void NewProp_bForceRebuild_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRebuild;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BackFromSettingsMenuSmart constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BackFromSettingsMenuSmart Property Definitions ************************
void Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMenuSmart_Statics::NewProp_bForceRebuild_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventBackFromSettingsMenuSmart_Parms*)Obj)->bForceRebuild = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMenuSmart_Statics::NewProp_bForceRebuild = { "bForceRebuild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventBackFromSettingsMenuSmart_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMenuSmart_Statics::NewProp_bForceRebuild_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMenuSmart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventBackFromSettingsMenuSmart_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMenuSmart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMenuSmart_Statics::NewProp_bForceRebuild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMenuSmart_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMenuSmart_Statics::PropPointers) < 2048);
// ********** End Function BackFromSettingsMenuSmart Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMenuSmart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "BackFromSettingsMenuSmart", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMenuSmart_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMenuSmart_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMenuSmart_Statics::UIWorldMenuGameInstance_eventBackFromSettingsMenuSmart_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMenuSmart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMenuSmart_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMenuSmart_Statics::UIWorldMenuGameInstance_eventBackFromSettingsMenuSmart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMenuSmart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMenuSmart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execBackFromSettingsMenuSmart)
{
	P_GET_UBOOL(Z_Param_bForceRebuild);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->BackFromSettingsMenuSmart(Z_Param_bForceRebuild);
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function BackFromSettingsMenuSmart ****************

// ********** Begin Class UUIWorldMenuGameInstance Function BackFromSettingsPauseMenu **************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsPauseMenu_Statics
{
	struct UIWorldMenuGameInstance_eventBackFromSettingsPauseMenu_Parms
	{
		bool bForceRebuild;
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Explicit alias for settings -> pause back navigation.\n" },
#endif
		{ "CPP_Default_bForceRebuild", "false" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Explicit alias for settings -> pause back navigation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function BackFromSettingsPauseMenu constinit property declarations *************
	static void NewProp_bForceRebuild_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRebuild;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BackFromSettingsPauseMenu constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BackFromSettingsPauseMenu Property Definitions ************************
void Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsPauseMenu_Statics::NewProp_bForceRebuild_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventBackFromSettingsPauseMenu_Parms*)Obj)->bForceRebuild = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsPauseMenu_Statics::NewProp_bForceRebuild = { "bForceRebuild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventBackFromSettingsPauseMenu_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsPauseMenu_Statics::NewProp_bForceRebuild_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsPauseMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventBackFromSettingsPauseMenu_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsPauseMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsPauseMenu_Statics::NewProp_bForceRebuild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsPauseMenu_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsPauseMenu_Statics::PropPointers) < 2048);
// ********** End Function BackFromSettingsPauseMenu Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsPauseMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "BackFromSettingsPauseMenu", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsPauseMenu_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsPauseMenu_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsPauseMenu_Statics::UIWorldMenuGameInstance_eventBackFromSettingsPauseMenu_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsPauseMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsPauseMenu_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsPauseMenu_Statics::UIWorldMenuGameInstance_eventBackFromSettingsPauseMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsPauseMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsPauseMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execBackFromSettingsPauseMenu)
{
	P_GET_UBOOL(Z_Param_bForceRebuild);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->BackFromSettingsPauseMenu(Z_Param_bForceRebuild);
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function BackFromSettingsPauseMenu ****************

// ********** Begin Class UUIWorldMenuGameInstance Function BackMenuPause **************************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_BackMenuPause_Statics
{
	struct UIWorldMenuGameInstance_eventBackMenuPause_Parms
	{
		bool bForceRebuild;
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Flow" },
		{ "CPP_Default_bForceRebuild", "false" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function BackMenuPause constinit property declarations *************************
	static void NewProp_bForceRebuild_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRebuild;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BackMenuPause constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BackMenuPause Property Definitions ************************************
void Z_Construct_UFunction_UUIWorldMenuGameInstance_BackMenuPause_Statics::NewProp_bForceRebuild_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventBackMenuPause_Parms*)Obj)->bForceRebuild = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_BackMenuPause_Statics::NewProp_bForceRebuild = { "bForceRebuild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventBackMenuPause_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_BackMenuPause_Statics::NewProp_bForceRebuild_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_BackMenuPause_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventBackMenuPause_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_BackMenuPause_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_BackMenuPause_Statics::NewProp_bForceRebuild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_BackMenuPause_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_BackMenuPause_Statics::PropPointers) < 2048);
// ********** End Function BackMenuPause Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_BackMenuPause_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "BackMenuPause", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_BackMenuPause_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_BackMenuPause_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_BackMenuPause_Statics::UIWorldMenuGameInstance_eventBackMenuPause_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_BackMenuPause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_BackMenuPause_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_BackMenuPause_Statics::UIWorldMenuGameInstance_eventBackMenuPause_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_BackMenuPause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_BackMenuPause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execBackMenuPause)
{
	P_GET_UBOOL(Z_Param_bForceRebuild);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->BackMenuPause(Z_Param_bForceRebuild);
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function BackMenuPause ****************************

// ********** Begin Class UUIWorldMenuGameInstance Function CloseMenuUI ****************************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_CloseMenuUI_Statics
{
	struct UIWorldMenuGameInstance_eventCloseMenuUI_Parms
	{
		bool bRemoveFromParentOnly;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|UI" },
		{ "CPP_Default_bRemoveFromParentOnly", "true" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CloseMenuUI constinit property declarations ***************************
	static void NewProp_bRemoveFromParentOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveFromParentOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CloseMenuUI constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CloseMenuUI Property Definitions **************************************
void Z_Construct_UFunction_UUIWorldMenuGameInstance_CloseMenuUI_Statics::NewProp_bRemoveFromParentOnly_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventCloseMenuUI_Parms*)Obj)->bRemoveFromParentOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_CloseMenuUI_Statics::NewProp_bRemoveFromParentOnly = { "bRemoveFromParentOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventCloseMenuUI_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_CloseMenuUI_Statics::NewProp_bRemoveFromParentOnly_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_CloseMenuUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_CloseMenuUI_Statics::NewProp_bRemoveFromParentOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_CloseMenuUI_Statics::PropPointers) < 2048);
// ********** End Function CloseMenuUI Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_CloseMenuUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "CloseMenuUI", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_CloseMenuUI_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_CloseMenuUI_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_CloseMenuUI_Statics::UIWorldMenuGameInstance_eventCloseMenuUI_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_CloseMenuUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_CloseMenuUI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_CloseMenuUI_Statics::UIWorldMenuGameInstance_eventCloseMenuUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_CloseMenuUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_CloseMenuUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execCloseMenuUI)
{
	P_GET_UBOOL(Z_Param_bRemoveFromParentOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseMenuUI(Z_Param_bRemoveFromParentOnly);
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function CloseMenuUI ******************************

// ********** Begin Class UUIWorldMenuGameInstance Function ContinueGame ***************************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_ContinueGame_Statics
{
	struct UIWorldMenuGameInstance_eventContinueGame_Parms
	{
		bool bUnpauseGame;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Compatibility helpers for copied Zonefall UI widgets.\n" },
#endif
		{ "CPP_Default_bUnpauseGame", "true" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compatibility helpers for copied Zonefall UI widgets." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ContinueGame constinit property declarations **************************
	static void NewProp_bUnpauseGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnpauseGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ContinueGame constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ContinueGame Property Definitions *************************************
void Z_Construct_UFunction_UUIWorldMenuGameInstance_ContinueGame_Statics::NewProp_bUnpauseGame_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventContinueGame_Parms*)Obj)->bUnpauseGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_ContinueGame_Statics::NewProp_bUnpauseGame = { "bUnpauseGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventContinueGame_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_ContinueGame_Statics::NewProp_bUnpauseGame_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_ContinueGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_ContinueGame_Statics::NewProp_bUnpauseGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_ContinueGame_Statics::PropPointers) < 2048);
// ********** End Function ContinueGame Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_ContinueGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "ContinueGame", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_ContinueGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_ContinueGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_ContinueGame_Statics::UIWorldMenuGameInstance_eventContinueGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_ContinueGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_ContinueGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_ContinueGame_Statics::UIWorldMenuGameInstance_eventContinueGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_ContinueGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_ContinueGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execContinueGame)
{
	P_GET_UBOOL(Z_Param_bUnpauseGame);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ContinueGame(Z_Param_bUnpauseGame);
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function ContinueGame *****************************

// ********** Begin Class UUIWorldMenuGameInstance Function FindOnlineSessions *********************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_FindOnlineSessions_Statics
{
	struct UIWorldMenuGameInstance_eventFindOnlineSessions_Parms
	{
		int32 MaxResults;
		bool bLAN;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Online" },
		{ "CPP_Default_bLAN", "true" },
		{ "CPP_Default_MaxResults", "50" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindOnlineSessions constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bLAN_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLAN;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindOnlineSessions constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindOnlineSessions Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_FindOnlineSessions_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventFindOnlineSessions_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUIWorldMenuGameInstance_FindOnlineSessions_Statics::NewProp_bLAN_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventFindOnlineSessions_Parms*)Obj)->bLAN = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_FindOnlineSessions_Statics::NewProp_bLAN = { "bLAN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventFindOnlineSessions_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_FindOnlineSessions_Statics::NewProp_bLAN_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUIWorldMenuGameInstance_FindOnlineSessions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventFindOnlineSessions_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_FindOnlineSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventFindOnlineSessions_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_FindOnlineSessions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_FindOnlineSessions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_FindOnlineSessions_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_FindOnlineSessions_Statics::NewProp_bLAN,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_FindOnlineSessions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_FindOnlineSessions_Statics::PropPointers) < 2048);
// ********** End Function FindOnlineSessions Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_FindOnlineSessions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "FindOnlineSessions", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_FindOnlineSessions_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_FindOnlineSessions_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_FindOnlineSessions_Statics::UIWorldMenuGameInstance_eventFindOnlineSessions_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_FindOnlineSessions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_FindOnlineSessions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_FindOnlineSessions_Statics::UIWorldMenuGameInstance_eventFindOnlineSessions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_FindOnlineSessions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_FindOnlineSessions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execFindOnlineSessions)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bLAN);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FindOnlineSessions(Z_Param_MaxResults,Z_Param_bLAN);
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function FindOnlineSessions ***********************

// ********** Begin Class UUIWorldMenuGameInstance Function GetCurrentSessionPlayerCount ***********
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_GetCurrentSessionPlayerCount_Statics
{
	struct UIWorldMenuGameInstance_eventGetCurrentSessionPlayerCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Online" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Players currently in the active named session (0 if none / not in a session). */" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Players currently in the active named session (0 if none / not in a session)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentSessionPlayerCount constinit property declarations **********
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentSessionPlayerCount constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentSessionPlayerCount Property Definitions *********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_GetCurrentSessionPlayerCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventGetCurrentSessionPlayerCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_GetCurrentSessionPlayerCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_GetCurrentSessionPlayerCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetCurrentSessionPlayerCount_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentSessionPlayerCount Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_GetCurrentSessionPlayerCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "GetCurrentSessionPlayerCount", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_GetCurrentSessionPlayerCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetCurrentSessionPlayerCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetCurrentSessionPlayerCount_Statics::UIWorldMenuGameInstance_eventGetCurrentSessionPlayerCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetCurrentSessionPlayerCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_GetCurrentSessionPlayerCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetCurrentSessionPlayerCount_Statics::UIWorldMenuGameInstance_eventGetCurrentSessionPlayerCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_GetCurrentSessionPlayerCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_GetCurrentSessionPlayerCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execGetCurrentSessionPlayerCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentSessionPlayerCount();
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function GetCurrentSessionPlayerCount *************

// ********** Begin Class UUIWorldMenuGameInstance Function GetEngineVersionString *****************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_GetEngineVersionString_Statics
{
	struct UIWorldMenuGameInstance_eventGetEngineVersionString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns a friendly engine identifier, e.g. \"Unreal Engine 5.7.0\".\n" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a friendly engine identifier, e.g. \"Unreal Engine 5.7.0\"." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetEngineVersionString constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEngineVersionString constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEngineVersionString Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_GetEngineVersionString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventGetEngineVersionString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_GetEngineVersionString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_GetEngineVersionString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetEngineVersionString_Statics::PropPointers) < 2048);
// ********** End Function GetEngineVersionString Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_GetEngineVersionString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "GetEngineVersionString", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_GetEngineVersionString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetEngineVersionString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetEngineVersionString_Statics::UIWorldMenuGameInstance_eventGetEngineVersionString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetEngineVersionString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_GetEngineVersionString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetEngineVersionString_Statics::UIWorldMenuGameInstance_eventGetEngineVersionString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_GetEngineVersionString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_GetEngineVersionString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execGetEngineVersionString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetEngineVersionString();
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function GetEngineVersionString *******************

// ********** Begin Class UUIWorldMenuGameInstance Function GetLastFoundSessions *******************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastFoundSessions_Statics
{
	struct UIWorldMenuGameInstance_eventGetLastFoundSessions_Parms
	{
		TArray<FUIWorldOnlineSessionResult> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Online" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLastFoundSessions constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLastFoundSessions constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLastFoundSessions Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastFoundSessions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult, METADATA_PARAMS(0, nullptr) }; // 11846451
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastFoundSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventGetLastFoundSessions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 11846451
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastFoundSessions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastFoundSessions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastFoundSessions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastFoundSessions_Statics::PropPointers) < 2048);
// ********** End Function GetLastFoundSessions Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastFoundSessions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "GetLastFoundSessions", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastFoundSessions_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastFoundSessions_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastFoundSessions_Statics::UIWorldMenuGameInstance_eventGetLastFoundSessions_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastFoundSessions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastFoundSessions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastFoundSessions_Statics::UIWorldMenuGameInstance_eventGetLastFoundSessions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastFoundSessions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastFoundSessions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execGetLastFoundSessions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FUIWorldOnlineSessionResult>*)Z_Param__Result=P_THIS->GetLastFoundSessions();
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function GetLastFoundSessions *********************

// ********** Begin Class UUIWorldMenuGameInstance Function GetLastOnlineDiagnostic ****************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastOnlineDiagnostic_Statics
{
	struct UIWorldMenuGameInstance_eventGetLastOnlineDiagnostic_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Online" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Human-readable reason when Host/Find/Join failed (empty if last op succeeded). */" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Human-readable reason when Host/Find/Join failed (empty if last op succeeded)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetLastOnlineDiagnostic constinit property declarations ***************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLastOnlineDiagnostic constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLastOnlineDiagnostic Property Definitions **************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastOnlineDiagnostic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventGetLastOnlineDiagnostic_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastOnlineDiagnostic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastOnlineDiagnostic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastOnlineDiagnostic_Statics::PropPointers) < 2048);
// ********** End Function GetLastOnlineDiagnostic Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastOnlineDiagnostic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "GetLastOnlineDiagnostic", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastOnlineDiagnostic_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastOnlineDiagnostic_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastOnlineDiagnostic_Statics::UIWorldMenuGameInstance_eventGetLastOnlineDiagnostic_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastOnlineDiagnostic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastOnlineDiagnostic_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastOnlineDiagnostic_Statics::UIWorldMenuGameInstance_eventGetLastOnlineDiagnostic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastOnlineDiagnostic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastOnlineDiagnostic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execGetLastOnlineDiagnostic)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetLastOnlineDiagnostic();
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function GetLastOnlineDiagnostic ******************

// ********** Begin Class UUIWorldMenuGameInstance Function GetOnlinePlayerNickname ****************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlinePlayerNickname_Statics
{
	struct UIWorldMenuGameInstance_eventGetOnlinePlayerNickname_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Online" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Logged-in player's display name (Steam persona, or a local fallback). */" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Logged-in player's display name (Steam persona, or a local fallback)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetOnlinePlayerNickname constinit property declarations ***************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOnlinePlayerNickname constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOnlinePlayerNickname Property Definitions **************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlinePlayerNickname_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventGetOnlinePlayerNickname_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlinePlayerNickname_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlinePlayerNickname_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlinePlayerNickname_Statics::PropPointers) < 2048);
// ********** End Function GetOnlinePlayerNickname Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlinePlayerNickname_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "GetOnlinePlayerNickname", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlinePlayerNickname_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlinePlayerNickname_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlinePlayerNickname_Statics::UIWorldMenuGameInstance_eventGetOnlinePlayerNickname_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlinePlayerNickname_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlinePlayerNickname_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlinePlayerNickname_Statics::UIWorldMenuGameInstance_eventGetOnlinePlayerNickname_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlinePlayerNickname()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlinePlayerNickname_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execGetOnlinePlayerNickname)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetOnlinePlayerNickname();
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function GetOnlinePlayerNickname ******************

// ********** Begin Class UUIWorldMenuGameInstance Function GetOnlineServiceName *******************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlineServiceName_Statics
{
	struct UIWorldMenuGameInstance_eventGetOnlineServiceName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Online" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Active subsystem name, e.g. \"STEAM\", \"NULL\", or \"None\". */" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Active subsystem name, e.g. \"STEAM\", \"NULL\", or \"None\"." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetOnlineServiceName constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOnlineServiceName constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOnlineServiceName Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlineServiceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventGetOnlineServiceName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlineServiceName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlineServiceName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlineServiceName_Statics::PropPointers) < 2048);
// ********** End Function GetOnlineServiceName Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlineServiceName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "GetOnlineServiceName", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlineServiceName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlineServiceName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlineServiceName_Statics::UIWorldMenuGameInstance_eventGetOnlineServiceName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlineServiceName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlineServiceName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlineServiceName_Statics::UIWorldMenuGameInstance_eventGetOnlineServiceName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlineServiceName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlineServiceName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execGetOnlineServiceName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetOnlineServiceName();
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function GetOnlineServiceName *********************

// ********** Begin Class UUIWorldMenuGameInstance Function GetUnlockedAchievements ****************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_GetUnlockedAchievements_Statics
{
	struct UIWorldMenuGameInstance_eventGetUnlockedAchievements_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Achievements" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** All achievement ids unlocked so far (local record). */" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All achievement ids unlocked so far (local record)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetUnlockedAchievements constinit property declarations ***************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUnlockedAchievements constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUnlockedAchievements Property Definitions **************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_GetUnlockedAchievements_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_GetUnlockedAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventGetUnlockedAchievements_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_GetUnlockedAchievements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_GetUnlockedAchievements_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_GetUnlockedAchievements_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetUnlockedAchievements_Statics::PropPointers) < 2048);
// ********** End Function GetUnlockedAchievements Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_GetUnlockedAchievements_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "GetUnlockedAchievements", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_GetUnlockedAchievements_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetUnlockedAchievements_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetUnlockedAchievements_Statics::UIWorldMenuGameInstance_eventGetUnlockedAchievements_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetUnlockedAchievements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_GetUnlockedAchievements_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_GetUnlockedAchievements_Statics::UIWorldMenuGameInstance_eventGetUnlockedAchievements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_GetUnlockedAchievements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_GetUnlockedAchievements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execGetUnlockedAchievements)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetUnlockedAchievements();
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function GetUnlockedAchievements ******************

// ********** Begin Class UUIWorldMenuGameInstance Function HandleLanguageChanged ******************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_HandleLanguageChanged_Statics
{
	struct UIWorldMenuGameInstance_eventHandleLanguageChanged_Parms
	{
		EZonefallLanguage NewLanguage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rebuilds the currently-shown menu in the newly-selected language (live switch).\n" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rebuilds the currently-shown menu in the newly-selected language (live switch)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function HandleLanguageChanged constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewLanguage_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewLanguage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleLanguageChanged constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleLanguageChanged Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_HandleLanguageChanged_Statics::NewProp_NewLanguage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_HandleLanguageChanged_Statics::NewProp_NewLanguage = { "NewLanguage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventHandleLanguageChanged_Parms, NewLanguage), Z_Construct_UEnum_UIWorld_EZonefallLanguage, METADATA_PARAMS(0, nullptr) }; // 1922273304
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_HandleLanguageChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_HandleLanguageChanged_Statics::NewProp_NewLanguage_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_HandleLanguageChanged_Statics::NewProp_NewLanguage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_HandleLanguageChanged_Statics::PropPointers) < 2048);
// ********** End Function HandleLanguageChanged Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_HandleLanguageChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "HandleLanguageChanged", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_HandleLanguageChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_HandleLanguageChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_HandleLanguageChanged_Statics::UIWorldMenuGameInstance_eventHandleLanguageChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_HandleLanguageChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_HandleLanguageChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_HandleLanguageChanged_Statics::UIWorldMenuGameInstance_eventHandleLanguageChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_HandleLanguageChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_HandleLanguageChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execHandleLanguageChanged)
{
	P_GET_ENUM(EZonefallLanguage,Z_Param_NewLanguage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleLanguageChanged(EZonefallLanguage(Z_Param_NewLanguage));
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function HandleLanguageChanged ********************

// ********** Begin Class UUIWorldMenuGameInstance Function HostOnlineSession **********************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_HostOnlineSession_Statics
{
	struct UIWorldMenuGameInstance_eventHostOnlineSession_Parms
	{
		int32 MaxPlayers;
		bool bLAN;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Online" },
		{ "CPP_Default_bLAN", "false" },
		{ "CPP_Default_MaxPlayers", "4" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HostOnlineSession constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
	static void NewProp_bLAN_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLAN;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HostOnlineSession constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HostOnlineSession Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_HostOnlineSession_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventHostOnlineSession_Parms, MaxPlayers), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUIWorldMenuGameInstance_HostOnlineSession_Statics::NewProp_bLAN_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventHostOnlineSession_Parms*)Obj)->bLAN = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_HostOnlineSession_Statics::NewProp_bLAN = { "bLAN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventHostOnlineSession_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_HostOnlineSession_Statics::NewProp_bLAN_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUIWorldMenuGameInstance_HostOnlineSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventHostOnlineSession_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_HostOnlineSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventHostOnlineSession_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_HostOnlineSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_HostOnlineSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_HostOnlineSession_Statics::NewProp_MaxPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_HostOnlineSession_Statics::NewProp_bLAN,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_HostOnlineSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_HostOnlineSession_Statics::PropPointers) < 2048);
// ********** End Function HostOnlineSession Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_HostOnlineSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "HostOnlineSession", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_HostOnlineSession_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_HostOnlineSession_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_HostOnlineSession_Statics::UIWorldMenuGameInstance_eventHostOnlineSession_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_HostOnlineSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_HostOnlineSession_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_HostOnlineSession_Statics::UIWorldMenuGameInstance_eventHostOnlineSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_HostOnlineSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_HostOnlineSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execHostOnlineSession)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayers);
	P_GET_UBOOL(Z_Param_bLAN);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HostOnlineSession(Z_Param_MaxPlayers,Z_Param_bLAN);
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function HostOnlineSession ************************

// ********** Begin Class UUIWorldMenuGameInstance Function IsAchievementUnlocked ******************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_IsAchievementUnlocked_Statics
{
	struct UIWorldMenuGameInstance_eventIsAchievementUnlocked_Parms
	{
		FName AchievementId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Achievements" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True if the achievement has been unlocked (locally recorded). */" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if the achievement has been unlocked (locally recorded)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsAchievementUnlocked constinit property declarations *****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_AchievementId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsAchievementUnlocked constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsAchievementUnlocked Property Definitions ****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_IsAchievementUnlocked_Statics::NewProp_AchievementId = { "AchievementId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventIsAchievementUnlocked_Parms, AchievementId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUIWorldMenuGameInstance_IsAchievementUnlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventIsAchievementUnlocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_IsAchievementUnlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventIsAchievementUnlocked_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_IsAchievementUnlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_IsAchievementUnlocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_IsAchievementUnlocked_Statics::NewProp_AchievementId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_IsAchievementUnlocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_IsAchievementUnlocked_Statics::PropPointers) < 2048);
// ********** End Function IsAchievementUnlocked Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_IsAchievementUnlocked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "IsAchievementUnlocked", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_IsAchievementUnlocked_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_IsAchievementUnlocked_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_IsAchievementUnlocked_Statics::UIWorldMenuGameInstance_eventIsAchievementUnlocked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_IsAchievementUnlocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_IsAchievementUnlocked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_IsAchievementUnlocked_Statics::UIWorldMenuGameInstance_eventIsAchievementUnlocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_IsAchievementUnlocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_IsAchievementUnlocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execIsAchievementUnlocked)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_AchievementId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAchievementUnlocked(Z_Param_AchievementId);
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function IsAchievementUnlocked ********************

// ********** Begin Class UUIWorldMenuGameInstance Function IsOnlineAvailable **********************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineAvailable_Statics
{
	struct UIWorldMenuGameInstance_eventIsOnlineAvailable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Online" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True if an online subsystem (Steam / Null) is present and initialised. */" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if an online subsystem (Steam / Null) is present and initialised." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsOnlineAvailable constinit property declarations *********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsOnlineAvailable constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsOnlineAvailable Property Definitions ********************************
void Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventIsOnlineAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventIsOnlineAvailable_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineAvailable_Statics::PropPointers) < 2048);
// ********** End Function IsOnlineAvailable Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineAvailable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "IsOnlineAvailable", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineAvailable_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineAvailable_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineAvailable_Statics::UIWorldMenuGameInstance_eventIsOnlineAvailable_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineAvailable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineAvailable_Statics::UIWorldMenuGameInstance_eventIsOnlineAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execIsOnlineAvailable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOnlineAvailable();
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function IsOnlineAvailable ************************

// ********** Begin Class UUIWorldMenuGameInstance Function IsOnlineLoggedIn ***********************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineLoggedIn_Statics
{
	struct UIWorldMenuGameInstance_eventIsOnlineLoggedIn_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Online" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True once the identity interface reports a logged-in user (Steam persona signed in). */" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True once the identity interface reports a logged-in user (Steam persona signed in)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsOnlineLoggedIn constinit property declarations **********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsOnlineLoggedIn constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsOnlineLoggedIn Property Definitions *********************************
void Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineLoggedIn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventIsOnlineLoggedIn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineLoggedIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventIsOnlineLoggedIn_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineLoggedIn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineLoggedIn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineLoggedIn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineLoggedIn_Statics::PropPointers) < 2048);
// ********** End Function IsOnlineLoggedIn Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineLoggedIn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "IsOnlineLoggedIn", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineLoggedIn_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineLoggedIn_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineLoggedIn_Statics::UIWorldMenuGameInstance_eventIsOnlineLoggedIn_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineLoggedIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineLoggedIn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineLoggedIn_Statics::UIWorldMenuGameInstance_eventIsOnlineLoggedIn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineLoggedIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineLoggedIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execIsOnlineLoggedIn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOnlineLoggedIn();
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function IsOnlineLoggedIn *************************

// ********** Begin Class UUIWorldMenuGameInstance Function IsOnlineTravelInProgress ***************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineTravelInProgress_Statics
{
	struct UIWorldMenuGameInstance_eventIsOnlineTravelInProgress_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Online" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsOnlineTravelInProgress constinit property declarations **************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsOnlineTravelInProgress constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsOnlineTravelInProgress Property Definitions *************************
void Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineTravelInProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventIsOnlineTravelInProgress_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineTravelInProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventIsOnlineTravelInProgress_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineTravelInProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineTravelInProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineTravelInProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineTravelInProgress_Statics::PropPointers) < 2048);
// ********** End Function IsOnlineTravelInProgress Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineTravelInProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "IsOnlineTravelInProgress", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineTravelInProgress_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineTravelInProgress_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineTravelInProgress_Statics::UIWorldMenuGameInstance_eventIsOnlineTravelInProgress_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineTravelInProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineTravelInProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineTravelInProgress_Statics::UIWorldMenuGameInstance_eventIsOnlineTravelInProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineTravelInProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineTravelInProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execIsOnlineTravelInProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOnlineTravelInProgress();
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function IsOnlineTravelInProgress *****************

// ********** Begin Class UUIWorldMenuGameInstance Function JoinOnlineByAddress ********************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineByAddress_Statics
{
	struct UIWorldMenuGameInstance_eventJoinOnlineByAddress_Parms
	{
		FString Address;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Online" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Direct-connect by a typed address / ID (e.g. \"192.168.0.10:7777\", \"steam.<id>\", or a bare IP). */" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Direct-connect by a typed address / ID (e.g. \"192.168.0.10:7777\", \"steam.<id>\", or a bare IP)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function JoinOnlineByAddress constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Address;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function JoinOnlineByAddress constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function JoinOnlineByAddress Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineByAddress_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventJoinOnlineByAddress_Parms, Address), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Address_MetaData), NewProp_Address_MetaData) };
void Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineByAddress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventJoinOnlineByAddress_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineByAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventJoinOnlineByAddress_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineByAddress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineByAddress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineByAddress_Statics::NewProp_Address,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineByAddress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineByAddress_Statics::PropPointers) < 2048);
// ********** End Function JoinOnlineByAddress Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineByAddress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "JoinOnlineByAddress", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineByAddress_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineByAddress_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineByAddress_Statics::UIWorldMenuGameInstance_eventJoinOnlineByAddress_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineByAddress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineByAddress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineByAddress_Statics::UIWorldMenuGameInstance_eventJoinOnlineByAddress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineByAddress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineByAddress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execJoinOnlineByAddress)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Address);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->JoinOnlineByAddress(Z_Param_Address);
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function JoinOnlineByAddress **********************

// ********** Begin Class UUIWorldMenuGameInstance Function JoinOnlineSessionByIndex ***************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineSessionByIndex_Statics
{
	struct UIWorldMenuGameInstance_eventJoinOnlineSessionByIndex_Parms
	{
		int32 ResultIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Online" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function JoinOnlineSessionByIndex constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResultIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function JoinOnlineSessionByIndex constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function JoinOnlineSessionByIndex Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineSessionByIndex_Statics::NewProp_ResultIndex = { "ResultIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventJoinOnlineSessionByIndex_Parms, ResultIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineSessionByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventJoinOnlineSessionByIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineSessionByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventJoinOnlineSessionByIndex_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineSessionByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineSessionByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineSessionByIndex_Statics::NewProp_ResultIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineSessionByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineSessionByIndex_Statics::PropPointers) < 2048);
// ********** End Function JoinOnlineSessionByIndex Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineSessionByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "JoinOnlineSessionByIndex", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineSessionByIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineSessionByIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineSessionByIndex_Statics::UIWorldMenuGameInstance_eventJoinOnlineSessionByIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineSessionByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineSessionByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineSessionByIndex_Statics::UIWorldMenuGameInstance_eventJoinOnlineSessionByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineSessionByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineSessionByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execJoinOnlineSessionByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ResultIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->JoinOnlineSessionByIndex(Z_Param_ResultIndex);
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function JoinOnlineSessionByIndex *****************

// ********** Begin Class UUIWorldMenuGameInstance Function LeaveOnlineSessionAndReturnToMenu ******
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_LeaveOnlineSessionAndReturnToMenu_Statics
{
	struct UIWorldMenuGameInstance_eventLeaveOnlineSessionAndReturnToMenu_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Online" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function LeaveOnlineSessionAndReturnToMenu constinit property declarations *****
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LeaveOnlineSessionAndReturnToMenu constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LeaveOnlineSessionAndReturnToMenu Property Definitions ****************
void Z_Construct_UFunction_UUIWorldMenuGameInstance_LeaveOnlineSessionAndReturnToMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventLeaveOnlineSessionAndReturnToMenu_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_LeaveOnlineSessionAndReturnToMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventLeaveOnlineSessionAndReturnToMenu_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_LeaveOnlineSessionAndReturnToMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_LeaveOnlineSessionAndReturnToMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_LeaveOnlineSessionAndReturnToMenu_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_LeaveOnlineSessionAndReturnToMenu_Statics::PropPointers) < 2048);
// ********** End Function LeaveOnlineSessionAndReturnToMenu Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_LeaveOnlineSessionAndReturnToMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "LeaveOnlineSessionAndReturnToMenu", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_LeaveOnlineSessionAndReturnToMenu_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_LeaveOnlineSessionAndReturnToMenu_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_LeaveOnlineSessionAndReturnToMenu_Statics::UIWorldMenuGameInstance_eventLeaveOnlineSessionAndReturnToMenu_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_LeaveOnlineSessionAndReturnToMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_LeaveOnlineSessionAndReturnToMenu_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_LeaveOnlineSessionAndReturnToMenu_Statics::UIWorldMenuGameInstance_eventLeaveOnlineSessionAndReturnToMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_LeaveOnlineSessionAndReturnToMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_LeaveOnlineSessionAndReturnToMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execLeaveOnlineSessionAndReturnToMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LeaveOnlineSessionAndReturnToMenu();
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function LeaveOnlineSessionAndReturnToMenu ********

// ********** Begin Class UUIWorldMenuGameInstance Function LoadLevelAndFocusGame ******************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelAndFocusGame_Statics
{
	struct UIWorldMenuGameInstance_eventLoadLevelAndFocusGame_Parms
	{
		FName LevelName;
		bool bAbsolute;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Flow" },
		{ "CPP_Default_bAbsolute", "true" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadLevelAndFocusGame constinit property declarations *****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelName;
	static void NewProp_bAbsolute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsolute;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadLevelAndFocusGame constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadLevelAndFocusGame Property Definitions ****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelAndFocusGame_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventLoadLevelAndFocusGame_Parms, LevelName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelAndFocusGame_Statics::NewProp_bAbsolute_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventLoadLevelAndFocusGame_Parms*)Obj)->bAbsolute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelAndFocusGame_Statics::NewProp_bAbsolute = { "bAbsolute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventLoadLevelAndFocusGame_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelAndFocusGame_Statics::NewProp_bAbsolute_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelAndFocusGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventLoadLevelAndFocusGame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelAndFocusGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventLoadLevelAndFocusGame_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelAndFocusGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelAndFocusGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelAndFocusGame_Statics::NewProp_LevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelAndFocusGame_Statics::NewProp_bAbsolute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelAndFocusGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelAndFocusGame_Statics::PropPointers) < 2048);
// ********** End Function LoadLevelAndFocusGame Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelAndFocusGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "LoadLevelAndFocusGame", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelAndFocusGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelAndFocusGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelAndFocusGame_Statics::UIWorldMenuGameInstance_eventLoadLevelAndFocusGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelAndFocusGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelAndFocusGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelAndFocusGame_Statics::UIWorldMenuGameInstance_eventLoadLevelAndFocusGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelAndFocusGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelAndFocusGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execLoadLevelAndFocusGame)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_LevelName);
	P_GET_UBOOL(Z_Param_bAbsolute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadLevelAndFocusGame(Z_Param_LevelName,Z_Param_bAbsolute);
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function LoadLevelAndFocusGame ********************

// ********** Begin Class UUIWorldMenuGameInstance Function LoadLevelWithLoadingScreen *************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelWithLoadingScreen_Statics
{
	struct UIWorldMenuGameInstance_eventLoadLevelWithLoadingScreen_Parms
	{
		FName LevelName;
		bool bAbsolute;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Shows loading screen first, then opens target level.\n" },
#endif
		{ "CPP_Default_bAbsolute", "true" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shows loading screen first, then opens target level." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function LoadLevelWithLoadingScreen constinit property declarations ************
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelName;
	static void NewProp_bAbsolute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsolute;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadLevelWithLoadingScreen constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadLevelWithLoadingScreen Property Definitions ***********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelWithLoadingScreen_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventLoadLevelWithLoadingScreen_Parms, LevelName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelWithLoadingScreen_Statics::NewProp_bAbsolute_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventLoadLevelWithLoadingScreen_Parms*)Obj)->bAbsolute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelWithLoadingScreen_Statics::NewProp_bAbsolute = { "bAbsolute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventLoadLevelWithLoadingScreen_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelWithLoadingScreen_Statics::NewProp_bAbsolute_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelWithLoadingScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventLoadLevelWithLoadingScreen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelWithLoadingScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventLoadLevelWithLoadingScreen_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelWithLoadingScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelWithLoadingScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelWithLoadingScreen_Statics::NewProp_LevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelWithLoadingScreen_Statics::NewProp_bAbsolute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelWithLoadingScreen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelWithLoadingScreen_Statics::PropPointers) < 2048);
// ********** End Function LoadLevelWithLoadingScreen Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelWithLoadingScreen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "LoadLevelWithLoadingScreen", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelWithLoadingScreen_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelWithLoadingScreen_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelWithLoadingScreen_Statics::UIWorldMenuGameInstance_eventLoadLevelWithLoadingScreen_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelWithLoadingScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelWithLoadingScreen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelWithLoadingScreen_Statics::UIWorldMenuGameInstance_eventLoadLevelWithLoadingScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelWithLoadingScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelWithLoadingScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execLoadLevelWithLoadingScreen)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_LevelName);
	P_GET_UBOOL(Z_Param_bAbsolute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadLevelWithLoadingScreen(Z_Param_LevelName,Z_Param_bAbsolute);
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function LoadLevelWithLoadingScreen ***************

// ********** Begin Class UUIWorldMenuGameInstance Function LoadMainMenuLevel **********************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadMainMenuLevel_Statics
{
	struct UIWorldMenuGameInstance_eventLoadMainMenuLevel_Parms
	{
		bool bAbsolute;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Flow" },
		{ "CPP_Default_bAbsolute", "true" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadMainMenuLevel constinit property declarations *********************
	static void NewProp_bAbsolute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsolute;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadMainMenuLevel constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadMainMenuLevel Property Definitions ********************************
void Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadMainMenuLevel_Statics::NewProp_bAbsolute_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventLoadMainMenuLevel_Parms*)Obj)->bAbsolute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadMainMenuLevel_Statics::NewProp_bAbsolute = { "bAbsolute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventLoadMainMenuLevel_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadMainMenuLevel_Statics::NewProp_bAbsolute_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadMainMenuLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventLoadMainMenuLevel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadMainMenuLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventLoadMainMenuLevel_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadMainMenuLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadMainMenuLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadMainMenuLevel_Statics::NewProp_bAbsolute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadMainMenuLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadMainMenuLevel_Statics::PropPointers) < 2048);
// ********** End Function LoadMainMenuLevel Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadMainMenuLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "LoadMainMenuLevel", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadMainMenuLevel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadMainMenuLevel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadMainMenuLevel_Statics::UIWorldMenuGameInstance_eventLoadMainMenuLevel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadMainMenuLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadMainMenuLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadMainMenuLevel_Statics::UIWorldMenuGameInstance_eventLoadMainMenuLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadMainMenuLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadMainMenuLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execLoadMainMenuLevel)
{
	P_GET_UBOOL(Z_Param_bAbsolute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadMainMenuLevel(Z_Param_bAbsolute);
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function LoadMainMenuLevel ************************

// ********** Begin Class UUIWorldMenuGameInstance Function OpenPauseSettingsMenu ******************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenPauseSettingsMenu_Statics
{
	struct UIWorldMenuGameInstance_eventOpenPauseSettingsMenu_Parms
	{
		bool bForceRebuild;
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Flow" },
		{ "CPP_Default_bForceRebuild", "false" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OpenPauseSettingsMenu constinit property declarations *****************
	static void NewProp_bForceRebuild_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRebuild;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OpenPauseSettingsMenu constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OpenPauseSettingsMenu Property Definitions ****************************
void Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenPauseSettingsMenu_Statics::NewProp_bForceRebuild_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventOpenPauseSettingsMenu_Parms*)Obj)->bForceRebuild = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenPauseSettingsMenu_Statics::NewProp_bForceRebuild = { "bForceRebuild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventOpenPauseSettingsMenu_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenPauseSettingsMenu_Statics::NewProp_bForceRebuild_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenPauseSettingsMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventOpenPauseSettingsMenu_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenPauseSettingsMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenPauseSettingsMenu_Statics::NewProp_bForceRebuild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenPauseSettingsMenu_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenPauseSettingsMenu_Statics::PropPointers) < 2048);
// ********** End Function OpenPauseSettingsMenu Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenPauseSettingsMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "OpenPauseSettingsMenu", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenPauseSettingsMenu_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenPauseSettingsMenu_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenPauseSettingsMenu_Statics::UIWorldMenuGameInstance_eventOpenPauseSettingsMenu_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenPauseSettingsMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenPauseSettingsMenu_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenPauseSettingsMenu_Statics::UIWorldMenuGameInstance_eventOpenPauseSettingsMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenPauseSettingsMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenPauseSettingsMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execOpenPauseSettingsMenu)
{
	P_GET_UBOOL(Z_Param_bForceRebuild);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->OpenPauseSettingsMenu(Z_Param_bForceRebuild);
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function OpenPauseSettingsMenu ********************

// ********** Begin Class UUIWorldMenuGameInstance Function OpenSettingsMainMenu *******************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsMainMenu_Statics
{
	struct UIWorldMenuGameInstance_eventOpenSettingsMainMenu_Parms
	{
		bool bForceRebuild;
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Explicit open settings from main-menu flow.\n" },
#endif
		{ "CPP_Default_bForceRebuild", "false" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Explicit open settings from main-menu flow." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OpenSettingsMainMenu constinit property declarations ******************
	static void NewProp_bForceRebuild_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRebuild;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OpenSettingsMainMenu constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OpenSettingsMainMenu Property Definitions *****************************
void Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsMainMenu_Statics::NewProp_bForceRebuild_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventOpenSettingsMainMenu_Parms*)Obj)->bForceRebuild = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsMainMenu_Statics::NewProp_bForceRebuild = { "bForceRebuild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventOpenSettingsMainMenu_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsMainMenu_Statics::NewProp_bForceRebuild_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsMainMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventOpenSettingsMainMenu_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsMainMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsMainMenu_Statics::NewProp_bForceRebuild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsMainMenu_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsMainMenu_Statics::PropPointers) < 2048);
// ********** End Function OpenSettingsMainMenu Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsMainMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "OpenSettingsMainMenu", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsMainMenu_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsMainMenu_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsMainMenu_Statics::UIWorldMenuGameInstance_eventOpenSettingsMainMenu_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsMainMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsMainMenu_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsMainMenu_Statics::UIWorldMenuGameInstance_eventOpenSettingsMainMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsMainMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsMainMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execOpenSettingsMainMenu)
{
	P_GET_UBOOL(Z_Param_bForceRebuild);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->OpenSettingsMainMenu(Z_Param_bForceRebuild);
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function OpenSettingsMainMenu *********************

// ********** Begin Class UUIWorldMenuGameInstance Function OpenSettingsPauseMenu ******************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsPauseMenu_Statics
{
	struct UIWorldMenuGameInstance_eventOpenSettingsPauseMenu_Parms
	{
		bool bForceRebuild;
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Explicit alias for pause -> settings navigation (kept for clearer Blueprint naming).\n" },
#endif
		{ "CPP_Default_bForceRebuild", "false" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Explicit alias for pause -> settings navigation (kept for clearer Blueprint naming)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OpenSettingsPauseMenu constinit property declarations *****************
	static void NewProp_bForceRebuild_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRebuild;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OpenSettingsPauseMenu constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OpenSettingsPauseMenu Property Definitions ****************************
void Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsPauseMenu_Statics::NewProp_bForceRebuild_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventOpenSettingsPauseMenu_Parms*)Obj)->bForceRebuild = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsPauseMenu_Statics::NewProp_bForceRebuild = { "bForceRebuild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventOpenSettingsPauseMenu_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsPauseMenu_Statics::NewProp_bForceRebuild_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsPauseMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventOpenSettingsPauseMenu_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsPauseMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsPauseMenu_Statics::NewProp_bForceRebuild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsPauseMenu_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsPauseMenu_Statics::PropPointers) < 2048);
// ********** End Function OpenSettingsPauseMenu Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsPauseMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "OpenSettingsPauseMenu", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsPauseMenu_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsPauseMenu_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsPauseMenu_Statics::UIWorldMenuGameInstance_eventOpenSettingsPauseMenu_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsPauseMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsPauseMenu_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsPauseMenu_Statics::UIWorldMenuGameInstance_eventOpenSettingsPauseMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsPauseMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsPauseMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execOpenSettingsPauseMenu)
{
	P_GET_UBOOL(Z_Param_bForceRebuild);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->OpenSettingsPauseMenu(Z_Param_bForceRebuild);
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function OpenSettingsPauseMenu ********************

// ********** Begin Class UUIWorldMenuGameInstance Function QuickJoinOnlineSession *****************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_QuickJoinOnlineSession_Statics
{
	struct UIWorldMenuGameInstance_eventQuickJoinOnlineSession_Parms
	{
		bool bLAN;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Online" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Find the best open session (lowest ping, same build) and join automatically. */" },
#endif
		{ "CPP_Default_bLAN", "false" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find the best open session (lowest ping, same build) and join automatically." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function QuickJoinOnlineSession constinit property declarations ****************
	static void NewProp_bLAN_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLAN;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function QuickJoinOnlineSession constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function QuickJoinOnlineSession Property Definitions ***************************
void Z_Construct_UFunction_UUIWorldMenuGameInstance_QuickJoinOnlineSession_Statics::NewProp_bLAN_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventQuickJoinOnlineSession_Parms*)Obj)->bLAN = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_QuickJoinOnlineSession_Statics::NewProp_bLAN = { "bLAN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventQuickJoinOnlineSession_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_QuickJoinOnlineSession_Statics::NewProp_bLAN_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUIWorldMenuGameInstance_QuickJoinOnlineSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventQuickJoinOnlineSession_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_QuickJoinOnlineSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventQuickJoinOnlineSession_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_QuickJoinOnlineSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_QuickJoinOnlineSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_QuickJoinOnlineSession_Statics::NewProp_bLAN,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_QuickJoinOnlineSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_QuickJoinOnlineSession_Statics::PropPointers) < 2048);
// ********** End Function QuickJoinOnlineSession Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_QuickJoinOnlineSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "QuickJoinOnlineSession", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_QuickJoinOnlineSession_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_QuickJoinOnlineSession_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_QuickJoinOnlineSession_Statics::UIWorldMenuGameInstance_eventQuickJoinOnlineSession_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_QuickJoinOnlineSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_QuickJoinOnlineSession_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_QuickJoinOnlineSession_Statics::UIWorldMenuGameInstance_eventQuickJoinOnlineSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_QuickJoinOnlineSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_QuickJoinOnlineSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execQuickJoinOnlineSession)
{
	P_GET_UBOOL(Z_Param_bLAN);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->QuickJoinOnlineSession(Z_Param_bLAN);
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function QuickJoinOnlineSession *******************

// ********** Begin Class UUIWorldMenuGameInstance Function QuitGameNow ****************************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_QuitGameNow_Statics
{
	struct UIWorldMenuGameInstance_eventQuitGameNow_Parms
	{
		bool bIgnorePlatformRestrictions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Flow" },
		{ "CPP_Default_bIgnorePlatformRestrictions", "false" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function QuitGameNow constinit property declarations ***************************
	static void NewProp_bIgnorePlatformRestrictions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnorePlatformRestrictions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function QuitGameNow constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function QuitGameNow Property Definitions **************************************
void Z_Construct_UFunction_UUIWorldMenuGameInstance_QuitGameNow_Statics::NewProp_bIgnorePlatformRestrictions_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventQuitGameNow_Parms*)Obj)->bIgnorePlatformRestrictions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_QuitGameNow_Statics::NewProp_bIgnorePlatformRestrictions = { "bIgnorePlatformRestrictions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventQuitGameNow_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_QuitGameNow_Statics::NewProp_bIgnorePlatformRestrictions_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_QuitGameNow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_QuitGameNow_Statics::NewProp_bIgnorePlatformRestrictions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_QuitGameNow_Statics::PropPointers) < 2048);
// ********** End Function QuitGameNow Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_QuitGameNow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "QuitGameNow", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_QuitGameNow_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_QuitGameNow_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_QuitGameNow_Statics::UIWorldMenuGameInstance_eventQuitGameNow_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_QuitGameNow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_QuitGameNow_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_QuitGameNow_Statics::UIWorldMenuGameInstance_eventQuitGameNow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_QuitGameNow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_QuitGameNow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execQuitGameNow)
{
	P_GET_UBOOL(Z_Param_bIgnorePlatformRestrictions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuitGameNow(Z_Param_bIgnorePlatformRestrictions);
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function QuitGameNow ******************************

// ********** Begin Class UUIWorldMenuGameInstance Function RequestOnlineLogin *********************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_RequestOnlineLogin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Online" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Kicks off Steam AutoLogin if not already signed in (safe to call repeatedly). */" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Kicks off Steam AutoLogin if not already signed in (safe to call repeatedly)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RequestOnlineLogin constinit property declarations ********************
// ********** End Function RequestOnlineLogin constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_RequestOnlineLogin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "RequestOnlineLogin", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_RequestOnlineLogin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_RequestOnlineLogin_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_RequestOnlineLogin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_RequestOnlineLogin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execRequestOnlineLogin)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestOnlineLogin();
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function RequestOnlineLogin ***********************

// ********** Begin Class UUIWorldMenuGameInstance Function SaveGame *******************************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_SaveGame_Statics
{
	struct UIWorldMenuGameInstance_eventSaveGame_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Save" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Saves current level progress and pops the \"saved\" toast. Returns success.\n" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Saves current level progress and pops the \"saved\" toast. Returns success." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SaveGame constinit property declarations ******************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SaveGame constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SaveGame Property Definitions *****************************************
void Z_Construct_UFunction_UUIWorldMenuGameInstance_SaveGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventSaveGame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_SaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventSaveGame_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_SaveGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_SaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_SaveGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_SaveGame_Statics::PropPointers) < 2048);
// ********** End Function SaveGame Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_SaveGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "SaveGame", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_SaveGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_SaveGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_SaveGame_Statics::UIWorldMenuGameInstance_eventSaveGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_SaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_SaveGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_SaveGame_Statics::UIWorldMenuGameInstance_eventSaveGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_SaveGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_SaveGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execSaveGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SaveGame();
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function SaveGame *********************************

// ********** Begin Class UUIWorldMenuGameInstance Function ShowMenuFromList ***********************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowMenuFromList_Statics
{
	struct UIWorldMenuGameInstance_eventShowMenuFromList_Parms
	{
		EUIWorldMenuScreen MenuScreen;
		bool bForceRebuild;
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|UI" },
		{ "CPP_Default_bForceRebuild", "false" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShowMenuFromList constinit property declarations **********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_MenuScreen_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MenuScreen;
	static void NewProp_bForceRebuild_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRebuild;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShowMenuFromList constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShowMenuFromList Property Definitions *********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowMenuFromList_Statics::NewProp_MenuScreen_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowMenuFromList_Statics::NewProp_MenuScreen = { "MenuScreen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventShowMenuFromList_Parms, MenuScreen), Z_Construct_UEnum_UIWorld_EUIWorldMenuScreen, METADATA_PARAMS(0, nullptr) }; // 48686507
void Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowMenuFromList_Statics::NewProp_bForceRebuild_SetBit(void* Obj)
{
	((UIWorldMenuGameInstance_eventShowMenuFromList_Parms*)Obj)->bForceRebuild = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowMenuFromList_Statics::NewProp_bForceRebuild = { "bForceRebuild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWorldMenuGameInstance_eventShowMenuFromList_Parms), &Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowMenuFromList_Statics::NewProp_bForceRebuild_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowMenuFromList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventShowMenuFromList_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowMenuFromList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowMenuFromList_Statics::NewProp_MenuScreen_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowMenuFromList_Statics::NewProp_MenuScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowMenuFromList_Statics::NewProp_bForceRebuild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowMenuFromList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowMenuFromList_Statics::PropPointers) < 2048);
// ********** End Function ShowMenuFromList Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowMenuFromList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "ShowMenuFromList", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowMenuFromList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowMenuFromList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowMenuFromList_Statics::UIWorldMenuGameInstance_eventShowMenuFromList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowMenuFromList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowMenuFromList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowMenuFromList_Statics::UIWorldMenuGameInstance_eventShowMenuFromList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowMenuFromList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowMenuFromList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execShowMenuFromList)
{
	P_GET_ENUM(EUIWorldMenuScreen,Z_Param_MenuScreen);
	P_GET_UBOOL(Z_Param_bForceRebuild);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->ShowMenuFromList(EUIWorldMenuScreen(Z_Param_MenuScreen),Z_Param_bForceRebuild);
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function ShowMenuFromList *************************

// ********** Begin Class UUIWorldMenuGameInstance Function ShowSaveToast **************************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowSaveToast_Statics
{
	struct UIWorldMenuGameInstance_eventShowSaveToast_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Save" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pops a GTA-style \"saved\" toast from the side. Safe to call anytime in-game.\n" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pops a GTA-style \"saved\" toast from the side. Safe to call anytime in-game." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShowSaveToast constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShowSaveToast constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShowSaveToast Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowSaveToast_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventShowSaveToast_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowSaveToast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowSaveToast_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowSaveToast_Statics::PropPointers) < 2048);
// ********** End Function ShowSaveToast Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowSaveToast_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "ShowSaveToast", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowSaveToast_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowSaveToast_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowSaveToast_Statics::UIWorldMenuGameInstance_eventShowSaveToast_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowSaveToast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowSaveToast_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowSaveToast_Statics::UIWorldMenuGameInstance_eventShowSaveToast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowSaveToast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowSaveToast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execShowSaveToast)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowSaveToast(Z_Param_Message);
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function ShowSaveToast ****************************

// ********** Begin Class UUIWorldMenuGameInstance Function UnlockAchievement **********************
struct Z_Construct_UFunction_UUIWorldMenuGameInstance_UnlockAchievement_Statics
{
	struct UIWorldMenuGameInstance_eventUnlockAchievement_Parms
	{
		FName AchievementId;
		float PercentComplete;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIWorld|Achievements" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Unlock (or set progress on) an achievement. Writes to Steam when available and always records locally. */" },
#endif
		{ "CPP_Default_PercentComplete", "100.000000" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unlock (or set progress on) an achievement. Writes to Steam when available and always records locally." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UnlockAchievement constinit property declarations *********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_AchievementId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UnlockAchievement constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UnlockAchievement Property Definitions ********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_UnlockAchievement_Statics::NewProp_AchievementId = { "AchievementId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventUnlockAchievement_Parms, AchievementId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_UnlockAchievement_Statics::NewProp_PercentComplete = { "PercentComplete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventUnlockAchievement_Parms, PercentComplete), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIWorldMenuGameInstance_UnlockAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_UnlockAchievement_Statics::NewProp_AchievementId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIWorldMenuGameInstance_UnlockAchievement_Statics::NewProp_PercentComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_UnlockAchievement_Statics::PropPointers) < 2048);
// ********** End Function UnlockAchievement Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWorldMenuGameInstance_UnlockAchievement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIWorldMenuGameInstance, nullptr, "UnlockAchievement", 	Z_Construct_UFunction_UUIWorldMenuGameInstance_UnlockAchievement_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_UnlockAchievement_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_UnlockAchievement_Statics::UIWorldMenuGameInstance_eventUnlockAchievement_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWorldMenuGameInstance_UnlockAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIWorldMenuGameInstance_UnlockAchievement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIWorldMenuGameInstance_UnlockAchievement_Statics::UIWorldMenuGameInstance_eventUnlockAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIWorldMenuGameInstance_UnlockAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWorldMenuGameInstance_UnlockAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIWorldMenuGameInstance::execUnlockAchievement)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_AchievementId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PercentComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnlockAchievement(Z_Param_AchievementId,Z_Param_PercentComplete);
	P_NATIVE_END;
}
// ********** End Class UUIWorldMenuGameInstance Function UnlockAchievement ************************

// ********** Begin Class UUIWorldMenuGameInstance *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UUIWorldMenuGameInstance;
UClass* UUIWorldMenuGameInstance::GetPrivateStaticClass()
{
	using TClass = UUIWorldMenuGameInstance;
	if (!Z_Registration_Info_UClass_UUIWorldMenuGameInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UIWorldMenuGameInstance"),
			Z_Registration_Info_UClass_UUIWorldMenuGameInstance.InnerSingleton,
			StaticRegisterNativesUUIWorldMenuGameInstance,
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
	return Z_Registration_Info_UClass_UUIWorldMenuGameInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UUIWorldMenuGameInstance_NoRegister()
{
	return UUIWorldMenuGameInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUIWorldMenuGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UIWorldMenuGameInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveToastWidgetClass_MetaData[] = {
		{ "Category", "UIWorld|Save" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional widget class for the slide-in \"saved\" toast (falls back to the built-in one).\n" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional widget class for the slide-in \"saved\" toast (falls back to the built-in one)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHostCompleted_MetaData[] = {
		{ "Category", "UIWorld|Online" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSessionsFound_MetaData[] = {
		{ "Category", "UIWorld|Online" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnJoinCompleted_MetaData[] = {
		{ "Category", "UIWorld|Online" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLeaveCompleted_MetaData[] = {
		{ "Category", "UIWorld|Online" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOnlineMatchReady_MetaData[] = {
		{ "Category", "UIWorld|Online" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fired when host/join travel finishes and gameplay should start (HUD, input, weapons). */" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fired when host/join travel finishes and gameplay should start (HUD, input, weapons)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMenuWidgetChanged_MetaData[] = {
		{ "Category", "UIWorld|UI" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMenuScreenChanged_MetaData[] = {
		{ "Category", "UIWorld|UI" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidgetClass_MetaData[] = {
		{ "Category", "UIWorld|UI" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnlineMenuWidgetClass_MetaData[] = {
		{ "Category", "UIWorld|UI" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseMenuWidgetClass_MetaData[] = {
		{ "Category", "UIWorld|UI" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsMenuWidgetClass_MetaData[] = {
		{ "Category", "UIWorld|UI" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseSettingsMenuWidgetClass_MetaData[] = {
		{ "Category", "UIWorld|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional dedicated settings widget for pause flow.\n// If set, OpenSettingsPauseMenu will use this class instead of SettingsMenuWidgetClass.\n" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional dedicated settings widget for pause flow.\nIf set, OpenSettingsPauseMenu will use this class instead of SettingsMenuWidgetClass." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenWidgetClass_MetaData[] = {
		{ "Category", "UIWorld|Flow" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShaderLoadingWidgetClass_MetaData[] = {
		{ "Category", "UIWorld|UI|Startup" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartupIntroWidgetClass_MetaData[] = {
		{ "Category", "UIWorld|UI|Startup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional animated game-title splash shown BEFORE shader compilation.\n" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional animated game-title splash shown BEFORE shader compilation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowStartupIntro_MetaData[] = {
		{ "Category", "UIWorld|UI|Startup" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartupIntroDuration_MetaData[] = {
		{ "Category", "UIWorld|UI|Startup" },
		{ "ClampMax", "15.0" },
		{ "ClampMin", "0.5" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoShowMenuOnStart_MetaData[] = {
		{ "Category", "UIWorld|UI|Startup" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowShaderLoadingOnStartup_MetaData[] = {
		{ "Category", "UIWorld|UI|Startup" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartupShaderLoadingDuration_MetaData[] = {
		{ "Category", "UIWorld|UI|Startup" },
		{ "ClampMax", "30.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAdaptiveStartupShaderDelay_MetaData[] = {
		{ "Category", "UIWorld|UI|Startup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scales startup shader screen minimum time by hardware class.\n" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scales startup shader screen minimum time by hardware class." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartupShaderMaxDuration_MetaData[] = {
		{ "Category", "UIWorld|UI|Startup" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCacheWidgetsByScreen_MetaData[] = {
		{ "Category", "UIWorld|UI" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuZOrder_MetaData[] = {
		{ "Category", "UIWorld|UI" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuLevelName_MetaData[] = {
		{ "Category", "UIWorld|Online" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnlineHostMapName_MetaData[] = {
		{ "Category", "UIWorld|Online" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnlineServerName_MetaData[] = {
		{ "Category", "UIWorld|Online" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnlineLanPort_MetaData[] = {
		{ "Category", "UIWorld|Online" },
		{ "ClampMax", "65535" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Port for LAN ?listen / ClientTravel when using Null (same-PC testing). */" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Port for LAN ?listen / ClientTravel when using Null (same-PC testing)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnlineGameBuildId_MetaData[] = {
		{ "Category", "UIWorld|Online" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Advertised with each session so clients can filter mismatched builds (see DefaultEngine BuildIdOverride). */" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Advertised with each session so clients can filter mismatched builds (see DefaultEngine BuildIdOverride)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingHostPassword_MetaData[] = {
		{ "Category", "UIWorld|Online" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set by lobby UI before Host \xe2\x80\x94 empty = open session. */" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set by lobby UI before Host \xe2\x80\x94 empty = open session." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingHostPrivacy_MetaData[] = {
		{ "Category", "UIWorld|Online" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** 0 = public, 1 = friends/presence only, 2 = invite-only (hidden from browse). */" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0 = public, 1 = friends/presence only, 2 = invite-only (hidden from browse)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingJoinPassword_MetaData[] = {
		{ "Category", "UIWorld|Online" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set by lobby UI before Join \xe2\x80\x94 required when session has SESSION_PASSWORD. */" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set by lobby UI before Join \xe2\x80\x94 required when session has SESSION_PASSWORD." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenDelayBeforeOpenLevel_MetaData[] = {
		{ "Category", "UIWorld|Flow|Loading" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Small delay to ensure loading widget is drawn before blocking OpenLevel.\n" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Small delay to ensure loading widget is drawn before blocking OpenLevel." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAdaptiveLoadingDelay_MetaData[] = {
		{ "Category", "UIWorld|Flow|Loading|Adaptive" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, pre-open delay is adjusted by CPU/RAM (weaker PC => longer delay).\n" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, pre-open delay is adjusted by CPU/RAM (weaker PC => longer delay)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdaptiveDelayMinSeconds_MetaData[] = {
		{ "Category", "UIWorld|Flow|Loading|Adaptive" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Minimum adaptive delay.\n" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum adaptive delay." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdaptiveDelayMaxSeconds_MetaData[] = {
		{ "Category", "UIWorld|Flow|Loading|Adaptive" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum adaptive delay.\n" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum adaptive delay." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMapComplexityDelay_MetaData[] = {
		{ "Category", "UIWorld|Flow|Loading|Adaptive" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds extra delay based on target map package size (.umap).\n" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds extra delay based on target map package size (.umap)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapDelayPer100MB_MetaData[] = {
		{ "Category", "UIWorld|Flow|Loading|Adaptive" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Added seconds per 100MB map size.\n" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Added seconds per 100MB map size." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapDelayMaxSeconds_MetaData[] = {
		{ "Category", "UIWorld|Flow|Loading|Adaptive" },
		{ "ClampMax", "30.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Safety clamp for map-based delay component.\n" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Safety clamp for map-based delay component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMoviePlayerLoadingScreen_MetaData[] = {
		{ "Category", "UIWorld|Flow|Loading" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Uses MoviePlayer Slate loading (animated and non-freezing while OpenLevel blocks).\n" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uses MoviePlayer Slate loading (animated and non-freezing while OpenLevel blocks)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMenuScreen_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastNonSettingsMenuScreen_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuWidgetCache_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinnedMenuWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveLoadingScreenWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveStartupShaderWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveStartupIntroWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartupShaderPhaseActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartupShaderPhaseCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyGameFocusOnNextMapLoad_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingLevelNameToLoad_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPendingLevelAbsolute_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastFoundSessions_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastOnlineDiagnostic_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPendingFindOnlineSessions_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingFindMaxResults_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPendingFindLAN_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingHostMaxPlayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPendingHostAfterDestroy_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPendingQuickJoin_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingJoinSessionIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingJoinConnectSearchIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinConnectRetryAttempts_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HostedSessionPublishAttempts_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLastOnlineQueryWasLAN_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Matches the last Host/Find call (LAN => Null OSS, otherwise Steam). */" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Matches the last Host/Find call (LAN => Null OSS, otherwise Steam)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockedAchievementIds_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Locally-recorded unlocked achievements (mirrors Steam, and persists offline).\n" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Locally-recorded unlocked achievements (mirrors Steam, and persists offline)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlineTravelInProgress_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True while a join/connect is in flight, so failure handlers know to react.\n" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True while a join/connect is in flight, so failure handlers know to react." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlineJoinReachedGameMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set when a join ClientTravel successfully lands on a non-menu map. */" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set when a join ClientTravel successfully lands on a non-menu map." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlineLoadingOverlayActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnlineTravelStartSeconds_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnlineJoinTimeoutSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UIWorld|Online" },
		{ "ClampMax", "60.0" },
		{ "ClampMin", "3.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Safety timeout for joining a session before we bail back to the menu.\n" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Safety timeout for joining a session before we bail back to the menu." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnlineAbortGraceSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UIWorld|Online" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.5" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wait before treating travel/network errors as a failed join (avoids false kicks while the map loads). */" },
#endif
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait before treating travel/network errors as a failed join (avoids false kicks while the map loads)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UUIWorldMenuGameInstance constinit property declarations *****************
	static const UECodeGen_Private::FClassPropertyParams NewProp_SaveToastWidgetClass;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHostCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionsFound;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJoinCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeaveCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOnlineMatchReady;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMenuWidgetChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMenuScreenChanged;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainMenuWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OnlineMenuWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PauseMenuWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SettingsMenuWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PauseSettingsMenuWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LoadingScreenWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ShaderLoadingWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StartupIntroWidgetClass;
	static void NewProp_bShowStartupIntro_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowStartupIntro;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartupIntroDuration;
	static void NewProp_bAutoShowMenuOnStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoShowMenuOnStart;
	static void NewProp_bShowShaderLoadingOnStartup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowShaderLoadingOnStartup;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartupShaderLoadingDuration;
	static void NewProp_bUseAdaptiveStartupShaderDelay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAdaptiveStartupShaderDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartupShaderMaxDuration;
	static void NewProp_bCacheWidgetsByScreen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCacheWidgetsByScreen;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MenuZOrder;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MainMenuLevelName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OnlineHostMapName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OnlineServerName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OnlineLanPort;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OnlineGameBuildId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PendingHostPassword;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PendingHostPrivacy;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PendingJoinPassword;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoadingScreenDelayBeforeOpenLevel;
	static void NewProp_bUseAdaptiveLoadingDelay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAdaptiveLoadingDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdaptiveDelayMinSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdaptiveDelayMaxSeconds;
	static void NewProp_bUseMapComplexityDelay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMapComplexityDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MapDelayPer100MB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MapDelayMaxSeconds;
	static void NewProp_bUseMoviePlayerLoadingScreen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMoviePlayerLoadingScreen;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentMenuScreen_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentMenuScreen;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LastNonSettingsMenuScreen_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LastNonSettingsMenuScreen;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuWidgetCache_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MenuWidgetCache_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MenuWidgetCache_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MenuWidgetCache;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PinnedMenuWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveLoadingScreenWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveStartupShaderWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveStartupIntroWidget;
	static void NewProp_bStartupShaderPhaseActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartupShaderPhaseActive;
	static void NewProp_bStartupShaderPhaseCompleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartupShaderPhaseCompleted;
	static void NewProp_bApplyGameFocusOnNextMapLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyGameFocusOnNextMapLoad;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PendingLevelNameToLoad;
	static void NewProp_bPendingLevelAbsolute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingLevelAbsolute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastFoundSessions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LastFoundSessions;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LastOnlineDiagnostic;
	static void NewProp_bPendingFindOnlineSessions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingFindOnlineSessions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PendingFindMaxResults;
	static void NewProp_bPendingFindLAN_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingFindLAN;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PendingHostMaxPlayers;
	static void NewProp_bPendingHostAfterDestroy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingHostAfterDestroy;
	static void NewProp_bPendingQuickJoin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingQuickJoin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PendingJoinSessionIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PendingJoinConnectSearchIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_JoinConnectRetryAttempts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HostedSessionPublishAttempts;
	static void NewProp_bLastOnlineQueryWasLAN_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLastOnlineQueryWasLAN;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UnlockedAchievementIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnlockedAchievementIds;
	static void NewProp_bOnlineTravelInProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlineTravelInProgress;
	static void NewProp_bOnlineJoinReachedGameMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlineJoinReachedGameMap;
	static void NewProp_bOnlineLoadingOverlayActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlineLoadingOverlayActive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OnlineTravelStartSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OnlineJoinTimeoutSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OnlineAbortGraceSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UUIWorldMenuGameInstance constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BackFromSettingsMainMenu"), .Pointer = &UUIWorldMenuGameInstance::execBackFromSettingsMainMenu },
		{ .NameUTF8 = UTF8TEXT("BackFromSettingsMenuSmart"), .Pointer = &UUIWorldMenuGameInstance::execBackFromSettingsMenuSmart },
		{ .NameUTF8 = UTF8TEXT("BackFromSettingsPauseMenu"), .Pointer = &UUIWorldMenuGameInstance::execBackFromSettingsPauseMenu },
		{ .NameUTF8 = UTF8TEXT("BackMenuPause"), .Pointer = &UUIWorldMenuGameInstance::execBackMenuPause },
		{ .NameUTF8 = UTF8TEXT("CloseMenuUI"), .Pointer = &UUIWorldMenuGameInstance::execCloseMenuUI },
		{ .NameUTF8 = UTF8TEXT("ContinueGame"), .Pointer = &UUIWorldMenuGameInstance::execContinueGame },
		{ .NameUTF8 = UTF8TEXT("FindOnlineSessions"), .Pointer = &UUIWorldMenuGameInstance::execFindOnlineSessions },
		{ .NameUTF8 = UTF8TEXT("GetCurrentSessionPlayerCount"), .Pointer = &UUIWorldMenuGameInstance::execGetCurrentSessionPlayerCount },
		{ .NameUTF8 = UTF8TEXT("GetEngineVersionString"), .Pointer = &UUIWorldMenuGameInstance::execGetEngineVersionString },
		{ .NameUTF8 = UTF8TEXT("GetLastFoundSessions"), .Pointer = &UUIWorldMenuGameInstance::execGetLastFoundSessions },
		{ .NameUTF8 = UTF8TEXT("GetLastOnlineDiagnostic"), .Pointer = &UUIWorldMenuGameInstance::execGetLastOnlineDiagnostic },
		{ .NameUTF8 = UTF8TEXT("GetOnlinePlayerNickname"), .Pointer = &UUIWorldMenuGameInstance::execGetOnlinePlayerNickname },
		{ .NameUTF8 = UTF8TEXT("GetOnlineServiceName"), .Pointer = &UUIWorldMenuGameInstance::execGetOnlineServiceName },
		{ .NameUTF8 = UTF8TEXT("GetUnlockedAchievements"), .Pointer = &UUIWorldMenuGameInstance::execGetUnlockedAchievements },
		{ .NameUTF8 = UTF8TEXT("HandleLanguageChanged"), .Pointer = &UUIWorldMenuGameInstance::execHandleLanguageChanged },
		{ .NameUTF8 = UTF8TEXT("HostOnlineSession"), .Pointer = &UUIWorldMenuGameInstance::execHostOnlineSession },
		{ .NameUTF8 = UTF8TEXT("IsAchievementUnlocked"), .Pointer = &UUIWorldMenuGameInstance::execIsAchievementUnlocked },
		{ .NameUTF8 = UTF8TEXT("IsOnlineAvailable"), .Pointer = &UUIWorldMenuGameInstance::execIsOnlineAvailable },
		{ .NameUTF8 = UTF8TEXT("IsOnlineLoggedIn"), .Pointer = &UUIWorldMenuGameInstance::execIsOnlineLoggedIn },
		{ .NameUTF8 = UTF8TEXT("IsOnlineTravelInProgress"), .Pointer = &UUIWorldMenuGameInstance::execIsOnlineTravelInProgress },
		{ .NameUTF8 = UTF8TEXT("JoinOnlineByAddress"), .Pointer = &UUIWorldMenuGameInstance::execJoinOnlineByAddress },
		{ .NameUTF8 = UTF8TEXT("JoinOnlineSessionByIndex"), .Pointer = &UUIWorldMenuGameInstance::execJoinOnlineSessionByIndex },
		{ .NameUTF8 = UTF8TEXT("LeaveOnlineSessionAndReturnToMenu"), .Pointer = &UUIWorldMenuGameInstance::execLeaveOnlineSessionAndReturnToMenu },
		{ .NameUTF8 = UTF8TEXT("LoadLevelAndFocusGame"), .Pointer = &UUIWorldMenuGameInstance::execLoadLevelAndFocusGame },
		{ .NameUTF8 = UTF8TEXT("LoadLevelWithLoadingScreen"), .Pointer = &UUIWorldMenuGameInstance::execLoadLevelWithLoadingScreen },
		{ .NameUTF8 = UTF8TEXT("LoadMainMenuLevel"), .Pointer = &UUIWorldMenuGameInstance::execLoadMainMenuLevel },
		{ .NameUTF8 = UTF8TEXT("OpenPauseSettingsMenu"), .Pointer = &UUIWorldMenuGameInstance::execOpenPauseSettingsMenu },
		{ .NameUTF8 = UTF8TEXT("OpenSettingsMainMenu"), .Pointer = &UUIWorldMenuGameInstance::execOpenSettingsMainMenu },
		{ .NameUTF8 = UTF8TEXT("OpenSettingsPauseMenu"), .Pointer = &UUIWorldMenuGameInstance::execOpenSettingsPauseMenu },
		{ .NameUTF8 = UTF8TEXT("QuickJoinOnlineSession"), .Pointer = &UUIWorldMenuGameInstance::execQuickJoinOnlineSession },
		{ .NameUTF8 = UTF8TEXT("QuitGameNow"), .Pointer = &UUIWorldMenuGameInstance::execQuitGameNow },
		{ .NameUTF8 = UTF8TEXT("RequestOnlineLogin"), .Pointer = &UUIWorldMenuGameInstance::execRequestOnlineLogin },
		{ .NameUTF8 = UTF8TEXT("SaveGame"), .Pointer = &UUIWorldMenuGameInstance::execSaveGame },
		{ .NameUTF8 = UTF8TEXT("ShowMenuFromList"), .Pointer = &UUIWorldMenuGameInstance::execShowMenuFromList },
		{ .NameUTF8 = UTF8TEXT("ShowSaveToast"), .Pointer = &UUIWorldMenuGameInstance::execShowSaveToast },
		{ .NameUTF8 = UTF8TEXT("UnlockAchievement"), .Pointer = &UUIWorldMenuGameInstance::execUnlockAchievement },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMainMenu, "BackFromSettingsMainMenu" }, // 630237206
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsMenuSmart, "BackFromSettingsMenuSmart" }, // 2820813374
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_BackFromSettingsPauseMenu, "BackFromSettingsPauseMenu" }, // 1375598917
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_BackMenuPause, "BackMenuPause" }, // 496697375
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_CloseMenuUI, "CloseMenuUI" }, // 4140361374
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_ContinueGame, "ContinueGame" }, // 2986398575
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_FindOnlineSessions, "FindOnlineSessions" }, // 237892866
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_GetCurrentSessionPlayerCount, "GetCurrentSessionPlayerCount" }, // 3015656339
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_GetEngineVersionString, "GetEngineVersionString" }, // 1376501736
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastFoundSessions, "GetLastFoundSessions" }, // 3001774547
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastOnlineDiagnostic, "GetLastOnlineDiagnostic" }, // 487073974
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlinePlayerNickname, "GetOnlinePlayerNickname" }, // 1791034734
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_GetOnlineServiceName, "GetOnlineServiceName" }, // 1790905096
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_GetUnlockedAchievements, "GetUnlockedAchievements" }, // 3584073858
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_HandleLanguageChanged, "HandleLanguageChanged" }, // 3721995094
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_HostOnlineSession, "HostOnlineSession" }, // 3565285953
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_IsAchievementUnlocked, "IsAchievementUnlocked" }, // 2423752943
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineAvailable, "IsOnlineAvailable" }, // 3854369547
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineLoggedIn, "IsOnlineLoggedIn" }, // 3575875247
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_IsOnlineTravelInProgress, "IsOnlineTravelInProgress" }, // 1200942628
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineByAddress, "JoinOnlineByAddress" }, // 4131912107
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineSessionByIndex, "JoinOnlineSessionByIndex" }, // 1398159433
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_LeaveOnlineSessionAndReturnToMenu, "LeaveOnlineSessionAndReturnToMenu" }, // 3209783200
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelAndFocusGame, "LoadLevelAndFocusGame" }, // 2825949702
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelWithLoadingScreen, "LoadLevelWithLoadingScreen" }, // 177349268
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadMainMenuLevel, "LoadMainMenuLevel" }, // 1691813011
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenPauseSettingsMenu, "OpenPauseSettingsMenu" }, // 3066366101
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsMainMenu, "OpenSettingsMainMenu" }, // 1002294087
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenSettingsPauseMenu, "OpenSettingsPauseMenu" }, // 3106837854
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_QuickJoinOnlineSession, "QuickJoinOnlineSession" }, // 1868539167
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_QuitGameNow, "QuitGameNow" }, // 1203969031
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_RequestOnlineLogin, "RequestOnlineLogin" }, // 770354608
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_SaveGame, "SaveGame" }, // 1374241520
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowMenuFromList, "ShowMenuFromList" }, // 1796533634
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowSaveToast, "ShowSaveToast" }, // 2100602574
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_UnlockAchievement, "UnlockAchievement" }, // 2520888677
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIWorldMenuGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UUIWorldMenuGameInstance_Statics

// ********** Begin Class UUIWorldMenuGameInstance Property Definitions ****************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_SaveToastWidgetClass = { "SaveToastWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, SaveToastWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveToastWidgetClass_MetaData), NewProp_SaveToastWidgetClass_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnHostCompleted = { "OnHostCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, OnHostCompleted), Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineOpCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHostCompleted_MetaData), NewProp_OnHostCompleted_MetaData) }; // 2291936370
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnSessionsFound = { "OnSessionsFound", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, OnSessionsFound), Z_Construct_UDelegateFunction_UIWorld_OnUIWorldSessionsFound__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSessionsFound_MetaData), NewProp_OnSessionsFound_MetaData) }; // 3351614096
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnJoinCompleted = { "OnJoinCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, OnJoinCompleted), Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineOpCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnJoinCompleted_MetaData), NewProp_OnJoinCompleted_MetaData) }; // 2291936370
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnLeaveCompleted = { "OnLeaveCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, OnLeaveCompleted), Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineOpCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeaveCompleted_MetaData), NewProp_OnLeaveCompleted_MetaData) }; // 2291936370
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnOnlineMatchReady = { "OnOnlineMatchReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, OnOnlineMatchReady), Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineMatchReady__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOnlineMatchReady_MetaData), NewProp_OnOnlineMatchReady_MetaData) }; // 1029860978
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnMenuWidgetChanged = { "OnMenuWidgetChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, OnMenuWidgetChanged), Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuWidgetChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMenuWidgetChanged_MetaData), NewProp_OnMenuWidgetChanged_MetaData) }; // 2870904578
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnMenuScreenChanged = { "OnMenuScreenChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, OnMenuScreenChanged), Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuScreenChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMenuScreenChanged_MetaData), NewProp_OnMenuScreenChanged_MetaData) }; // 688997098
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MainMenuWidgetClass = { "MainMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, MainMenuWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuWidgetClass_MetaData), NewProp_MainMenuWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnlineMenuWidgetClass = { "OnlineMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, OnlineMenuWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnlineMenuWidgetClass_MetaData), NewProp_OnlineMenuWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PauseMenuWidgetClass = { "PauseMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, PauseMenuWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseMenuWidgetClass_MetaData), NewProp_PauseMenuWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_SettingsMenuWidgetClass = { "SettingsMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, SettingsMenuWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsMenuWidgetClass_MetaData), NewProp_SettingsMenuWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PauseSettingsMenuWidgetClass = { "PauseSettingsMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, PauseSettingsMenuWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseSettingsMenuWidgetClass_MetaData), NewProp_PauseSettingsMenuWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_LoadingScreenWidgetClass = { "LoadingScreenWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, LoadingScreenWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingScreenWidgetClass_MetaData), NewProp_LoadingScreenWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_ShaderLoadingWidgetClass = { "ShaderLoadingWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, ShaderLoadingWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UZonefallShaderLoadingWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShaderLoadingWidgetClass_MetaData), NewProp_ShaderLoadingWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_StartupIntroWidgetClass = { "StartupIntroWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, StartupIntroWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartupIntroWidgetClass_MetaData), NewProp_StartupIntroWidgetClass_MetaData) };
void Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bShowStartupIntro_SetBit(void* Obj)
{
	((UUIWorldMenuGameInstance*)Obj)->bShowStartupIntro = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bShowStartupIntro = { "bShowStartupIntro", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUIWorldMenuGameInstance), &Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bShowStartupIntro_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowStartupIntro_MetaData), NewProp_bShowStartupIntro_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_StartupIntroDuration = { "StartupIntroDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, StartupIntroDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartupIntroDuration_MetaData), NewProp_StartupIntroDuration_MetaData) };
void Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bAutoShowMenuOnStart_SetBit(void* Obj)
{
	((UUIWorldMenuGameInstance*)Obj)->bAutoShowMenuOnStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bAutoShowMenuOnStart = { "bAutoShowMenuOnStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUIWorldMenuGameInstance), &Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bAutoShowMenuOnStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoShowMenuOnStart_MetaData), NewProp_bAutoShowMenuOnStart_MetaData) };
void Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bShowShaderLoadingOnStartup_SetBit(void* Obj)
{
	((UUIWorldMenuGameInstance*)Obj)->bShowShaderLoadingOnStartup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bShowShaderLoadingOnStartup = { "bShowShaderLoadingOnStartup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUIWorldMenuGameInstance), &Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bShowShaderLoadingOnStartup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowShaderLoadingOnStartup_MetaData), NewProp_bShowShaderLoadingOnStartup_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_StartupShaderLoadingDuration = { "StartupShaderLoadingDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, StartupShaderLoadingDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartupShaderLoadingDuration_MetaData), NewProp_StartupShaderLoadingDuration_MetaData) };
void Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bUseAdaptiveStartupShaderDelay_SetBit(void* Obj)
{
	((UUIWorldMenuGameInstance*)Obj)->bUseAdaptiveStartupShaderDelay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bUseAdaptiveStartupShaderDelay = { "bUseAdaptiveStartupShaderDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUIWorldMenuGameInstance), &Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bUseAdaptiveStartupShaderDelay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAdaptiveStartupShaderDelay_MetaData), NewProp_bUseAdaptiveStartupShaderDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_StartupShaderMaxDuration = { "StartupShaderMaxDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, StartupShaderMaxDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartupShaderMaxDuration_MetaData), NewProp_StartupShaderMaxDuration_MetaData) };
void Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bCacheWidgetsByScreen_SetBit(void* Obj)
{
	((UUIWorldMenuGameInstance*)Obj)->bCacheWidgetsByScreen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bCacheWidgetsByScreen = { "bCacheWidgetsByScreen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUIWorldMenuGameInstance), &Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bCacheWidgetsByScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCacheWidgetsByScreen_MetaData), NewProp_bCacheWidgetsByScreen_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MenuZOrder = { "MenuZOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, MenuZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuZOrder_MetaData), NewProp_MenuZOrder_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MainMenuLevelName = { "MainMenuLevelName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, MainMenuLevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuLevelName_MetaData), NewProp_MainMenuLevelName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnlineHostMapName = { "OnlineHostMapName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, OnlineHostMapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnlineHostMapName_MetaData), NewProp_OnlineHostMapName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnlineServerName = { "OnlineServerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, OnlineServerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnlineServerName_MetaData), NewProp_OnlineServerName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnlineLanPort = { "OnlineLanPort", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, OnlineLanPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnlineLanPort_MetaData), NewProp_OnlineLanPort_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnlineGameBuildId = { "OnlineGameBuildId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, OnlineGameBuildId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnlineGameBuildId_MetaData), NewProp_OnlineGameBuildId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PendingHostPassword = { "PendingHostPassword", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, PendingHostPassword), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingHostPassword_MetaData), NewProp_PendingHostPassword_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PendingHostPrivacy = { "PendingHostPrivacy", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, PendingHostPrivacy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingHostPrivacy_MetaData), NewProp_PendingHostPrivacy_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PendingJoinPassword = { "PendingJoinPassword", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, PendingJoinPassword), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingJoinPassword_MetaData), NewProp_PendingJoinPassword_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_LoadingScreenDelayBeforeOpenLevel = { "LoadingScreenDelayBeforeOpenLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, LoadingScreenDelayBeforeOpenLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingScreenDelayBeforeOpenLevel_MetaData), NewProp_LoadingScreenDelayBeforeOpenLevel_MetaData) };
void Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bUseAdaptiveLoadingDelay_SetBit(void* Obj)
{
	((UUIWorldMenuGameInstance*)Obj)->bUseAdaptiveLoadingDelay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bUseAdaptiveLoadingDelay = { "bUseAdaptiveLoadingDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUIWorldMenuGameInstance), &Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bUseAdaptiveLoadingDelay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAdaptiveLoadingDelay_MetaData), NewProp_bUseAdaptiveLoadingDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_AdaptiveDelayMinSeconds = { "AdaptiveDelayMinSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, AdaptiveDelayMinSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdaptiveDelayMinSeconds_MetaData), NewProp_AdaptiveDelayMinSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_AdaptiveDelayMaxSeconds = { "AdaptiveDelayMaxSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, AdaptiveDelayMaxSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdaptiveDelayMaxSeconds_MetaData), NewProp_AdaptiveDelayMaxSeconds_MetaData) };
void Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bUseMapComplexityDelay_SetBit(void* Obj)
{
	((UUIWorldMenuGameInstance*)Obj)->bUseMapComplexityDelay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bUseMapComplexityDelay = { "bUseMapComplexityDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUIWorldMenuGameInstance), &Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bUseMapComplexityDelay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMapComplexityDelay_MetaData), NewProp_bUseMapComplexityDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MapDelayPer100MB = { "MapDelayPer100MB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, MapDelayPer100MB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapDelayPer100MB_MetaData), NewProp_MapDelayPer100MB_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MapDelayMaxSeconds = { "MapDelayMaxSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, MapDelayMaxSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapDelayMaxSeconds_MetaData), NewProp_MapDelayMaxSeconds_MetaData) };
void Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bUseMoviePlayerLoadingScreen_SetBit(void* Obj)
{
	((UUIWorldMenuGameInstance*)Obj)->bUseMoviePlayerLoadingScreen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bUseMoviePlayerLoadingScreen = { "bUseMoviePlayerLoadingScreen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUIWorldMenuGameInstance), &Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bUseMoviePlayerLoadingScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMoviePlayerLoadingScreen_MetaData), NewProp_bUseMoviePlayerLoadingScreen_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_CurrentMenuScreen_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_CurrentMenuScreen = { "CurrentMenuScreen", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, CurrentMenuScreen), Z_Construct_UEnum_UIWorld_EUIWorldMenuScreen, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMenuScreen_MetaData), NewProp_CurrentMenuScreen_MetaData) }; // 48686507
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_LastNonSettingsMenuScreen_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_LastNonSettingsMenuScreen = { "LastNonSettingsMenuScreen", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, LastNonSettingsMenuScreen), Z_Construct_UEnum_UIWorld_EUIWorldMenuScreen, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastNonSettingsMenuScreen_MetaData), NewProp_LastNonSettingsMenuScreen_MetaData) }; // 48686507
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MenuWidgetCache_ValueProp = { "MenuWidgetCache", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MenuWidgetCache_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MenuWidgetCache_Key_KeyProp = { "MenuWidgetCache_Key", nullptr, (EPropertyFlags)0x0100000000080008, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_UIWorld_EUIWorldMenuScreen, METADATA_PARAMS(0, nullptr) }; // 48686507
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MenuWidgetCache = { "MenuWidgetCache", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, MenuWidgetCache), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuWidgetCache_MetaData), NewProp_MenuWidgetCache_MetaData) }; // 48686507
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PinnedMenuWidget = { "PinnedMenuWidget", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, PinnedMenuWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinnedMenuWidget_MetaData), NewProp_PinnedMenuWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_ActiveLoadingScreenWidget = { "ActiveLoadingScreenWidget", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, ActiveLoadingScreenWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveLoadingScreenWidget_MetaData), NewProp_ActiveLoadingScreenWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_ActiveStartupShaderWidget = { "ActiveStartupShaderWidget", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, ActiveStartupShaderWidget), Z_Construct_UClass_UZonefallShaderLoadingWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveStartupShaderWidget_MetaData), NewProp_ActiveStartupShaderWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_ActiveStartupIntroWidget = { "ActiveStartupIntroWidget", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, ActiveStartupIntroWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveStartupIntroWidget_MetaData), NewProp_ActiveStartupIntroWidget_MetaData) };
void Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bStartupShaderPhaseActive_SetBit(void* Obj)
{
	((UUIWorldMenuGameInstance*)Obj)->bStartupShaderPhaseActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bStartupShaderPhaseActive = { "bStartupShaderPhaseActive", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUIWorldMenuGameInstance), &Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bStartupShaderPhaseActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartupShaderPhaseActive_MetaData), NewProp_bStartupShaderPhaseActive_MetaData) };
void Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bStartupShaderPhaseCompleted_SetBit(void* Obj)
{
	((UUIWorldMenuGameInstance*)Obj)->bStartupShaderPhaseCompleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bStartupShaderPhaseCompleted = { "bStartupShaderPhaseCompleted", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUIWorldMenuGameInstance), &Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bStartupShaderPhaseCompleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartupShaderPhaseCompleted_MetaData), NewProp_bStartupShaderPhaseCompleted_MetaData) };
void Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bApplyGameFocusOnNextMapLoad_SetBit(void* Obj)
{
	((UUIWorldMenuGameInstance*)Obj)->bApplyGameFocusOnNextMapLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bApplyGameFocusOnNextMapLoad = { "bApplyGameFocusOnNextMapLoad", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUIWorldMenuGameInstance), &Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bApplyGameFocusOnNextMapLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyGameFocusOnNextMapLoad_MetaData), NewProp_bApplyGameFocusOnNextMapLoad_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PendingLevelNameToLoad = { "PendingLevelNameToLoad", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, PendingLevelNameToLoad), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingLevelNameToLoad_MetaData), NewProp_PendingLevelNameToLoad_MetaData) };
void Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bPendingLevelAbsolute_SetBit(void* Obj)
{
	((UUIWorldMenuGameInstance*)Obj)->bPendingLevelAbsolute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bPendingLevelAbsolute = { "bPendingLevelAbsolute", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUIWorldMenuGameInstance), &Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bPendingLevelAbsolute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPendingLevelAbsolute_MetaData), NewProp_bPendingLevelAbsolute_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_LastFoundSessions_Inner = { "LastFoundSessions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult, METADATA_PARAMS(0, nullptr) }; // 11846451
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_LastFoundSessions = { "LastFoundSessions", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, LastFoundSessions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastFoundSessions_MetaData), NewProp_LastFoundSessions_MetaData) }; // 11846451
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_LastOnlineDiagnostic = { "LastOnlineDiagnostic", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, LastOnlineDiagnostic), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastOnlineDiagnostic_MetaData), NewProp_LastOnlineDiagnostic_MetaData) };
void Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bPendingFindOnlineSessions_SetBit(void* Obj)
{
	((UUIWorldMenuGameInstance*)Obj)->bPendingFindOnlineSessions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bPendingFindOnlineSessions = { "bPendingFindOnlineSessions", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUIWorldMenuGameInstance), &Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bPendingFindOnlineSessions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPendingFindOnlineSessions_MetaData), NewProp_bPendingFindOnlineSessions_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PendingFindMaxResults = { "PendingFindMaxResults", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, PendingFindMaxResults), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingFindMaxResults_MetaData), NewProp_PendingFindMaxResults_MetaData) };
void Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bPendingFindLAN_SetBit(void* Obj)
{
	((UUIWorldMenuGameInstance*)Obj)->bPendingFindLAN = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bPendingFindLAN = { "bPendingFindLAN", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUIWorldMenuGameInstance), &Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bPendingFindLAN_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPendingFindLAN_MetaData), NewProp_bPendingFindLAN_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PendingHostMaxPlayers = { "PendingHostMaxPlayers", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, PendingHostMaxPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingHostMaxPlayers_MetaData), NewProp_PendingHostMaxPlayers_MetaData) };
void Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bPendingHostAfterDestroy_SetBit(void* Obj)
{
	((UUIWorldMenuGameInstance*)Obj)->bPendingHostAfterDestroy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bPendingHostAfterDestroy = { "bPendingHostAfterDestroy", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUIWorldMenuGameInstance), &Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bPendingHostAfterDestroy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPendingHostAfterDestroy_MetaData), NewProp_bPendingHostAfterDestroy_MetaData) };
void Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bPendingQuickJoin_SetBit(void* Obj)
{
	((UUIWorldMenuGameInstance*)Obj)->bPendingQuickJoin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bPendingQuickJoin = { "bPendingQuickJoin", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUIWorldMenuGameInstance), &Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bPendingQuickJoin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPendingQuickJoin_MetaData), NewProp_bPendingQuickJoin_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PendingJoinSessionIndex = { "PendingJoinSessionIndex", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, PendingJoinSessionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingJoinSessionIndex_MetaData), NewProp_PendingJoinSessionIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PendingJoinConnectSearchIndex = { "PendingJoinConnectSearchIndex", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, PendingJoinConnectSearchIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingJoinConnectSearchIndex_MetaData), NewProp_PendingJoinConnectSearchIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_JoinConnectRetryAttempts = { "JoinConnectRetryAttempts", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, JoinConnectRetryAttempts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinConnectRetryAttempts_MetaData), NewProp_JoinConnectRetryAttempts_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_HostedSessionPublishAttempts = { "HostedSessionPublishAttempts", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, HostedSessionPublishAttempts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HostedSessionPublishAttempts_MetaData), NewProp_HostedSessionPublishAttempts_MetaData) };
void Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bLastOnlineQueryWasLAN_SetBit(void* Obj)
{
	((UUIWorldMenuGameInstance*)Obj)->bLastOnlineQueryWasLAN = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bLastOnlineQueryWasLAN = { "bLastOnlineQueryWasLAN", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUIWorldMenuGameInstance), &Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bLastOnlineQueryWasLAN_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLastOnlineQueryWasLAN_MetaData), NewProp_bLastOnlineQueryWasLAN_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_UnlockedAchievementIds_Inner = { "UnlockedAchievementIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_UnlockedAchievementIds = { "UnlockedAchievementIds", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, UnlockedAchievementIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockedAchievementIds_MetaData), NewProp_UnlockedAchievementIds_MetaData) };
void Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bOnlineTravelInProgress_SetBit(void* Obj)
{
	((UUIWorldMenuGameInstance*)Obj)->bOnlineTravelInProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bOnlineTravelInProgress = { "bOnlineTravelInProgress", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUIWorldMenuGameInstance), &Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bOnlineTravelInProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlineTravelInProgress_MetaData), NewProp_bOnlineTravelInProgress_MetaData) };
void Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bOnlineJoinReachedGameMap_SetBit(void* Obj)
{
	((UUIWorldMenuGameInstance*)Obj)->bOnlineJoinReachedGameMap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bOnlineJoinReachedGameMap = { "bOnlineJoinReachedGameMap", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUIWorldMenuGameInstance), &Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bOnlineJoinReachedGameMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlineJoinReachedGameMap_MetaData), NewProp_bOnlineJoinReachedGameMap_MetaData) };
void Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bOnlineLoadingOverlayActive_SetBit(void* Obj)
{
	((UUIWorldMenuGameInstance*)Obj)->bOnlineLoadingOverlayActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bOnlineLoadingOverlayActive = { "bOnlineLoadingOverlayActive", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUIWorldMenuGameInstance), &Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bOnlineLoadingOverlayActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlineLoadingOverlayActive_MetaData), NewProp_bOnlineLoadingOverlayActive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnlineTravelStartSeconds = { "OnlineTravelStartSeconds", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, OnlineTravelStartSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnlineTravelStartSeconds_MetaData), NewProp_OnlineTravelStartSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnlineJoinTimeoutSeconds = { "OnlineJoinTimeoutSeconds", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, OnlineJoinTimeoutSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnlineJoinTimeoutSeconds_MetaData), NewProp_OnlineJoinTimeoutSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnlineAbortGraceSeconds = { "OnlineAbortGraceSeconds", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, OnlineAbortGraceSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnlineAbortGraceSeconds_MetaData), NewProp_OnlineAbortGraceSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_SaveToastWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnHostCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnSessionsFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnJoinCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnLeaveCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnOnlineMatchReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnMenuWidgetChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnMenuScreenChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MainMenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnlineMenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PauseMenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_SettingsMenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PauseSettingsMenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_LoadingScreenWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_ShaderLoadingWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_StartupIntroWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bShowStartupIntro,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_StartupIntroDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bAutoShowMenuOnStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bShowShaderLoadingOnStartup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_StartupShaderLoadingDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bUseAdaptiveStartupShaderDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_StartupShaderMaxDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bCacheWidgetsByScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MenuZOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MainMenuLevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnlineHostMapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnlineServerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnlineLanPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnlineGameBuildId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PendingHostPassword,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PendingHostPrivacy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PendingJoinPassword,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_LoadingScreenDelayBeforeOpenLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bUseAdaptiveLoadingDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_AdaptiveDelayMinSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_AdaptiveDelayMaxSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bUseMapComplexityDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MapDelayPer100MB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MapDelayMaxSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bUseMoviePlayerLoadingScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_CurrentMenuScreen_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_CurrentMenuScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_LastNonSettingsMenuScreen_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_LastNonSettingsMenuScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MenuWidgetCache_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MenuWidgetCache_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MenuWidgetCache_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MenuWidgetCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PinnedMenuWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_ActiveLoadingScreenWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_ActiveStartupShaderWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_ActiveStartupIntroWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bStartupShaderPhaseActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bStartupShaderPhaseCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bApplyGameFocusOnNextMapLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PendingLevelNameToLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bPendingLevelAbsolute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_LastFoundSessions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_LastFoundSessions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_LastOnlineDiagnostic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bPendingFindOnlineSessions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PendingFindMaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bPendingFindLAN,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PendingHostMaxPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bPendingHostAfterDestroy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bPendingQuickJoin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PendingJoinSessionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PendingJoinConnectSearchIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_JoinConnectRetryAttempts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_HostedSessionPublishAttempts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bLastOnlineQueryWasLAN,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_UnlockedAchievementIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_UnlockedAchievementIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bOnlineTravelInProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bOnlineJoinReachedGameMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bOnlineLoadingOverlayActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnlineTravelStartSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnlineJoinTimeoutSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnlineAbortGraceSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::PropPointers) < 2048);
// ********** End Class UUIWorldMenuGameInstance Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::ClassParams = {
	&UUIWorldMenuGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::Class_MetaDataParams)
};
void UUIWorldMenuGameInstance::StaticRegisterNativesUUIWorldMenuGameInstance()
{
	UClass* Class = UUIWorldMenuGameInstance::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::Funcs));
}
UClass* Z_Construct_UClass_UUIWorldMenuGameInstance()
{
	if (!Z_Registration_Info_UClass_UUIWorldMenuGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIWorldMenuGameInstance.OuterSingleton, Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIWorldMenuGameInstance.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUIWorldMenuGameInstance);
UUIWorldMenuGameInstance::~UUIWorldMenuGameInstance() {}
// ********** End Class UUIWorldMenuGameInstance ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h__Script_UIWorld_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUIWorldMenuScreen_StaticEnum, TEXT("EUIWorldMenuScreen"), &Z_Registration_Info_UEnum_EUIWorldMenuScreen, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 48686507U) },
		{ EZonefallOnlineTravelPhase_StaticEnum, TEXT("EZonefallOnlineTravelPhase"), &Z_Registration_Info_UEnum_EZonefallOnlineTravelPhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2265657550U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUIWorldOnlineSessionResult::StaticStruct, Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewStructOps, TEXT("UIWorldOnlineSessionResult"),&Z_Registration_Info_UScriptStruct_FUIWorldOnlineSessionResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIWorldOnlineSessionResult), 11846451U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUIWorldMenuGameInstance, UUIWorldMenuGameInstance::StaticClass, TEXT("UUIWorldMenuGameInstance"), &Z_Registration_Info_UClass_UUIWorldMenuGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIWorldMenuGameInstance), 2155168636U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h__Script_UIWorld_4182607815{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h__Script_UIWorld_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h__Script_UIWorld_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h__Script_UIWorld_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h__Script_UIWorld_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h__Script_UIWorld_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
