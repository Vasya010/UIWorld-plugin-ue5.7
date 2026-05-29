// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "World/ZonefallMinimapCapture.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeZonefallMinimapCapture() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
UIWORLD_API UClass* Z_Construct_UClass_AZonefallMinimapCapture();
UIWORLD_API UClass* Z_Construct_UClass_AZonefallMinimapCapture_NoRegister();
UPackage* Z_Construct_UPackage__Script_UIWorld();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AZonefallMinimapCapture Function GetOrthoWidth ***************************
struct Z_Construct_UFunction_AZonefallMinimapCapture_GetOrthoWidth_Statics
{
	struct ZonefallMinimapCapture_eventGetOrthoWidth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "ModuleRelativePath", "Public/World/ZonefallMinimapCapture.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetOrthoWidth constinit property declarations *************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOrthoWidth constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOrthoWidth Property Definitions ************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZonefallMinimapCapture_GetOrthoWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallMinimapCapture_eventGetOrthoWidth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallMinimapCapture_GetOrthoWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallMinimapCapture_GetOrthoWidth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallMinimapCapture_GetOrthoWidth_Statics::PropPointers) < 2048);
// ********** End Function GetOrthoWidth Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallMinimapCapture_GetOrthoWidth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallMinimapCapture, nullptr, "GetOrthoWidth", 	Z_Construct_UFunction_AZonefallMinimapCapture_GetOrthoWidth_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallMinimapCapture_GetOrthoWidth_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallMinimapCapture_GetOrthoWidth_Statics::ZonefallMinimapCapture_eventGetOrthoWidth_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallMinimapCapture_GetOrthoWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallMinimapCapture_GetOrthoWidth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallMinimapCapture_GetOrthoWidth_Statics::ZonefallMinimapCapture_eventGetOrthoWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallMinimapCapture_GetOrthoWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallMinimapCapture_GetOrthoWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallMinimapCapture::execGetOrthoWidth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetOrthoWidth();
	P_NATIVE_END;
}
// ********** End Class AZonefallMinimapCapture Function GetOrthoWidth *****************************

