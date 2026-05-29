// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/ZonefallPlayerCharacter.h"
#include "InputCoreTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallPlayerCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UIWORLD_API UClass* Z_Construct_UClass_AZonefallPlayerCharacter();
UIWORLD_API UClass* Z_Construct_UClass_AZonefallPlayerCharacter_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_AZonefallWorldItem_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallInventoryComponent_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_UZonefallWeaponInventoryComponent_NoRegister();
UIWORLD_API UEnum* Z_Construct_UEnum_UIWorld_EZonefallCameraView();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_ZonefallCameraViewChanged__DelegateSignature();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_ZonefallCharacterDied__DelegateSignature();
UIWORLD_API UFunction* Z_Construct_UDelegateFunction_UIWorld_ZonefallHealthChanged__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EZonefallCameraView *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EZonefallCameraView;
static UEnum* EZonefallCameraView_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EZonefallCameraView.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EZonefallCameraView.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UIWorld_EZonefallCameraView, (UObject*)Z_Construct_UPackage__Script_UIWorld(), TEXT("EZonefallCameraView"));
	}
	return Z_Registration_Info_UEnum_EZonefallCameraView.OuterSingleton;
}
template<> UIWORLD_NON_ATTRIBUTED_API UEnum* StaticEnum<EZonefallCameraView>()
{
	return EZonefallCameraView_StaticEnum();
}
struct Z_Construct_UEnum_UIWorld_EZonefallCameraView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FirstPerson.DisplayName", "First Person" },
		{ "FirstPerson.Name", "EZonefallCameraView::FirstPerson" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
		{ "ThirdPerson.DisplayName", "Third Person" },
		{ "ThirdPerson.Name", "EZonefallCameraView::ThirdPerson" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EZonefallCameraView::ThirdPerson", (int64)EZonefallCameraView::ThirdPerson },
		{ "EZonefallCameraView::FirstPerson", (int64)EZonefallCameraView::FirstPerson },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_UIWorld_EZonefallCameraView_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UIWorld_EZonefallCameraView_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UIWorld,
	nullptr,
	"EZonefallCameraView",
	"EZonefallCameraView",
	Z_Construct_UEnum_UIWorld_EZonefallCameraView_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UIWorld_EZonefallCameraView_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UIWorld_EZonefallCameraView_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UIWorld_EZonefallCameraView_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UIWorld_EZonefallCameraView()
{
	if (!Z_Registration_Info_UEnum_EZonefallCameraView.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EZonefallCameraView.InnerSingleton, Z_Construct_UEnum_UIWorld_EZonefallCameraView_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EZonefallCameraView.InnerSingleton;
}
// ********** End Enum EZonefallCameraView *********************************************************

// ********** Begin Delegate FZonefallCameraViewChanged ********************************************
struct Z_Construct_UDelegateFunction_UIWorld_ZonefallCameraViewChanged__DelegateSignature_Statics
{
	struct _Script_UIWorld_eventZonefallCameraViewChanged_Parms
	{
		EZonefallCameraView NewView;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FZonefallCameraViewChanged constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewView_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewView;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FZonefallCameraViewChanged constinit property declarations **************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FZonefallCameraViewChanged Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UIWorld_ZonefallCameraViewChanged__DelegateSignature_Statics::NewProp_NewView_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UIWorld_ZonefallCameraViewChanged__DelegateSignature_Statics::NewProp_NewView = { "NewView", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UIWorld_eventZonefallCameraViewChanged_Parms, NewView), Z_Construct_UEnum_UIWorld_EZonefallCameraView, METADATA_PARAMS(0, nullptr) }; // 4092881187
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UIWorld_ZonefallCameraViewChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIWorld_ZonefallCameraViewChanged__DelegateSignature_Statics::NewProp_NewView_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIWorld_ZonefallCameraViewChanged__DelegateSignature_Statics::NewProp_NewView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_ZonefallCameraViewChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FZonefallCameraViewChanged Property Definitions *************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_ZonefallCameraViewChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "ZonefallCameraViewChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_UIWorld_ZonefallCameraViewChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_ZonefallCameraViewChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_UIWorld_ZonefallCameraViewChanged__DelegateSignature_Statics::_Script_UIWorld_eventZonefallCameraViewChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_ZonefallCameraViewChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_ZonefallCameraViewChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UIWorld_ZonefallCameraViewChanged__DelegateSignature_Statics::_Script_UIWorld_eventZonefallCameraViewChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UIWorld_ZonefallCameraViewChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_ZonefallCameraViewChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FZonefallCameraViewChanged_DelegateWrapper(const FMulticastScriptDelegate& ZonefallCameraViewChanged, EZonefallCameraView NewView)
{
	struct _Script_UIWorld_eventZonefallCameraViewChanged_Parms
	{
		EZonefallCameraView NewView;
	};
	_Script_UIWorld_eventZonefallCameraViewChanged_Parms Parms;
	Parms.NewView=NewView;
	ZonefallCameraViewChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FZonefallCameraViewChanged **********************************************

// ********** Begin Delegate FZonefallHealthChanged ************************************************
struct Z_Construct_UDelegateFunction_UIWorld_ZonefallHealthChanged__DelegateSignature_Statics
{
	struct _Script_UIWorld_eventZonefallHealthChanged_Parms
	{
		float NewHealth;
		float MaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FZonefallHealthChanged constinit property declarations ****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FZonefallHealthChanged constinit property declarations ******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FZonefallHealthChanged Property Definitions ***************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UIWorld_ZonefallHealthChanged__DelegateSignature_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UIWorld_eventZonefallHealthChanged_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UIWorld_ZonefallHealthChanged__DelegateSignature_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UIWorld_eventZonefallHealthChanged_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UIWorld_ZonefallHealthChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIWorld_ZonefallHealthChanged__DelegateSignature_Statics::NewProp_NewHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIWorld_ZonefallHealthChanged__DelegateSignature_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_ZonefallHealthChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FZonefallHealthChanged Property Definitions *****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_ZonefallHealthChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "ZonefallHealthChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_UIWorld_ZonefallHealthChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_ZonefallHealthChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_UIWorld_ZonefallHealthChanged__DelegateSignature_Statics::_Script_UIWorld_eventZonefallHealthChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_ZonefallHealthChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_ZonefallHealthChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UIWorld_ZonefallHealthChanged__DelegateSignature_Statics::_Script_UIWorld_eventZonefallHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UIWorld_ZonefallHealthChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_ZonefallHealthChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FZonefallHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& ZonefallHealthChanged, float NewHealth, float MaxHealth)
{
	struct _Script_UIWorld_eventZonefallHealthChanged_Parms
	{
		float NewHealth;
		float MaxHealth;
	};
	_Script_UIWorld_eventZonefallHealthChanged_Parms Parms;
	Parms.NewHealth=NewHealth;
	Parms.MaxHealth=MaxHealth;
	ZonefallHealthChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FZonefallHealthChanged **************************************************

// ********** Begin Delegate FZonefallCharacterDied ************************************************
struct Z_Construct_UDelegateFunction_UIWorld_ZonefallCharacterDied__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FZonefallCharacterDied constinit property declarations ****************
// ********** End Delegate FZonefallCharacterDied constinit property declarations ******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIWorld_ZonefallCharacterDied__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UIWorld, nullptr, "ZonefallCharacterDied__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIWorld_ZonefallCharacterDied__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIWorld_ZonefallCharacterDied__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UIWorld_ZonefallCharacterDied__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIWorld_ZonefallCharacterDied__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FZonefallCharacterDied_DelegateWrapper(const FMulticastScriptDelegate& ZonefallCharacterDied)
{
	ZonefallCharacterDied.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FZonefallCharacterDied **************************************************

// ********** Begin Class AZonefallPlayerCharacter Function BP_OnInteract **************************
struct ZonefallPlayerCharacter_eventBP_OnInteract_Parms
{
	AActor* Target;
};
static FName NAME_AZonefallPlayerCharacter_BP_OnInteract = FName(TEXT("BP_OnInteract"));
void AZonefallPlayerCharacter::BP_OnInteract(AActor* Target)
{
	ZonefallPlayerCharacter_eventBP_OnInteract_Parms Parms;
	Parms.Target=Target;
	UFunction* Func = FindFunctionChecked(NAME_AZonefallPlayerCharacter_BP_OnInteract);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AZonefallPlayerCharacter_BP_OnInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Interaction" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BP_OnInteract constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BP_OnInteract constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BP_OnInteract Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_BP_OnInteract_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventBP_OnInteract_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_BP_OnInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_BP_OnInteract_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_BP_OnInteract_Statics::PropPointers) < 2048);
// ********** End Function BP_OnInteract Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_BP_OnInteract_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "BP_OnInteract", 	Z_Construct_UFunction_AZonefallPlayerCharacter_BP_OnInteract_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_BP_OnInteract_Statics::PropPointers), 
sizeof(ZonefallPlayerCharacter_eventBP_OnInteract_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_BP_OnInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_BP_OnInteract_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ZonefallPlayerCharacter_eventBP_OnInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_BP_OnInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_BP_OnInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AZonefallPlayerCharacter Function BP_OnInteract ****************************

// ********** Begin Class AZonefallPlayerCharacter Function CloseInventoryUI ***********************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_CloseInventoryUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Inventory" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CloseInventoryUI constinit property declarations **********************
// ********** End Function CloseInventoryUI constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_CloseInventoryUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "CloseInventoryUI", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_CloseInventoryUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_CloseInventoryUI_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_CloseInventoryUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_CloseInventoryUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execCloseInventoryUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseInventoryUI();
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function CloseInventoryUI *************************

// ********** Begin Class AZonefallPlayerCharacter Function CloseWeaponWheel ***********************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_CloseWeaponWheel_Statics
{
	struct ZonefallPlayerCharacter_eventCloseWeaponWheel_Parms
	{
		bool bEquipSelection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Weapon" },
		{ "CPP_Default_bEquipSelection", "true" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CloseWeaponWheel constinit property declarations **********************
	static void NewProp_bEquipSelection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEquipSelection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CloseWeaponWheel constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CloseWeaponWheel Property Definitions *********************************
void Z_Construct_UFunction_AZonefallPlayerCharacter_CloseWeaponWheel_Statics::NewProp_bEquipSelection_SetBit(void* Obj)
{
	((ZonefallPlayerCharacter_eventCloseWeaponWheel_Parms*)Obj)->bEquipSelection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_CloseWeaponWheel_Statics::NewProp_bEquipSelection = { "bEquipSelection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallPlayerCharacter_eventCloseWeaponWheel_Parms), &Z_Construct_UFunction_AZonefallPlayerCharacter_CloseWeaponWheel_Statics::NewProp_bEquipSelection_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_CloseWeaponWheel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_CloseWeaponWheel_Statics::NewProp_bEquipSelection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_CloseWeaponWheel_Statics::PropPointers) < 2048);
// ********** End Function CloseWeaponWheel Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_CloseWeaponWheel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "CloseWeaponWheel", 	Z_Construct_UFunction_AZonefallPlayerCharacter_CloseWeaponWheel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_CloseWeaponWheel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_CloseWeaponWheel_Statics::ZonefallPlayerCharacter_eventCloseWeaponWheel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_CloseWeaponWheel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_CloseWeaponWheel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_CloseWeaponWheel_Statics::ZonefallPlayerCharacter_eventCloseWeaponWheel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_CloseWeaponWheel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_CloseWeaponWheel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execCloseWeaponWheel)
{
	P_GET_UBOOL(Z_Param_bEquipSelection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseWeaponWheel(Z_Param_bEquipSelection);
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function CloseWeaponWheel *************************

// ********** Begin Class AZonefallPlayerCharacter Function FireWeapon *****************************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_FireWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fires the equipped weapon (hitscan). Routes to the server.\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fires the equipped weapon (hitscan). Routes to the server." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function FireWeapon constinit property declarations ****************************
// ********** End Function FireWeapon constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_FireWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "FireWeapon", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_FireWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_FireWeapon_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_FireWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_FireWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execFireWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FireWeapon();
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function FireWeapon *******************************

// ********** Begin Class AZonefallPlayerCharacter Function GetActionKey ***************************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_GetActionKey_Statics
{
	struct ZonefallPlayerCharacter_eventGetActionKey_Parms
	{
		FName ActionId;
		FKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Input" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActionKey constinit property declarations **************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActionKey constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActionKey Property Definitions *************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_GetActionKey_Statics::NewProp_ActionId = { "ActionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventGetActionKey_Parms, ActionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_GetActionKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventGetActionKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 2693575693
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_GetActionKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_GetActionKey_Statics::NewProp_ActionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_GetActionKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_GetActionKey_Statics::PropPointers) < 2048);
// ********** End Function GetActionKey Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_GetActionKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "GetActionKey", 	Z_Construct_UFunction_AZonefallPlayerCharacter_GetActionKey_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_GetActionKey_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_GetActionKey_Statics::ZonefallPlayerCharacter_eventGetActionKey_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_GetActionKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_GetActionKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_GetActionKey_Statics::ZonefallPlayerCharacter_eventGetActionKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_GetActionKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_GetActionKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execGetActionKey)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ActionId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKey*)Z_Param__Result=P_THIS->GetActionKey(Z_Param_ActionId);
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function GetActionKey *****************************

// ********** Begin Class AZonefallPlayerCharacter Function GetBindableActions *********************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_GetBindableActions_Statics
{
	struct ZonefallPlayerCharacter_eventGetBindableActions_Parms
	{
		TArray<FName> OutActionIds;
		TArray<FText> OutDisplayNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Runtime key rebinding (used by the settings UI) ---\n// Stable identifiers for each rebindable action.\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Runtime key rebinding (used by the settings UI) ---\nStable identifiers for each rebindable action." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetBindableActions constinit property declarations ********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutActionIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActionIds;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OutDisplayNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDisplayNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBindableActions constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBindableActions Property Definitions *******************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_GetBindableActions_Statics::NewProp_OutActionIds_Inner = { "OutActionIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_GetBindableActions_Statics::NewProp_OutActionIds = { "OutActionIds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventGetBindableActions_Parms, OutActionIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_GetBindableActions_Statics::NewProp_OutDisplayNames_Inner = { "OutDisplayNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_GetBindableActions_Statics::NewProp_OutDisplayNames = { "OutDisplayNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventGetBindableActions_Parms, OutDisplayNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_GetBindableActions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_GetBindableActions_Statics::NewProp_OutActionIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_GetBindableActions_Statics::NewProp_OutActionIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_GetBindableActions_Statics::NewProp_OutDisplayNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_GetBindableActions_Statics::NewProp_OutDisplayNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_GetBindableActions_Statics::PropPointers) < 2048);
// ********** End Function GetBindableActions Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_GetBindableActions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "GetBindableActions", 	Z_Construct_UFunction_AZonefallPlayerCharacter_GetBindableActions_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_GetBindableActions_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_GetBindableActions_Statics::ZonefallPlayerCharacter_eventGetBindableActions_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_GetBindableActions_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_GetBindableActions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_GetBindableActions_Statics::ZonefallPlayerCharacter_eventGetBindableActions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_GetBindableActions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_GetBindableActions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execGetBindableActions)
{
	P_GET_TARRAY_REF(FName,Z_Param_Out_OutActionIds);
	P_GET_TARRAY_REF(FText,Z_Param_Out_OutDisplayNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetBindableActions(Z_Param_Out_OutActionIds,Z_Param_Out_OutDisplayNames);
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function GetBindableActions ***********************

// ********** Begin Class AZonefallPlayerCharacter Function GetDeadEyeFraction *********************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_GetDeadEyeFraction_Statics
{
	struct ZonefallPlayerCharacter_eventGetDeadEyeFraction_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|DeadEye" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDeadEyeFraction constinit property declarations ********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDeadEyeFraction constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDeadEyeFraction Property Definitions *******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_GetDeadEyeFraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventGetDeadEyeFraction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_GetDeadEyeFraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_GetDeadEyeFraction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_GetDeadEyeFraction_Statics::PropPointers) < 2048);
// ********** End Function GetDeadEyeFraction Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_GetDeadEyeFraction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "GetDeadEyeFraction", 	Z_Construct_UFunction_AZonefallPlayerCharacter_GetDeadEyeFraction_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_GetDeadEyeFraction_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_GetDeadEyeFraction_Statics::ZonefallPlayerCharacter_eventGetDeadEyeFraction_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_GetDeadEyeFraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_GetDeadEyeFraction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_GetDeadEyeFraction_Statics::ZonefallPlayerCharacter_eventGetDeadEyeFraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_GetDeadEyeFraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_GetDeadEyeFraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execGetDeadEyeFraction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDeadEyeFraction();
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function GetDeadEyeFraction ***********************

// ********** Begin Class AZonefallPlayerCharacter Function GetHealth ******************************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealth_Statics
{
	struct ZonefallPlayerCharacter_eventGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Health" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHealth constinit property declarations *****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHealth constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHealth Property Definitions ****************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealth_Statics::PropPointers) < 2048);
// ********** End Function GetHealth Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "GetHealth", 	Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealth_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealth_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealth_Statics::ZonefallPlayerCharacter_eventGetHealth_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealth_Statics::ZonefallPlayerCharacter_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function GetHealth ********************************

// ********** Begin Class AZonefallPlayerCharacter Function GetHealthFraction **********************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealthFraction_Statics
{
	struct ZonefallPlayerCharacter_eventGetHealthFraction_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Health" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHealthFraction constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHealthFraction constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHealthFraction Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealthFraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventGetHealthFraction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealthFraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealthFraction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealthFraction_Statics::PropPointers) < 2048);
// ********** End Function GetHealthFraction Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealthFraction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "GetHealthFraction", 	Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealthFraction_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealthFraction_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealthFraction_Statics::ZonefallPlayerCharacter_eventGetHealthFraction_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealthFraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealthFraction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealthFraction_Statics::ZonefallPlayerCharacter_eventGetHealthFraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealthFraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealthFraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execGetHealthFraction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealthFraction();
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function GetHealthFraction ************************

// ********** Begin Class AZonefallPlayerCharacter Function GetInventory ***************************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_GetInventory_Statics
{
	struct ZonefallPlayerCharacter_eventGetInventory_Parms
	{
		UZonefallInventoryComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Inventory" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetInventory constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInventory constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInventory Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_GetInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventGetInventory_Parms, ReturnValue), Z_Construct_UClass_UZonefallInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_GetInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_GetInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_GetInventory_Statics::PropPointers) < 2048);
// ********** End Function GetInventory Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_GetInventory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "GetInventory", 	Z_Construct_UFunction_AZonefallPlayerCharacter_GetInventory_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_GetInventory_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_GetInventory_Statics::ZonefallPlayerCharacter_eventGetInventory_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_GetInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_GetInventory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_GetInventory_Statics::ZonefallPlayerCharacter_eventGetInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_GetInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_GetInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execGetInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UZonefallInventoryComponent**)Z_Param__Result=P_THIS->GetInventory();
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function GetInventory *****************************

// ********** Begin Class AZonefallPlayerCharacter Function GetMaxHealth ***************************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_GetMaxHealth_Statics
{
	struct ZonefallPlayerCharacter_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Health" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMaxHealth constinit property declarations **************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMaxHealth constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMaxHealth Property Definitions *************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_GetMaxHealth_Statics::PropPointers) < 2048);
// ********** End Function GetMaxHealth Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_GetMaxHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "GetMaxHealth", 	Z_Construct_UFunction_AZonefallPlayerCharacter_GetMaxHealth_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_GetMaxHealth_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_GetMaxHealth_Statics::ZonefallPlayerCharacter_eventGetMaxHealth_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_GetMaxHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_GetMaxHealth_Statics::ZonefallPlayerCharacter_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function GetMaxHealth *****************************

// ********** Begin Class AZonefallPlayerCharacter Function GetWeapons *****************************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_GetWeapons_Statics
{
	struct ZonefallPlayerCharacter_eventGetWeapons_Parms
	{
		UZonefallWeaponInventoryComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Weapon" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWeapons constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWeapons constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWeapons Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_GetWeapons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventGetWeapons_Parms, ReturnValue), Z_Construct_UClass_UZonefallWeaponInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_GetWeapons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_GetWeapons_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_GetWeapons_Statics::PropPointers) < 2048);
// ********** End Function GetWeapons Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_GetWeapons_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "GetWeapons", 	Z_Construct_UFunction_AZonefallPlayerCharacter_GetWeapons_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_GetWeapons_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_GetWeapons_Statics::ZonefallPlayerCharacter_eventGetWeapons_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_GetWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_GetWeapons_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_GetWeapons_Statics::ZonefallPlayerCharacter_eventGetWeapons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_GetWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_GetWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execGetWeapons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UZonefallWeaponInventoryComponent**)Z_Param__Result=P_THIS->GetWeapons();
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function GetWeapons *******************************

// ********** Begin Class AZonefallPlayerCharacter Function HandleEquippedWeaponChanged ************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_HandleEquippedWeaponChanged_Statics
{
	struct ZonefallPlayerCharacter_eventHandleEquippedWeaponChanged_Parms
	{
		int32 EquippedIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleEquippedWeaponChanged constinit property declarations ***********
	static const UECodeGen_Private::FIntPropertyParams NewProp_EquippedIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleEquippedWeaponChanged constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleEquippedWeaponChanged Property Definitions **********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_HandleEquippedWeaponChanged_Statics::NewProp_EquippedIndex = { "EquippedIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventHandleEquippedWeaponChanged_Parms, EquippedIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_HandleEquippedWeaponChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_HandleEquippedWeaponChanged_Statics::NewProp_EquippedIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_HandleEquippedWeaponChanged_Statics::PropPointers) < 2048);
// ********** End Function HandleEquippedWeaponChanged Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_HandleEquippedWeaponChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "HandleEquippedWeaponChanged", 	Z_Construct_UFunction_AZonefallPlayerCharacter_HandleEquippedWeaponChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_HandleEquippedWeaponChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_HandleEquippedWeaponChanged_Statics::ZonefallPlayerCharacter_eventHandleEquippedWeaponChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_HandleEquippedWeaponChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_HandleEquippedWeaponChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_HandleEquippedWeaponChanged_Statics::ZonefallPlayerCharacter_eventHandleEquippedWeaponChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_HandleEquippedWeaponChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_HandleEquippedWeaponChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execHandleEquippedWeaponChanged)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_EquippedIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleEquippedWeaponChanged(Z_Param_EquippedIndex);
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function HandleEquippedWeaponChanged **************

// ********** Begin Class AZonefallPlayerCharacter Function HandleOnlineMatchReady *****************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_HandleOnlineMatchReady_Statics
{
	struct ZonefallPlayerCharacter_eventHandleOnlineMatchReady_Parms
	{
		UWorld* World;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleOnlineMatchReady constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleOnlineMatchReady constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleOnlineMatchReady Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_HandleOnlineMatchReady_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventHandleOnlineMatchReady_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_HandleOnlineMatchReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_HandleOnlineMatchReady_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_HandleOnlineMatchReady_Statics::PropPointers) < 2048);
// ********** End Function HandleOnlineMatchReady Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_HandleOnlineMatchReady_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "HandleOnlineMatchReady", 	Z_Construct_UFunction_AZonefallPlayerCharacter_HandleOnlineMatchReady_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_HandleOnlineMatchReady_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_HandleOnlineMatchReady_Statics::ZonefallPlayerCharacter_eventHandleOnlineMatchReady_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_HandleOnlineMatchReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_HandleOnlineMatchReady_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_HandleOnlineMatchReady_Statics::ZonefallPlayerCharacter_eventHandleOnlineMatchReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_HandleOnlineMatchReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_HandleOnlineMatchReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execHandleOnlineMatchReady)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleOnlineMatchReady(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function HandleOnlineMatchReady *******************

// ********** Begin Class AZonefallPlayerCharacter Function Heal ***********************************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_Heal_Statics
{
	struct ZonefallPlayerCharacter_eventHeal_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Health" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Heal constinit property declarations **********************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Heal constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Heal Property Definitions *********************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_Heal_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventHeal_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_Heal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_Heal_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Heal_Statics::PropPointers) < 2048);
// ********** End Function Heal Property Definitions ***********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_Heal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "Heal", 	Z_Construct_UFunction_AZonefallPlayerCharacter_Heal_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Heal_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_Heal_Statics::ZonefallPlayerCharacter_eventHeal_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Heal_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_Heal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_Heal_Statics::ZonefallPlayerCharacter_eventHeal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_Heal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_Heal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execHeal)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Heal(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function Heal *************************************

// ********** Begin Class AZonefallPlayerCharacter Function IsAiming *******************************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_IsAiming_Statics
{
	struct ZonefallPlayerCharacter_eventIsAiming_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Aim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replicated so anim blueprints / remote clients can pose the aim.\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated so anim blueprints / remote clients can pose the aim." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsAiming constinit property declarations ******************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsAiming constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsAiming Property Definitions *****************************************
void Z_Construct_UFunction_AZonefallPlayerCharacter_IsAiming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ZonefallPlayerCharacter_eventIsAiming_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_IsAiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallPlayerCharacter_eventIsAiming_Parms), &Z_Construct_UFunction_AZonefallPlayerCharacter_IsAiming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_IsAiming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_IsAiming_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_IsAiming_Statics::PropPointers) < 2048);
// ********** End Function IsAiming Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_IsAiming_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "IsAiming", 	Z_Construct_UFunction_AZonefallPlayerCharacter_IsAiming_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_IsAiming_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_IsAiming_Statics::ZonefallPlayerCharacter_eventIsAiming_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_IsAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_IsAiming_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_IsAiming_Statics::ZonefallPlayerCharacter_eventIsAiming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_IsAiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_IsAiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execIsAiming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAiming();
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function IsAiming *********************************

// ********** Begin Class AZonefallPlayerCharacter Function IsDead *********************************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_IsDead_Statics
{
	struct ZonefallPlayerCharacter_eventIsDead_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Health" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsDead constinit property declarations ********************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsDead constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsDead Property Definitions *******************************************
void Z_Construct_UFunction_AZonefallPlayerCharacter_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ZonefallPlayerCharacter_eventIsDead_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallPlayerCharacter_eventIsDead_Parms), &Z_Construct_UFunction_AZonefallPlayerCharacter_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_IsDead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_IsDead_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_IsDead_Statics::PropPointers) < 2048);
// ********** End Function IsDead Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_IsDead_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "IsDead", 	Z_Construct_UFunction_AZonefallPlayerCharacter_IsDead_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_IsDead_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_IsDead_Statics::ZonefallPlayerCharacter_eventIsDead_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_IsDead_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_IsDead_Statics::ZonefallPlayerCharacter_eventIsDead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_IsDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_IsDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execIsDead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDead();
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function IsDead ***********************************

// ********** Begin Class AZonefallPlayerCharacter Function IsDeadEyeActive ************************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_IsDeadEyeActive_Statics
{
	struct ZonefallPlayerCharacter_eventIsDeadEyeActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|DeadEye" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsDeadEyeActive constinit property declarations ***********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsDeadEyeActive constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsDeadEyeActive Property Definitions **********************************
void Z_Construct_UFunction_AZonefallPlayerCharacter_IsDeadEyeActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ZonefallPlayerCharacter_eventIsDeadEyeActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_IsDeadEyeActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallPlayerCharacter_eventIsDeadEyeActive_Parms), &Z_Construct_UFunction_AZonefallPlayerCharacter_IsDeadEyeActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_IsDeadEyeActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_IsDeadEyeActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_IsDeadEyeActive_Statics::PropPointers) < 2048);
// ********** End Function IsDeadEyeActive Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_IsDeadEyeActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "IsDeadEyeActive", 	Z_Construct_UFunction_AZonefallPlayerCharacter_IsDeadEyeActive_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_IsDeadEyeActive_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_IsDeadEyeActive_Statics::ZonefallPlayerCharacter_eventIsDeadEyeActive_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_IsDeadEyeActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_IsDeadEyeActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_IsDeadEyeActive_Statics::ZonefallPlayerCharacter_eventIsDeadEyeActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_IsDeadEyeActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_IsDeadEyeActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execIsDeadEyeActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDeadEyeActive();
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function IsDeadEyeActive **************************

// ********** Begin Class AZonefallPlayerCharacter Function IsFirstPerson **************************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_IsFirstPerson_Statics
{
	struct ZonefallPlayerCharacter_eventIsFirstPerson_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Camera" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsFirstPerson constinit property declarations *************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsFirstPerson constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsFirstPerson Property Definitions ************************************
void Z_Construct_UFunction_AZonefallPlayerCharacter_IsFirstPerson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ZonefallPlayerCharacter_eventIsFirstPerson_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_IsFirstPerson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallPlayerCharacter_eventIsFirstPerson_Parms), &Z_Construct_UFunction_AZonefallPlayerCharacter_IsFirstPerson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_IsFirstPerson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_IsFirstPerson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_IsFirstPerson_Statics::PropPointers) < 2048);
// ********** End Function IsFirstPerson Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_IsFirstPerson_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "IsFirstPerson", 	Z_Construct_UFunction_AZonefallPlayerCharacter_IsFirstPerson_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_IsFirstPerson_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_IsFirstPerson_Statics::ZonefallPlayerCharacter_eventIsFirstPerson_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_IsFirstPerson_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_IsFirstPerson_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_IsFirstPerson_Statics::ZonefallPlayerCharacter_eventIsFirstPerson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_IsFirstPerson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_IsFirstPerson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execIsFirstPerson)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFirstPerson();
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function IsFirstPerson ****************************

// ********** Begin Class AZonefallPlayerCharacter Function Multicast_DryFireFX ********************
static FName NAME_AZonefallPlayerCharacter_Multicast_DryFireFX = FName(TEXT("Multicast_DryFireFX"));
void AZonefallPlayerCharacter::Multicast_DryFireFX()
{
	UFunction* Func = FindFunctionChecked(NAME_AZonefallPlayerCharacter_Multicast_DryFireFX);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_DryFireFX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Click / dry-fire feedback when the magazine and reserve are empty. */" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Click / dry-fire feedback when the magazine and reserve are empty." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Multicast_DryFireFX constinit property declarations *******************
// ********** End Function Multicast_DryFireFX constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_DryFireFX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "Multicast_DryFireFX", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_DryFireFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_DryFireFX_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_DryFireFX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_DryFireFX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execMulticast_DryFireFX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_DryFireFX_Implementation();
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function Multicast_DryFireFX **********************

// ********** Begin Class AZonefallPlayerCharacter Function Multicast_FireFX ***********************
struct ZonefallPlayerCharacter_eventMulticast_FireFX_Parms
{
	FVector Start;
	FVector End;
	bool bHit;
};
static FName NAME_AZonefallPlayerCharacter_Multicast_FireFX = FName(TEXT("Multicast_FireFX"));
void AZonefallPlayerCharacter::Multicast_FireFX(FVector Start, FVector End, bool bHit)
{
	ZonefallPlayerCharacter_eventMulticast_FireFX_Parms Parms;
	Parms.Start=Start;
	Parms.End=End;
	Parms.bHit=bHit ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AZonefallPlayerCharacter_Multicast_FireFX);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_FireFX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Draws a visible tracer/impact for the shot on every client.\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draws a visible tracer/impact for the shot on every client." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Multicast_FireFX constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static void NewProp_bHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Multicast_FireFX constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Multicast_FireFX Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_FireFX_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventMulticast_FireFX_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_FireFX_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventMulticast_FireFX_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_FireFX_Statics::NewProp_bHit_SetBit(void* Obj)
{
	((ZonefallPlayerCharacter_eventMulticast_FireFX_Parms*)Obj)->bHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_FireFX_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallPlayerCharacter_eventMulticast_FireFX_Parms), &Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_FireFX_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_FireFX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_FireFX_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_FireFX_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_FireFX_Statics::NewProp_bHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_FireFX_Statics::PropPointers) < 2048);
// ********** End Function Multicast_FireFX Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_FireFX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "Multicast_FireFX", 	Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_FireFX_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_FireFX_Statics::PropPointers), 
sizeof(ZonefallPlayerCharacter_eventMulticast_FireFX_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_FireFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_FireFX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ZonefallPlayerCharacter_eventMulticast_FireFX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_FireFX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_FireFX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execMulticast_FireFX)
{
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_UBOOL(Z_Param_bHit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_FireFX_Implementation(Z_Param_Start,Z_Param_End,Z_Param_bHit);
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function Multicast_FireFX *************************

// ********** Begin Class AZonefallPlayerCharacter Function Multicast_PlayFireMontage **************
static FName NAME_AZonefallPlayerCharacter_Multicast_PlayFireMontage = FName(TEXT("Multicast_PlayFireMontage"));
void AZonefallPlayerCharacter::Multicast_PlayFireMontage()
{
	UFunction* Func = FindFunctionChecked(NAME_AZonefallPlayerCharacter_Multicast_PlayFireMontage);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_PlayFireMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Multicast_PlayFireMontage constinit property declarations *************
// ********** End Function Multicast_PlayFireMontage constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_PlayFireMontage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "Multicast_PlayFireMontage", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_PlayFireMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_PlayFireMontage_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_PlayFireMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_PlayFireMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execMulticast_PlayFireMontage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_PlayFireMontage_Implementation();
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function Multicast_PlayFireMontage ****************

// ********** Begin Class AZonefallPlayerCharacter Function OnRep_Health ***************************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_OnRep_Health_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Health constinit property declarations **************************
// ********** End Function OnRep_Health constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_OnRep_Health_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "OnRep_Health", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_OnRep_Health_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execOnRep_Health)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health();
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function OnRep_Health *****************************

// ********** Begin Class AZonefallPlayerCharacter Function OnRep_IsAiming *************************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_OnRep_IsAiming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_IsAiming constinit property declarations ************************
// ********** End Function OnRep_IsAiming constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_OnRep_IsAiming_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "OnRep_IsAiming", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_OnRep_IsAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_OnRep_IsAiming_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_OnRep_IsAiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_OnRep_IsAiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execOnRep_IsAiming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsAiming();
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function OnRep_IsAiming ***************************

// ********** Begin Class AZonefallPlayerCharacter Function OpenWeaponWheel ************************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_OpenWeaponWheel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Weapon" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OpenWeaponWheel constinit property declarations ***********************
// ********** End Function OpenWeaponWheel constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_OpenWeaponWheel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "OpenWeaponWheel", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_OpenWeaponWheel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_OpenWeaponWheel_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_OpenWeaponWheel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_OpenWeaponWheel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execOpenWeaponWheel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenWeaponWheel();
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function OpenWeaponWheel **************************

// ********** Begin Class AZonefallPlayerCharacter Function RebuildInputMappings *******************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_RebuildInputMappings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Input" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RebuildInputMappings constinit property declarations ******************
// ********** End Function RebuildInputMappings constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_RebuildInputMappings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "RebuildInputMappings", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_RebuildInputMappings_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_RebuildInputMappings_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_RebuildInputMappings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_RebuildInputMappings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execRebuildInputMappings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RebuildInputMappings();
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function RebuildInputMappings *********************

// ********** Begin Class AZonefallPlayerCharacter Function RequestDropItem ************************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_RequestDropItem_Statics
{
	struct ZonefallPlayerCharacter_eventRequestDropItem_Parms
	{
		int32 Index;
		int32 Count;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Requests a drop of a slot (routes to the server). Safe to call from client UI.\n" },
#endif
		{ "CPP_Default_Count", "1" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests a drop of a slot (routes to the server). Safe to call from client UI." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RequestDropItem constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestDropItem constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestDropItem Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_RequestDropItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventRequestDropItem_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_RequestDropItem_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventRequestDropItem_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_RequestDropItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_RequestDropItem_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_RequestDropItem_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_RequestDropItem_Statics::PropPointers) < 2048);
// ********** End Function RequestDropItem Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_RequestDropItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "RequestDropItem", 	Z_Construct_UFunction_AZonefallPlayerCharacter_RequestDropItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_RequestDropItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_RequestDropItem_Statics::ZonefallPlayerCharacter_eventRequestDropItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_RequestDropItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_RequestDropItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_RequestDropItem_Statics::ZonefallPlayerCharacter_eventRequestDropItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_RequestDropItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_RequestDropItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execRequestDropItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestDropItem(Z_Param_Index,Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function RequestDropItem **************************

// ********** Begin Class AZonefallPlayerCharacter Function RequestEquipWeapon *********************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_RequestEquipWeapon_Statics
{
	struct ZonefallPlayerCharacter_eventRequestEquipWeapon_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Equips a weapon by index (routes to server). -1 = holster.\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equips a weapon by index (routes to server). -1 = holster." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RequestEquipWeapon constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestEquipWeapon constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestEquipWeapon Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_RequestEquipWeapon_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventRequestEquipWeapon_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_RequestEquipWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_RequestEquipWeapon_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_RequestEquipWeapon_Statics::PropPointers) < 2048);
// ********** End Function RequestEquipWeapon Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_RequestEquipWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "RequestEquipWeapon", 	Z_Construct_UFunction_AZonefallPlayerCharacter_RequestEquipWeapon_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_RequestEquipWeapon_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_RequestEquipWeapon_Statics::ZonefallPlayerCharacter_eventRequestEquipWeapon_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_RequestEquipWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_RequestEquipWeapon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_RequestEquipWeapon_Statics::ZonefallPlayerCharacter_eventRequestEquipWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_RequestEquipWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_RequestEquipWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execRequestEquipWeapon)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestEquipWeapon(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function RequestEquipWeapon ***********************

// ********** Begin Class AZonefallPlayerCharacter Function RequestUseItem *************************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_RequestUseItem_Statics
{
	struct ZonefallPlayerCharacter_eventRequestUseItem_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Routes a USE request for an inventory slot to the server.\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Routes a USE request for an inventory slot to the server." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RequestUseItem constinit property declarations ************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestUseItem constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestUseItem Property Definitions ***********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_RequestUseItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventRequestUseItem_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_RequestUseItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_RequestUseItem_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_RequestUseItem_Statics::PropPointers) < 2048);
// ********** End Function RequestUseItem Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_RequestUseItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "RequestUseItem", 	Z_Construct_UFunction_AZonefallPlayerCharacter_RequestUseItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_RequestUseItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_RequestUseItem_Statics::ZonefallPlayerCharacter_eventRequestUseItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_RequestUseItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_RequestUseItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_RequestUseItem_Statics::ZonefallPlayerCharacter_eventRequestUseItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_RequestUseItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_RequestUseItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execRequestUseItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestUseItem(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function RequestUseItem ***************************

// ********** Begin Class AZonefallPlayerCharacter Function Server_DropItem ************************
struct ZonefallPlayerCharacter_eventServer_DropItem_Parms
{
	int32 Index;
	int32 Count;
};
static FName NAME_AZonefallPlayerCharacter_Server_DropItem = FName(TEXT("Server_DropItem"));
void AZonefallPlayerCharacter::Server_DropItem(int32 Index, int32 Count)
{
	ZonefallPlayerCharacter_eventServer_DropItem_Parms Parms;
	Parms.Index=Index;
	Parms.Count=Count;
	UFunction* Func = FindFunctionChecked(NAME_AZonefallPlayerCharacter_Server_DropItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AZonefallPlayerCharacter_Server_DropItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Server_DropItem constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Server_DropItem constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Server_DropItem Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_Server_DropItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventServer_DropItem_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_Server_DropItem_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventServer_DropItem_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_Server_DropItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_Server_DropItem_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_Server_DropItem_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Server_DropItem_Statics::PropPointers) < 2048);
// ********** End Function Server_DropItem Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_Server_DropItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "Server_DropItem", 	Z_Construct_UFunction_AZonefallPlayerCharacter_Server_DropItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Server_DropItem_Statics::PropPointers), 
sizeof(ZonefallPlayerCharacter_eventServer_DropItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Server_DropItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_Server_DropItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ZonefallPlayerCharacter_eventServer_DropItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_Server_DropItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_Server_DropItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execServer_DropItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_DropItem_Implementation(Z_Param_Index,Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function Server_DropItem **************************

// ********** Begin Class AZonefallPlayerCharacter Function Server_EquipWeapon *********************
struct ZonefallPlayerCharacter_eventServer_EquipWeapon_Parms
{
	int32 Index;
};
static FName NAME_AZonefallPlayerCharacter_Server_EquipWeapon = FName(TEXT("Server_EquipWeapon"));
void AZonefallPlayerCharacter::Server_EquipWeapon(int32 Index)
{
	ZonefallPlayerCharacter_eventServer_EquipWeapon_Parms Parms;
	Parms.Index=Index;
	UFunction* Func = FindFunctionChecked(NAME_AZonefallPlayerCharacter_Server_EquipWeapon);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AZonefallPlayerCharacter_Server_EquipWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Server_EquipWeapon constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Server_EquipWeapon constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Server_EquipWeapon Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_Server_EquipWeapon_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventServer_EquipWeapon_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_Server_EquipWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_Server_EquipWeapon_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Server_EquipWeapon_Statics::PropPointers) < 2048);
// ********** End Function Server_EquipWeapon Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_Server_EquipWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "Server_EquipWeapon", 	Z_Construct_UFunction_AZonefallPlayerCharacter_Server_EquipWeapon_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Server_EquipWeapon_Statics::PropPointers), 
sizeof(ZonefallPlayerCharacter_eventServer_EquipWeapon_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Server_EquipWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_Server_EquipWeapon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ZonefallPlayerCharacter_eventServer_EquipWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_Server_EquipWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_Server_EquipWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execServer_EquipWeapon)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_EquipWeapon_Implementation(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function Server_EquipWeapon ***********************

// ********** Begin Class AZonefallPlayerCharacter Function Server_FireWeapon **********************
struct ZonefallPlayerCharacter_eventServer_FireWeapon_Parms
{
	FVector TraceStart;
	FVector TraceEnd;
};
static FName NAME_AZonefallPlayerCharacter_Server_FireWeapon = FName(TEXT("Server_FireWeapon"));
void AZonefallPlayerCharacter::Server_FireWeapon(FVector TraceStart, FVector TraceEnd)
{
	ZonefallPlayerCharacter_eventServer_FireWeapon_Parms Parms;
	Parms.TraceStart=TraceStart;
	Parms.TraceEnd=TraceEnd;
	UFunction* Func = FindFunctionChecked(NAME_AZonefallPlayerCharacter_Server_FireWeapon);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AZonefallPlayerCharacter_Server_FireWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Server_FireWeapon constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Server_FireWeapon constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Server_FireWeapon Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_Server_FireWeapon_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventServer_FireWeapon_Parms, TraceStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_Server_FireWeapon_Statics::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventServer_FireWeapon_Parms, TraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_Server_FireWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_Server_FireWeapon_Statics::NewProp_TraceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_Server_FireWeapon_Statics::NewProp_TraceEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Server_FireWeapon_Statics::PropPointers) < 2048);
// ********** End Function Server_FireWeapon Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_Server_FireWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "Server_FireWeapon", 	Z_Construct_UFunction_AZonefallPlayerCharacter_Server_FireWeapon_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Server_FireWeapon_Statics::PropPointers), 
sizeof(ZonefallPlayerCharacter_eventServer_FireWeapon_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A80CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Server_FireWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_Server_FireWeapon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ZonefallPlayerCharacter_eventServer_FireWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_Server_FireWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_Server_FireWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execServer_FireWeapon)
{
	P_GET_STRUCT(FVector,Z_Param_TraceStart);
	P_GET_STRUCT(FVector,Z_Param_TraceEnd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_FireWeapon_Implementation(Z_Param_TraceStart,Z_Param_TraceEnd);
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function Server_FireWeapon ************************

// ********** Begin Class AZonefallPlayerCharacter Function Server_PickupItem **********************
struct ZonefallPlayerCharacter_eventServer_PickupItem_Parms
{
	AZonefallWorldItem* WorldItem;
};
static FName NAME_AZonefallPlayerCharacter_Server_PickupItem = FName(TEXT("Server_PickupItem"));
void AZonefallPlayerCharacter::Server_PickupItem(AZonefallWorldItem* WorldItem)
{
	ZonefallPlayerCharacter_eventServer_PickupItem_Parms Parms;
	Parms.WorldItem=WorldItem;
	UFunction* Func = FindFunctionChecked(NAME_AZonefallPlayerCharacter_Server_PickupItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AZonefallPlayerCharacter_Server_PickupItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Server RPCs (inventory + weapons are server-authoritative).\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server RPCs (inventory + weapons are server-authoritative)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Server_PickupItem constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Server_PickupItem constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Server_PickupItem Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_Server_PickupItem_Statics::NewProp_WorldItem = { "WorldItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventServer_PickupItem_Parms, WorldItem), Z_Construct_UClass_AZonefallWorldItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_Server_PickupItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_Server_PickupItem_Statics::NewProp_WorldItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Server_PickupItem_Statics::PropPointers) < 2048);
// ********** End Function Server_PickupItem Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_Server_PickupItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "Server_PickupItem", 	Z_Construct_UFunction_AZonefallPlayerCharacter_Server_PickupItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Server_PickupItem_Statics::PropPointers), 
sizeof(ZonefallPlayerCharacter_eventServer_PickupItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Server_PickupItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_Server_PickupItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ZonefallPlayerCharacter_eventServer_PickupItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_Server_PickupItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_Server_PickupItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execServer_PickupItem)
{
	P_GET_OBJECT(AZonefallWorldItem,Z_Param_WorldItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_PickupItem_Implementation(Z_Param_WorldItem);
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function Server_PickupItem ************************

// ********** Begin Class AZonefallPlayerCharacter Function Server_SetAiming ***********************
struct ZonefallPlayerCharacter_eventServer_SetAiming_Parms
{
	bool bNewAiming;
};
static FName NAME_AZonefallPlayerCharacter_Server_SetAiming = FName(TEXT("Server_SetAiming"));
void AZonefallPlayerCharacter::Server_SetAiming(bool bNewAiming)
{
	ZonefallPlayerCharacter_eventServer_SetAiming_Parms Parms;
	Parms.bNewAiming=bNewAiming ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AZonefallPlayerCharacter_Server_SetAiming);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AZonefallPlayerCharacter_Server_SetAiming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Server_SetAiming constinit property declarations **********************
	static void NewProp_bNewAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewAiming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Server_SetAiming constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Server_SetAiming Property Definitions *********************************
void Z_Construct_UFunction_AZonefallPlayerCharacter_Server_SetAiming_Statics::NewProp_bNewAiming_SetBit(void* Obj)
{
	((ZonefallPlayerCharacter_eventServer_SetAiming_Parms*)Obj)->bNewAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_Server_SetAiming_Statics::NewProp_bNewAiming = { "bNewAiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZonefallPlayerCharacter_eventServer_SetAiming_Parms), &Z_Construct_UFunction_AZonefallPlayerCharacter_Server_SetAiming_Statics::NewProp_bNewAiming_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_Server_SetAiming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_Server_SetAiming_Statics::NewProp_bNewAiming,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Server_SetAiming_Statics::PropPointers) < 2048);
// ********** End Function Server_SetAiming Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_Server_SetAiming_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "Server_SetAiming", 	Z_Construct_UFunction_AZonefallPlayerCharacter_Server_SetAiming_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Server_SetAiming_Statics::PropPointers), 
sizeof(ZonefallPlayerCharacter_eventServer_SetAiming_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Server_SetAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_Server_SetAiming_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ZonefallPlayerCharacter_eventServer_SetAiming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_Server_SetAiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_Server_SetAiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execServer_SetAiming)
{
	P_GET_UBOOL(Z_Param_bNewAiming);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SetAiming_Implementation(Z_Param_bNewAiming);
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function Server_SetAiming *************************

// ********** Begin Class AZonefallPlayerCharacter Function Server_UseItem *************************
struct ZonefallPlayerCharacter_eventServer_UseItem_Parms
{
	int32 Index;
};
static FName NAME_AZonefallPlayerCharacter_Server_UseItem = FName(TEXT("Server_UseItem"));
void AZonefallPlayerCharacter::Server_UseItem(int32 Index)
{
	ZonefallPlayerCharacter_eventServer_UseItem_Parms Parms;
	Parms.Index=Index;
	UFunction* Func = FindFunctionChecked(NAME_AZonefallPlayerCharacter_Server_UseItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AZonefallPlayerCharacter_Server_UseItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Server_UseItem constinit property declarations ************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Server_UseItem constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Server_UseItem Property Definitions ***********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_Server_UseItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventServer_UseItem_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_Server_UseItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_Server_UseItem_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Server_UseItem_Statics::PropPointers) < 2048);
// ********** End Function Server_UseItem Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_Server_UseItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "Server_UseItem", 	Z_Construct_UFunction_AZonefallPlayerCharacter_Server_UseItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Server_UseItem_Statics::PropPointers), 
sizeof(ZonefallPlayerCharacter_eventServer_UseItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_Server_UseItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_Server_UseItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ZonefallPlayerCharacter_eventServer_UseItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_Server_UseItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_Server_UseItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execServer_UseItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_UseItem_Implementation(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function Server_UseItem ***************************

// ********** Begin Class AZonefallPlayerCharacter Function SetActionKey ***************************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_SetActionKey_Statics
{
	struct ZonefallPlayerCharacter_eventSetActionKey_Parms
	{
		FName ActionId;
		FKey NewKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rebinds an action's key, persists to config and rebuilds the live mappings.\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rebinds an action's key, persists to config and rebuilds the live mappings." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetActionKey constinit property declarations **************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetActionKey constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetActionKey Property Definitions *************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_SetActionKey_Statics::NewProp_ActionId = { "ActionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventSetActionKey_Parms, ActionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_SetActionKey_Statics::NewProp_NewKey = { "NewKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventSetActionKey_Parms, NewKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 2693575693
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_SetActionKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_SetActionKey_Statics::NewProp_ActionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_SetActionKey_Statics::NewProp_NewKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_SetActionKey_Statics::PropPointers) < 2048);
// ********** End Function SetActionKey Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_SetActionKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "SetActionKey", 	Z_Construct_UFunction_AZonefallPlayerCharacter_SetActionKey_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_SetActionKey_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_SetActionKey_Statics::ZonefallPlayerCharacter_eventSetActionKey_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_SetActionKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_SetActionKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_SetActionKey_Statics::ZonefallPlayerCharacter_eventSetActionKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_SetActionKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_SetActionKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execSetActionKey)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ActionId);
	P_GET_STRUCT(FKey,Z_Param_NewKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActionKey(Z_Param_ActionId,Z_Param_NewKey);
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function SetActionKey *****************************

// ********** Begin Class AZonefallPlayerCharacter Function SetCameraView **************************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_SetCameraView_Statics
{
	struct ZonefallPlayerCharacter_eventSetCameraView_Parms
	{
		EZonefallCameraView NewView;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Camera" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCameraView constinit property declarations *************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewView_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewView;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCameraView constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCameraView Property Definitions ************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_SetCameraView_Statics::NewProp_NewView_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_SetCameraView_Statics::NewProp_NewView = { "NewView", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventSetCameraView_Parms, NewView), Z_Construct_UEnum_UIWorld_EZonefallCameraView, METADATA_PARAMS(0, nullptr) }; // 4092881187
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_SetCameraView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_SetCameraView_Statics::NewProp_NewView_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_SetCameraView_Statics::NewProp_NewView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_SetCameraView_Statics::PropPointers) < 2048);
// ********** End Function SetCameraView Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_SetCameraView_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "SetCameraView", 	Z_Construct_UFunction_AZonefallPlayerCharacter_SetCameraView_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_SetCameraView_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_SetCameraView_Statics::ZonefallPlayerCharacter_eventSetCameraView_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_SetCameraView_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_SetCameraView_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_SetCameraView_Statics::ZonefallPlayerCharacter_eventSetCameraView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_SetCameraView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_SetCameraView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execSetCameraView)
{
	P_GET_ENUM(EZonefallCameraView,Z_Param_NewView);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraView(EZonefallCameraView(Z_Param_NewView));
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function SetCameraView ****************************

// ********** Begin Class AZonefallPlayerCharacter Function StartDeadEye ***************************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_StartDeadEye_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|DeadEye" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartDeadEye constinit property declarations **************************
// ********** End Function StartDeadEye constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_StartDeadEye_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "StartDeadEye", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_StartDeadEye_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_StartDeadEye_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_StartDeadEye()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_StartDeadEye_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execStartDeadEye)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartDeadEye();
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function StartDeadEye *****************************

// ********** Begin Class AZonefallPlayerCharacter Function StopDeadEye ****************************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_StopDeadEye_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|DeadEye" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StopDeadEye constinit property declarations ***************************
// ********** End Function StopDeadEye constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_StopDeadEye_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "StopDeadEye", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_StopDeadEye_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_StopDeadEye_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_StopDeadEye()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_StopDeadEye_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execStopDeadEye)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopDeadEye();
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function StopDeadEye ******************************

// ********** Begin Class AZonefallPlayerCharacter Function ToggleCameraView ***********************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_ToggleCameraView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Camera" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ToggleCameraView constinit property declarations **********************
// ********** End Function ToggleCameraView constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_ToggleCameraView_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "ToggleCameraView", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_ToggleCameraView_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_ToggleCameraView_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_ToggleCameraView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_ToggleCameraView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execToggleCameraView)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleCameraView();
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function ToggleCameraView *************************

// ********** Begin Class AZonefallPlayerCharacter Function ToggleInventoryUI **********************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_ToggleInventoryUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Inventory" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ToggleInventoryUI constinit property declarations *********************
// ********** End Function ToggleInventoryUI constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_ToggleInventoryUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "ToggleInventoryUI", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_ToggleInventoryUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_ToggleInventoryUI_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_ToggleInventoryUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_ToggleInventoryUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execToggleInventoryUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleInventoryUI();
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function ToggleInventoryUI ************************

// ********** Begin Class AZonefallPlayerCharacter Function TraceInteractable **********************
struct Z_Construct_UFunction_AZonefallPlayerCharacter_TraceInteractable_Statics
{
	struct ZonefallPlayerCharacter_eventTraceInteractable_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zonefall|Interaction" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function TraceInteractable constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TraceInteractable constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TraceInteractable Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZonefallPlayerCharacter_TraceInteractable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallPlayerCharacter_eventTraceInteractable_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallPlayerCharacter_TraceInteractable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallPlayerCharacter_TraceInteractable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_TraceInteractable_Statics::PropPointers) < 2048);
// ********** End Function TraceInteractable Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallPlayerCharacter_TraceInteractable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallPlayerCharacter, nullptr, "TraceInteractable", 	Z_Construct_UFunction_AZonefallPlayerCharacter_TraceInteractable_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_TraceInteractable_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_TraceInteractable_Statics::ZonefallPlayerCharacter_eventTraceInteractable_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallPlayerCharacter_TraceInteractable_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallPlayerCharacter_TraceInteractable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallPlayerCharacter_TraceInteractable_Statics::ZonefallPlayerCharacter_eventTraceInteractable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallPlayerCharacter_TraceInteractable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallPlayerCharacter_TraceInteractable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallPlayerCharacter::execTraceInteractable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->TraceInteractable();
	P_NATIVE_END;
}
// ********** End Class AZonefallPlayerCharacter Function TraceInteractable ************************

// ********** Begin Class AZonefallPlayerCharacter *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AZonefallPlayerCharacter;
UClass* AZonefallPlayerCharacter::GetPrivateStaticClass()
{
	using TClass = AZonefallPlayerCharacter;
	if (!Z_Registration_Info_UClass_AZonefallPlayerCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallPlayerCharacter"),
			Z_Registration_Info_UClass_AZonefallPlayerCharacter.InnerSingleton,
			StaticRegisterNativesAZonefallPlayerCharacter,
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
	return Z_Registration_Info_UClass_AZonefallPlayerCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AZonefallPlayerCharacter_NoRegister()
{
	return AZonefallPlayerCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AZonefallPlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Fully code-driven main player character for Zonefall.\n *\n *  - Third-person (spring-arm) AND first-person cameras with a one-key toggle.\n *  - Modern Enhanced Input built entirely in C++ \xe2\x80\x94 no editor assets required.\n *  - Key bindings are exposed to Config/DefaultInput.ini so they can be re-bound\n *    without recompiling ([/Script/UIWorld.ZonefallPlayerCharacter]).\n *  - Walk / sprint / crouch / jump / interact, gamepad supported out of the box.\n *\n * Drop it in as your GameMode's DefaultPawnClass (or subclass it in Blueprint to\n * assign a skeletal mesh / anim blueprint).\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/ZonefallPlayerCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fully code-driven main player character for Zonefall.\n\n - Third-person (spring-arm) AND first-person cameras with a one-key toggle.\n - Modern Enhanced Input built entirely in C++ \xe2\x80\x94 no editor assets required.\n - Key bindings are exposed to Config/DefaultInput.ini so they can be re-bound\n   without recompiling ([/Script/UIWorld.ZonefallPlayerCharacter]).\n - Walk / sprint / crouch / jump / interact, gamepad supported out of the box.\n\nDrop it in as your GameMode's DefaultPawnClass (or subclass it in Blueprint to\nassign a skeletal mesh / anim blueprint)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Zonefall|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Components ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Components ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonCamera_MetaData[] = {
		{ "Category", "Zonefall|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCamera_MetaData[] = {
		{ "Category", "Zonefall|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraView_MetaData[] = {
		{ "Category", "Zonefall|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Camera tuning ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Camera tuning ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonArmLength_MetaData[] = {
		{ "Category", "Zonefall|Camera" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonSocketOffset_MetaData[] = {
		{ "Category", "Zonefall|Camera" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraOffset_MetaData[] = {
		{ "Category", "Zonefall|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Relative to the capsule; ~eye height so it works even before a mesh is assigned.\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Relative to the capsule; ~eye height so it works even before a mesh is assigned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookSensitivity_MetaData[] = {
		{ "Category", "Zonefall|Camera|Look" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.05" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertLookY_MetaData[] = {
		{ "Category", "Zonefall|Camera|Look" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Zonefall|Movement" },
		{ "ClampMin", "10.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Movement tuning ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Movement tuning ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Zonefall|Movement" },
		{ "ClampMin", "10.0" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchSpeed_MetaData[] = {
		{ "Category", "Zonefall|Movement" },
		{ "ClampMin", "10.0" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionRange_MetaData[] = {
		{ "Category", "Zonefall|Interaction" },
		{ "ClampMin", "10.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Interaction ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Interaction ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "Category", "Zonefall|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Inventory (replicated for online play) ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Inventory (replicated for online play) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryWidgetClass_MetaData[] = {
		{ "Category", "Zonefall|Inventory|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Widget class used for the in-game inventory. Defaults to the C++ self-assembling one.\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Widget class used for the in-game inventory. Defaults to the C++ self-assembling one." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Zonefall|Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Weapons (held in hand, server-authoritative, replicated) ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Weapons (held in hand, server-authoritative, replicated) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapons_MetaData[] = {
		{ "Category", "Zonefall|Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponWheelWidgetClass_MetaData[] = {
		{ "Category", "Zonefall|Weapon|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional widget class for the radial weapon wheel (defaults to the C++ self-assembling one).\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional widget class for the radial weapon wheel (defaults to the C++ self-assembling one)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadEyeTimeDilation_MetaData[] = {
		{ "Category", "Zonefall|DeadEye" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.05" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Dead Eye (RDR2-style slow motion) ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Dead Eye (RDR2-style slow motion) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadEyeDrainPerSecond_MetaData[] = {
		{ "Category", "Zonefall|DeadEye" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.05" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadEyeRefillPerSecond_MetaData[] = {
		{ "Category", "Zonefall|DeadEye" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadEyeWidgetClass_MetaData[] = {
		{ "Category", "Zonefall|DeadEye|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional widget class for the Dead Eye meter HUD (defaults to the C++ self-assembling one).\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional widget class for the Dead Eye meter HUD (defaults to the C++ self-assembling one)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireMontage_MetaData[] = {
		{ "Category", "Zonefall|Weapon|Anim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional anim montage played when firing (assign in a Blueprint subclass).\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional anim montage played when firing (assign in a Blueprint subclass)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Zonefall|Health" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Health / damage / death ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Health / damage / death ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegenPerSecond_MetaData[] = {
		{ "Category", "Zonefall|Health" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegenDelay_MetaData[] = {
		{ "Category", "Zonefall|Health" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnDelay_MetaData[] = {
		{ "Category", "Zonefall|Health" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "Zonefall|Health" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDied_MetaData[] = {
		{ "Category", "Zonefall|Health" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimFOV_MetaData[] = {
		{ "Category", "Zonefall|Aim" },
		{ "ClampMax", "120.0" },
		{ "ClampMin", "20.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Aiming (ADS) ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Aiming (ADS) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFOV_MetaData[] = {
		{ "Category", "Zonefall|Aim" },
		{ "ClampMax", "120.0" },
		{ "ClampMin", "40.0" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "Zonefall|HUD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- HUD ---\n// Optional widget class for the self-assembling HUD (health/ammo/minimap).\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- HUD ---\nOptional widget class for the self-assembling HUD (health/ammo/minimap)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveForwardKey_MetaData[] = {
		{ "Category", "Zonefall|Input|Keys" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Config-driven key bindings (editable in DefaultInput.ini, no recompile needed) ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Config-driven key bindings (editable in DefaultInput.ini, no recompile needed) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveBackKey_MetaData[] = {
		{ "Category", "Zonefall|Input|Keys" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveLeftKey_MetaData[] = {
		{ "Category", "Zonefall|Input|Keys" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveRightKey_MetaData[] = {
		{ "Category", "Zonefall|Input|Keys" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpKey_MetaData[] = {
		{ "Category", "Zonefall|Input|Keys" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintKey_MetaData[] = {
		{ "Category", "Zonefall|Input|Keys" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchKey_MetaData[] = {
		{ "Category", "Zonefall|Input|Keys" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractKey_MetaData[] = {
		{ "Category", "Zonefall|Input|Keys" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToggleCameraKey_MetaData[] = {
		{ "Category", "Zonefall|Input|Keys" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropKey_MetaData[] = {
		{ "Category", "Zonefall|Input|Keys" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryKey_MetaData[] = {
		{ "Category", "Zonefall|Input|Keys" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseKey_MetaData[] = {
		{ "Category", "Zonefall|Input|Keys" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Opens the pause menu. Default Backspace because Esc ends Play-In-Editor sessions.\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Opens the pause menu. Default Backspace because Esc ends Play-In-Editor sessions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponWheelKey_MetaData[] = {
		{ "Category", "Zonefall|Input|Keys" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hold to open the weapon wheel (slows time while open).\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hold to open the weapon wheel (slows time while open)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadEyeKey_MetaData[] = {
		{ "Category", "Zonefall|Input|Keys" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hold for Dead Eye slow motion.\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hold for Dead Eye slow motion." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireKey_MetaData[] = {
		{ "Category", "Zonefall|Input|Keys" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fire the equipped weapon.\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fire the equipped weapon." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimKey_MetaData[] = {
		{ "Category", "Zonefall|Input|Keys" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Aim down sights (hold).\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Aim down sights (hold)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCameraViewChanged_MetaData[] = {
		{ "Category", "Zonefall|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Blueprint hooks / events ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Blueprint hooks / events ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Move_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Look_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Jump_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Sprint_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Crouch_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Interact_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_ToggleCamera_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Drop_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Inventory_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Pause_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_WeaponWheel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_DeadEye_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Fire_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Aim_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponWheelWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadEyeWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Health / aim replicated state ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Health / aim replicated state ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAiming_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/ZonefallPlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AZonefallPlayerCharacter constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCamera;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CameraView_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CameraView;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThirdPersonArmLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThirdPersonSocketOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirstPersonCameraOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookSensitivity;
	static void NewProp_bInvertLookY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertLookY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionRange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InventoryWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapons;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponWheelWidgetClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeadEyeTimeDilation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeadEyeDrainPerSecond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeadEyeRefillPerSecond;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DeadEyeWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthRegenPerSecond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthRegenDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnDelay;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDied;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultFOV;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveForwardKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveBackKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveLeftKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveRightKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JumpKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SprintKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CrouchKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ToggleCameraKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DropKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PauseKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponWheelKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeadEyeKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FireKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimKey;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCameraViewChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Move;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Look;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Jump;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Sprint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Crouch;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Interact;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_ToggleCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Drop;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Inventory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Pause;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_WeaponWheel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_DeadEye;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Fire;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Aim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryWidgetInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponWheelWidgetInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeadEyeWidgetInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDWidgetInstance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static void NewProp_bIsDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
	static void NewProp_bIsAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AZonefallPlayerCharacter constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CloseInventoryUI"), .Pointer = &AZonefallPlayerCharacter::execCloseInventoryUI },
		{ .NameUTF8 = UTF8TEXT("CloseWeaponWheel"), .Pointer = &AZonefallPlayerCharacter::execCloseWeaponWheel },
		{ .NameUTF8 = UTF8TEXT("FireWeapon"), .Pointer = &AZonefallPlayerCharacter::execFireWeapon },
		{ .NameUTF8 = UTF8TEXT("GetActionKey"), .Pointer = &AZonefallPlayerCharacter::execGetActionKey },
		{ .NameUTF8 = UTF8TEXT("GetBindableActions"), .Pointer = &AZonefallPlayerCharacter::execGetBindableActions },
		{ .NameUTF8 = UTF8TEXT("GetDeadEyeFraction"), .Pointer = &AZonefallPlayerCharacter::execGetDeadEyeFraction },
		{ .NameUTF8 = UTF8TEXT("GetHealth"), .Pointer = &AZonefallPlayerCharacter::execGetHealth },
		{ .NameUTF8 = UTF8TEXT("GetHealthFraction"), .Pointer = &AZonefallPlayerCharacter::execGetHealthFraction },
		{ .NameUTF8 = UTF8TEXT("GetInventory"), .Pointer = &AZonefallPlayerCharacter::execGetInventory },
		{ .NameUTF8 = UTF8TEXT("GetMaxHealth"), .Pointer = &AZonefallPlayerCharacter::execGetMaxHealth },
		{ .NameUTF8 = UTF8TEXT("GetWeapons"), .Pointer = &AZonefallPlayerCharacter::execGetWeapons },
		{ .NameUTF8 = UTF8TEXT("HandleEquippedWeaponChanged"), .Pointer = &AZonefallPlayerCharacter::execHandleEquippedWeaponChanged },
		{ .NameUTF8 = UTF8TEXT("HandleOnlineMatchReady"), .Pointer = &AZonefallPlayerCharacter::execHandleOnlineMatchReady },
		{ .NameUTF8 = UTF8TEXT("Heal"), .Pointer = &AZonefallPlayerCharacter::execHeal },
		{ .NameUTF8 = UTF8TEXT("IsAiming"), .Pointer = &AZonefallPlayerCharacter::execIsAiming },
		{ .NameUTF8 = UTF8TEXT("IsDead"), .Pointer = &AZonefallPlayerCharacter::execIsDead },
		{ .NameUTF8 = UTF8TEXT("IsDeadEyeActive"), .Pointer = &AZonefallPlayerCharacter::execIsDeadEyeActive },
		{ .NameUTF8 = UTF8TEXT("IsFirstPerson"), .Pointer = &AZonefallPlayerCharacter::execIsFirstPerson },
		{ .NameUTF8 = UTF8TEXT("Multicast_DryFireFX"), .Pointer = &AZonefallPlayerCharacter::execMulticast_DryFireFX },
		{ .NameUTF8 = UTF8TEXT("Multicast_FireFX"), .Pointer = &AZonefallPlayerCharacter::execMulticast_FireFX },
		{ .NameUTF8 = UTF8TEXT("Multicast_PlayFireMontage"), .Pointer = &AZonefallPlayerCharacter::execMulticast_PlayFireMontage },
		{ .NameUTF8 = UTF8TEXT("OnRep_Health"), .Pointer = &AZonefallPlayerCharacter::execOnRep_Health },
		{ .NameUTF8 = UTF8TEXT("OnRep_IsAiming"), .Pointer = &AZonefallPlayerCharacter::execOnRep_IsAiming },
		{ .NameUTF8 = UTF8TEXT("OpenWeaponWheel"), .Pointer = &AZonefallPlayerCharacter::execOpenWeaponWheel },
		{ .NameUTF8 = UTF8TEXT("RebuildInputMappings"), .Pointer = &AZonefallPlayerCharacter::execRebuildInputMappings },
		{ .NameUTF8 = UTF8TEXT("RequestDropItem"), .Pointer = &AZonefallPlayerCharacter::execRequestDropItem },
		{ .NameUTF8 = UTF8TEXT("RequestEquipWeapon"), .Pointer = &AZonefallPlayerCharacter::execRequestEquipWeapon },
		{ .NameUTF8 = UTF8TEXT("RequestUseItem"), .Pointer = &AZonefallPlayerCharacter::execRequestUseItem },
		{ .NameUTF8 = UTF8TEXT("Server_DropItem"), .Pointer = &AZonefallPlayerCharacter::execServer_DropItem },
		{ .NameUTF8 = UTF8TEXT("Server_EquipWeapon"), .Pointer = &AZonefallPlayerCharacter::execServer_EquipWeapon },
		{ .NameUTF8 = UTF8TEXT("Server_FireWeapon"), .Pointer = &AZonefallPlayerCharacter::execServer_FireWeapon },
		{ .NameUTF8 = UTF8TEXT("Server_PickupItem"), .Pointer = &AZonefallPlayerCharacter::execServer_PickupItem },
		{ .NameUTF8 = UTF8TEXT("Server_SetAiming"), .Pointer = &AZonefallPlayerCharacter::execServer_SetAiming },
		{ .NameUTF8 = UTF8TEXT("Server_UseItem"), .Pointer = &AZonefallPlayerCharacter::execServer_UseItem },
		{ .NameUTF8 = UTF8TEXT("SetActionKey"), .Pointer = &AZonefallPlayerCharacter::execSetActionKey },
		{ .NameUTF8 = UTF8TEXT("SetCameraView"), .Pointer = &AZonefallPlayerCharacter::execSetCameraView },
		{ .NameUTF8 = UTF8TEXT("StartDeadEye"), .Pointer = &AZonefallPlayerCharacter::execStartDeadEye },
		{ .NameUTF8 = UTF8TEXT("StopDeadEye"), .Pointer = &AZonefallPlayerCharacter::execStopDeadEye },
		{ .NameUTF8 = UTF8TEXT("ToggleCameraView"), .Pointer = &AZonefallPlayerCharacter::execToggleCameraView },
		{ .NameUTF8 = UTF8TEXT("ToggleInventoryUI"), .Pointer = &AZonefallPlayerCharacter::execToggleInventoryUI },
		{ .NameUTF8 = UTF8TEXT("TraceInteractable"), .Pointer = &AZonefallPlayerCharacter::execTraceInteractable },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_BP_OnInteract, "BP_OnInteract" }, // 2255166854
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_CloseInventoryUI, "CloseInventoryUI" }, // 3710717121
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_CloseWeaponWheel, "CloseWeaponWheel" }, // 653256795
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_FireWeapon, "FireWeapon" }, // 1444074901
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_GetActionKey, "GetActionKey" }, // 839868659
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_GetBindableActions, "GetBindableActions" }, // 4016518958
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_GetDeadEyeFraction, "GetDeadEyeFraction" }, // 1460828803
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealth, "GetHealth" }, // 2231426117
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_GetHealthFraction, "GetHealthFraction" }, // 17136534
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_GetInventory, "GetInventory" }, // 3627257324
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_GetMaxHealth, "GetMaxHealth" }, // 3541554717
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_GetWeapons, "GetWeapons" }, // 2375932867
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_HandleEquippedWeaponChanged, "HandleEquippedWeaponChanged" }, // 3007198600
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_HandleOnlineMatchReady, "HandleOnlineMatchReady" }, // 1428432196
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_Heal, "Heal" }, // 78515882
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_IsAiming, "IsAiming" }, // 1872174252
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_IsDead, "IsDead" }, // 3239928793
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_IsDeadEyeActive, "IsDeadEyeActive" }, // 3141629231
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_IsFirstPerson, "IsFirstPerson" }, // 696447274
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_DryFireFX, "Multicast_DryFireFX" }, // 1771594779
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_FireFX, "Multicast_FireFX" }, // 3370661988
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_Multicast_PlayFireMontage, "Multicast_PlayFireMontage" }, // 1412264262
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_OnRep_Health, "OnRep_Health" }, // 1319244727
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_OnRep_IsAiming, "OnRep_IsAiming" }, // 2056268698
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_OpenWeaponWheel, "OpenWeaponWheel" }, // 2848257075
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_RebuildInputMappings, "RebuildInputMappings" }, // 186662212
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_RequestDropItem, "RequestDropItem" }, // 1480851533
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_RequestEquipWeapon, "RequestEquipWeapon" }, // 673072071
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_RequestUseItem, "RequestUseItem" }, // 3059634073
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_Server_DropItem, "Server_DropItem" }, // 28915524
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_Server_EquipWeapon, "Server_EquipWeapon" }, // 1859372756
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_Server_FireWeapon, "Server_FireWeapon" }, // 2104828407
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_Server_PickupItem, "Server_PickupItem" }, // 3390160793
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_Server_SetAiming, "Server_SetAiming" }, // 848877517
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_Server_UseItem, "Server_UseItem" }, // 633470303
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_SetActionKey, "SetActionKey" }, // 2814255765
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_SetCameraView, "SetCameraView" }, // 2754830628
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_StartDeadEye, "StartDeadEye" }, // 1897748911
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_StopDeadEye, "StopDeadEye" }, // 2995574202
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_ToggleCameraView, "ToggleCameraView" }, // 197628802
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_ToggleInventoryUI, "ToggleInventoryUI" }, // 527880729
		{ &Z_Construct_UFunction_AZonefallPlayerCharacter_TraceInteractable, "TraceInteractable" }, // 3982079216
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZonefallPlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AZonefallPlayerCharacter_Statics

// ********** Begin Class AZonefallPlayerCharacter Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_ThirdPersonCamera = { "ThirdPersonCamera", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, ThirdPersonCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonCamera_MetaData), NewProp_ThirdPersonCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_FirstPersonCamera = { "FirstPersonCamera", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, FirstPersonCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCamera_MetaData), NewProp_FirstPersonCamera_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_CameraView_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_CameraView = { "CameraView", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, CameraView), Z_Construct_UEnum_UIWorld_EZonefallCameraView, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraView_MetaData), NewProp_CameraView_MetaData) }; // 4092881187
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_ThirdPersonArmLength = { "ThirdPersonArmLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, ThirdPersonArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonArmLength_MetaData), NewProp_ThirdPersonArmLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_ThirdPersonSocketOffset = { "ThirdPersonSocketOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, ThirdPersonSocketOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonSocketOffset_MetaData), NewProp_ThirdPersonSocketOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_FirstPersonCameraOffset = { "FirstPersonCameraOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, FirstPersonCameraOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraOffset_MetaData), NewProp_FirstPersonCameraOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_LookSensitivity = { "LookSensitivity", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, LookSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookSensitivity_MetaData), NewProp_LookSensitivity_MetaData) };
void Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_bInvertLookY_SetBit(void* Obj)
{
	((AZonefallPlayerCharacter*)Obj)->bInvertLookY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_bInvertLookY = { "bInvertLookY", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AZonefallPlayerCharacter), &Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_bInvertLookY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertLookY_MetaData), NewProp_bInvertLookY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_CrouchSpeed = { "CrouchSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, CrouchSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchSpeed_MetaData), NewProp_CrouchSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_InteractionRange = { "InteractionRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, InteractionRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionRange_MetaData), NewProp_InteractionRange_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, Inventory), Z_Construct_UClass_UZonefallInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_InventoryWidgetClass = { "InventoryWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, InventoryWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryWidgetClass_MetaData), NewProp_InventoryWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, WeaponMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMesh_MetaData), NewProp_WeaponMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_Weapons = { "Weapons", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, Weapons), Z_Construct_UClass_UZonefallWeaponInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapons_MetaData), NewProp_Weapons_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_WeaponWheelWidgetClass = { "WeaponWheelWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, WeaponWheelWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponWheelWidgetClass_MetaData), NewProp_WeaponWheelWidgetClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_DeadEyeTimeDilation = { "DeadEyeTimeDilation", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, DeadEyeTimeDilation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadEyeTimeDilation_MetaData), NewProp_DeadEyeTimeDilation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_DeadEyeDrainPerSecond = { "DeadEyeDrainPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, DeadEyeDrainPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadEyeDrainPerSecond_MetaData), NewProp_DeadEyeDrainPerSecond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_DeadEyeRefillPerSecond = { "DeadEyeRefillPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, DeadEyeRefillPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadEyeRefillPerSecond_MetaData), NewProp_DeadEyeRefillPerSecond_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_DeadEyeWidgetClass = { "DeadEyeWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, DeadEyeWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadEyeWidgetClass_MetaData), NewProp_DeadEyeWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_FireMontage = { "FireMontage", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, FireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireMontage_MetaData), NewProp_FireMontage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_HealthRegenPerSecond = { "HealthRegenPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, HealthRegenPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthRegenPerSecond_MetaData), NewProp_HealthRegenPerSecond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_HealthRegenDelay = { "HealthRegenDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, HealthRegenDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthRegenDelay_MetaData), NewProp_HealthRegenDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_RespawnDelay = { "RespawnDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, RespawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnDelay_MetaData), NewProp_RespawnDelay_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, OnHealthChanged), Z_Construct_UDelegateFunction_UIWorld_ZonefallHealthChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 3232038927
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_OnDied = { "OnDied", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, OnDied), Z_Construct_UDelegateFunction_UIWorld_ZonefallCharacterDied__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDied_MetaData), NewProp_OnDied_MetaData) }; // 2120539733
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_AimFOV = { "AimFOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, AimFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimFOV_MetaData), NewProp_AimFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_DefaultFOV = { "DefaultFOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, DefaultFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFOV_MetaData), NewProp_DefaultFOV_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, HUDWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetClass_MetaData), NewProp_HUDWidgetClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_MoveForwardKey = { "MoveForwardKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, MoveForwardKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveForwardKey_MetaData), NewProp_MoveForwardKey_MetaData) }; // 2693575693
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_MoveBackKey = { "MoveBackKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, MoveBackKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveBackKey_MetaData), NewProp_MoveBackKey_MetaData) }; // 2693575693
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_MoveLeftKey = { "MoveLeftKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, MoveLeftKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveLeftKey_MetaData), NewProp_MoveLeftKey_MetaData) }; // 2693575693
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_MoveRightKey = { "MoveRightKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, MoveRightKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveRightKey_MetaData), NewProp_MoveRightKey_MetaData) }; // 2693575693
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_JumpKey = { "JumpKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, JumpKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpKey_MetaData), NewProp_JumpKey_MetaData) }; // 2693575693
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_SprintKey = { "SprintKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, SprintKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintKey_MetaData), NewProp_SprintKey_MetaData) }; // 2693575693
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_CrouchKey = { "CrouchKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, CrouchKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchKey_MetaData), NewProp_CrouchKey_MetaData) }; // 2693575693
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_InteractKey = { "InteractKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, InteractKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractKey_MetaData), NewProp_InteractKey_MetaData) }; // 2693575693
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_ToggleCameraKey = { "ToggleCameraKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, ToggleCameraKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToggleCameraKey_MetaData), NewProp_ToggleCameraKey_MetaData) }; // 2693575693
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_DropKey = { "DropKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, DropKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropKey_MetaData), NewProp_DropKey_MetaData) }; // 2693575693
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_InventoryKey = { "InventoryKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, InventoryKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryKey_MetaData), NewProp_InventoryKey_MetaData) }; // 2693575693
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_PauseKey = { "PauseKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, PauseKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseKey_MetaData), NewProp_PauseKey_MetaData) }; // 2693575693
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_WeaponWheelKey = { "WeaponWheelKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, WeaponWheelKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponWheelKey_MetaData), NewProp_WeaponWheelKey_MetaData) }; // 2693575693
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_DeadEyeKey = { "DeadEyeKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, DeadEyeKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadEyeKey_MetaData), NewProp_DeadEyeKey_MetaData) }; // 2693575693
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_FireKey = { "FireKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, FireKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireKey_MetaData), NewProp_FireKey_MetaData) }; // 2693575693
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_AimKey = { "AimKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, AimKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimKey_MetaData), NewProp_AimKey_MetaData) }; // 2693575693
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_OnCameraViewChanged = { "OnCameraViewChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, OnCameraViewChanged), Z_Construct_UDelegateFunction_UIWorld_ZonefallCameraViewChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCameraViewChanged_MetaData), NewProp_OnCameraViewChanged_MetaData) }; // 2201909238
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMapping_MetaData), NewProp_InputMapping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_Move = { "IA_Move", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, IA_Move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Move_MetaData), NewProp_IA_Move_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_Look = { "IA_Look", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, IA_Look), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Look_MetaData), NewProp_IA_Look_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_Jump = { "IA_Jump", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, IA_Jump), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Jump_MetaData), NewProp_IA_Jump_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_Sprint = { "IA_Sprint", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, IA_Sprint), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Sprint_MetaData), NewProp_IA_Sprint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_Crouch = { "IA_Crouch", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, IA_Crouch), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Crouch_MetaData), NewProp_IA_Crouch_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_Interact = { "IA_Interact", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, IA_Interact), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Interact_MetaData), NewProp_IA_Interact_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_ToggleCamera = { "IA_ToggleCamera", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, IA_ToggleCamera), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_ToggleCamera_MetaData), NewProp_IA_ToggleCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_Drop = { "IA_Drop", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, IA_Drop), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Drop_MetaData), NewProp_IA_Drop_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_Inventory = { "IA_Inventory", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, IA_Inventory), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Inventory_MetaData), NewProp_IA_Inventory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_Pause = { "IA_Pause", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, IA_Pause), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Pause_MetaData), NewProp_IA_Pause_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_WeaponWheel = { "IA_WeaponWheel", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, IA_WeaponWheel), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_WeaponWheel_MetaData), NewProp_IA_WeaponWheel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_DeadEye = { "IA_DeadEye", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, IA_DeadEye), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_DeadEye_MetaData), NewProp_IA_DeadEye_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_Fire = { "IA_Fire", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, IA_Fire), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Fire_MetaData), NewProp_IA_Fire_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_Aim = { "IA_Aim", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, IA_Aim), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Aim_MetaData), NewProp_IA_Aim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_InventoryWidgetInstance = { "InventoryWidgetInstance", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, InventoryWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryWidgetInstance_MetaData), NewProp_InventoryWidgetInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_WeaponWheelWidgetInstance = { "WeaponWheelWidgetInstance", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, WeaponWheelWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponWheelWidgetInstance_MetaData), NewProp_WeaponWheelWidgetInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_DeadEyeWidgetInstance = { "DeadEyeWidgetInstance", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, DeadEyeWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadEyeWidgetInstance_MetaData), NewProp_DeadEyeWidgetInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_HUDWidgetInstance = { "HUDWidgetInstance", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, HUDWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetInstance_MetaData), NewProp_HUDWidgetInstance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallPlayerCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
void Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_bIsDead_SetBit(void* Obj)
{
	((AZonefallPlayerCharacter*)Obj)->bIsDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AZonefallPlayerCharacter), &Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDead_MetaData), NewProp_bIsDead_MetaData) };
void Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_bIsAiming_SetBit(void* Obj)
{
	((AZonefallPlayerCharacter*)Obj)->bIsAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_bIsAiming = { "bIsAiming", "OnRep_IsAiming", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AZonefallPlayerCharacter), &Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAiming_MetaData), NewProp_bIsAiming_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZonefallPlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_ThirdPersonCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_FirstPersonCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_CameraView_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_CameraView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_ThirdPersonArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_ThirdPersonSocketOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_FirstPersonCameraOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_LookSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_bInvertLookY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_SprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_CrouchSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_InteractionRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_Inventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_InventoryWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_WeaponMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_Weapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_WeaponWheelWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_DeadEyeTimeDilation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_DeadEyeDrainPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_DeadEyeRefillPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_DeadEyeWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_FireMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_HealthRegenPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_HealthRegenDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_RespawnDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_OnDied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_AimFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_DefaultFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_HUDWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_MoveForwardKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_MoveBackKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_MoveLeftKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_MoveRightKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_JumpKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_SprintKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_CrouchKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_InteractKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_ToggleCameraKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_DropKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_InventoryKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_PauseKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_WeaponWheelKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_DeadEyeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_FireKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_AimKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_OnCameraViewChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_InputMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_Move,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_Look,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_Jump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_Sprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_Crouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_Interact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_ToggleCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_Drop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_Inventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_Pause,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_WeaponWheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_DeadEye,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_Fire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_IA_Aim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_InventoryWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_WeaponWheelWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_DeadEyeWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_HUDWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_bIsDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallPlayerCharacter_Statics::NewProp_bIsAiming,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZonefallPlayerCharacter_Statics::PropPointers) < 2048);
// ********** End Class AZonefallPlayerCharacter Property Definitions ******************************
UObject* (*const Z_Construct_UClass_AZonefallPlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZonefallPlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AZonefallPlayerCharacter_Statics::ClassParams = {
	&AZonefallPlayerCharacter::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AZonefallPlayerCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AZonefallPlayerCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AZonefallPlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AZonefallPlayerCharacter_Statics::Class_MetaDataParams)
};
void AZonefallPlayerCharacter::StaticRegisterNativesAZonefallPlayerCharacter()
{
	UClass* Class = AZonefallPlayerCharacter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AZonefallPlayerCharacter_Statics::Funcs));
}
UClass* Z_Construct_UClass_AZonefallPlayerCharacter()
{
	if (!Z_Registration_Info_UClass_AZonefallPlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AZonefallPlayerCharacter.OuterSingleton, Z_Construct_UClass_AZonefallPlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AZonefallPlayerCharacter.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void AZonefallPlayerCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Health(TEXT("Health"));
	static FName Name_bIsDead(TEXT("bIsDead"));
	static FName Name_bIsAiming(TEXT("bIsAiming"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_bIsDead == ClassReps[(int32)ENetFields_Private::bIsDead].Property->GetFName()
		&& Name_bIsAiming == ClassReps[(int32)ENetFields_Private::bIsAiming].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AZonefallPlayerCharacter"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AZonefallPlayerCharacter);
AZonefallPlayerCharacter::~AZonefallPlayerCharacter() {}
// ********** End Class AZonefallPlayerCharacter ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Character_ZonefallPlayerCharacter_h__Script_UIWorld_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EZonefallCameraView_StaticEnum, TEXT("EZonefallCameraView"), &Z_Registration_Info_UEnum_EZonefallCameraView, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4092881187U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AZonefallPlayerCharacter, AZonefallPlayerCharacter::StaticClass, TEXT("AZonefallPlayerCharacter"), &Z_Registration_Info_UClass_AZonefallPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZonefallPlayerCharacter), 1889107979U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Character_ZonefallPlayerCharacter_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Character_ZonefallPlayerCharacter_h__Script_UIWorld_855415071{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Character_ZonefallPlayerCharacter_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Character_ZonefallPlayerCharacter_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Character_ZonefallPlayerCharacter_h__Script_UIWorld_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_Character_ZonefallPlayerCharacter_h__Script_UIWorld_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
