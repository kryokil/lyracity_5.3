// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Camera/CitySampleCamera_Drone.h"
#include "CitySample/Public/Util/CitySampleInterpolators.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleCamera_Drone() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCamera_Drone();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCamera_Drone_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCameraMode();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	void UCitySampleCamera_Drone::StaticRegisterNativesUCitySampleCamera_Drone()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleCamera_Drone);
	UClass* Z_Construct_UClass_UCitySampleCamera_Drone_NoRegister()
	{
		return UCitySampleCamera_Drone::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleCamera_Drone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DroneTiltInterpolator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DroneTiltInterpolator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DroneTiltInterpSpeed_Accel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DroneTiltInterpSpeed_Accel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DroneTiltInterpSpeed_Decel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DroneTiltInterpSpeed_Decel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TiltUpVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TiltUpVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTiltLimits_MetaData[];
#endif
		static void NewProp_bEnableTiltLimits_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTiltLimits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TiltLimits_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TiltLimits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleCamera_Drone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCitySampleCameraMode,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCamera_Drone_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCamera_Drone_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Camera mode for the drone\n */" },
#endif
		{ "IncludePath", "Camera/CitySampleCamera_Drone.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCamera_Drone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera mode for the drone" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_DroneTiltInterpolator_MetaData[] = {
		{ "Category", "CitySampleCamera_Drone" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCamera_Drone.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_DroneTiltInterpolator = { "DroneTiltInterpolator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCamera_Drone, DroneTiltInterpolator), Z_Construct_UScriptStruct_FIIRInterpolatorRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_DroneTiltInterpolator_MetaData), Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_DroneTiltInterpolator_MetaData) }; // 1071796770
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_DroneTiltInterpSpeed_Accel_MetaData[] = {
		{ "Category", "CitySampleCamera_Drone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How quickly/aggressively to interp into the tilted position. */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCamera_Drone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How quickly/aggressively to interp into the tilted position." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_DroneTiltInterpSpeed_Accel = { "DroneTiltInterpSpeed_Accel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCamera_Drone, DroneTiltInterpSpeed_Accel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_DroneTiltInterpSpeed_Accel_MetaData), Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_DroneTiltInterpSpeed_Accel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_DroneTiltInterpSpeed_Decel_MetaData[] = {
		{ "Category", "CitySampleCamera_Drone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How quickly/aggressively to interp back to neutral when decelerating */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCamera_Drone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How quickly/aggressively to interp back to neutral when decelerating" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_DroneTiltInterpSpeed_Decel = { "DroneTiltInterpSpeed_Decel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCamera_Drone, DroneTiltInterpSpeed_Decel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_DroneTiltInterpSpeed_Decel_MetaData), Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_DroneTiltInterpSpeed_Decel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_TiltUpVector_MetaData[] = {
		{ "Category", "CitySampleCamera_Drone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The drone's up vector during neutral hovering. The magnitude determines resistance to tilt when moving. */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCamera_Drone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The drone's up vector during neutral hovering. The magnitude determines resistance to tilt when moving." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_TiltUpVector = { "TiltUpVector", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCamera_Drone, TiltUpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_TiltUpVector_MetaData), Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_TiltUpVector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_bEnableTiltLimits_MetaData[] = {
		{ "Category", "CitySampleCamera_Drone" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCamera_Drone.h" },
	};
#endif
	void Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_bEnableTiltLimits_SetBit(void* Obj)
	{
		((UCitySampleCamera_Drone*)Obj)->bEnableTiltLimits = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_bEnableTiltLimits = { "bEnableTiltLimits", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleCamera_Drone), &Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_bEnableTiltLimits_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_bEnableTiltLimits_MetaData), Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_bEnableTiltLimits_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_TiltLimits_MetaData[] = {
		{ "Category", "CitySampleCamera_Drone" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCamera_Drone.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_TiltLimits = { "TiltLimits", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCamera_Drone, TiltLimits), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_TiltLimits_MetaData), Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_TiltLimits_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleCamera_Drone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_DroneTiltInterpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_DroneTiltInterpSpeed_Accel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_DroneTiltInterpSpeed_Decel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_TiltUpVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_bEnableTiltLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCamera_Drone_Statics::NewProp_TiltLimits,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleCamera_Drone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleCamera_Drone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleCamera_Drone_Statics::ClassParams = {
		&UCitySampleCamera_Drone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCitySampleCamera_Drone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCamera_Drone_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCamera_Drone_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleCamera_Drone_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCamera_Drone_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCitySampleCamera_Drone()
	{
		if (!Z_Registration_Info_UClass_UCitySampleCamera_Drone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleCamera_Drone.OuterSingleton, Z_Construct_UClass_UCitySampleCamera_Drone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleCamera_Drone.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleCamera_Drone>()
	{
		return UCitySampleCamera_Drone::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleCamera_Drone);
	UCitySampleCamera_Drone::~UCitySampleCamera_Drone() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCamera_Drone_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCamera_Drone_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleCamera_Drone, UCitySampleCamera_Drone::StaticClass, TEXT("UCitySampleCamera_Drone"), &Z_Registration_Info_UClass_UCitySampleCamera_Drone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleCamera_Drone), 67155007U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCamera_Drone_h_1288703244(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCamera_Drone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCamera_Drone_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
