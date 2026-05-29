// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ZonefallFancyMenuWidget.h"

#ifdef UIWORLD_ZonefallFancyMenuWidget_generated_h
#error "ZonefallFancyMenuWidget.generated.h already included, missing '#pragma once' in ZonefallFancyMenuWidget.h"
#endif
#define UIWORLD_ZonefallFancyMenuWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUIWorldOnlineSessionResult;

// ********** Begin Delegate FOnZonefallMainButtonClicked ******************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallFancyMenuWidget_h_18_DELEGATE \
UIWORLD_API void FOnZonefallMainButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallMainButtonClicked);


// ********** End Delegate FOnZonefallMainButtonClicked ********************************************

// ********** Begin Delegate FOnZonefallContinueButtonClicked **************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallFancyMenuWidget_h_19_DELEGATE \
UIWORLD_API void FOnZonefallContinueButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallContinueButtonClicked);


// ********** End Delegate FOnZonefallContinueButtonClicked ****************************************

// ********** Begin Delegate FOnZonefallOnlineHostClicked ******************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallFancyMenuWidget_h_20_DELEGATE \
UIWORLD_API void FOnZonefallOnlineHostClicked_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallOnlineHostClicked);


// ********** End Delegate FOnZonefallOnlineHostClicked ********************************************

// ********** Begin Delegate FOnZonefallOnlineFindClicked ******************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallFancyMenuWidget_h_21_DELEGATE \
UIWORLD_API void FOnZonefallOnlineFindClicked_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallOnlineFindClicked);


// ********** End Delegate FOnZonefallOnlineFindClicked ********************************************

// ********** Begin Delegate FOnZonefallOnlineJoinClicked ******************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallFancyMenuWidget_h_22_DELEGATE \
UIWORLD_API void FOnZonefallOnlineJoinClicked_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallOnlineJoinClicked, int32 SessionIndex);


// ********** End Delegate FOnZonefallOnlineJoinClicked ********************************************

// ********** Begin Delegate FOnZonefallOnlineLeaveClicked *****************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallFancyMenuWidget_h_23_DELEGATE \
UIWORLD_API void FOnZonefallOnlineLeaveClicked_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallOnlineLeaveClicked);


// ********** End Delegate FOnZonefallOnlineLeaveClicked *******************************************

// ********** Begin Class UZonefallFancyMenuWidget *************************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallFancyMenuWidget_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleBackToMainMenuClicked); \
	DECLARE_FUNCTION(execHandleOpenOnlineClicked); \
	DECLARE_FUNCTION(execHandleSessionSelectionChanged); \
	DECLARE_FUNCTION(execHandleSessionsFound); \
	DECLARE_FUNCTION(execHandleLeaveCompleted); \
	DECLARE_FUNCTION(execHandleJoinCompleted); \
	DECLARE_FUNCTION(execHandleHostCompleted); \
	DECLARE_FUNCTION(execHandleLeaveButtonClicked); \
	DECLARE_FUNCTION(execHandleJoinButtonClicked); \
	DECLARE_FUNCTION(execHandleFindButtonClicked); \
	DECLARE_FUNCTION(execHandleHostButtonClicked); \
	DECLARE_FUNCTION(execHandleContinueButtonUnhovered); \
	DECLARE_FUNCTION(execHandleContinueButtonHovered); \
	DECLARE_FUNCTION(execHandleContinueButtonClicked); \
	DECLARE_FUNCTION(execHandleMainButtonReleased); \
	DECLARE_FUNCTION(execHandleMainButtonPressed); \
	DECLARE_FUNCTION(execHandleMainButtonUnhovered); \
	DECLARE_FUNCTION(execHandleMainButtonHovered); \
	DECLARE_FUNCTION(execHandleMainButtonClicked); \
	DECLARE_FUNCTION(execApplyMoodPreset); \
	DECLARE_FUNCTION(execGetOnlineBindingReport); \
	DECLARE_FUNCTION(execBackToMainMenuPanel); \
	DECLARE_FUNCTION(execOpenOnlinePanel); \
	DECLARE_FUNCTION(execUpdateSelectedServerCard); \
	DECLARE_FUNCTION(execSetOnlineStatusText); \
	DECLARE_FUNCTION(execRefreshOnlineSessionsUI); \
	DECLARE_FUNCTION(execSetContinueButtonVisible); \
	DECLARE_FUNCTION(execApplyStyleNow); \
	DECLARE_FUNCTION(execSetButtonLabel);


struct Z_Construct_UClass_UZonefallFancyMenuWidget_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallFancyMenuWidget_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallFancyMenuWidget_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallFancyMenuWidget(); \
	friend struct ::Z_Construct_UClass_UZonefallFancyMenuWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallFancyMenuWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallFancyMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallFancyMenuWidget_NoRegister) \
	DECLARE_SERIALIZER(UZonefallFancyMenuWidget)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallFancyMenuWidget_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallFancyMenuWidget(UZonefallFancyMenuWidget&&) = delete; \
	UZonefallFancyMenuWidget(const UZonefallFancyMenuWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallFancyMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallFancyMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZonefallFancyMenuWidget) \
	NO_API virtual ~UZonefallFancyMenuWidget();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallFancyMenuWidget_h_32_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallFancyMenuWidget_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallFancyMenuWidget_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallFancyMenuWidget_h_35_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallFancyMenuWidget_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallFancyMenuWidget;

// ********** End Class UZonefallFancyMenuWidget ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallFancyMenuWidget_h

// ********** Begin Enum EZonefallMenuMoodPreset ***************************************************
#define FOREACH_ENUM_EZONEFALLMENUMOODPRESET(op) \
	op(EZonefallMenuMoodPreset::Custom) \
	op(EZonefallMenuMoodPreset::WastelandHorror) 

enum class EZonefallMenuMoodPreset : uint8;
template<> struct TIsUEnumClass<EZonefallMenuMoodPreset> { enum { Value = true }; };
template<> UIWORLD_NON_ATTRIBUTED_API UEnum* StaticEnum<EZonefallMenuMoodPreset>();
// ********** End Enum EZonefallMenuMoodPreset *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
