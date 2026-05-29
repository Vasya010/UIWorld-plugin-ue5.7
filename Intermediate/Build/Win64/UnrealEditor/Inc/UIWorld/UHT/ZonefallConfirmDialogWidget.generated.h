// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ZonefallConfirmDialogWidget.h"

#ifdef UIWORLD_ZonefallConfirmDialogWidget_generated_h
#error "ZonefallConfirmDialogWidget.generated.h already included, missing '#pragma once' in ZonefallConfirmDialogWidget.h"
#endif
#define UIWORLD_ZonefallConfirmDialogWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnZonefallDialogConfirmed ********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallConfirmDialogWidget_h_11_DELEGATE \
UIWORLD_API void FOnZonefallDialogConfirmed_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallDialogConfirmed);


// ********** End Delegate FOnZonefallDialogConfirmed **********************************************

// ********** Begin Delegate FOnZonefallDialogCancelled ********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallConfirmDialogWidget_h_12_DELEGATE \
UIWORLD_API void FOnZonefallDialogCancelled_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallDialogCancelled);


// ********** End Delegate FOnZonefallDialogCancelled **********************************************

// ********** Begin Class UZonefallConfirmDialogWidget *********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallConfirmDialogWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCancel); \
	DECLARE_FUNCTION(execHandleConfirm); \
	DECLARE_FUNCTION(execSetup);


struct Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallConfirmDialogWidget_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallConfirmDialogWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallConfirmDialogWidget(); \
	friend struct ::Z_Construct_UClass_UZonefallConfirmDialogWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallConfirmDialogWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallConfirmDialogWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallConfirmDialogWidget_NoRegister) \
	DECLARE_SERIALIZER(UZonefallConfirmDialogWidget)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallConfirmDialogWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallConfirmDialogWidget(UZonefallConfirmDialogWidget&&) = delete; \
	UZonefallConfirmDialogWidget(const UZonefallConfirmDialogWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallConfirmDialogWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallConfirmDialogWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZonefallConfirmDialogWidget) \
	NO_API virtual ~UZonefallConfirmDialogWidget();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallConfirmDialogWidget_h_15_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallConfirmDialogWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallConfirmDialogWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallConfirmDialogWidget_h_18_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallConfirmDialogWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallConfirmDialogWidget;

// ********** End Class UZonefallConfirmDialogWidget ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallConfirmDialogWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
