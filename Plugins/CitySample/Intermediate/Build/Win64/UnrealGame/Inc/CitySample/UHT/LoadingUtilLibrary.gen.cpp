// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Util/LoadingUtilLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingUtilLibrary() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_ULoadingUtilLibrary();
	CITYSAMPLE_API UClass* Z_Construct_UClass_ULoadingUtilLibrary_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	DEFINE_FUNCTION(ULoadingUtilLibrary::execFlushLevelStreaming)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULoadingUtilLibrary::FlushLevelStreaming(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadingUtilLibrary::execForceGarbageCollection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		ULoadingUtilLibrary::ForceGarbageCollection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadingUtilLibrary::execApplyCustomPriorityLoading)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_UseHighPriorityLoading);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxAsyncLoadingMilliSeconds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxActorUpdateMilliSeconds);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_MaxMassActorDestructionTimeLimit);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_MaxMassActorSpawnTimeLimit);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULoadingUtilLibrary::ApplyCustomPriorityLoading(Z_Param_WorldContextObject,Z_Param_UseHighPriorityLoading,Z_Param_MaxAsyncLoadingMilliSeconds,Z_Param_MaxActorUpdateMilliSeconds,Z_Param_MaxMassActorDestructionTimeLimit,Z_Param_MaxMassActorSpawnTimeLimit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadingUtilLibrary::execApplyHighestPriorityLoading)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULoadingUtilLibrary::ApplyHighestPriorityLoading(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadingUtilLibrary::execApplyStreamingPriorityLoading)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULoadingUtilLibrary::ApplyStreamingPriorityLoading(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadingUtilLibrary::execApplyDefaultPriorityLoading)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULoadingUtilLibrary::ApplyDefaultPriorityLoading(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void ULoadingUtilLibrary::StaticRegisterNativesULoadingUtilLibrary()
	{
		UClass* Class = ULoadingUtilLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyCustomPriorityLoading", &ULoadingUtilLibrary::execApplyCustomPriorityLoading },
			{ "ApplyDefaultPriorityLoading", &ULoadingUtilLibrary::execApplyDefaultPriorityLoading },
			{ "ApplyHighestPriorityLoading", &ULoadingUtilLibrary::execApplyHighestPriorityLoading },
			{ "ApplyStreamingPriorityLoading", &ULoadingUtilLibrary::execApplyStreamingPriorityLoading },
			{ "FlushLevelStreaming", &ULoadingUtilLibrary::execFlushLevelStreaming },
			{ "ForceGarbageCollection", &ULoadingUtilLibrary::execForceGarbageCollection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics
	{
		struct LoadingUtilLibrary_eventApplyCustomPriorityLoading_Parms
		{
			const UObject* WorldContextObject;
			bool UseHighPriorityLoading;
			float MaxAsyncLoadingMilliSeconds;
			float MaxActorUpdateMilliSeconds;
			double MaxMassActorDestructionTimeLimit;
			double MaxMassActorSpawnTimeLimit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_UseHighPriorityLoading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseHighPriorityLoading;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAsyncLoadingMilliSeconds;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxActorUpdateMilliSeconds;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxMassActorDestructionTimeLimit;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxMassActorSpawnTimeLimit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadingUtilLibrary_eventApplyCustomPriorityLoading_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::NewProp_WorldContextObject_MetaData) };
	void Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::NewProp_UseHighPriorityLoading_SetBit(void* Obj)
	{
		((LoadingUtilLibrary_eventApplyCustomPriorityLoading_Parms*)Obj)->UseHighPriorityLoading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::NewProp_UseHighPriorityLoading = { "UseHighPriorityLoading", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LoadingUtilLibrary_eventApplyCustomPriorityLoading_Parms), &Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::NewProp_UseHighPriorityLoading_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::NewProp_MaxAsyncLoadingMilliSeconds = { "MaxAsyncLoadingMilliSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadingUtilLibrary_eventApplyCustomPriorityLoading_Parms, MaxAsyncLoadingMilliSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::NewProp_MaxActorUpdateMilliSeconds = { "MaxActorUpdateMilliSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadingUtilLibrary_eventApplyCustomPriorityLoading_Parms, MaxActorUpdateMilliSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::NewProp_MaxMassActorDestructionTimeLimit = { "MaxMassActorDestructionTimeLimit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadingUtilLibrary_eventApplyCustomPriorityLoading_Parms, MaxMassActorDestructionTimeLimit), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::NewProp_MaxMassActorSpawnTimeLimit = { "MaxMassActorSpawnTimeLimit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadingUtilLibrary_eventApplyCustomPriorityLoading_Parms, MaxMassActorSpawnTimeLimit), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::NewProp_UseHighPriorityLoading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::NewProp_MaxAsyncLoadingMilliSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::NewProp_MaxActorUpdateMilliSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::NewProp_MaxMassActorDestructionTimeLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::NewProp_MaxMassActorSpawnTimeLimit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::Function_MetaDataParams[] = {
		{ "Category", "Loading" },
		{ "ModuleRelativePath", "Public/Util/LoadingUtilLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadingUtilLibrary, nullptr, "ApplyCustomPriorityLoading", nullptr, nullptr, Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::LoadingUtilLibrary_eventApplyCustomPriorityLoading_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::LoadingUtilLibrary_eventApplyCustomPriorityLoading_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadingUtilLibrary_ApplyDefaultPriorityLoading_Statics
	{
		struct LoadingUtilLibrary_eventApplyDefaultPriorityLoading_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadingUtilLibrary_ApplyDefaultPriorityLoading_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadingUtilLibrary_ApplyDefaultPriorityLoading_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadingUtilLibrary_eventApplyDefaultPriorityLoading_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingUtilLibrary_ApplyDefaultPriorityLoading_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_ULoadingUtilLibrary_ApplyDefaultPriorityLoading_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadingUtilLibrary_ApplyDefaultPriorityLoading_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingUtilLibrary_ApplyDefaultPriorityLoading_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadingUtilLibrary_ApplyDefaultPriorityLoading_Statics::Function_MetaDataParams[] = {
		{ "Category", "Loading" },
		{ "ModuleRelativePath", "Public/Util/LoadingUtilLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadingUtilLibrary_ApplyDefaultPriorityLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadingUtilLibrary, nullptr, "ApplyDefaultPriorityLoading", nullptr, nullptr, Z_Construct_UFunction_ULoadingUtilLibrary_ApplyDefaultPriorityLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingUtilLibrary_ApplyDefaultPriorityLoading_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoadingUtilLibrary_ApplyDefaultPriorityLoading_Statics::LoadingUtilLibrary_eventApplyDefaultPriorityLoading_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingUtilLibrary_ApplyDefaultPriorityLoading_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoadingUtilLibrary_ApplyDefaultPriorityLoading_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingUtilLibrary_ApplyDefaultPriorityLoading_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULoadingUtilLibrary_ApplyDefaultPriorityLoading_Statics::LoadingUtilLibrary_eventApplyDefaultPriorityLoading_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULoadingUtilLibrary_ApplyDefaultPriorityLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadingUtilLibrary_ApplyDefaultPriorityLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadingUtilLibrary_ApplyHighestPriorityLoading_Statics
	{
		struct LoadingUtilLibrary_eventApplyHighestPriorityLoading_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadingUtilLibrary_ApplyHighestPriorityLoading_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadingUtilLibrary_ApplyHighestPriorityLoading_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadingUtilLibrary_eventApplyHighestPriorityLoading_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingUtilLibrary_ApplyHighestPriorityLoading_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_ULoadingUtilLibrary_ApplyHighestPriorityLoading_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadingUtilLibrary_ApplyHighestPriorityLoading_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingUtilLibrary_ApplyHighestPriorityLoading_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadingUtilLibrary_ApplyHighestPriorityLoading_Statics::Function_MetaDataParams[] = {
		{ "Category", "Loading" },
		{ "ModuleRelativePath", "Public/Util/LoadingUtilLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadingUtilLibrary_ApplyHighestPriorityLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadingUtilLibrary, nullptr, "ApplyHighestPriorityLoading", nullptr, nullptr, Z_Construct_UFunction_ULoadingUtilLibrary_ApplyHighestPriorityLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingUtilLibrary_ApplyHighestPriorityLoading_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoadingUtilLibrary_ApplyHighestPriorityLoading_Statics::LoadingUtilLibrary_eventApplyHighestPriorityLoading_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingUtilLibrary_ApplyHighestPriorityLoading_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoadingUtilLibrary_ApplyHighestPriorityLoading_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingUtilLibrary_ApplyHighestPriorityLoading_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULoadingUtilLibrary_ApplyHighestPriorityLoading_Statics::LoadingUtilLibrary_eventApplyHighestPriorityLoading_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULoadingUtilLibrary_ApplyHighestPriorityLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadingUtilLibrary_ApplyHighestPriorityLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadingUtilLibrary_ApplyStreamingPriorityLoading_Statics
	{
		struct LoadingUtilLibrary_eventApplyStreamingPriorityLoading_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadingUtilLibrary_ApplyStreamingPriorityLoading_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadingUtilLibrary_ApplyStreamingPriorityLoading_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadingUtilLibrary_eventApplyStreamingPriorityLoading_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingUtilLibrary_ApplyStreamingPriorityLoading_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_ULoadingUtilLibrary_ApplyStreamingPriorityLoading_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadingUtilLibrary_ApplyStreamingPriorityLoading_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingUtilLibrary_ApplyStreamingPriorityLoading_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadingUtilLibrary_ApplyStreamingPriorityLoading_Statics::Function_MetaDataParams[] = {
		{ "Category", "Loading" },
		{ "ModuleRelativePath", "Public/Util/LoadingUtilLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadingUtilLibrary_ApplyStreamingPriorityLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadingUtilLibrary, nullptr, "ApplyStreamingPriorityLoading", nullptr, nullptr, Z_Construct_UFunction_ULoadingUtilLibrary_ApplyStreamingPriorityLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingUtilLibrary_ApplyStreamingPriorityLoading_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoadingUtilLibrary_ApplyStreamingPriorityLoading_Statics::LoadingUtilLibrary_eventApplyStreamingPriorityLoading_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingUtilLibrary_ApplyStreamingPriorityLoading_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoadingUtilLibrary_ApplyStreamingPriorityLoading_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingUtilLibrary_ApplyStreamingPriorityLoading_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULoadingUtilLibrary_ApplyStreamingPriorityLoading_Statics::LoadingUtilLibrary_eventApplyStreamingPriorityLoading_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULoadingUtilLibrary_ApplyStreamingPriorityLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadingUtilLibrary_ApplyStreamingPriorityLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadingUtilLibrary_FlushLevelStreaming_Statics
	{
		struct LoadingUtilLibrary_eventFlushLevelStreaming_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadingUtilLibrary_FlushLevelStreaming_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadingUtilLibrary_FlushLevelStreaming_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadingUtilLibrary_eventFlushLevelStreaming_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingUtilLibrary_FlushLevelStreaming_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_ULoadingUtilLibrary_FlushLevelStreaming_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadingUtilLibrary_FlushLevelStreaming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingUtilLibrary_FlushLevelStreaming_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadingUtilLibrary_FlushLevelStreaming_Statics::Function_MetaDataParams[] = {
		{ "Category", "Loading" },
		{ "ModuleRelativePath", "Public/Util/LoadingUtilLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadingUtilLibrary_FlushLevelStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadingUtilLibrary, nullptr, "FlushLevelStreaming", nullptr, nullptr, Z_Construct_UFunction_ULoadingUtilLibrary_FlushLevelStreaming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingUtilLibrary_FlushLevelStreaming_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoadingUtilLibrary_FlushLevelStreaming_Statics::LoadingUtilLibrary_eventFlushLevelStreaming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingUtilLibrary_FlushLevelStreaming_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoadingUtilLibrary_FlushLevelStreaming_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingUtilLibrary_FlushLevelStreaming_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULoadingUtilLibrary_FlushLevelStreaming_Statics::LoadingUtilLibrary_eventFlushLevelStreaming_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULoadingUtilLibrary_FlushLevelStreaming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadingUtilLibrary_FlushLevelStreaming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadingUtilLibrary_ForceGarbageCollection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadingUtilLibrary_ForceGarbageCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Loading" },
		{ "ModuleRelativePath", "Public/Util/LoadingUtilLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadingUtilLibrary_ForceGarbageCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadingUtilLibrary, nullptr, "ForceGarbageCollection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingUtilLibrary_ForceGarbageCollection_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoadingUtilLibrary_ForceGarbageCollection_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULoadingUtilLibrary_ForceGarbageCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadingUtilLibrary_ForceGarbageCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoadingUtilLibrary);
	UClass* Z_Construct_UClass_ULoadingUtilLibrary_NoRegister()
	{
		return ULoadingUtilLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULoadingUtilLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadingUtilLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingUtilLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoadingUtilLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadingUtilLibrary_ApplyCustomPriorityLoading, "ApplyCustomPriorityLoading" }, // 1180160654
		{ &Z_Construct_UFunction_ULoadingUtilLibrary_ApplyDefaultPriorityLoading, "ApplyDefaultPriorityLoading" }, // 78743808
		{ &Z_Construct_UFunction_ULoadingUtilLibrary_ApplyHighestPriorityLoading, "ApplyHighestPriorityLoading" }, // 3370897462
		{ &Z_Construct_UFunction_ULoadingUtilLibrary_ApplyStreamingPriorityLoading, "ApplyStreamingPriorityLoading" }, // 1677875804
		{ &Z_Construct_UFunction_ULoadingUtilLibrary_FlushLevelStreaming, "FlushLevelStreaming" }, // 1663826047
		{ &Z_Construct_UFunction_ULoadingUtilLibrary_ForceGarbageCollection, "ForceGarbageCollection" }, // 473370077
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingUtilLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingUtilLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Util/LoadingUtilLibrary.h" },
		{ "ModuleRelativePath", "Public/Util/LoadingUtilLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadingUtilLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadingUtilLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoadingUtilLibrary_Statics::ClassParams = {
		&ULoadingUtilLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingUtilLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoadingUtilLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULoadingUtilLibrary()
	{
		if (!Z_Registration_Info_UClass_ULoadingUtilLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoadingUtilLibrary.OuterSingleton, Z_Construct_UClass_ULoadingUtilLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULoadingUtilLibrary.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<ULoadingUtilLibrary>()
	{
		return ULoadingUtilLibrary::StaticClass();
	}
	ULoadingUtilLibrary::ULoadingUtilLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadingUtilLibrary);
	ULoadingUtilLibrary::~ULoadingUtilLibrary() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_LoadingUtilLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_LoadingUtilLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULoadingUtilLibrary, ULoadingUtilLibrary::StaticClass, TEXT("ULoadingUtilLibrary"), &Z_Registration_Info_UClass_ULoadingUtilLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoadingUtilLibrary), 579040043U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_LoadingUtilLibrary_h_2325298779(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_LoadingUtilLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_LoadingUtilLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
