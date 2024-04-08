// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldAudioDataSystem/Public/WorldAudioDataVehAudioController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldAudioDataVehAudioController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_WorldAudioDataSystem();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UWADVehAudioPreset_NoRegister();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UWorldAudioDataVehAudioController();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UWorldAudioDataVehAudioController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWorldAudioDataVehAudioController::execStopController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldAudioDataVehAudioController::execSetVelocity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVelocity(Z_Param_InSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldAudioDataVehAudioController::execSetPreset)
	{
		P_GET_OBJECT(UWADVehAudioPreset,Z_Param_VehicleAudioPreset);
		P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreset(Z_Param_VehicleAudioPreset,Z_Param_Seed);
		P_NATIVE_END;
	}
	void UWorldAudioDataVehAudioController::StaticRegisterNativesUWorldAudioDataVehAudioController()
	{
		UClass* Class = UWorldAudioDataVehAudioController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPreset", &UWorldAudioDataVehAudioController::execSetPreset },
			{ "SetVelocity", &UWorldAudioDataVehAudioController::execSetVelocity },
			{ "StopController", &UWorldAudioDataVehAudioController::execStopController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetPreset_Statics
	{
		struct WorldAudioDataVehAudioController_eventSetPreset_Parms
		{
			UWADVehAudioPreset* VehicleAudioPreset;
			int32 Seed;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleAudioPreset;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetPreset_Statics::NewProp_VehicleAudioPreset = { "VehicleAudioPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldAudioDataVehAudioController_eventSetPreset_Parms, VehicleAudioPreset), Z_Construct_UClass_UWADVehAudioPreset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetPreset_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldAudioDataVehAudioController_eventSetPreset_Parms, Seed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetPreset_Statics::NewProp_VehicleAudioPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetPreset_Statics::NewProp_Seed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetPreset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldAudioDataVehAudioController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldAudioDataVehAudioController, nullptr, "SetPreset", nullptr, nullptr, Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetPreset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetPreset_Statics::WorldAudioDataVehAudioController_eventSetPreset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetPreset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetPreset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetPreset_Statics::WorldAudioDataVehAudioController_eventSetPreset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetVelocity_Statics
	{
		struct WorldAudioDataVehAudioController_eventSetVelocity_Parms
		{
			float InSpeed;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetVelocity_Statics::NewProp_InSpeed = { "InSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldAudioDataVehAudioController_eventSetVelocity_Parms, InSpeed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetVelocity_Statics::NewProp_InSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetVelocity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldAudioDataVehAudioController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldAudioDataVehAudioController, nullptr, "SetVelocity", nullptr, nullptr, Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetVelocity_Statics::WorldAudioDataVehAudioController_eventSetVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetVelocity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetVelocity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetVelocity_Statics::WorldAudioDataVehAudioController_eventSetVelocity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldAudioDataVehAudioController_StopController_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldAudioDataVehAudioController_StopController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldAudioDataVehAudioController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldAudioDataVehAudioController_StopController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldAudioDataVehAudioController, nullptr, "StopController", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldAudioDataVehAudioController_StopController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldAudioDataVehAudioController_StopController_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UWorldAudioDataVehAudioController_StopController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldAudioDataVehAudioController_StopController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldAudioDataVehAudioController);
	UClass* Z_Construct_UClass_UWorldAudioDataVehAudioController_NoRegister()
	{
		return UWorldAudioDataVehAudioController::StaticClass();
	}
	struct Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WADVehicleAudioPreset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WADVehicleAudioPreset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinEnginePitchOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinEnginePitchOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxEnginePitchOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxEnginePitchOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainEngineAudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainEngineAudioComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HornHonkAudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HornHonkAudioComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetPreset, "SetPreset" }, // 1767513161
		{ &Z_Construct_UFunction_UWorldAudioDataVehAudioController_SetVelocity, "SetVelocity" }, // 53731816
		{ &Z_Construct_UFunction_UWorldAudioDataVehAudioController_StopController, "StopController" }, // 1826485364
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "WorldAudioData" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "WorldAudioDataVehAudioController.h" },
		{ "ModuleRelativePath", "Public/WorldAudioDataVehAudioController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_WADVehicleAudioPreset_MetaData[] = {
		{ "Category", "WorldAudioDataVehAudioController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached preset\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataVehAudioController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached preset" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_WADVehicleAudioPreset = { "WADVehicleAudioPreset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioDataVehAudioController, WADVehicleAudioPreset), Z_Construct_UClass_UWADVehAudioPreset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_WADVehicleAudioPreset_MetaData), Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_WADVehicleAudioPreset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "WorldAudioDataVehAudioController" },
		{ "ModuleRelativePath", "Public/WorldAudioDataVehAudioController.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioDataVehAudioController, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_RandomSeed_MetaData), Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_RandomSeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_MinEnginePitchOffset_MetaData[] = {
		{ "Category", "WorldAudioDataVehAudioController" },
		{ "ModuleRelativePath", "Public/WorldAudioDataVehAudioController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_MinEnginePitchOffset = { "MinEnginePitchOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioDataVehAudioController, MinEnginePitchOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_MinEnginePitchOffset_MetaData), Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_MinEnginePitchOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_MaxEnginePitchOffset_MetaData[] = {
		{ "Category", "WorldAudioDataVehAudioController" },
		{ "ModuleRelativePath", "Public/WorldAudioDataVehAudioController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_MaxEnginePitchOffset = { "MaxEnginePitchOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioDataVehAudioController, MaxEnginePitchOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_MaxEnginePitchOffset_MetaData), Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_MaxEnginePitchOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_MainEngineAudioComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Main engine AC\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldAudioDataVehAudioController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main engine AC" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_MainEngineAudioComponent = { "MainEngineAudioComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioDataVehAudioController, MainEngineAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_MainEngineAudioComponent_MetaData), Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_MainEngineAudioComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_HornHonkAudioComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Main engine AC\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldAudioDataVehAudioController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main engine AC" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_HornHonkAudioComponent = { "HornHonkAudioComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioDataVehAudioController, HornHonkAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_HornHonkAudioComponent_MetaData), Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_HornHonkAudioComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_WADVehicleAudioPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_RandomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_MinEnginePitchOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_MaxEnginePitchOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_MainEngineAudioComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::NewProp_HornHonkAudioComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldAudioDataVehAudioController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::ClassParams = {
		&UWorldAudioDataVehAudioController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWorldAudioDataVehAudioController()
	{
		if (!Z_Registration_Info_UClass_UWorldAudioDataVehAudioController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldAudioDataVehAudioController.OuterSingleton, Z_Construct_UClass_UWorldAudioDataVehAudioController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldAudioDataVehAudioController.OuterSingleton;
	}
	template<> WORLDAUDIODATASYSTEM_API UClass* StaticClass<UWorldAudioDataVehAudioController>()
	{
		return UWorldAudioDataVehAudioController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldAudioDataVehAudioController);
	UWorldAudioDataVehAudioController::~UWorldAudioDataVehAudioController() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataVehAudioController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataVehAudioController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldAudioDataVehAudioController, UWorldAudioDataVehAudioController::StaticClass, TEXT("UWorldAudioDataVehAudioController"), &Z_Registration_Info_UClass_UWorldAudioDataVehAudioController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldAudioDataVehAudioController), 554373633U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataVehAudioController_h_1564022684(TEXT("/Script/WorldAudioDataSystem"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataVehAudioController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataVehAudioController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
