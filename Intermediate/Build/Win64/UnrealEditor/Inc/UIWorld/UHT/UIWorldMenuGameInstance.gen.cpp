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
UIWORLD_API UClass* Z_Construct_UClass_UUIWorldMenuGameInstance();
UIWORLD_API UClass* Z_Construct_UClass_UUIWorldMenuGameInstance_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallShaderLoadingWidget_NoRegister();
UIWORLD_API UEnum* Z_Construct_UEnum_UIWorld_EUIWorldMenuScreen();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuScreenChanged__DelegateSignature();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuWidgetChanged__DelegateSignature();
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
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_OwningUserName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_ServerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_PingMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_MaxPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_CurrentPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewProp_bIsLAN,
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UIWorld_OnUIWorldSessionsFound__DelegateSignature_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult, METADATA_PARAMS(0, nullptr) }; // 3771526265
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UIWorld_OnUIWorldSessionsFound__DelegateSignature_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UIWorld_eventOnUIWorldSessionsFound_Parms, Results), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Results_MetaData), NewProp_Results_MetaData) }; // 3771526265
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastFoundSessions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult, METADATA_PARAMS(0, nullptr) }; // 3771526265
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastFoundSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWorldMenuGameInstance_eventGetLastFoundSessions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3771526265
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
		{ "CPP_Default_bLAN", "true" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenWidgetClass_MetaData[] = {
		{ "Category", "UIWorld|Flow" },
		{ "ModuleRelativePath", "Public/UIWorldMenuGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShaderLoadingWidgetClass_MetaData[] = {
		{ "Category", "UIWorld|UI|Startup" },
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
#endif // WITH_METADATA

// ********** Begin Class UUIWorldMenuGameInstance constinit property declarations *****************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHostCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionsFound;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJoinCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeaveCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMenuWidgetChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMenuScreenChanged;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainMenuWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OnlineMenuWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PauseMenuWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SettingsMenuWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LoadingScreenWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ShaderLoadingWidgetClass;
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuWidgetCache_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MenuWidgetCache_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MenuWidgetCache_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MenuWidgetCache;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PinnedMenuWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveLoadingScreenWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveStartupShaderWidget;
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
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UUIWorldMenuGameInstance constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BackMenuPause"), .Pointer = &UUIWorldMenuGameInstance::execBackMenuPause },
		{ .NameUTF8 = UTF8TEXT("CloseMenuUI"), .Pointer = &UUIWorldMenuGameInstance::execCloseMenuUI },
		{ .NameUTF8 = UTF8TEXT("ContinueGame"), .Pointer = &UUIWorldMenuGameInstance::execContinueGame },
		{ .NameUTF8 = UTF8TEXT("FindOnlineSessions"), .Pointer = &UUIWorldMenuGameInstance::execFindOnlineSessions },
		{ .NameUTF8 = UTF8TEXT("GetLastFoundSessions"), .Pointer = &UUIWorldMenuGameInstance::execGetLastFoundSessions },
		{ .NameUTF8 = UTF8TEXT("HostOnlineSession"), .Pointer = &UUIWorldMenuGameInstance::execHostOnlineSession },
		{ .NameUTF8 = UTF8TEXT("JoinOnlineSessionByIndex"), .Pointer = &UUIWorldMenuGameInstance::execJoinOnlineSessionByIndex },
		{ .NameUTF8 = UTF8TEXT("LeaveOnlineSessionAndReturnToMenu"), .Pointer = &UUIWorldMenuGameInstance::execLeaveOnlineSessionAndReturnToMenu },
		{ .NameUTF8 = UTF8TEXT("LoadLevelAndFocusGame"), .Pointer = &UUIWorldMenuGameInstance::execLoadLevelAndFocusGame },
		{ .NameUTF8 = UTF8TEXT("LoadLevelWithLoadingScreen"), .Pointer = &UUIWorldMenuGameInstance::execLoadLevelWithLoadingScreen },
		{ .NameUTF8 = UTF8TEXT("LoadMainMenuLevel"), .Pointer = &UUIWorldMenuGameInstance::execLoadMainMenuLevel },
		{ .NameUTF8 = UTF8TEXT("OpenPauseSettingsMenu"), .Pointer = &UUIWorldMenuGameInstance::execOpenPauseSettingsMenu },
		{ .NameUTF8 = UTF8TEXT("QuitGameNow"), .Pointer = &UUIWorldMenuGameInstance::execQuitGameNow },
		{ .NameUTF8 = UTF8TEXT("ShowMenuFromList"), .Pointer = &UUIWorldMenuGameInstance::execShowMenuFromList },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_BackMenuPause, "BackMenuPause" }, // 496697375
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_CloseMenuUI, "CloseMenuUI" }, // 4140361374
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_ContinueGame, "ContinueGame" }, // 2986398575
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_FindOnlineSessions, "FindOnlineSessions" }, // 237892866
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_GetLastFoundSessions, "GetLastFoundSessions" }, // 274377649
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_HostOnlineSession, "HostOnlineSession" }, // 4069583228
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_JoinOnlineSessionByIndex, "JoinOnlineSessionByIndex" }, // 1398159433
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_LeaveOnlineSessionAndReturnToMenu, "LeaveOnlineSessionAndReturnToMenu" }, // 3209783200
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelAndFocusGame, "LoadLevelAndFocusGame" }, // 2825949702
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadLevelWithLoadingScreen, "LoadLevelWithLoadingScreen" }, // 177349268
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_LoadMainMenuLevel, "LoadMainMenuLevel" }, // 1691813011
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_OpenPauseSettingsMenu, "OpenPauseSettingsMenu" }, // 3066366101
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_QuitGameNow, "QuitGameNow" }, // 1203969031
		{ &Z_Construct_UFunction_UUIWorldMenuGameInstance_ShowMenuFromList, "ShowMenuFromList" }, // 1796533634
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIWorldMenuGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UUIWorldMenuGameInstance_Statics

