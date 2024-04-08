// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Game/CitySampleGameInstanceBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleGameInstanceBase() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleGameInstanceBase();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleGameInstanceBase_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleSaveGame_NoRegister();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleOnSaveGameLoaded__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CitySample_CitySampleOnSaveGameLoaded__DelegateSignature_Statics
	{
		struct _Script_CitySample_eventCitySampleOnSaveGameLoaded_Parms
		{
			const UCitySampleSaveGame* LoadedSaveGame;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedSaveGame_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedSaveGame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_CitySampleOnSaveGameLoaded__DelegateSignature_Statics::NewProp_LoadedSaveGame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleOnSaveGameLoaded__DelegateSignature_Statics::NewProp_LoadedSaveGame = { "LoadedSaveGame", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CitySample_eventCitySampleOnSaveGameLoaded_Parms, LoadedSaveGame), Z_Construct_UClass_UCitySampleSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOnSaveGameLoaded__DelegateSignature_Statics::NewProp_LoadedSaveGame_MetaData), Z_Construct_UDelegateFunction_CitySample_CitySampleOnSaveGameLoaded__DelegateSignature_Statics::NewProp_LoadedSaveGame_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CitySample_CitySampleOnSaveGameLoaded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleOnSaveGameLoaded__DelegateSignature_Statics::NewProp_LoadedSaveGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_CitySampleOnSaveGameLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/CitySampleGameInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_CitySampleOnSaveGameLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "CitySampleOnSaveGameLoaded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CitySample_CitySampleOnSaveGameLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOnSaveGameLoaded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CitySample_CitySampleOnSaveGameLoaded__DelegateSignature_Statics::_Script_CitySample_eventCitySampleOnSaveGameLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOnSaveGameLoaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_CitySampleOnSaveGameLoaded__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOnSaveGameLoaded__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CitySample_CitySampleOnSaveGameLoaded__DelegateSignature_Statics::_Script_CitySample_eventCitySampleOnSaveGameLoaded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleOnSaveGameLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_CitySampleOnSaveGameLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCitySampleOnSaveGameLoaded_DelegateWrapper(const FMulticastScriptDelegate& CitySampleOnSaveGameLoaded, const UCitySampleSaveGame* LoadedSaveGame)
{
	struct _Script_CitySample_eventCitySampleOnSaveGameLoaded_Parms
	{
		const UCitySampleSaveGame* LoadedSaveGame;
	};
	_Script_CitySample_eventCitySampleOnSaveGameLoaded_Parms Parms;
	Parms.LoadedSaveGame=LoadedSaveGame;
	CitySampleOnSaveGameLoaded.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCitySampleGameInstanceBase::execResetNaniteVisualization)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetNaniteVisualization();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleGameInstanceBase::execSetNaniteVisualization)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Visualization);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNaniteVisualization(Z_Param_Visualization);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleGameInstanceBase::execGetCurrentNaniteVisualization)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetCurrentNaniteVisualization();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleGameInstanceBase::execSetRumbleEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRumbleEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleGameInstanceBase::execGetRumbleEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRumbleEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleGameInstanceBase::execSetLookSensitivity)
	{
		P_GET_STRUCT(FVector,Z_Param_Scalar);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLookSensitivity(Z_Param_Scalar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleGameInstanceBase::execGetLookSensitivity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLookSensitivity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleGameInstanceBase::execSetInvertedAxes)
	{
		P_GET_UBOOL(Z_Param_bX);
		P_GET_UBOOL(Z_Param_bY);
		P_GET_UBOOL(Z_Param_bZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInvertedAxes(Z_Param_bX,Z_Param_bY,Z_Param_bZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleGameInstanceBase::execGetInvertedAxes)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bX);
		P_GET_UBOOL_REF(Z_Param_Out_bY);
		P_GET_UBOOL_REF(Z_Param_Out_bZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetInvertedAxes(Z_Param_Out_bX,Z_Param_Out_bY,Z_Param_Out_bZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleGameInstanceBase::execClearCitySampleSaveData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCitySampleSaveData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleGameInstanceBase::execIsSaveGameLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSaveGameLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleGameInstanceBase::execSaveCitySampleGameData)
	{
		P_GET_UBOOL(Z_Param_bAsync);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveCitySampleGameData(Z_Param_bAsync);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleGameInstanceBase::execK2Node_LoadCitySampleSaveGame)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bOutSaveGameFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCitySampleSaveGame**)Z_Param__Result=P_THIS->K2Node_LoadCitySampleSaveGame(Z_Param_Out_bOutSaveGameFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleGameInstanceBase::execGetSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCitySampleSaveGame**)Z_Param__Result=P_THIS->GetSaveGame();
		P_NATIVE_END;
	}
	void UCitySampleGameInstanceBase::StaticRegisterNativesUCitySampleGameInstanceBase()
	{
		UClass* Class = UCitySampleGameInstanceBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearCitySampleSaveData", &UCitySampleGameInstanceBase::execClearCitySampleSaveData },
			{ "GetCurrentNaniteVisualization", &UCitySampleGameInstanceBase::execGetCurrentNaniteVisualization },
			{ "GetInvertedAxes", &UCitySampleGameInstanceBase::execGetInvertedAxes },
			{ "GetLookSensitivity", &UCitySampleGameInstanceBase::execGetLookSensitivity },
			{ "GetRumbleEnabled", &UCitySampleGameInstanceBase::execGetRumbleEnabled },
			{ "GetSaveGame", &UCitySampleGameInstanceBase::execGetSaveGame },
			{ "IsSaveGameLoaded", &UCitySampleGameInstanceBase::execIsSaveGameLoaded },
			{ "K2Node_LoadCitySampleSaveGame", &UCitySampleGameInstanceBase::execK2Node_LoadCitySampleSaveGame },
			{ "ResetNaniteVisualization", &UCitySampleGameInstanceBase::execResetNaniteVisualization },
			{ "SaveCitySampleGameData", &UCitySampleGameInstanceBase::execSaveCitySampleGameData },
			{ "SetInvertedAxes", &UCitySampleGameInstanceBase::execSetInvertedAxes },
			{ "SetLookSensitivity", &UCitySampleGameInstanceBase::execSetLookSensitivity },
			{ "SetNaniteVisualization", &UCitySampleGameInstanceBase::execSetNaniteVisualization },
			{ "SetRumbleEnabled", &UCitySampleGameInstanceBase::execSetRumbleEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCitySampleGameInstanceBase_ClearCitySampleSaveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleGameInstanceBase_ClearCitySampleSaveData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGame" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Deletes current save game and reset save data to defaults. */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySampleGameInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deletes current save game and reset save data to defaults." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleGameInstanceBase_ClearCitySampleSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleGameInstanceBase, nullptr, "ClearCitySampleSaveData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_ClearCitySampleSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleGameInstanceBase_ClearCitySampleSaveData_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCitySampleGameInstanceBase_ClearCitySampleSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleGameInstanceBase_ClearCitySampleSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleGameInstanceBase_GetCurrentNaniteVisualization_Statics
	{
		struct CitySampleGameInstanceBase_eventGetCurrentNaniteVisualization_Parms
		{
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleGameInstanceBase_GetCurrentNaniteVisualization_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCitySampleGameInstanceBase_GetCurrentNaniteVisualization_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleGameInstanceBase_eventGetCurrentNaniteVisualization_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetCurrentNaniteVisualization_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UCitySampleGameInstanceBase_GetCurrentNaniteVisualization_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleGameInstanceBase_GetCurrentNaniteVisualization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleGameInstanceBase_GetCurrentNaniteVisualization_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleGameInstanceBase_GetCurrentNaniteVisualization_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nanite" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End CitySample Input Modifiers\n" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySampleGameInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleGameInstanceBase_GetCurrentNaniteVisualization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleGameInstanceBase, nullptr, "GetCurrentNaniteVisualization", nullptr, nullptr, Z_Construct_UFunction_UCitySampleGameInstanceBase_GetCurrentNaniteVisualization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetCurrentNaniteVisualization_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetCurrentNaniteVisualization_Statics::CitySampleGameInstanceBase_eventGetCurrentNaniteVisualization_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetCurrentNaniteVisualization_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleGameInstanceBase_GetCurrentNaniteVisualization_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetCurrentNaniteVisualization_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetCurrentNaniteVisualization_Statics::CitySampleGameInstanceBase_eventGetCurrentNaniteVisualization_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleGameInstanceBase_GetCurrentNaniteVisualization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleGameInstanceBase_GetCurrentNaniteVisualization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes_Statics
	{
		struct CitySampleGameInstanceBase_eventGetInvertedAxes_Parms
		{
			bool bX;
			bool bY;
			bool bZ;
		};
		static void NewProp_bX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bX;
		static void NewProp_bY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bY;
		static void NewProp_bZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes_Statics::NewProp_bX_SetBit(void* Obj)
	{
		((CitySampleGameInstanceBase_eventGetInvertedAxes_Parms*)Obj)->bX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes_Statics::NewProp_bX = { "bX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleGameInstanceBase_eventGetInvertedAxes_Parms), &Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes_Statics::NewProp_bX_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes_Statics::NewProp_bY_SetBit(void* Obj)
	{
		((CitySampleGameInstanceBase_eventGetInvertedAxes_Parms*)Obj)->bY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleGameInstanceBase_eventGetInvertedAxes_Parms), &Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes_Statics::NewProp_bY_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes_Statics::NewProp_bZ_SetBit(void* Obj)
	{
		((CitySampleGameInstanceBase_eventGetInvertedAxes_Parms*)Obj)->bZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes_Statics::NewProp_bZ = { "bZ", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleGameInstanceBase_eventGetInvertedAxes_Parms), &Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes_Statics::NewProp_bZ_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes_Statics::NewProp_bX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes_Statics::NewProp_bY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes_Statics::NewProp_bZ,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Modifiers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ Begin CitySample Input Modifiers\n" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySampleGameInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleGameInstanceBase, nullptr, "GetInvertedAxes", nullptr, nullptr, Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes_Statics::CitySampleGameInstanceBase_eventGetInvertedAxes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes_Statics::CitySampleGameInstanceBase_eventGetInvertedAxes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleGameInstanceBase_GetLookSensitivity_Statics
	{
		struct CitySampleGameInstanceBase_eventGetLookSensitivity_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleGameInstanceBase_GetLookSensitivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleGameInstanceBase_eventGetLookSensitivity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleGameInstanceBase_GetLookSensitivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleGameInstanceBase_GetLookSensitivity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleGameInstanceBase_GetLookSensitivity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Modifiers" },
		{ "ModuleRelativePath", "Public/Game/CitySampleGameInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleGameInstanceBase_GetLookSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleGameInstanceBase, nullptr, "GetLookSensitivity", nullptr, nullptr, Z_Construct_UFunction_UCitySampleGameInstanceBase_GetLookSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetLookSensitivity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetLookSensitivity_Statics::CitySampleGameInstanceBase_eventGetLookSensitivity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetLookSensitivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleGameInstanceBase_GetLookSensitivity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetLookSensitivity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetLookSensitivity_Statics::CitySampleGameInstanceBase_eventGetLookSensitivity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleGameInstanceBase_GetLookSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleGameInstanceBase_GetLookSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleGameInstanceBase_GetRumbleEnabled_Statics
	{
		struct CitySampleGameInstanceBase_eventGetRumbleEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCitySampleGameInstanceBase_GetRumbleEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleGameInstanceBase_eventGetRumbleEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleGameInstanceBase_GetRumbleEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleGameInstanceBase_eventGetRumbleEnabled_Parms), &Z_Construct_UFunction_UCitySampleGameInstanceBase_GetRumbleEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleGameInstanceBase_GetRumbleEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleGameInstanceBase_GetRumbleEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleGameInstanceBase_GetRumbleEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Modifiers" },
		{ "ModuleRelativePath", "Public/Game/CitySampleGameInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleGameInstanceBase_GetRumbleEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleGameInstanceBase, nullptr, "GetRumbleEnabled", nullptr, nullptr, Z_Construct_UFunction_UCitySampleGameInstanceBase_GetRumbleEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetRumbleEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetRumbleEnabled_Statics::CitySampleGameInstanceBase_eventGetRumbleEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetRumbleEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleGameInstanceBase_GetRumbleEnabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetRumbleEnabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetRumbleEnabled_Statics::CitySampleGameInstanceBase_eventGetRumbleEnabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleGameInstanceBase_GetRumbleEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleGameInstanceBase_GetRumbleEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleGameInstanceBase_GetSaveGame_Statics
	{
		struct CitySampleGameInstanceBase_eventGetSaveGame_Parms
		{
			UCitySampleSaveGame* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleGameInstanceBase_GetSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleGameInstanceBase_eventGetSaveGame_Parms, ReturnValue), Z_Construct_UClass_UCitySampleSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleGameInstanceBase_GetSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleGameInstanceBase_GetSaveGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleGameInstanceBase_GetSaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGame" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the save game object, which may have been loaded from disk or freshly created. */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySampleGameInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the save game object, which may have been loaded from disk or freshly created." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleGameInstanceBase_GetSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleGameInstanceBase, nullptr, "GetSaveGame", nullptr, nullptr, Z_Construct_UFunction_UCitySampleGameInstanceBase_GetSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetSaveGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetSaveGame_Statics::CitySampleGameInstanceBase_eventGetSaveGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetSaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleGameInstanceBase_GetSaveGame_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetSaveGame_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleGameInstanceBase_GetSaveGame_Statics::CitySampleGameInstanceBase_eventGetSaveGame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleGameInstanceBase_GetSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleGameInstanceBase_GetSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleGameInstanceBase_IsSaveGameLoaded_Statics
	{
		struct CitySampleGameInstanceBase_eventIsSaveGameLoaded_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCitySampleGameInstanceBase_IsSaveGameLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleGameInstanceBase_eventIsSaveGameLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleGameInstanceBase_IsSaveGameLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleGameInstanceBase_eventIsSaveGameLoaded_Parms), &Z_Construct_UFunction_UCitySampleGameInstanceBase_IsSaveGameLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleGameInstanceBase_IsSaveGameLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleGameInstanceBase_IsSaveGameLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleGameInstanceBase_IsSaveGameLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGame" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether saved data was loaded from disk. This returns false when the save game was newly created. */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySampleGameInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether saved data was loaded from disk. This returns false when the save game was newly created." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleGameInstanceBase_IsSaveGameLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleGameInstanceBase, nullptr, "IsSaveGameLoaded", nullptr, nullptr, Z_Construct_UFunction_UCitySampleGameInstanceBase_IsSaveGameLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_IsSaveGameLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleGameInstanceBase_IsSaveGameLoaded_Statics::CitySampleGameInstanceBase_eventIsSaveGameLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_IsSaveGameLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleGameInstanceBase_IsSaveGameLoaded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_IsSaveGameLoaded_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleGameInstanceBase_IsSaveGameLoaded_Statics::CitySampleGameInstanceBase_eventIsSaveGameLoaded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleGameInstanceBase_IsSaveGameLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleGameInstanceBase_IsSaveGameLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleGameInstanceBase_K2Node_LoadCitySampleSaveGame_Statics
	{
		struct CitySampleGameInstanceBase_eventK2Node_LoadCitySampleSaveGame_Parms
		{
			bool bOutSaveGameFound;
			UCitySampleSaveGame* ReturnValue;
		};
		static void NewProp_bOutSaveGameFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSaveGameFound;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCitySampleGameInstanceBase_K2Node_LoadCitySampleSaveGame_Statics::NewProp_bOutSaveGameFound_SetBit(void* Obj)
	{
		((CitySampleGameInstanceBase_eventK2Node_LoadCitySampleSaveGame_Parms*)Obj)->bOutSaveGameFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleGameInstanceBase_K2Node_LoadCitySampleSaveGame_Statics::NewProp_bOutSaveGameFound = { "bOutSaveGameFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleGameInstanceBase_eventK2Node_LoadCitySampleSaveGame_Parms), &Z_Construct_UFunction_UCitySampleGameInstanceBase_K2Node_LoadCitySampleSaveGame_Statics::NewProp_bOutSaveGameFound_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleGameInstanceBase_K2Node_LoadCitySampleSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleGameInstanceBase_eventK2Node_LoadCitySampleSaveGame_Parms, ReturnValue), Z_Construct_UClass_UCitySampleSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleGameInstanceBase_K2Node_LoadCitySampleSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleGameInstanceBase_K2Node_LoadCitySampleSaveGame_Statics::NewProp_bOutSaveGameFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleGameInstanceBase_K2Node_LoadCitySampleSaveGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleGameInstanceBase_K2Node_LoadCitySampleSaveGame_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "bOutSaveGameFound" },
		{ "Category", "SaveGame" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Initializes the save game by either loading from disk or creating a new one. Optionally returns whether a save game was found. */" },
#endif
		{ "DisplayName", "LoadCitySampleSaveGame" },
		{ "ModuleRelativePath", "Public/Game/CitySampleGameInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initializes the save game by either loading from disk or creating a new one. Optionally returns whether a save game was found." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleGameInstanceBase_K2Node_LoadCitySampleSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleGameInstanceBase, nullptr, "K2Node_LoadCitySampleSaveGame", nullptr, nullptr, Z_Construct_UFunction_UCitySampleGameInstanceBase_K2Node_LoadCitySampleSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_K2Node_LoadCitySampleSaveGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleGameInstanceBase_K2Node_LoadCitySampleSaveGame_Statics::CitySampleGameInstanceBase_eventK2Node_LoadCitySampleSaveGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_K2Node_LoadCitySampleSaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleGameInstanceBase_K2Node_LoadCitySampleSaveGame_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_K2Node_LoadCitySampleSaveGame_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleGameInstanceBase_K2Node_LoadCitySampleSaveGame_Statics::CitySampleGameInstanceBase_eventK2Node_LoadCitySampleSaveGame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleGameInstanceBase_K2Node_LoadCitySampleSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleGameInstanceBase_K2Node_LoadCitySampleSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleGameInstanceBase_ResetNaniteVisualization_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleGameInstanceBase_ResetNaniteVisualization_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nanite" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Resets both Nanite Visualization and Temporal AA sample count to the currently set defaults */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySampleGameInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets both Nanite Visualization and Temporal AA sample count to the currently set defaults" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleGameInstanceBase_ResetNaniteVisualization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleGameInstanceBase, nullptr, "ResetNaniteVisualization", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_ResetNaniteVisualization_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleGameInstanceBase_ResetNaniteVisualization_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCitySampleGameInstanceBase_ResetNaniteVisualization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleGameInstanceBase_ResetNaniteVisualization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleGameInstanceBase_SaveCitySampleGameData_Statics
	{
		struct CitySampleGameInstanceBase_eventSaveCitySampleGameData_Parms
		{
			bool bAsync;
		};
		static void NewProp_bAsync_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAsync;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCitySampleGameInstanceBase_SaveCitySampleGameData_Statics::NewProp_bAsync_SetBit(void* Obj)
	{
		((CitySampleGameInstanceBase_eventSaveCitySampleGameData_Parms*)Obj)->bAsync = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleGameInstanceBase_SaveCitySampleGameData_Statics::NewProp_bAsync = { "bAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleGameInstanceBase_eventSaveCitySampleGameData_Parms), &Z_Construct_UFunction_UCitySampleGameInstanceBase_SaveCitySampleGameData_Statics::NewProp_bAsync_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleGameInstanceBase_SaveCitySampleGameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleGameInstanceBase_SaveCitySampleGameData_Statics::NewProp_bAsync,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleGameInstanceBase_SaveCitySampleGameData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGame" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Saves the save game to disk. */" },
#endif
		{ "CPP_Default_bAsync", "true" },
		{ "ModuleRelativePath", "Public/Game/CitySampleGameInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Saves the save game to disk." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleGameInstanceBase_SaveCitySampleGameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleGameInstanceBase, nullptr, "SaveCitySampleGameData", nullptr, nullptr, Z_Construct_UFunction_UCitySampleGameInstanceBase_SaveCitySampleGameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_SaveCitySampleGameData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleGameInstanceBase_SaveCitySampleGameData_Statics::CitySampleGameInstanceBase_eventSaveCitySampleGameData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_SaveCitySampleGameData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleGameInstanceBase_SaveCitySampleGameData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_SaveCitySampleGameData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleGameInstanceBase_SaveCitySampleGameData_Statics::CitySampleGameInstanceBase_eventSaveCitySampleGameData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleGameInstanceBase_SaveCitySampleGameData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleGameInstanceBase_SaveCitySampleGameData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics
	{
		struct CitySampleGameInstanceBase_eventSetInvertedAxes_Parms
		{
			bool bX;
			bool bY;
			bool bZ;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bX_MetaData[];
#endif
		static void NewProp_bX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bY_MetaData[];
#endif
		static void NewProp_bY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bZ_MetaData[];
#endif
		static void NewProp_bZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::NewProp_bX_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::NewProp_bX_SetBit(void* Obj)
	{
		((CitySampleGameInstanceBase_eventSetInvertedAxes_Parms*)Obj)->bX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::NewProp_bX = { "bX", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleGameInstanceBase_eventSetInvertedAxes_Parms), &Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::NewProp_bX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::NewProp_bX_MetaData), Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::NewProp_bX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::NewProp_bY_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::NewProp_bY_SetBit(void* Obj)
	{
		((CitySampleGameInstanceBase_eventSetInvertedAxes_Parms*)Obj)->bY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleGameInstanceBase_eventSetInvertedAxes_Parms), &Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::NewProp_bY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::NewProp_bY_MetaData), Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::NewProp_bY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::NewProp_bZ_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::NewProp_bZ_SetBit(void* Obj)
	{
		((CitySampleGameInstanceBase_eventSetInvertedAxes_Parms*)Obj)->bZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::NewProp_bZ = { "bZ", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleGameInstanceBase_eventSetInvertedAxes_Parms), &Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::NewProp_bZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::NewProp_bZ_MetaData), Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::NewProp_bZ_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::NewProp_bX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::NewProp_bY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::NewProp_bZ,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Modifiers" },
		{ "ModuleRelativePath", "Public/Game/CitySampleGameInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleGameInstanceBase, nullptr, "SetInvertedAxes", nullptr, nullptr, Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::CitySampleGameInstanceBase_eventSetInvertedAxes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::CitySampleGameInstanceBase_eventSetInvertedAxes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleGameInstanceBase_SetLookSensitivity_Statics
	{
		struct CitySampleGameInstanceBase_eventSetLookSensitivity_Parms
		{
			FVector Scalar;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scalar_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scalar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleGameInstanceBase_SetLookSensitivity_Statics::NewProp_Scalar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleGameInstanceBase_SetLookSensitivity_Statics::NewProp_Scalar = { "Scalar", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleGameInstanceBase_eventSetLookSensitivity_Parms, Scalar), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetLookSensitivity_Statics::NewProp_Scalar_MetaData), Z_Construct_UFunction_UCitySampleGameInstanceBase_SetLookSensitivity_Statics::NewProp_Scalar_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleGameInstanceBase_SetLookSensitivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleGameInstanceBase_SetLookSensitivity_Statics::NewProp_Scalar,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleGameInstanceBase_SetLookSensitivity_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Scalar" },
		{ "Category", "Input Modifiers" },
		{ "ModuleRelativePath", "Public/Game/CitySampleGameInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleGameInstanceBase_SetLookSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleGameInstanceBase, nullptr, "SetLookSensitivity", nullptr, nullptr, Z_Construct_UFunction_UCitySampleGameInstanceBase_SetLookSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetLookSensitivity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetLookSensitivity_Statics::CitySampleGameInstanceBase_eventSetLookSensitivity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetLookSensitivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleGameInstanceBase_SetLookSensitivity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetLookSensitivity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetLookSensitivity_Statics::CitySampleGameInstanceBase_eventSetLookSensitivity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleGameInstanceBase_SetLookSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleGameInstanceBase_SetLookSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleGameInstanceBase_SetNaniteVisualization_Statics
	{
		struct CitySampleGameInstanceBase_eventSetNaniteVisualization_Parms
		{
			FString Visualization;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Visualization_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Visualization;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleGameInstanceBase_SetNaniteVisualization_Statics::NewProp_Visualization_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCitySampleGameInstanceBase_SetNaniteVisualization_Statics::NewProp_Visualization = { "Visualization", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleGameInstanceBase_eventSetNaniteVisualization_Parms, Visualization), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetNaniteVisualization_Statics::NewProp_Visualization_MetaData), Z_Construct_UFunction_UCitySampleGameInstanceBase_SetNaniteVisualization_Statics::NewProp_Visualization_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleGameInstanceBase_SetNaniteVisualization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleGameInstanceBase_SetNaniteVisualization_Statics::NewProp_Visualization,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleGameInstanceBase_SetNaniteVisualization_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Visualization" },
		{ "Category", "Nanite" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attempts to set current nanite visualization type to the string parameter that was passed in */" },
#endif
		{ "CPP_Default_Visualization", "none" },
		{ "ModuleRelativePath", "Public/Game/CitySampleGameInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempts to set current nanite visualization type to the string parameter that was passed in" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleGameInstanceBase_SetNaniteVisualization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleGameInstanceBase, nullptr, "SetNaniteVisualization", nullptr, nullptr, Z_Construct_UFunction_UCitySampleGameInstanceBase_SetNaniteVisualization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetNaniteVisualization_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetNaniteVisualization_Statics::CitySampleGameInstanceBase_eventSetNaniteVisualization_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetNaniteVisualization_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleGameInstanceBase_SetNaniteVisualization_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetNaniteVisualization_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetNaniteVisualization_Statics::CitySampleGameInstanceBase_eventSetNaniteVisualization_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleGameInstanceBase_SetNaniteVisualization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleGameInstanceBase_SetNaniteVisualization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleGameInstanceBase_SetRumbleEnabled_Statics
	{
		struct CitySampleGameInstanceBase_eventSetRumbleEnabled_Parms
		{
			bool bEnabled;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleGameInstanceBase_SetRumbleEnabled_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCitySampleGameInstanceBase_SetRumbleEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((CitySampleGameInstanceBase_eventSetRumbleEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleGameInstanceBase_SetRumbleEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleGameInstanceBase_eventSetRumbleEnabled_Parms), &Z_Construct_UFunction_UCitySampleGameInstanceBase_SetRumbleEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetRumbleEnabled_Statics::NewProp_bEnabled_MetaData), Z_Construct_UFunction_UCitySampleGameInstanceBase_SetRumbleEnabled_Statics::NewProp_bEnabled_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleGameInstanceBase_SetRumbleEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleGameInstanceBase_SetRumbleEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleGameInstanceBase_SetRumbleEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Modifiers" },
		{ "ModuleRelativePath", "Public/Game/CitySampleGameInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleGameInstanceBase_SetRumbleEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleGameInstanceBase, nullptr, "SetRumbleEnabled", nullptr, nullptr, Z_Construct_UFunction_UCitySampleGameInstanceBase_SetRumbleEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetRumbleEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetRumbleEnabled_Statics::CitySampleGameInstanceBase_eventSetRumbleEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetRumbleEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleGameInstanceBase_SetRumbleEnabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetRumbleEnabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleGameInstanceBase_SetRumbleEnabled_Statics::CitySampleGameInstanceBase_eventSetRumbleEnabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleGameInstanceBase_SetRumbleEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleGameInstanceBase_SetRumbleEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleGameInstanceBase);
	UClass* Z_Construct_UClass_UCitySampleGameInstanceBase_NoRegister()
	{
		return UCitySampleGameInstanceBase::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleGameInstanceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSaveGameLoaded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSaveGameLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveGame_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultNaniteVisualization_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultNaniteVisualization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTemporalAASamples_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultTemporalAASamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentNaniteVisualization_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentNaniteVisualization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseGroomTexture_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BaseGroomTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseFollicleMaskTexture_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BaseFollicleMaskTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleGameInstanceBase_ClearCitySampleSaveData, "ClearCitySampleSaveData" }, // 3907594199
		{ &Z_Construct_UFunction_UCitySampleGameInstanceBase_GetCurrentNaniteVisualization, "GetCurrentNaniteVisualization" }, // 2730427581
		{ &Z_Construct_UFunction_UCitySampleGameInstanceBase_GetInvertedAxes, "GetInvertedAxes" }, // 2989128726
		{ &Z_Construct_UFunction_UCitySampleGameInstanceBase_GetLookSensitivity, "GetLookSensitivity" }, // 1889865639
		{ &Z_Construct_UFunction_UCitySampleGameInstanceBase_GetRumbleEnabled, "GetRumbleEnabled" }, // 3209494703
		{ &Z_Construct_UFunction_UCitySampleGameInstanceBase_GetSaveGame, "GetSaveGame" }, // 3769959067
		{ &Z_Construct_UFunction_UCitySampleGameInstanceBase_IsSaveGameLoaded, "IsSaveGameLoaded" }, // 3253556002
		{ &Z_Construct_UFunction_UCitySampleGameInstanceBase_K2Node_LoadCitySampleSaveGame, "K2Node_LoadCitySampleSaveGame" }, // 2209439773
		{ &Z_Construct_UFunction_UCitySampleGameInstanceBase_ResetNaniteVisualization, "ResetNaniteVisualization" }, // 998273453
		{ &Z_Construct_UFunction_UCitySampleGameInstanceBase_SaveCitySampleGameData, "SaveCitySampleGameData" }, // 3955482902
		{ &Z_Construct_UFunction_UCitySampleGameInstanceBase_SetInvertedAxes, "SetInvertedAxes" }, // 4165817905
		{ &Z_Construct_UFunction_UCitySampleGameInstanceBase_SetLookSensitivity, "SetLookSensitivity" }, // 365927959
		{ &Z_Construct_UFunction_UCitySampleGameInstanceBase_SetNaniteVisualization, "SetNaniteVisualization" }, // 709173933
		{ &Z_Construct_UFunction_UCitySampleGameInstanceBase_SetRumbleEnabled, "SetRumbleEnabled" }, // 2038862425
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Game/CitySampleGameInstanceBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Game/CitySampleGameInstanceBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_OnSaveGameLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/CitySampleGameInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_OnSaveGameLoaded = { "OnSaveGameLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleGameInstanceBase, OnSaveGameLoaded), Z_Construct_UDelegateFunction_CitySample_CitySampleOnSaveGameLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_OnSaveGameLoaded_MetaData), Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_OnSaveGameLoaded_MetaData) }; // 2666154063
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_SaveGame_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/CitySampleGameInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleGameInstanceBase, SaveGame), Z_Construct_UClass_UCitySampleSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_SaveGame_MetaData), Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_SaveGame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_DefaultNaniteVisualization_MetaData[] = {
		{ "Category", "Nanite" },
		{ "ModuleRelativePath", "Public/Game/CitySampleGameInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_DefaultNaniteVisualization = { "DefaultNaniteVisualization", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleGameInstanceBase, DefaultNaniteVisualization), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_DefaultNaniteVisualization_MetaData), Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_DefaultNaniteVisualization_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_DefaultTemporalAASamples_MetaData[] = {
		{ "Category", "Nanite" },
		{ "ModuleRelativePath", "Public/Game/CitySampleGameInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_DefaultTemporalAASamples = { "DefaultTemporalAASamples", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleGameInstanceBase, DefaultTemporalAASamples), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_DefaultTemporalAASamples_MetaData), Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_DefaultTemporalAASamples_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_CurrentNaniteVisualization_MetaData[] = {
		{ "Category", "Nanite" },
		{ "ModuleRelativePath", "Public/Game/CitySampleGameInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_CurrentNaniteVisualization = { "CurrentNaniteVisualization", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleGameInstanceBase, CurrentNaniteVisualization), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_CurrentNaniteVisualization_MetaData), Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_CurrentNaniteVisualization_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_BaseGroomTexture_MetaData[] = {
		{ "Category", "CitySampleGameInstanceBase" },
		{ "ModuleRelativePath", "Public/Game/CitySampleGameInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_BaseGroomTexture = { "BaseGroomTexture", nullptr, (EPropertyFlags)0x0044000000014001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleGameInstanceBase, BaseGroomTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_BaseGroomTexture_MetaData), Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_BaseGroomTexture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_BaseFollicleMaskTexture_MetaData[] = {
		{ "Category", "CitySampleGameInstanceBase" },
		{ "ModuleRelativePath", "Public/Game/CitySampleGameInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_BaseFollicleMaskTexture = { "BaseFollicleMaskTexture", nullptr, (EPropertyFlags)0x0044000000014001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleGameInstanceBase, BaseFollicleMaskTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_BaseFollicleMaskTexture_MetaData), Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_BaseFollicleMaskTexture_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_OnSaveGameLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_SaveGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_DefaultNaniteVisualization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_DefaultTemporalAASamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_CurrentNaniteVisualization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_BaseGroomTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::NewProp_BaseFollicleMaskTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleGameInstanceBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::ClassParams = {
		&UCitySampleGameInstanceBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::PropPointers),
		0,
		0x009000ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCitySampleGameInstanceBase()
	{
		if (!Z_Registration_Info_UClass_UCitySampleGameInstanceBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleGameInstanceBase.OuterSingleton, Z_Construct_UClass_UCitySampleGameInstanceBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleGameInstanceBase.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleGameInstanceBase>()
	{
		return UCitySampleGameInstanceBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleGameInstanceBase);
	UCitySampleGameInstanceBase::~UCitySampleGameInstanceBase() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameInstanceBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameInstanceBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleGameInstanceBase, UCitySampleGameInstanceBase::StaticClass, TEXT("UCitySampleGameInstanceBase"), &Z_Registration_Info_UClass_UCitySampleGameInstanceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleGameInstanceBase), 1888544608U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameInstanceBase_h_3425692032(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameInstanceBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameInstanceBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
