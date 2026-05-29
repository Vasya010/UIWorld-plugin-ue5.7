// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ZonefallMainMenuWidget.h"

#ifdef UIWORLD_ZonefallMainMenuWidget_generated_h
#error "ZonefallMainMenuWidget.generated.h already included, missing '#pragma once' in ZonefallMainMenuWidget.h"
#endif
#define UIWORLD_ZonefallMainMenuWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FZonefallPatchEntry ***********************************************
struct Z_Construct_UScriptStruct_FZonefallPatchEntry_Statics;
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FZonefallPatchEntry_Statics; \
	UIWORLD_API static class UScriptStruct* StaticStruct();


struct FZonefallPatchEntry;
// ********** End ScriptStruct FZonefallPatchEntry *************************************************

// ********** Begin ScriptStruct FZonefallDLCEntry *************************************************
struct Z_Construct_UScriptStruct_FZonefallDLCEntry_Statics;
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FZonefallDLCEntry_Statics; \
	UIWORLD_API static class UScriptStruct* StaticStruct();


struct FZonefallDLCEntry;
// ********** End ScriptStruct FZonefallDLCEntry ***************************************************

// ********** Begin Delegate FOnZonefallMenuItemClicked ********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h_67_DELEGATE \
UIWORLD_API void FOnZonefallMenuItemClicked_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallMenuItemClicked, int32 ItemId);


// ********** End Delegate FOnZonefallMenuItemClicked **********************************************

// ********** Begin Class UZonefallMenuItemButton **************************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleInternalClicked);


struct Z_Construct_UClass_UZonefallMenuItemButton_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallMenuItemButton_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallMenuItemButton(); \
	friend struct ::Z_Construct_UClass_UZonefallMenuItemButton_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallMenuItemButton_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallMenuItemButton, UButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallMenuItemButton_NoRegister) \
	DECLARE_SERIALIZER(UZonefallMenuItemButton)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h_73_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallMenuItemButton(UZonefallMenuItemButton&&) = delete; \
	UZonefallMenuItemButton(const UZonefallMenuItemButton&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallMenuItemButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallMenuItemButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UZonefallMenuItemButton) \
	NO_API virtual ~UZonefallMenuItemButton();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h_70_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h_73_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallMenuItemButton;

// ********** End Class UZonefallMenuItemButton ****************************************************

// ********** Begin Class UZonefallMainMenuWidget **************************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCardClicked); \
	DECLARE_FUNCTION(execHandleTabClicked);


struct Z_Construct_UClass_UZonefallMainMenuWidget_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallMainMenuWidget_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallMainMenuWidget(); \
	friend struct ::Z_Construct_UClass_UZonefallMainMenuWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallMainMenuWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallMainMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallMainMenuWidget_NoRegister) \
	DECLARE_SERIALIZER(UZonefallMainMenuWidget)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h_97_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallMainMenuWidget(UZonefallMainMenuWidget&&) = delete; \
	UZonefallMainMenuWidget(const UZonefallMainMenuWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallMainMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallMainMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZonefallMainMenuWidget) \
	NO_API virtual ~UZonefallMainMenuWidget();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h_94_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h_97_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallMainMenuWidget;

// ********** End Class UZonefallMainMenuWidget ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallMainMenuWidget_h

// ********** Begin Enum EZonefallMenuAction *******************************************************
#define FOREACH_ENUM_EZONEFALLMENUACTION(op) \
	op(EZonefallMenuAction::GoHome) \
	op(EZonefallMenuAction::GoStory) \
	op(EZonefallMenuAction::GoOnline) \
	op(EZonefallMenuAction::GoWhatsNew) \
	op(EZonefallMenuAction::GoDLC) \
	op(EZonefallMenuAction::GoSettingsTab) \
	op(EZonefallMenuAction::PlayStory) \
	op(EZonefallMenuAction::OpenOnlineLobby) \
	op(EZonefallMenuAction::OpenSettings) \
	op(EZonefallMenuAction::QuitGame) \
	op(EZonefallMenuAction::None) 

enum class EZonefallMenuAction : uint8;
template<> struct TIsUEnumClass<EZonefallMenuAction> { enum { Value = true }; };
template<> UIWORLD_NON_ATTRIBUTED_API UEnum* StaticEnum<EZonefallMenuAction>();
// ********** End Enum EZonefallMenuAction *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