// ********** Begin Class UUIWorldMenuGameInstance Property Definitions ****************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnHostCompleted = { "OnHostCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, OnHostCompleted), Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineOpCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHostCompleted_MetaData), NewProp_OnHostCompleted_MetaData) }; // 2291936370
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnSessionsFound = { "OnSessionsFound", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, OnSessionsFound), Z_Construct_UDelegateFunction_UIWorld_OnUIWorldSessionsFound__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSessionsFound_MetaData), NewProp_OnSessionsFound_MetaData) }; // 1354522479
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnJoinCompleted = { "OnJoinCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, OnJoinCompleted), Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineOpCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnJoinCompleted_MetaData), NewProp_OnJoinCompleted_MetaData) }; // 2291936370
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnLeaveCompleted = { "OnLeaveCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, OnLeaveCompleted), Z_Construct_UDelegateFunction_UIWorld_OnUIWorldOnlineOpCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeaveCompleted_MetaData), NewProp_OnLeaveCompleted_MetaData) }; // 2291936370
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnMenuWidgetChanged = { "OnMenuWidgetChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, OnMenuWidgetChanged), Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuWidgetChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMenuWidgetChanged_MetaData), NewProp_OnMenuWidgetChanged_MetaData) }; // 2870904578
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnMenuScreenChanged = { "OnMenuScreenChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, OnMenuScreenChanged), Z_Construct_UDelegateFunction_UIWorld_OnUIWorldMenuScreenChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMenuScreenChanged_MetaData), NewProp_OnMenuScreenChanged_MetaData) }; // 688997098
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MainMenuWidgetClass = { "MainMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, MainMenuWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuWidgetClass_MetaData), NewProp_MainMenuWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnlineMenuWidgetClass = { "OnlineMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, OnlineMenuWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnlineMenuWidgetClass_MetaData), NewProp_OnlineMenuWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PauseMenuWidgetClass = { "PauseMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, PauseMenuWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseMenuWidgetClass_MetaData), NewProp_PauseMenuWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_SettingsMenuWidgetClass = { "SettingsMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, SettingsMenuWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsMenuWidgetClass_MetaData), NewProp_SettingsMenuWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_LoadingScreenWidgetClass = { "LoadingScreenWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, LoadingScreenWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingScreenWidgetClass_MetaData), NewProp_LoadingScreenWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_ShaderLoadingWidgetClass = { "ShaderLoadingWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, ShaderLoadingWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UZonefallShaderLoadingWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShaderLoadingWidgetClass_MetaData), NewProp_ShaderLoadingWidgetClass_MetaData) };
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MenuWidgetCache_ValueProp = { "MenuWidgetCache", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MenuWidgetCache_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MenuWidgetCache_Key_KeyProp = { "MenuWidgetCache_Key", nullptr, (EPropertyFlags)0x0100000000080008, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_UIWorld_EUIWorldMenuScreen, METADATA_PARAMS(0, nullptr) }; // 48686507
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MenuWidgetCache = { "MenuWidgetCache", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, MenuWidgetCache), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuWidgetCache_MetaData), NewProp_MenuWidgetCache_MetaData) }; // 48686507
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PinnedMenuWidget = { "PinnedMenuWidget", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, PinnedMenuWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinnedMenuWidget_MetaData), NewProp_PinnedMenuWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_ActiveLoadingScreenWidget = { "ActiveLoadingScreenWidget", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, ActiveLoadingScreenWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveLoadingScreenWidget_MetaData), NewProp_ActiveLoadingScreenWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_ActiveStartupShaderWidget = { "ActiveStartupShaderWidget", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, ActiveStartupShaderWidget), Z_Construct_UClass_UZonefallShaderLoadingWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveStartupShaderWidget_MetaData), NewProp_ActiveStartupShaderWidget_MetaData) };
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_LastFoundSessions_Inner = { "LastFoundSessions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult, METADATA_PARAMS(0, nullptr) }; // 3771526265
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_LastFoundSessions = { "LastFoundSessions", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIWorldMenuGameInstance, LastFoundSessions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastFoundSessions_MetaData), NewProp_LastFoundSessions_MetaData) }; // 3771526265
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnHostCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnSessionsFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnJoinCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnLeaveCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnMenuWidgetChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnMenuScreenChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MainMenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_OnlineMenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PauseMenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_SettingsMenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_LoadingScreenWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_ShaderLoadingWidgetClass,
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
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MenuWidgetCache_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MenuWidgetCache_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MenuWidgetCache_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_MenuWidgetCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PinnedMenuWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_ActiveLoadingScreenWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_ActiveStartupShaderWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bStartupShaderPhaseActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bStartupShaderPhaseCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bApplyGameFocusOnNextMapLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_PendingLevelNameToLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_bPendingLevelAbsolute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_LastFoundSessions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWorldMenuGameInstance_Statics::NewProp_LastFoundSessions,
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
struct Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h__Script_UIWorld_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUIWorldMenuScreen_StaticEnum, TEXT("EUIWorldMenuScreen"), &Z_Registration_Info_UEnum_EUIWorldMenuScreen, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 48686507U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUIWorldOnlineSessionResult::StaticStruct, Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics::NewStructOps, TEXT("UIWorldOnlineSessionResult"),&Z_Registration_Info_UScriptStruct_FUIWorldOnlineSessionResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIWorldOnlineSessionResult), 3771526265U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUIWorldMenuGameInstance, UUIWorldMenuGameInstance::StaticClass, TEXT("UUIWorldMenuGameInstance"), &Z_Registration_Info_UClass_UUIWorldMenuGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIWorldMenuGameInstance), 1360765755U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h__Script_UIWorld_3723535436{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h__Script_UIWorld_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h__Script_UIWorld_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h__Script_UIWorld_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h__Script_UIWorld_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h__Script_UIWorld_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
