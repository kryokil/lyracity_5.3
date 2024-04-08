// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Game/CitySampleCheatManager.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleCheatManager() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCheatManager();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCheatManager_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCheatManager();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	DEFINE_FUNCTION(UCitySampleCheatManager::execScaleCrowdCount)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScaleCrowdCount(Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCheatManager::execTuneCurrentVehicle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TuneCurrentVehicle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCheatManager::execWatchRandomVehicle)
	{
		P_GET_UBOOL(Z_Param_bWatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WatchRandomVehicle(Z_Param_bWatch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCheatManager::execCitySampleHideUI)
	{
		P_GET_UBOOL(Z_Param_bShouldBeHidden);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CitySampleHideUI(Z_Param_bShouldBeHidden);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCheatManager::execSummonAtOffsetBlueprintCallable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ClassName);
		P_GET_STRUCT(FVector,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SummonAtOffsetBlueprintCallable(Z_Param_ClassName,Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCheatManager::execSummonAtOffset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ClassName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SummonAtOffset(Z_Param_ClassName,Z_Param_X,Z_Param_Y,Z_Param_Z);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCheatManager::execSummonBlueprintCallable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ClassName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SummonBlueprintCallable(Z_Param_ClassName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCheatManager::execFlipVehicle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlipVehicle();
		P_NATIVE_END;
	}
	void UCitySampleCheatManager::StaticRegisterNativesUCitySampleCheatManager()
	{
		UClass* Class = UCitySampleCheatManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CitySampleHideUI", &UCitySampleCheatManager::execCitySampleHideUI },
			{ "FlipVehicle", &UCitySampleCheatManager::execFlipVehicle },
			{ "ScaleCrowdCount", &UCitySampleCheatManager::execScaleCrowdCount },
			{ "SummonAtOffset", &UCitySampleCheatManager::execSummonAtOffset },
			{ "SummonAtOffsetBlueprintCallable", &UCitySampleCheatManager::execSummonAtOffsetBlueprintCallable },
			{ "SummonBlueprintCallable", &UCitySampleCheatManager::execSummonBlueprintCallable },
			{ "TuneCurrentVehicle", &UCitySampleCheatManager::execTuneCurrentVehicle },
			{ "WatchRandomVehicle", &UCitySampleCheatManager::execWatchRandomVehicle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCitySampleCheatManager_CitySampleHideUI_Statics
	{
		struct CitySampleCheatManager_eventCitySampleHideUI_Parms
		{
			bool bShouldBeHidden;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeHidden_MetaData[];
#endif
		static void NewProp_bShouldBeHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeHidden;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCheatManager_CitySampleHideUI_Statics::NewProp_bShouldBeHidden_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCitySampleCheatManager_CitySampleHideUI_Statics::NewProp_bShouldBeHidden_SetBit(void* Obj)
	{
		((CitySampleCheatManager_eventCitySampleHideUI_Parms*)Obj)->bShouldBeHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleCheatManager_CitySampleHideUI_Statics::NewProp_bShouldBeHidden = { "bShouldBeHidden", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleCheatManager_eventCitySampleHideUI_Parms), &Z_Construct_UFunction_UCitySampleCheatManager_CitySampleHideUI_Statics::NewProp_bShouldBeHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCheatManager_CitySampleHideUI_Statics::NewProp_bShouldBeHidden_MetaData), Z_Construct_UFunction_UCitySampleCheatManager_CitySampleHideUI_Statics::NewProp_bShouldBeHidden_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCheatManager_CitySampleHideUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCheatManager_CitySampleHideUI_Statics::NewProp_bShouldBeHidden,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCheatManager_CitySampleHideUI_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Toggles whether the CitySample UI is hidden. */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySampleCheatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggles whether the CitySample UI is hidden." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCheatManager_CitySampleHideUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCheatManager, nullptr, "CitySampleHideUI", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCheatManager_CitySampleHideUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCheatManager_CitySampleHideUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCheatManager_CitySampleHideUI_Statics::CitySampleCheatManager_eventCitySampleHideUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCheatManager_CitySampleHideUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCheatManager_CitySampleHideUI_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCheatManager_CitySampleHideUI_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCheatManager_CitySampleHideUI_Statics::CitySampleCheatManager_eventCitySampleHideUI_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCheatManager_CitySampleHideUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCheatManager_CitySampleHideUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleCheatManager_FlipVehicle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCheatManager_FlipVehicle_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Re-orients a vehicle with the local Z-axis pointing up */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySampleCheatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Re-orients a vehicle with the local Z-axis pointing up" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCheatManager_FlipVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCheatManager, nullptr, "FlipVehicle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020600, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCheatManager_FlipVehicle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCheatManager_FlipVehicle_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCitySampleCheatManager_FlipVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCheatManager_FlipVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleCheatManager_ScaleCrowdCount_Statics
	{
		struct CitySampleCheatManager_eventScaleCrowdCount_Parms
		{
			float Scale;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCheatManager_ScaleCrowdCount_Statics::NewProp_Scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleCheatManager_ScaleCrowdCount_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCheatManager_eventScaleCrowdCount_Parms, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCheatManager_ScaleCrowdCount_Statics::NewProp_Scale_MetaData), Z_Construct_UFunction_UCitySampleCheatManager_ScaleCrowdCount_Statics::NewProp_Scale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCheatManager_ScaleCrowdCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCheatManager_ScaleCrowdCount_Statics::NewProp_Scale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCheatManager_ScaleCrowdCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "CheatManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Scales globally the count of crowd agents, will destroy all current crowd agents an\n\x09 * re-spawn them to the new count.\n\x09 * @param Scale \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySampleCheatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scales globally the count of crowd agents, will destroy all current crowd agents an\nre-spawn them to the new count.\n@param Scale" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCheatManager_ScaleCrowdCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCheatManager, nullptr, "ScaleCrowdCount", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCheatManager_ScaleCrowdCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCheatManager_ScaleCrowdCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCheatManager_ScaleCrowdCount_Statics::CitySampleCheatManager_eventScaleCrowdCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCheatManager_ScaleCrowdCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCheatManager_ScaleCrowdCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCheatManager_ScaleCrowdCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCheatManager_ScaleCrowdCount_Statics::CitySampleCheatManager_eventScaleCrowdCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCheatManager_ScaleCrowdCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCheatManager_ScaleCrowdCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffset_Statics
	{
		struct CitySampleCheatManager_eventSummonAtOffset_Parms
		{
			FString ClassName;
			float X;
			float Y;
			float Z;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClassName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffset_Statics::NewProp_ClassName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffset_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCheatManager_eventSummonAtOffset_Parms, ClassName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffset_Statics::NewProp_ClassName_MetaData), Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffset_Statics::NewProp_ClassName_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffset_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCheatManager_eventSummonAtOffset_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffset_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCheatManager_eventSummonAtOffset_Parms, Y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffset_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCheatManager_eventSummonAtOffset_Parms, Z), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffset_Statics::NewProp_ClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffset_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffset_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffset_Statics::NewProp_Z,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffset_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Loads ClassName and spawns an Actor of that class with an offset from the player\n\x09 * @param ClassName Class name of the Actor to be spawned\n\x09 * @param X Summon offset on the X-axis in camera space\n\x09 * @param Y Summon offset on the Y-axis in camera space\n\x09 * @param Z Summon offset on the Z-axis in camera space\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySampleCheatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Loads ClassName and spawns an Actor of that class with an offset from the player\n@param ClassName Class name of the Actor to be spawned\n@param X Summon offset on the X-axis in camera space\n@param Y Summon offset on the Y-axis in camera space\n@param Z Summon offset on the Z-axis in camera space" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCheatManager, nullptr, "SummonAtOffset", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffset_Statics::CitySampleCheatManager_eventSummonAtOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffset_Statics::CitySampleCheatManager_eventSummonAtOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffsetBlueprintCallable_Statics
	{
		struct CitySampleCheatManager_eventSummonAtOffsetBlueprintCallable_Parms
		{
			FString ClassName;
			FVector Offset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClassName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffsetBlueprintCallable_Statics::NewProp_ClassName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffsetBlueprintCallable_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCheatManager_eventSummonAtOffsetBlueprintCallable_Parms, ClassName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffsetBlueprintCallable_Statics::NewProp_ClassName_MetaData), Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffsetBlueprintCallable_Statics::NewProp_ClassName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffsetBlueprintCallable_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCheatManager_eventSummonAtOffsetBlueprintCallable_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffsetBlueprintCallable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffsetBlueprintCallable_Statics::NewProp_ClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffsetBlueprintCallable_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffsetBlueprintCallable_Statics::Function_MetaDataParams[] = {
		{ "Category", "CheatManager|Summon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Loads ClassName and spawns an Actor of that class with an offset from the player\n\x09 * @param ClassName Class name of the Actor to be spawned\n\x09 * @param Offset Summon offset on each axis in camera space\n\x09 */" },
#endif
		{ "DisplayName", "Summon At Offset" },
		{ "ModuleRelativePath", "Public/Game/CitySampleCheatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Loads ClassName and spawns an Actor of that class with an offset from the player\n@param ClassName Class name of the Actor to be spawned\n@param Offset Summon offset on each axis in camera space" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffsetBlueprintCallable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCheatManager, nullptr, "SummonAtOffsetBlueprintCallable", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffsetBlueprintCallable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffsetBlueprintCallable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffsetBlueprintCallable_Statics::CitySampleCheatManager_eventSummonAtOffsetBlueprintCallable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffsetBlueprintCallable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffsetBlueprintCallable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffsetBlueprintCallable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffsetBlueprintCallable_Statics::CitySampleCheatManager_eventSummonAtOffsetBlueprintCallable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffsetBlueprintCallable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffsetBlueprintCallable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleCheatManager_SummonBlueprintCallable_Statics
	{
		struct CitySampleCheatManager_eventSummonBlueprintCallable_Parms
		{
			FString ClassName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClassName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCheatManager_SummonBlueprintCallable_Statics::NewProp_ClassName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCitySampleCheatManager_SummonBlueprintCallable_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCheatManager_eventSummonBlueprintCallable_Parms, ClassName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCheatManager_SummonBlueprintCallable_Statics::NewProp_ClassName_MetaData), Z_Construct_UFunction_UCitySampleCheatManager_SummonBlueprintCallable_Statics::NewProp_ClassName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCheatManager_SummonBlueprintCallable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCheatManager_SummonBlueprintCallable_Statics::NewProp_ClassName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCheatManager_SummonBlueprintCallable_Statics::Function_MetaDataParams[] = {
		{ "Category", "CheatManager|Summon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hook to call summon from BP, ideally would just make Summon BP callable in UCheatManager. */" },
#endif
		{ "DisplayName", "Summon" },
		{ "ModuleRelativePath", "Public/Game/CitySampleCheatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hook to call summon from BP, ideally would just make Summon BP callable in UCheatManager." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCheatManager_SummonBlueprintCallable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCheatManager, nullptr, "SummonBlueprintCallable", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCheatManager_SummonBlueprintCallable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCheatManager_SummonBlueprintCallable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCheatManager_SummonBlueprintCallable_Statics::CitySampleCheatManager_eventSummonBlueprintCallable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCheatManager_SummonBlueprintCallable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCheatManager_SummonBlueprintCallable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCheatManager_SummonBlueprintCallable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCheatManager_SummonBlueprintCallable_Statics::CitySampleCheatManager_eventSummonBlueprintCallable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCheatManager_SummonBlueprintCallable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCheatManager_SummonBlueprintCallable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleCheatManager_TuneCurrentVehicle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCheatManager_TuneCurrentVehicle_Statics::Function_MetaDataParams[] = {
		{ "Category", "CheatManager" },
		{ "ModuleRelativePath", "Public/Game/CitySampleCheatManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCheatManager_TuneCurrentVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCheatManager, nullptr, "TuneCurrentVehicle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCheatManager_TuneCurrentVehicle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCheatManager_TuneCurrentVehicle_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCitySampleCheatManager_TuneCurrentVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCheatManager_TuneCurrentVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleCheatManager_WatchRandomVehicle_Statics
	{
		struct CitySampleCheatManager_eventWatchRandomVehicle_Parms
		{
			bool bWatch;
		};
		static void NewProp_bWatch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWatch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCitySampleCheatManager_WatchRandomVehicle_Statics::NewProp_bWatch_SetBit(void* Obj)
	{
		((CitySampleCheatManager_eventWatchRandomVehicle_Parms*)Obj)->bWatch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleCheatManager_WatchRandomVehicle_Statics::NewProp_bWatch = { "bWatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleCheatManager_eventWatchRandomVehicle_Parms), &Z_Construct_UFunction_UCitySampleCheatManager_WatchRandomVehicle_Statics::NewProp_bWatch_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCheatManager_WatchRandomVehicle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCheatManager_WatchRandomVehicle_Statics::NewProp_bWatch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCheatManager_WatchRandomVehicle_Statics::Function_MetaDataParams[] = {
		{ "Category", "CheatManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Picks a random vehicle, sets it as the viewtarget. \n\x09 * @param bWatch true to pick a random vehicle and watch it, false to go back to the possessed pawn\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySampleCheatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Picks a random vehicle, sets it as the viewtarget.\n@param bWatch true to pick a random vehicle and watch it, false to go back to the possessed pawn" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCheatManager_WatchRandomVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCheatManager, nullptr, "WatchRandomVehicle", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCheatManager_WatchRandomVehicle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCheatManager_WatchRandomVehicle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCheatManager_WatchRandomVehicle_Statics::CitySampleCheatManager_eventWatchRandomVehicle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020600, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCheatManager_WatchRandomVehicle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCheatManager_WatchRandomVehicle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCheatManager_WatchRandomVehicle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCheatManager_WatchRandomVehicle_Statics::CitySampleCheatManager_eventWatchRandomVehicle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCheatManager_WatchRandomVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCheatManager_WatchRandomVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleCheatManager);
	UClass* Z_Construct_UClass_UCitySampleCheatManager_NoRegister()
	{
		return UCitySampleCheatManager::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleCheatManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportOffsetStep_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportOffsetStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlipVehicleMaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlipVehicleMaxDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SummonOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SummonOffset;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_SummonShortNamesMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SummonShortNamesMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SummonShortNamesMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SummonShortNamesMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleCheatManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCheatManager,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCheatManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySampleCheatManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleCheatManager_CitySampleHideUI, "CitySampleHideUI" }, // 1662088756
		{ &Z_Construct_UFunction_UCitySampleCheatManager_FlipVehicle, "FlipVehicle" }, // 2602495440
		{ &Z_Construct_UFunction_UCitySampleCheatManager_ScaleCrowdCount, "ScaleCrowdCount" }, // 470869845
		{ &Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffset, "SummonAtOffset" }, // 2883981668
		{ &Z_Construct_UFunction_UCitySampleCheatManager_SummonAtOffsetBlueprintCallable, "SummonAtOffsetBlueprintCallable" }, // 1174983826
		{ &Z_Construct_UFunction_UCitySampleCheatManager_SummonBlueprintCallable, "SummonBlueprintCallable" }, // 4252690941
		{ &Z_Construct_UFunction_UCitySampleCheatManager_TuneCurrentVehicle, "TuneCurrentVehicle" }, // 1820404806
		{ &Z_Construct_UFunction_UCitySampleCheatManager_WatchRandomVehicle, "WatchRandomVehicle" }, // 1749486049
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCheatManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCheatManager_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Extension of the CheatManager class that enables custom console commands and debug functions for development use.\n */" },
#endif
		{ "IncludePath", "Game/CitySampleCheatManager.h" },
		{ "ModuleRelativePath", "Public/Game/CitySampleCheatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extension of the CheatManager class that enables custom console commands and debug functions for development use." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCheatManager_Statics::NewProp_TeleportOffsetStep_MetaData[] = {
		{ "Category", "CheatManager" },
		{ "ModuleRelativePath", "Public/Game/CitySampleCheatManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCheatManager_Statics::NewProp_TeleportOffsetStep = { "TeleportOffsetStep", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCheatManager, TeleportOffsetStep), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCheatManager_Statics::NewProp_TeleportOffsetStep_MetaData), Z_Construct_UClass_UCitySampleCheatManager_Statics::NewProp_TeleportOffsetStep_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCheatManager_Statics::NewProp_FlipVehicleMaxDistance_MetaData[] = {
		{ "Category", "CheatManager" },
		{ "ModuleRelativePath", "Public/Game/CitySampleCheatManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCheatManager_Statics::NewProp_FlipVehicleMaxDistance = { "FlipVehicleMaxDistance", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCheatManager, FlipVehicleMaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCheatManager_Statics::NewProp_FlipVehicleMaxDistance_MetaData), Z_Construct_UClass_UCitySampleCheatManager_Statics::NewProp_FlipVehicleMaxDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCheatManager_Statics::NewProp_SummonOffset_MetaData[] = {
		{ "Category", "CheatManager|Summon" },
		{ "ModuleRelativePath", "Public/Game/CitySampleCheatManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCheatManager_Statics::NewProp_SummonOffset = { "SummonOffset", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCheatManager, SummonOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCheatManager_Statics::NewProp_SummonOffset_MetaData), Z_Construct_UClass_UCitySampleCheatManager_Statics::NewProp_SummonOffset_MetaData) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UCitySampleCheatManager_Statics::NewProp_SummonShortNamesMap_ValueProp = { "SummonShortNamesMap", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCitySampleCheatManager_Statics::NewProp_SummonShortNamesMap_Key_KeyProp = { "SummonShortNamesMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCheatManager_Statics::NewProp_SummonShortNamesMap_MetaData[] = {
		{ "Category", "CheatManager|Summon" },
		{ "ModuleRelativePath", "Public/Game/CitySampleCheatManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCitySampleCheatManager_Statics::NewProp_SummonShortNamesMap = { "SummonShortNamesMap", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCheatManager, SummonShortNamesMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCheatManager_Statics::NewProp_SummonShortNamesMap_MetaData), Z_Construct_UClass_UCitySampleCheatManager_Statics::NewProp_SummonShortNamesMap_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleCheatManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCheatManager_Statics::NewProp_TeleportOffsetStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCheatManager_Statics::NewProp_FlipVehicleMaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCheatManager_Statics::NewProp_SummonOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCheatManager_Statics::NewProp_SummonShortNamesMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCheatManager_Statics::NewProp_SummonShortNamesMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCheatManager_Statics::NewProp_SummonShortNamesMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleCheatManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleCheatManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleCheatManager_Statics::ClassParams = {
		&UCitySampleCheatManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCitySampleCheatManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCheatManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCheatManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleCheatManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCheatManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCitySampleCheatManager()
	{
		if (!Z_Registration_Info_UClass_UCitySampleCheatManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleCheatManager.OuterSingleton, Z_Construct_UClass_UCitySampleCheatManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleCheatManager.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleCheatManager>()
	{
		return UCitySampleCheatManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleCheatManager);
	UCitySampleCheatManager::~UCitySampleCheatManager() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleCheatManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleCheatManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleCheatManager, UCitySampleCheatManager::StaticClass, TEXT("UCitySampleCheatManager"), &Z_Registration_Info_UClass_UCitySampleCheatManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleCheatManager), 2228082081U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleCheatManager_h_2833574443(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleCheatManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleCheatManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