// ********** Begin Class AZonefallMinimapCapture Function GetRenderTarget *************************
struct Z_Construct_UFunction_AZonefallMinimapCapture_GetRenderTarget_Statics
{
	struct ZonefallMinimapCapture_eventGetRenderTarget_Parms
	{
		UTextureRenderTarget2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "ModuleRelativePath", "Public/World/ZonefallMinimapCapture.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRenderTarget constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRenderTarget constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRenderTarget Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZonefallMinimapCapture_GetRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZonefallMinimapCapture_eventGetRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZonefallMinimapCapture_GetRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZonefallMinimapCapture_GetRenderTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallMinimapCapture_GetRenderTarget_Statics::PropPointers) < 2048);
// ********** End Function GetRenderTarget Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZonefallMinimapCapture_GetRenderTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AZonefallMinimapCapture, nullptr, "GetRenderTarget", 	Z_Construct_UFunction_AZonefallMinimapCapture_GetRenderTarget_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallMinimapCapture_GetRenderTarget_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AZonefallMinimapCapture_GetRenderTarget_Statics::ZonefallMinimapCapture_eventGetRenderTarget_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZonefallMinimapCapture_GetRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZonefallMinimapCapture_GetRenderTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AZonefallMinimapCapture_GetRenderTarget_Statics::ZonefallMinimapCapture_eventGetRenderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZonefallMinimapCapture_GetRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZonefallMinimapCapture_GetRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZonefallMinimapCapture::execGetRenderTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetRenderTarget();
	P_NATIVE_END;
}
// ********** End Class AZonefallMinimapCapture Function GetRenderTarget ***************************

// ********** Begin Class AZonefallMinimapCapture **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AZonefallMinimapCapture;
UClass* AZonefallMinimapCapture::GetPrivateStaticClass()
{
	using TClass = AZonefallMinimapCapture;
	if (!Z_Registration_Info_UClass_AZonefallMinimapCapture.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ZonefallMinimapCapture"),
			Z_Registration_Info_UClass_AZonefallMinimapCapture.InnerSingleton,
			StaticRegisterNativesAZonefallMinimapCapture,
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
	return Z_Registration_Info_UClass_AZonefallMinimapCapture.InnerSingleton;
}
UClass* Z_Construct_UClass_AZonefallMinimapCapture_NoRegister()
{
	return AZonefallMinimapCapture::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AZonefallMinimapCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Level object that drives the round minimap. A top-down orthographic SceneCapture2D\n * renders into a runtime render target which the HUD displays. It follows the local\n * player every frame. Place one in the level, or the player character auto-spawns one.\n */" },
#endif
		{ "IncludePath", "World/ZonefallMinimapCapture.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/World/ZonefallMinimapCapture.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Level object that drives the round minimap. A top-down orthographic SceneCapture2D\nrenders into a runtime render target which the HUD displays. It follows the local\nplayer every frame. Place one in the level, or the player character auto-spawns one." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Capture_MetaData[] = {
		{ "Category", "Minimap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/World/ZonefallMinimapCapture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureHeight_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Height above the tracked actor the camera sits at.\n" },
#endif
		{ "ModuleRelativePath", "Public/World/ZonefallMinimapCapture.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Height above the tracked actor the camera sits at." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrthoWidth_MetaData[] = {
		{ "Category", "Minimap" },
		{ "ClampMin", "500.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// World units visible across the minimap (smaller = more zoomed in).\n" },
#endif
		{ "ModuleRelativePath", "Public/World/ZonefallMinimapCapture.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World units visible across the minimap (smaller = more zoomed in)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetSize_MetaData[] = {
		{ "Category", "Minimap" },
		{ "ClampMax", "2048" },
		{ "ClampMin", "128" },
		{ "ModuleRelativePath", "Public/World/ZonefallMinimapCapture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotateWithPlayer_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true the map rotates with the player's facing; otherwise it stays north-up.\n" },
#endif
		{ "ModuleRelativePath", "Public/World/ZonefallMinimapCapture.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true the map rotates with the player's facing; otherwise it stays north-up." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedActor_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional explicit actor to follow; defaults to the local player pawn.\n" },
#endif
		{ "ModuleRelativePath", "Public/World/ZonefallMinimapCapture.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional explicit actor to follow; defaults to the local player pawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/World/ZonefallMinimapCapture.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AZonefallMinimapCapture constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Capture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CaptureHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RenderTargetSize;
	static void NewProp_bRotateWithPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateWithPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AZonefallMinimapCapture constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetOrthoWidth"), .Pointer = &AZonefallMinimapCapture::execGetOrthoWidth },
		{ .NameUTF8 = UTF8TEXT("GetRenderTarget"), .Pointer = &AZonefallMinimapCapture::execGetRenderTarget },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AZonefallMinimapCapture_GetOrthoWidth, "GetOrthoWidth" }, // 3158554746
		{ &Z_Construct_UFunction_AZonefallMinimapCapture_GetRenderTarget, "GetRenderTarget" }, // 1318303643
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZonefallMinimapCapture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AZonefallMinimapCapture_Statics

// ********** Begin Class AZonefallMinimapCapture Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallMinimapCapture_Statics::NewProp_Capture = { "Capture", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallMinimapCapture, Capture), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Capture_MetaData), NewProp_Capture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZonefallMinimapCapture_Statics::NewProp_CaptureHeight = { "CaptureHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallMinimapCapture, CaptureHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureHeight_MetaData), NewProp_CaptureHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZonefallMinimapCapture_Statics::NewProp_OrthoWidth = { "OrthoWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallMinimapCapture, OrthoWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrthoWidth_MetaData), NewProp_OrthoWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AZonefallMinimapCapture_Statics::NewProp_RenderTargetSize = { "RenderTargetSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallMinimapCapture, RenderTargetSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetSize_MetaData), NewProp_RenderTargetSize_MetaData) };
void Z_Construct_UClass_AZonefallMinimapCapture_Statics::NewProp_bRotateWithPlayer_SetBit(void* Obj)
{
	((AZonefallMinimapCapture*)Obj)->bRotateWithPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AZonefallMinimapCapture_Statics::NewProp_bRotateWithPlayer = { "bRotateWithPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AZonefallMinimapCapture), &Z_Construct_UClass_AZonefallMinimapCapture_Statics::NewProp_bRotateWithPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotateWithPlayer_MetaData), NewProp_bRotateWithPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallMinimapCapture_Statics::NewProp_TrackedActor = { "TrackedActor", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallMinimapCapture, TrackedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedActor_MetaData), NewProp_TrackedActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZonefallMinimapCapture_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZonefallMinimapCapture, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTarget_MetaData), NewProp_RenderTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZonefallMinimapCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallMinimapCapture_Statics::NewProp_Capture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallMinimapCapture_Statics::NewProp_CaptureHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallMinimapCapture_Statics::NewProp_OrthoWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallMinimapCapture_Statics::NewProp_RenderTargetSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallMinimapCapture_Statics::NewProp_bRotateWithPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallMinimapCapture_Statics::NewProp_TrackedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZonefallMinimapCapture_Statics::NewProp_RenderTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZonefallMinimapCapture_Statics::PropPointers) < 2048);
// ********** End Class AZonefallMinimapCapture Property Definitions *******************************
UObject* (*const Z_Construct_UClass_AZonefallMinimapCapture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UIWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZonefallMinimapCapture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AZonefallMinimapCapture_Statics::ClassParams = {
	&AZonefallMinimapCapture::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AZonefallMinimapCapture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AZonefallMinimapCapture_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AZonefallMinimapCapture_Statics::Class_MetaDataParams), Z_Construct_UClass_AZonefallMinimapCapture_Statics::Class_MetaDataParams)
};
void AZonefallMinimapCapture::StaticRegisterNativesAZonefallMinimapCapture()
{
	UClass* Class = AZonefallMinimapCapture::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AZonefallMinimapCapture_Statics::Funcs));
}
UClass* Z_Construct_UClass_AZonefallMinimapCapture()
{
	if (!Z_Registration_Info_UClass_AZonefallMinimapCapture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AZonefallMinimapCapture.OuterSingleton, Z_Construct_UClass_AZonefallMinimapCapture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AZonefallMinimapCapture.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AZonefallMinimapCapture);
AZonefallMinimapCapture::~AZonefallMinimapCapture() {}
// ********** End Class AZonefallMinimapCapture ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_World_ZonefallMinimapCapture_h__Script_UIWorld_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AZonefallMinimapCapture, AZonefallMinimapCapture::StaticClass, TEXT("AZonefallMinimapCapture"), &Z_Registration_Info_UClass_AZonefallMinimapCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZonefallMinimapCapture), 1346844265U) },
	};
}; // Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_World_ZonefallMinimapCapture_h__Script_UIWorld_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_World_ZonefallMinimapCapture_h__Script_UIWorld_1413563449{
	TEXT("/Script/UIWorld"),
	Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_World_ZonefallMinimapCapture_h__Script_UIWorld_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zonefallprotocol_Plugins_UIWorld_Source_UIWorld_Public_World_ZonefallMinimapCapture_h__Script_UIWorld_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
