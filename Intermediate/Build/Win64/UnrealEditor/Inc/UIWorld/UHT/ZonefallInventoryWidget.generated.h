// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ZonefallInventoryWidget.h"

#ifdef UIWORLD_ZonefallInventoryWidget_generated_h
#error "ZonefallInventoryWidget.generated.h already included, missing '#pragma once' in ZonefallInventoryWidget.h"
#endif
#define UIWORLD_ZonefallInventoryWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UZonefallInventoryComponent;

// ********** Begin Delegate FOnZonefallInventorySlotClicked ***************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallInventoryWidget_h_17_DELEGATE \
UIWORLD_API void FOnZonefallInventorySlotClicked_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallInventorySlotClicked, int32 SlotIndex);


// ********** End Delegate FOnZonefallInventorySlotClicked *****************************************

// ********** Begin Delegate FOnZonefallInventoryClosed ********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallInventoryWidget_h_18_DELEGATE \
UIWORLD_API void FOnZonefallInventoryClosed_DelegateWrapper(const FMulticastScriptDelegate& OnZonefallInventoryClosed);


// ********** End Delegate FOnZonefallInventoryClosed **********************************************

// ********** Begin Class UZonefallInventorySlotButton *********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallInventoryWidget_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleInternalClicked);


struct Z_Construct_UClass_UZonefallInventorySlotButton_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallInventorySlotButton_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallInventoryWidget_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallInventorySlotButton(); \
	friend struct ::Z_Construct_UClass_UZonefallInventorySlotButton_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallInventorySlotButton_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallInventorySlotButton, UButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallInventorySlotButton_NoRegister) \
	DECLARE_SERIALIZER(UZonefallInventorySlotButton)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallInventoryWidget_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallInventorySlotButton(UZonefallInventorySlotButton&&) = delete; \
	UZonefallInventorySlotButton(const UZonefallInventorySlotButton&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallInventorySlotButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallInventorySlotButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UZonefallInventorySlotButton) \
	NO_API virtual ~UZonefallInventorySlotButton();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallInventoryWidget_h_21_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallInventoryWidget_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallInventoryWidget_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallInventoryWidget_h_24_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallInventoryWidget_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallInventorySlotButton;

// ********** End Class UZonefallInventorySlotButton ***********************************************

// ********** Begin Class UZonefallInventoryWidget *************************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallInventoryWidget_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleBackClicked); \
	DECLARE_FUNCTION(execHandleUseClicked); \
	DECLARE_FUNCTION(execHandleDropClicked); \
	DECLARE_FUNCTION(execHandleCategoryClicked); \
	DECLARE_FUNCTION(execHandleSlotClicked); \
	DECLARE_FUNCTION(execHandleInventoryChanged); \
	DECLARE_FUNCTION(execSetInventory);


struct Z_Construct_UClass_UZonefallInventoryWidget_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallInventoryWidget_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallInventoryWidget_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallInventoryWidget(); \
	friend struct ::Z_Construct_UClass_UZonefallInventoryWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallInventoryWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallInventoryWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallInventoryWidget_NoRegister) \
	DECLARE_SERIALIZER(UZonefallInventoryWidget)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallInventoryWidget_h_53_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallInventoryWidget(UZonefallInventoryWidget&&) = delete; \
	UZonefallInventoryWidget(const UZonefallInventoryWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallInventoryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallInventoryWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZonefallInventoryWidget) \
	NO_API virtual ~UZonefallInventoryWidget();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallInventoryWidget_h_50_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallInventoryWidget_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallInventoryWidget_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallInventoryWidget_h_53_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallInventoryWidget_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallInventoryWidget;

// ********** End Class UZonefallInventoryWidget ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_UI_ZonefallInventoryWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
