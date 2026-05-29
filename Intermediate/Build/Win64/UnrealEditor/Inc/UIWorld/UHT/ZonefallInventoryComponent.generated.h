// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/ZonefallInventoryComponent.h"

#ifdef UIWORLD_ZonefallInventoryComponent_generated_h
#error "ZonefallInventoryComponent.generated.h already included, missing '#pragma once' in ZonefallInventoryComponent.h"
#endif
#define UIWORLD_ZonefallInventoryComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FZonefallInventoryItem;

// ********** Begin ScriptStruct FZonefallInventoryItem ********************************************
struct Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics;
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallInventoryComponent_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FZonefallInventoryItem_Statics; \
	UIWORLD_API static class UScriptStruct* StaticStruct();


struct FZonefallInventoryItem;
// ********** End ScriptStruct FZonefallInventoryItem **********************************************

// ********** Begin Delegate FZonefallInventoryChanged *********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallInventoryComponent_h_67_DELEGATE \
UIWORLD_API void FZonefallInventoryChanged_DelegateWrapper(const FMulticastScriptDelegate& ZonefallInventoryChanged);


// ********** End Delegate FZonefallInventoryChanged ***********************************************

// ********** Begin Class UZonefallInventoryComponent **********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallInventoryComponent_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Items); \
	DECLARE_FUNCTION(execIsFull); \
	DECLARE_FUNCTION(execGetNumItems); \
	DECLARE_FUNCTION(execGetItems); \
	DECLARE_FUNCTION(execDropItemAt); \
	DECLARE_FUNCTION(execUseItemAt); \
	DECLARE_FUNCTION(execRemoveItemAt); \
	DECLARE_FUNCTION(execAddItem);


struct Z_Construct_UClass_UZonefallInventoryComponent_Statics;
UIWORLD_API UClass* Z_Construct_UClass_UZonefallInventoryComponent_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallInventoryComponent_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZonefallInventoryComponent(); \
	friend struct ::Z_Construct_UClass_UZonefallInventoryComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_UZonefallInventoryComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UZonefallInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_UZonefallInventoryComponent_NoRegister) \
	DECLARE_SERIALIZER(UZonefallInventoryComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Items=NETFIELD_REP_START, \
		NETFIELD_REP_END=Items	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallInventoryComponent_h_77_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZonefallInventoryComponent(UZonefallInventoryComponent&&) = delete; \
	UZonefallInventoryComponent(const UZonefallInventoryComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZonefallInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZonefallInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UZonefallInventoryComponent) \
	NO_API virtual ~UZonefallInventoryComponent();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallInventoryComponent_h_74_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallInventoryComponent_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallInventoryComponent_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallInventoryComponent_h_77_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallInventoryComponent_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZonefallInventoryComponent;

// ********** End Class UZonefallInventoryComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Inventory_ZonefallInventoryComponent_h

// ********** Begin Enum EZonefallItemCategory *****************************************************
#define FOREACH_ENUM_EZONEFALLITEMCATEGORY(op) \
	op(EZonefallItemCategory::Provisions) \
	op(EZonefallItemCategory::Materials) \
	op(EZonefallItemCategory::Valuables) \
	op(EZonefallItemCategory::Documents) \
	op(EZonefallItemCategory::Kit) \
	op(EZonefallItemCategory::Other) 

enum class EZonefallItemCategory : uint8;
template<> struct TIsUEnumClass<EZonefallItemCategory> { enum { Value = true }; };
template<> UIWORLD_NON_ATTRIBUTED_API UEnum* StaticEnum<EZonefallItemCategory>();
// ********** End Enum EZonefallItemCategory *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
