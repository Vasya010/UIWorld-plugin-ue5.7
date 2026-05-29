// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/ZonefallPlayerCharacter.h"

#ifdef UIWORLD_ZonefallPlayerCharacter_generated_h
#error "ZonefallPlayerCharacter.generated.h already included, missing '#pragma once' in ZonefallPlayerCharacter.h"
#endif
#define UIWORLD_ZonefallPlayerCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AZonefallWorldItem;
class UWorld;
class UZonefallInventoryComponent;
class UZonefallWeaponInventoryComponent;
enum class EZonefallCameraView : uint8;
struct FKey;

// ********** Begin Delegate FZonefallCameraViewChanged ********************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Character_ZonefallPlayerCharacter_h_28_DELEGATE \
UIWORLD_API void FZonefallCameraViewChanged_DelegateWrapper(const FMulticastScriptDelegate& ZonefallCameraViewChanged, EZonefallCameraView NewView);


// ********** End Delegate FZonefallCameraViewChanged **********************************************

// ********** Begin Delegate FZonefallHealthChanged ************************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Character_ZonefallPlayerCharacter_h_29_DELEGATE \
UIWORLD_API void FZonefallHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& ZonefallHealthChanged, float NewHealth, float MaxHealth);


// ********** End Delegate FZonefallHealthChanged **************************************************

// ********** Begin Delegate FZonefallCharacterDied ************************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Character_ZonefallPlayerCharacter_h_30_DELEGATE \
UIWORLD_API void FZonefallCharacterDied_DelegateWrapper(const FMulticastScriptDelegate& ZonefallCharacterDied);


// ********** End Delegate FZonefallCharacterDied **************************************************

// ********** Begin Class AZonefallPlayerCharacter *************************************************
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Character_ZonefallPlayerCharacter_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_SetAiming_Implementation(bool bNewAiming); \
	virtual void Multicast_DryFireFX_Implementation(); \
	virtual void Multicast_FireFX_Implementation(FVector Start, FVector End, bool bHit); \
	virtual void Multicast_PlayFireMontage_Implementation(); \
	virtual void Server_FireWeapon_Implementation(FVector TraceStart, FVector TraceEnd); \
	virtual void Server_EquipWeapon_Implementation(int32 Index); \
	virtual void Server_UseItem_Implementation(int32 Index); \
	virtual void Server_DropItem_Implementation(int32 Index, int32 Count); \
	virtual void Server_PickupItem_Implementation(AZonefallWorldItem* WorldItem); \
	DECLARE_FUNCTION(execHandleOnlineMatchReady); \
	DECLARE_FUNCTION(execOnRep_IsAiming); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execHandleEquippedWeaponChanged); \
	DECLARE_FUNCTION(execServer_SetAiming); \
	DECLARE_FUNCTION(execMulticast_DryFireFX); \
	DECLARE_FUNCTION(execMulticast_FireFX); \
	DECLARE_FUNCTION(execMulticast_PlayFireMontage); \
	DECLARE_FUNCTION(execServer_FireWeapon); \
	DECLARE_FUNCTION(execServer_EquipWeapon); \
	DECLARE_FUNCTION(execServer_UseItem); \
	DECLARE_FUNCTION(execServer_DropItem); \
	DECLARE_FUNCTION(execServer_PickupItem); \
	DECLARE_FUNCTION(execTraceInteractable); \
	DECLARE_FUNCTION(execIsFirstPerson); \
	DECLARE_FUNCTION(execToggleCameraView); \
	DECLARE_FUNCTION(execSetCameraView); \
	DECLARE_FUNCTION(execRebuildInputMappings); \
	DECLARE_FUNCTION(execSetActionKey); \
	DECLARE_FUNCTION(execGetActionKey); \
	DECLARE_FUNCTION(execGetBindableActions); \
	DECLARE_FUNCTION(execIsAiming); \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execGetHealthFraction); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execFireWeapon); \
	DECLARE_FUNCTION(execStopDeadEye); \
	DECLARE_FUNCTION(execStartDeadEye); \
	DECLARE_FUNCTION(execIsDeadEyeActive); \
	DECLARE_FUNCTION(execGetDeadEyeFraction); \
	DECLARE_FUNCTION(execCloseWeaponWheel); \
	DECLARE_FUNCTION(execOpenWeaponWheel); \
	DECLARE_FUNCTION(execRequestEquipWeapon); \
	DECLARE_FUNCTION(execGetWeapons); \
	DECLARE_FUNCTION(execRequestUseItem); \
	DECLARE_FUNCTION(execCloseInventoryUI); \
	DECLARE_FUNCTION(execToggleInventoryUI); \
	DECLARE_FUNCTION(execRequestDropItem); \
	DECLARE_FUNCTION(execGetInventory);


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Character_ZonefallPlayerCharacter_h_47_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AZonefallPlayerCharacter_Statics;
UIWORLD_API UClass* Z_Construct_UClass_AZonefallPlayerCharacter_NoRegister();

#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Character_ZonefallPlayerCharacter_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZonefallPlayerCharacter(); \
	friend struct ::Z_Construct_UClass_AZonefallPlayerCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIWORLD_API UClass* ::Z_Construct_UClass_AZonefallPlayerCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AZonefallPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UIWorld"), Z_Construct_UClass_AZonefallPlayerCharacter_NoRegister) \
	DECLARE_SERIALIZER(AZonefallPlayerCharacter) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Input");} \
 \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		bIsDead, \
		bIsAiming, \
		NETFIELD_REP_END=bIsAiming	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Character_ZonefallPlayerCharacter_h_47_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AZonefallPlayerCharacter(AZonefallPlayerCharacter&&) = delete; \
	AZonefallPlayerCharacter(const AZonefallPlayerCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZonefallPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZonefallPlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZonefallPlayerCharacter) \
	NO_API virtual ~AZonefallPlayerCharacter();


#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Character_ZonefallPlayerCharacter_h_44_PROLOG
#define FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Character_ZonefallPlayerCharacter_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Character_ZonefallPlayerCharacter_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Character_ZonefallPlayerCharacter_h_47_CALLBACK_WRAPPERS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Character_ZonefallPlayerCharacter_h_47_INCLASS_NO_PURE_DECLS \
	FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Character_ZonefallPlayerCharacter_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AZonefallPlayerCharacter;

// ********** End Class AZonefallPlayerCharacter ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Character_ZonefallPlayerCharacter_h

// ********** Begin Enum EZonefallCameraView *******************************************************
#define FOREACH_ENUM_EZONEFALLCAMERAVIEW(op) \
	op(EZonefallCameraView::ThirdPerson) \
	op(EZonefallCameraView::FirstPerson) 

enum class EZonefallCameraView : uint8;
template<> struct TIsUEnumClass<EZonefallCameraView> { enum { Value = true }; };
template<> UIWORLD_NON_ATTRIBUTED_API UEnum* StaticEnum<EZonefallCameraView>();
// ********** End Enum EZonefallCameraView *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
