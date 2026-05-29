// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ZonefallOnlineLobbyWidget.h"

#ifdef UIWORLD_ZonefallOnlineLobbyWidget_generated_h
#error "ZonefallOnlineLobbyWidget.generated.h already included, missing '#pragma once' in ZonefallOnlineLobbyWidget.h"
#endif
#define UIWORLD_ZonefallOnlineLobbyWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
struct FUIWorldOnlineSessionResult;

// ********** Begin Delegate FOnZonefallSessionCardClicked *****************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallOnlineLobbyWidget_h_24_DELEGATE \
UIWORLD_API void FOnZonefallSessionCardClicked_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallSessionCardClicked, int32 CardIndex);


// ********** End Delegate FOnZonefallSessionCardClicked *******************************************

// ********** Begin Class UZonefallSessionCardButton ***********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallOnlineLobbyWidget_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleInternalClicked);


struct Z_Construct_UClass_UZonefallSessionCardButton_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallSessionCardButton_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallOnlineLobbyWidget_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallSessionCardButton(); \
	friend struct ::Z_Construct_UClass_UZonefallSessionCardButton_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallSessionCardButton_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallSessionCardButton, UButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallSessionCardButton_NoRegister) \
	DECLARE_SERIALIZER(UZonefallSessionCardButton)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallOnlineLobbyWidget_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallSessionCardButton(UZonefallSessionCardButton&&) = delete; \
	UZonefallSessionCardButton(const UZonefallSessionCardButton&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallSessionCardButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallSessionCardButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UZonefallSessionCardButton) \
	NO_API virtual ~UZonefallSessionCardButton();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallOnlineLobbyWidget_h_31_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallOnlineLobbyWidget_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallOnlineLobbyWidget_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallOnlineLobbyWidget_h_34_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallOnlineLobbyWidget_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallSessionCardButton;

// ********** End Class UZonefallSessionCardButton *************************************************

// ********** Begin Class UZonefallOnlineLobbyWidget ***********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallOnlineLobbyWidget_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleLanCheckChanged); \
	DECLARE_FUNCTION(execHandleServerNameChanged); \
	DECLARE_FUNCTION(execHandleOnlineMatchReady); \
	DECLARE_FUNCTION(execHandleLeaveCompleted); \
	DECLARE_FUNCTION(execHandleJoinCompleted); \
	DECLARE_FUNCTION(execHandleHostCompleted); \
	DECLARE_FUNCTION(execHandleSessionsFound); \
	DECLARE_FUNCTION(execHandleAutoRefreshTick); \
	DECLARE_FUNCTION(execHandleJoinByIdClicked); \
	DECLARE_FUNCTION(execHandleOpenLevelClicked); \
	DECLARE_FUNCTION(execHandleBackClicked); \
	DECLARE_FUNCTION(execHandleLeaveClicked); \
	DECLARE_FUNCTION(execHandleJoinClicked); \
	DECLARE_FUNCTION(execHandleHostClicked); \
	DECLARE_FUNCTION(execHandleQuickJoinClicked); \
	DECLARE_FUNCTION(execHandleRefreshClicked); \
	DECLARE_FUNCTION(execHandleCardClicked); \
	DECLARE_FUNCTION(execLeaveCurrentSession); \
	DECLARE_FUNCTION(execJoinSelectedSession); \
	DECLARE_FUNCTION(execHostFromUI); \
	DECLARE_FUNCTION(execQuickJoinFromUI); \
	DECLARE_FUNCTION(execRefreshSessionList);


struct Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallOnlineLobbyWidget_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallOnlineLobbyWidget_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallOnlineLobbyWidget(); \
	friend struct ::Z_Construct_UClass_UZonefallOnlineLobbyWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallOnlineLobbyWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallOnlineLobbyWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallOnlineLobbyWidget_NoRegister) \
	DECLARE_SERIALIZER(UZonefallOnlineLobbyWidget)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallOnlineLobbyWidget_h_67_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallOnlineLobbyWidget(UZonefallOnlineLobbyWidget&&) = delete; \
	UZonefallOnlineLobbyWidget(const UZonefallOnlineLobbyWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallOnlineLobbyWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallOnlineLobbyWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZonefallOnlineLobbyWidget) \
	NO_API virtual ~UZonefallOnlineLobbyWidget();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallOnlineLobbyWidget_h_64_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallOnlineLobbyWidget_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallOnlineLobbyWidget_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallOnlineLobbyWidget_h_67_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallOnlineLobbyWidget_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallOnlineLobbyWidget;

// ********** End Class UZonefallOnlineLobbyWidget *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallOnlineLobbyWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
