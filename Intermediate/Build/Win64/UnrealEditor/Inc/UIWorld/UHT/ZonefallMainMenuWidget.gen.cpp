// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZonefallMainMenuWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallMainMenuWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallMainMenuWidget();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallMainMenuWidget_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallMenuItemButton();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallMenuItemButton_NoRegister();
UIWORLD_API UEnum* Z_Construct_UEnum_UIWorld_EZonefallMenuAction();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallMenuItemClicked__DelegateSignature();
UIWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FZonefallDLCEntry();
UIWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FZonefallPatchEntry();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton();
UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EZonefallMenuAction *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EZonefallMenuAction;
static UEnum* EZonefallMenuAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EZonefallMenuAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EZonefallMenuAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UIWorld_EZonefallMenuAction, (UObject*)Z_Construct_UPackage__Script_UIWorld(), TEXT("EZonefallMenuAction"));
	}
	return Z_Registration_Info_UEnum_EZonefallMenuAction.OuterSingleton;
}
template<> UIWORLD_NON_ATTRIBUTED_API UEnum* StaticEnum<EZonefallMenuAction>()
{
	return EZonefallMenuAction_StaticEnum();
}
struct Z_Construct_UEnum_UIWorld_EZonefallMenuAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "GoDLC.Name", "EZonefallMenuAction::GoDLC" },
		{ "GoHome.Name", "EZonefallMenuAction::GoHome" },
		{ "GoOnline.Name", "EZonefallMenuAction::GoOnline" },
		{ "GoSettingsTab.Name", "EZonefallMenuAction::GoSettingsTab" },
		{ "GoStory.Name", "EZonefallMenuAction::GoStory" },
		{ "GoWhatsNew.Name", "EZonefallMenuAction::GoWhatsNew" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
		{ "None.Name", "EZonefallMenuAction::None" },
		{ "OpenOnlineLobby.Name", "EZonefallMenuAction::OpenOnlineLobby" },
		{ "OpenSettings.Name", "EZonefallMenuAction::OpenSettings" },
		{ "PlayStory.Name", "EZonefallMenuAction::PlayStory" },
		{ "QuitGame.Name", "EZonefallMenuAction::QuitGame" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EZonefallMenuAction::GoHome", (int64)EZonefallMenuAction::GoHome },
		{ "EZonefallMenuAction::GoStory", (int64)EZonefallMenuAction::GoStory },
		{ "EZonefallMenuAction::GoOnline", (int64)EZonefallMenuAction::GoOnline },
		{ "EZonefallMenuAction::GoWhatsNew", (int64)EZonefallMenuAction::GoWhatsNew },
		{ "EZonefallMenuAction::GoDLC", (int64)EZonefallMenuAction::GoDLC },
		{ "EZonefallMenuAction::GoSettingsTab", (int64)EZonefallMenuAction::GoSettingsTab },
		{ "EZonefallMenuAction::PlayStory", (int64)EZonefallMenuAction::PlayStory },
		{ "EZonefallMenuAction::OpenOnlineLobby", (int64)EZonefallMenuAction::OpenOnlineLobby },
		{ "EZonefallMenuAction::OpenSettings", (int64)EZonefallMenuAction::OpenSettings },
		{ "EZonefallMenuAction::QuitGame", (int64)EZonefallMenuAction::QuitGame },
		{ "EZonefallMenuAction::None", (int64)EZonefallMenuAction::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_UIWorld_EZonefallMenuAction_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UIWorld_EZonefallMenuAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UIWorld,
	nullptr,
	"EZonefallMenuAction",
	"EZonefallMenuAction",
	Z_Construct_UEnum_UIWorld_EZonefallMenuAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UIWorld_EZonefallMenuAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UIWorld_EZonefallMenuAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UIWorld_EZonefallMenuAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UIWorld_EZonefallMenuAction()
{
	if (!Z_Registration_Info_UEnum_EZonefallMenuAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EZonefallMenuAction.InnerSingleton, Z_Construct_UEnum_UIWorld_EZonefallMenuAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EZonefallMenuAction.InnerSingleton;
}
// ********** End Enum EZonefallMenuAction *********************************************************

// ********** Begin ScriptStruct FZonefallPatchEntry ***********************************************
struct Z_Construct_UScriptStruct_FZonefallPatchEntry_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FZonefallPatchEntry); }
	static inline consteval int16 GetStructAlignment() { return alignof(FZonefallPatchEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A single patch-notes entry shown on the WHAT'S NEW tab. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A single patch-notes entry shown on the WHAT'S NEW tab." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "Zonefall|Menu" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Date_MetaData[] = {
		{ "Category", "Zonefall|Menu" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Changes_MetaData[] = {
		{ "Category", "Zonefall|Menu" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FZonefallPatchEntry constinit property declarations ***************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Version;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Date;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Changes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Changes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FZonefallPatchEntry constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZonefallPatchEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FZonefallPatchEntry_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FZonefallPatchEntry;
class UScriptStruct* FZonefallPatchEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FZonefallPatchEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FZonefallPatchEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZonefallPatchEntry, (UObject*)Z_Construct_UPackage__Script_UIWorld(), TEXT("ZonefallPatchEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FZonefallPatchEntry.OuterSingleton;
	}

// ********** Begin ScriptStruct FZonefallPatchEntry Property Definitions **************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FZonefallPatchEntry_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallPatchEntry, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FZonefallPatchEntry_Statics::NewProp_Date = { "Date", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallPatchEntry, Date), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Date_MetaData), NewProp_Date_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FZonefallPatchEntry_Statics::NewProp_Changes_Inner = { "Changes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FZonefallPatchEntry_Statics::NewProp_Changes = { "Changes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallPatchEntry, Changes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Changes_MetaData), NewProp_Changes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZonefallPatchEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallPatchEntry_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallPatchEntry_Statics::NewProp_Date,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallPatchEntry_Statics::NewProp_Changes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallPatchEntry_Statics::NewProp_Changes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZonefallPatchEntry_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FZonefallPatchEntry Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZonefallPatchEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
	nullptr,
	&NewStructOps,
	"ZonefallPatchEntry",
	Z_Construct_UScriptStruct_FZonefallPatchEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZonefallPatchEntry_Statics::PropPointers),
	sizeof(FZonefallPatchEntry),
	alignof(FZonefallPatchEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZonefallPatchEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FZonefallPatchEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FZonefallPatchEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FZonefallPatchEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FZonefallPatchEntry.InnerSingleton, Z_Construct_UScriptStruct_FZonefallPatchEntry_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FZonefallPatchEntry.InnerSingleton);
}
// ********** End ScriptStruct FZonefallPatchEntry *************************************************

// ********** Begin ScriptStruct FZonefallDLCEntry *************************************************
struct Z_Construct_UScriptStruct_FZonefallDLCEntry_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FZonefallDLCEntry); }
	static inline consteval int16 GetStructAlignment() { return alignof(FZonefallDLCEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A future / DLC entry shown on the DLC tab. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A future / DLC entry shown on the DLC tab." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "Category", "Zonefall|Menu" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Zonefall|Menu" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "Category", "Zonefall|Menu" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FZonefallDLCEntry constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Status;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FZonefallDLCEntry constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZonefallDLCEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FZonefallDLCEntry_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FZonefallDLCEntry;
class UScriptStruct* FZonefallDLCEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FZonefallDLCEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FZonefallDLCEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZonefallDLCEntry, (UObject*)Z_Construct_UPackage__Script_UIWorld(), TEXT("ZonefallDLCEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FZonefallDLCEntry.OuterSingleton;
	}

// ********** Begin ScriptStruct FZonefallDLCEntry Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FZonefallDLCEntry_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallDLCEntry, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FZonefallDLCEntry_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallDLCEntry, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FZonefallDLCEntry_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZonefallDLCEntry, Status), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZonefallDLCEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallDLCEntry_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallDLCEntry_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZonefallDLCEntry_Statics::NewProp_Status,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZonefallDLCEntry_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FZonefallDLCEntry Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZonefallDLCEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
	nullptr,
	&NewStructOps,
	"ZonefallDLCEntry",
	Z_Construct_UScriptStruct_FZonefallDLCEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZonefallDLCEntry_Statics::PropPointers),
	sizeof(FZonefallDLCEntry),
	alignof(FZonefallDLCEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZonefallDLCEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FZonefallDLCEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FZonefallDLCEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FZonefallDLCEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FZonefallDLCEntry.InnerSingleton, Z_Construct_UScriptStruct_FZonefallDLCEntry_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FZonefallDLCEntry.InnerSingleton);
}
// ********** End ScriptStruct FZonefallDLCEntry ***************************************************

// ********** Begin Delegate FOnZonefallMenuItemClicked ********************************************
struct Z_Construct_UDelegateFunction_UIWorld_OnZonefallMenuItemClicked__DelegateSignature_Statics
{
	struct _Script_UIWorld_eventOnZonefallMenuItemClicked_Parms
	{
		int32 ItemId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnZonefallMenuItemClicked constinit property declarations ************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnZonefallMenuItemClicked constinit property declarations **************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnZonefallMenuItemClicked Property Definitions ***********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UIWorld_OnZonefallMenuItemClicked__DelegateSignature_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UIWorld_eventOnZonefallMenuItemClicked_Parms, ItemId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UIWorld_OnZonefallMenuItemClicked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIWorld_OnZonefallMenuItemClicked__DelegateSignature_Statics::NewProp_ItemId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallMenuItemClicked__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnZonefallMenuItemClicked Property Definitions *************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_OnZonefallMenuItemClicked__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "OnZonefallMenuItemClicked__DelegateSignature", 	Z_Construct_UDelegateFunction_UIWorld_OnZonefallMenuItemClicked__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallMenuItemClicked__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_UIWorld_OnZonefallMenuItemClicked__DelegateSignature_Statics::_Script_UIWorld_eventOnZonefallMenuItemClicked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_OnZonefallMenuItemClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_OnZonefallMenuItemClicked__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UIWorld_OnZonefallMenuItemClicked__DelegateSignature_Statics::_Script_UIWorld_eventOnZonefallMenuItemClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UIWorld_OnZonefallMenuItemClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_OnZonefallMenuItemClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnZonefallMenuItemClicked_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallMenuItemClicked, int32 ItemId)
{
	struct _Script_UIWorld_eventOnZonefallMenuItemClicked_Parms
	{
		int32 ItemId;
	};
	_Script_UIWorld_eventOnZonefallMenuItemClicked_Parms Parms;
	Parms.ItemId=ItemId;
	OnZonefallMenuItemClicked.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnZonefallMenuItemClicked **********************************************

// ********** Begin Class UZonefallMenuItemButton Function HandleInternalClicked *******************
struct Z_Construct_UFunction_UZonefallMenuItemButton_HandleInternalClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleInternalClicked constinit property declarations *****************
// ********** End Function HandleInternalClicked constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallMenuItemButton_HandleInternalClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallMenuItemButton, nullptr, "HandleInternalClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMenuItemButton_HandleInternalClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallMenuItemButton_HandleInternalClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UZonefallMenuItemButton_HandleInternalClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallMenuItemButton_HandleInternalClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallMenuItemButton::execHandleInternalClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleInternalClicked();
	P_NATIVE_END;
}
// ********** End Class UZonefallMenuItemButton Function HandleInternalClicked *********************

// ********** Begin Class UZonefallMenuItemButton **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallMenuItemButton;
UClass* UZonefallMenuItemButton::GetPrivateStaticClass()
{
	using TClass = UZonefallMenuItemButton;
	if (!Z_Registration_Info_UClass_UZonefallMenuItemButton.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallMenuItemButton"),
			Z_Registration_Info_UClass_UZonefallMenuItemButton.InnerSingleton,
			StaticRegisterNativesUZonefallMenuItemButton,
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
	return Z_Registration_Info_UClass_UZonefallMenuItemButton.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallMenuItemButton_NoRegister()
{
	return UZonefallMenuItemButton::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallMenuItemButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A clickable tile/tab that remembers its id and re-broadcasts the click. */" },
#endif
		{ "IncludePath", "UI/ZonefallMainMenuWidget.h" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A clickable tile/tab that remembers its id and re-broadcasts the click." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemClicked_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallMenuItemButton constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemClicked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallMenuItemButton constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleInternalClicked"), .Pointer = &UZonefallMenuItemButton::execHandleInternalClicked },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallMenuItemButton_HandleInternalClicked, "HandleInternalClicked" }, // 1482995386
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallMenuItemButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallMenuItemButton_Statics

// ********** Begin Class UZonefallMenuItemButton Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallMenuItemButton_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMenuItemButton, ItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZonefallMenuItemButton_Statics::NewProp_OnItemClicked = { "OnItemClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMenuItemButton, OnItemClicked), Z_Construct_UDelegateFunction_UIWorld_OnZonefallMenuItemClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemClicked_MetaData), NewProp_OnItemClicked_MetaData) }; // 3400707129
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallMenuItemButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMenuItemButton_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMenuItemButton_Statics::NewProp_OnItemClicked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallMenuItemButton_Statics::PropPointers) < 2048);
// ********** End Class UZonefallMenuItemButton Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UZonefallMenuItemButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UButton,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallMenuItemButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallMenuItemButton_Statics::ClassParams = {
	&UZonefallMenuItemButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallMenuItemButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallMenuItemButton_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallMenuItemButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallMenuItemButton_Statics::Class_MetaDataParams)
};
void UZonefallMenuItemButton::StaticRegisterNativesUZonefallMenuItemButton()
{
	UClass* Class = UZonefallMenuItemButton::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallMenuItemButton_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallMenuItemButton()
{
	if (!Z_Registration_Info_UClass_UZonefallMenuItemButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallMenuItemButton.OuterSingleton, Z_Construct_UClass_UZonefallMenuItemButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallMenuItemButton.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallMenuItemButton);
UZonefallMenuItemButton::~UZonefallMenuItemButton() {}
// ********** End Class UZonefallMenuItemButton ****************************************************

// ********** Begin Class UZonefallMainMenuWidget Function HandleCardClicked ***********************
struct Z_Construct_UFunction_UZonefallMainMenuWidget_HandleCardClicked_Statics
{
	struct ZonefallMainMenuWidget_eventHandleCardClicked_Parms
	{
		int32 CardId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCardClicked constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_CardId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCardClicked constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCardClicked Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZonefallMainMenuWidget_HandleCardClicked_Statics::NewProp_CardId = { "CardId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallMainMenuWidget_eventHandleCardClicked_Parms, CardId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallMainMenuWidget_HandleCardClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallMainMenuWidget_HandleCardClicked_Statics::NewProp_CardId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMainMenuWidget_HandleCardClicked_Statics::PropPointers) < 2048);
// ********** End Function HandleCardClicked Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallMainMenuWidget_HandleCardClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallMainMenuWidget, nullptr, "HandleCardClicked", 	Z_Construct_UFunction_UZonefallMainMenuWidget_HandleCardClicked_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMainMenuWidget_HandleCardClicked_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallMainMenuWidget_HandleCardClicked_Statics::ZonefallMainMenuWidget_eventHandleCardClicked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMainMenuWidget_HandleCardClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallMainMenuWidget_HandleCardClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallMainMenuWidget_HandleCardClicked_Statics::ZonefallMainMenuWidget_eventHandleCardClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallMainMenuWidget_HandleCardClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallMainMenuWidget_HandleCardClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallMainMenuWidget::execHandleCardClicked)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CardId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCardClicked(Z_Param_CardId);
	P_NATIVE_END;
}
// ********** End Class UZonefallMainMenuWidget Function HandleCardClicked *************************

// ********** Begin Class UZonefallMainMenuWidget Function HandleTabClicked ************************
struct Z_Construct_UFunction_UZonefallMainMenuWidget_HandleTabClicked_Statics
{
	struct ZonefallMainMenuWidget_eventHandleTabClicked_Parms
	{
		int32 TabId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleTabClicked constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_TabId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleTabClicked constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleTabClicked Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZonefallMainMenuWidget_HandleTabClicked_Statics::NewProp_TabId = { "TabId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallMainMenuWidget_eventHandleTabClicked_Parms, TabId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZonefallMainMenuWidget_HandleTabClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZonefallMainMenuWidget_HandleTabClicked_Statics::NewProp_TabId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMainMenuWidget_HandleTabClicked_Statics::PropPointers) < 2048);
// ********** End Function HandleTabClicked Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZonefallMainMenuWidget_HandleTabClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZonefallMainMenuWidget, nullptr, "HandleTabClicked", 	Z_Construct_UFunction_UZonefallMainMenuWidget_HandleTabClicked_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMainMenuWidget_HandleTabClicked_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UZonefallMainMenuWidget_HandleTabClicked_Statics::ZonefallMainMenuWidget_eventHandleTabClicked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZonefallMainMenuWidget_HandleTabClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZonefallMainMenuWidget_HandleTabClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UZonefallMainMenuWidget_HandleTabClicked_Statics::ZonefallMainMenuWidget_eventHandleTabClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZonefallMainMenuWidget_HandleTabClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZonefallMainMenuWidget_HandleTabClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZonefallMainMenuWidget::execHandleTabClicked)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TabId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTabClicked(Z_Param_TabId);
	P_NATIVE_END;
}
// ********** End Class UZonefallMainMenuWidget Function HandleTabClicked **************************

// ********** Begin Class UZonefallMainMenuWidget **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UZonefallMainMenuWidget;
UClass* UZonefallMainMenuWidget::GetPrivateStaticClass()
{
	using TClass = UZonefallMainMenuWidget;
	if (!Z_Registration_Info_UClass_UZonefallMainMenuWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallMainMenuWidget"),
			Z_Registration_Info_UClass_UZonefallMainMenuWidget.InnerSingleton,
			StaticRegisterNativesUZonefallMainMenuWidget,
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
	return Z_Registration_Info_UClass_UZonefallMainMenuWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UZonefallMainMenuWidget_NoRegister()
{
	return UZonefallMainMenuWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZonefallMainMenuWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Self-assembling AAA-style main menu (GTA-like): top category tabs, a hero banner with\n * title + description, a bottom row of large action cards, and on-screen control hints.\n * Assign as UUIWorldMenuGameInstance::MainMenuWidgetClass.\n */" },
#endif
		{ "IncludePath", "UI/ZonefallMainMenuWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Self-assembling AAA-style main menu (GTA-like): top category tabs, a hero banner with\ntitle + description, a bottom row of large action cards, and on-screen control hints.\nAssign as UUIWorldMenuGameInstance::MainMenuWidgetClass." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameTitle_MetaData[] = {
		{ "Category", "Zonefall|Menu" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Content configuration ---\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Content configuration ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameVersionText_MetaData[] = {
		{ "Category", "Zonefall|Menu" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Shown bottom-left next to the engine version. Edit freely.\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shown bottom-left next to the engine version. Edit freely." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCyberEffects_MetaData[] = {
		{ "Category", "Zonefall|Menu|Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Animated cyberpunk-style background effects (scan sweep + pulsing accent lines).\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animated cyberpunk-style background effects (scan sweep + pulsing accent lines)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatchNotes_MetaData[] = {
		{ "Category", "Zonefall|Menu|Content" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Patch notes shown on the WHAT'S NEW tab (newest first). Edit freely.\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Patch notes shown on the WHAT'S NEW tab (newest first). Edit freely." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpcomingDLC_MetaData[] = {
		{ "Category", "Zonefall|Menu|Content" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Future content / DLC shown on the DLC tab.\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Future content / DLC shown on the DLC tab." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoryLevelName_MetaData[] = {
		{ "Category", "Zonefall|Menu" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Level opened by the STORY \"PLAY\" card.\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Level opened by the STORY \"PLAY\" card." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[] = {
		{ "Category", "Zonefall|Menu|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundTint_MetaData[] = {
		{ "Category", "Zonefall|Menu|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccentColor_MetaData[] = {
		{ "Category", "Zonefall|Menu|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleFontSize_MetaData[] = {
		{ "Category", "Zonefall|Menu|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyFontSize_MetaData[] = {
		{ "Category", "Zonefall|Menu|Style" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScanBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccentLineTop_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccentLineBottom_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnlineDot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnlineStatusText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeroTitle_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeroDescription_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeroSizeBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardRow_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfoPanel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfoScroll_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabButtons_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardButtons_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivePage_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ZonefallMainMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UZonefallMainMenuWidget constinit property declarations ******************
	static const UECodeGen_Private::FTextPropertyParams NewProp_GameTitle;
	static const UECodeGen_Private::FTextPropertyParams NewProp_GameVersionText;
	static void NewProp_bEnableCyberEffects_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCyberEffects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PatchNotes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PatchNotes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpcomingDLC_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UpcomingDLC;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StoryLevelName;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BackgroundImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundTint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccentColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TitleFontSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BodyFontSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootOverlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundImageWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScanBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AccentLineTop;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AccentLineBottom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VersionText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnlineDot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnlineStatusText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TabBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeroTitle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeroDescription;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeroSizeBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CardRow;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InfoPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InfoScroll;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TabButtons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TabButtons;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CardButtons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CardButtons;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActivePage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UZonefallMainMenuWidget constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleCardClicked"), .Pointer = &UZonefallMainMenuWidget::execHandleCardClicked },
		{ .NameUTF8 = UTF8TEXT("HandleTabClicked"), .Pointer = &UZonefallMainMenuWidget::execHandleTabClicked },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZonefallMainMenuWidget_HandleCardClicked, "HandleCardClicked" }, // 2901281219
		{ &Z_Construct_UFunction_UZonefallMainMenuWidget_HandleTabClicked, "HandleTabClicked" }, // 1545094929
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZonefallMainMenuWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UZonefallMainMenuWidget_Statics

// ********** Begin Class UZonefallMainMenuWidget Property Definitions *****************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_GameTitle = { "GameTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, GameTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameTitle_MetaData), NewProp_GameTitle_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_GameVersionText = { "GameVersionText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, GameVersionText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameVersionText_MetaData), NewProp_GameVersionText_MetaData) };
void Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_bEnableCyberEffects_SetBit(void* Obj)
{
	((UZonefallMainMenuWidget*)Obj)->bEnableCyberEffects = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_bEnableCyberEffects = { "bEnableCyberEffects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZonefallMainMenuWidget), &Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_bEnableCyberEffects_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCyberEffects_MetaData), NewProp_bEnableCyberEffects_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_PatchNotes_Inner = { "PatchNotes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FZonefallPatchEntry, METADATA_PARAMS(0, nullptr) }; // 2054412603
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_PatchNotes = { "PatchNotes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, PatchNotes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatchNotes_MetaData), NewProp_PatchNotes_MetaData) }; // 2054412603
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_UpcomingDLC_Inner = { "UpcomingDLC", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FZonefallDLCEntry, METADATA_PARAMS(0, nullptr) }; // 1578386400
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_UpcomingDLC = { "UpcomingDLC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, UpcomingDLC), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpcomingDLC_MetaData), NewProp_UpcomingDLC_MetaData) }; // 1578386400
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_StoryLevelName = { "StoryLevelName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, StoryLevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoryLevelName_MetaData), NewProp_StoryLevelName_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, BackgroundImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImage_MetaData), NewProp_BackgroundImage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_BackgroundTint = { "BackgroundTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, BackgroundTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundTint_MetaData), NewProp_BackgroundTint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_AccentColor = { "AccentColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, AccentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccentColor_MetaData), NewProp_AccentColor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_TitleFontSize = { "TitleFontSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, TitleFontSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleFontSize_MetaData), NewProp_TitleFontSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_BodyFontSize = { "BodyFontSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, BodyFontSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyFontSize_MetaData), NewProp_BodyFontSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_RootOverlay = { "RootOverlay", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, RootOverlay), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootOverlay_MetaData), NewProp_RootOverlay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_BackgroundImageWidget = { "BackgroundImageWidget", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, BackgroundImageWidget), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImageWidget_MetaData), NewProp_BackgroundImageWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_ScanBar = { "ScanBar", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, ScanBar), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScanBar_MetaData), NewProp_ScanBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_AccentLineTop = { "AccentLineTop", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, AccentLineTop), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccentLineTop_MetaData), NewProp_AccentLineTop_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_AccentLineBottom = { "AccentLineBottom", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, AccentLineBottom), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccentLineBottom_MetaData), NewProp_AccentLineBottom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_VersionText = { "VersionText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, VersionText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionText_MetaData), NewProp_VersionText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_OnlineDot = { "OnlineDot", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, OnlineDot), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnlineDot_MetaData), NewProp_OnlineDot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_OnlineStatusText = { "OnlineStatusText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, OnlineStatusText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnlineStatusText_MetaData), NewProp_OnlineStatusText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_TabBar = { "TabBar", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, TabBar), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabBar_MetaData), NewProp_TabBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_HeroTitle = { "HeroTitle", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, HeroTitle), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeroTitle_MetaData), NewProp_HeroTitle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_HeroDescription = { "HeroDescription", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, HeroDescription), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeroDescription_MetaData), NewProp_HeroDescription_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_HeroSizeBox = { "HeroSizeBox", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, HeroSizeBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeroSizeBox_MetaData), NewProp_HeroSizeBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_CardRow = { "CardRow", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, CardRow), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardRow_MetaData), NewProp_CardRow_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_InfoPanel = { "InfoPanel", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, InfoPanel), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfoPanel_MetaData), NewProp_InfoPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_InfoScroll = { "InfoScroll", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, InfoScroll), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfoScroll_MetaData), NewProp_InfoScroll_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_TabButtons_Inner = { "TabButtons", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UZonefallMenuItemButton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_TabButtons = { "TabButtons", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, TabButtons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabButtons_MetaData), NewProp_TabButtons_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_CardButtons_Inner = { "CardButtons", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UZonefallMenuItemButton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_CardButtons = { "CardButtons", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, CardButtons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardButtons_MetaData), NewProp_CardButtons_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_ActivePage = { "ActivePage", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZonefallMainMenuWidget, ActivePage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivePage_MetaData), NewProp_ActivePage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZonefallMainMenuWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_GameTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_GameVersionText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_bEnableCyberEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_PatchNotes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_PatchNotes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_UpcomingDLC_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_UpcomingDLC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_StoryLevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_BackgroundImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_BackgroundTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_AccentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_TitleFontSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_BodyFontSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_RootOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_BackgroundImageWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_ScanBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_AccentLineTop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_AccentLineBottom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_VersionText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_OnlineDot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_OnlineStatusText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_TabBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_HeroTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_HeroDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_HeroSizeBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_CardRow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_InfoPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_InfoScroll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_TabButtons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_TabButtons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_CardButtons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_CardButtons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZonefallMainMenuWidget_Statics::NewProp_ActivePage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallMainMenuWidget_Statics::PropPointers) < 2048);
// ********** End Class UZonefallMainMenuWidget Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UZonefallMainMenuWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallMainMenuWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZonefallMainMenuWidget_Statics::ClassParams = {
	&UZonefallMainMenuWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UZonefallMainMenuWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallMainMenuWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZonefallMainMenuWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UZonefallMainMenuWidget_Statics::Class_MetaDataParams)
};
void UZonefallMainMenuWidget::StaticRegisterNativesUZonefallMainMenuWidget()
{
	UClass* Class = UZonefallMainMenuWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UZonefallMainMenuWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_UZonefallMainMenuWidget()
{
	if (!Z_Registration_Info_UClass_UZonefallMainMenuWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZonefallMainMenuWidget.OuterSingleton, Z_Construct_UClass_UZonefallMainMenuWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZonefallMainMenuWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UZonefallMainMenuWidget);
UZonefallMainMenuWidget::~UZonefallMainMenuWidget() {}
// ********** End Class UZonefallMainMenuWidget ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h__Script_UIWorld_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EZonefallMenuAction_StaticEnum, TEXT("EZonefallMenuAction"), &Z_Registration_Info_UEnum_EZonefallMenuAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4027780721U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FZonefallPatchEntry::StaticStruct, Z_Construct_UScriptStruct_FZonefallPatchEntry_Statics::NewStructOps, TEXT("ZonefallPatchEntry"),&Z_Registration_Info_UScriptStruct_FZonefallPatchEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZonefallPatchEntry), 2054412603U) },
		{ FZonefallDLCEntry::StaticStruct, Z_Construct_UScriptStruct_FZonefallDLCEntry_Statics::NewStructOps, TEXT("ZonefallDLCEntry"),&Z_Registration_Info_UScriptStruct_FZonefallDLCEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZonefallDLCEntry), 1578386400U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZonefallMenuItemButton, UZonefallMenuItemButton::StaticClass, TEXT("UZonefallMenuItemButton"), &Z_Registration_Info_UClass_UZonefallMenuItemButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallMenuItemButton), 197919442U) },
		{ Z_Construct_UClass_UZonefallMainMenuWidget, UZonefallMainMenuWidget::StaticClass, TEXT("UZonefallMainMenuWidget"), &Z_Registration_Info_UClass_UZonefallMainMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZonefallMainMenuWidget), 2802497909U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h__Script_UIWorld_2502487170{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h__Script_UIWorld_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h__Script_UIWorld_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h__Script_UIWorld_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h__Script_UIWorld_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h__Script_UIWorld_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
