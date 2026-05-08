// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UIWorldMenuGameInstance.h"

#ifdef UIWORLD_UIWorldMenuGameInstance_generated_h
#error "UIWorldMenuGameInstance.generated.h already included, missing '#pragma once' in UIWorldMenuGameInstance.h"
#endif
#define UIWORLD_UIWorldMenuGameInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
enum class EUIWorldMenuScreen : uint8;
struct FUIWorldOnlineSessionResult;

// ********** Begin ScriptStruct FUIWorldOnlineSessionResult ***************************************
struct Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics;
#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUIWorldOnlineSessionResult_Statics; \
	UIWORLD_API static class UScriptStruct* StaticStruct();


struct FUIWorldOnlineSessionResult;
// ********** End ScriptStruct FUIWorldOnlineSessionResult *****************************************

// ********** Begin Delegate FOnUIWorldOnlineOpCompleted *******************************************
#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h_49_DELEGATE \
UIWORLD_API void FOnUIWorldOnlineOpCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnUIWorldOnlineOpCompleted, bool bSuccess, const FString& Message);


// ********** End Delegate FOnUIWorldOnlineOpCompleted *********************************************

// ********** Begin Delegate FOnUIWorldSessionsFound ***********************************************
#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h_50_DELEGATE \
UIWORLD_API void FOnUIWorldSessionsFound_DelegateWrapper(const FMulticastScriptDelegate& OnUIWorldSessionsFound, TArray<FUIWorldOnlineSessionResult> const& Results);


// ********** End Delegate FOnUIWorldSessionsFound *************************************************

// ********** Begin Delegate FOnUIWorldMenuWidgetChanged *******************************************
#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h_51_DELEGATE \
UIWORLD_API void FOnUIWorldMenuWidgetChanged_DelegateWrapper(const FMulticastScriptDelegate& OnUIWorldMenuWidgetChanged, UUserWidget* ActiveWidget);


// ********** End Delegate FOnUIWorldMenuWidgetChanged *********************************************

// ********** Begin Delegate FOnUIWorldMenuScreenChanged *******************************************
#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h_52_DELEGATE \
UIWORLD_API void FOnUIWorldMenuScreenChanged_DelegateWrapper(const FMulticastScriptDelegate& OnUIWorldMenuScreenChanged, EUIWorldMenuScreen MenuScreen);


// ********** End Delegate FOnUIWorldMenuScreenChanged *********************************************

// ********** Begin Class UUIWorldMenuGameInstance *************************************************
#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLastFoundSessions); \
	DECLARE_FUNCTION(execLeaveOnlineSessionAndReturnToMenu); \
	DECLARE_FUNCTION(execJoinOnlineSessionByIndex); \
	DECLARE_FUNCTION(execFindOnlineSessions); \
	DECLARE_FUNCTION(execHostOnlineSession); \
	DECLARE_FUNCTION(execQuitGameNow); \
	DECLARE_FUNCTION(execLoadMainMenuLevel); \
	DECLARE_FUNCTION(execBackMenuPause); \
	DECLARE_FUNCTION(execOpenPauseSettingsMenu); \
	DECLARE_FUNCTION(execContinueGame); \
	DECLARE_FUNCTION(execLoadLevelWithLoadingScreen); \
	DECLARE_FUNCTION(execLoadLevelAndFocusGame); \
	DECLARE_FUNCTION(execCloseMenuUI); \
	DECLARE_FUNCTION(execShowMenuFromList);


struct Z_Construct_UClass_UUIWorldMenuGameInstance_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UUIWorldMenuGameInstance_NoRegister();

#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIWorldMenuGameInstance(); \
	friend struct ::Z_Construct_UClass_UUIWorldMenuGameInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UUIWorldMenuGameInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIWorldMenuGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UUIWorldMenuGameInstance_NoRegister) \
	DECLARE_SERIALIZER(UUIWorldMenuGameInstance)


#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h_57_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIWorldMenuGameInstance(UUIWorldMenuGameInstance&&) = delete; \
	UUIWorldMenuGameInstance(const UUIWorldMenuGameInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIWorldMenuGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIWorldMenuGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIWorldMenuGameInstance) \
	NO_API virtual ~UUIWorldMenuGameInstance();


#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h_54_PROLOG
#define FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h_57_INCLASS_NO_PURE_DECLS \
	FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIWorldMenuGameInstance;

// ********** End Class UUIWorldMenuGameInstance ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefall_Plugins_UIWorld_Source_UIWorld_Public_UIWorldMenuGameInstance_h

// ********** Begin Enum EUIWorldMenuScreen ********************************************************
#define FOREACH_ENUM_EUIWORLDMENUSCREEN(op) \
	op(EUIWorldMenuScreen::MainMenu) \
	op(EUIWorldMenuScreen::OnlineMenu) \
	op(EUIWorldMenuScreen::PauseMenu) \
	op(EUIWorldMenuScreen::SettingsMenu) 

enum class EUIWorldMenuScreen : uint8;
template<> struct TIsUEnumClass<EUIWorldMenuScreen> { enum { Value = true }; };
template<> UIWORLD_NON_ATTRIBUTED_API UEnum* StaticEnum<EUIWorldMenuScreen>();
// ********** End Enum EUIWorldMenuScreen **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
