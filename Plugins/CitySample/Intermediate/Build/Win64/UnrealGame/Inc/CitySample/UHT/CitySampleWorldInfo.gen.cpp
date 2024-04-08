// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Game/CitySampleWorldInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleWorldInfo() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleWorldInfo();
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleWorldInfo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ADirectionalLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	ENGINE_API UClass* Z_Construct_UClass_APostProcessVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	DEFINE_FUNCTION(ACitySampleWorldInfo::execSetPostProcessingFilterBlendWeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPostProcessingFilterBlendWeight(Z_Param_BlendWeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleWorldInfo::execGetPostProcessingFilterBlendWeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPostProcessingFilterBlendWeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleWorldInfo::execResetSunlightAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSunlightAngle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleWorldInfo::execSetSunlightAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Angle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSunlightAngle(Z_Param_Angle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleWorldInfo::execGetSunlightAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSunlightAngle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleWorldInfo::execInitializeSunlightSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeSunlightSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleWorldInfo::execGetWorldMapSceneCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneCaptureComponent2D**)Z_Param__Result=P_THIS->GetWorldMapSceneCapture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleWorldInfo::execGetWorldMapBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBoxComponent**)Z_Param__Result=P_THIS->GetWorldMapBounds();
		P_NATIVE_END;
	}
	void ACitySampleWorldInfo::StaticRegisterNativesACitySampleWorldInfo()
	{
		UClass* Class = ACitySampleWorldInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPostProcessingFilterBlendWeight", &ACitySampleWorldInfo::execGetPostProcessingFilterBlendWeight },
			{ "GetSunlightAngle", &ACitySampleWorldInfo::execGetSunlightAngle },
			{ "GetWorldMapBounds", &ACitySampleWorldInfo::execGetWorldMapBounds },
			{ "GetWorldMapSceneCapture", &ACitySampleWorldInfo::execGetWorldMapSceneCapture },
			{ "InitializeSunlightSettings", &ACitySampleWorldInfo::execInitializeSunlightSettings },
			{ "ResetSunlightAngle", &ACitySampleWorldInfo::execResetSunlightAngle },
			{ "SetPostProcessingFilterBlendWeight", &ACitySampleWorldInfo::execSetPostProcessingFilterBlendWeight },
			{ "SetSunlightAngle", &ACitySampleWorldInfo::execSetSunlightAngle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACitySampleWorldInfo_GetPostProcessingFilterBlendWeight_Statics
	{
		struct CitySampleWorldInfo_eventGetPostProcessingFilterBlendWeight_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleWorldInfo_GetPostProcessingFilterBlendWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleWorldInfo_eventGetPostProcessingFilterBlendWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleWorldInfo_GetPostProcessingFilterBlendWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleWorldInfo_GetPostProcessingFilterBlendWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleWorldInfo_GetPostProcessingFilterBlendWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sim|Post-Processing Filter" },
		{ "ModuleRelativePath", "Public/Game/CitySampleWorldInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleWorldInfo_GetPostProcessingFilterBlendWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleWorldInfo, nullptr, "GetPostProcessingFilterBlendWeight", nullptr, nullptr, Z_Construct_UFunction_ACitySampleWorldInfo_GetPostProcessingFilterBlendWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleWorldInfo_GetPostProcessingFilterBlendWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleWorldInfo_GetPostProcessingFilterBlendWeight_Statics::CitySampleWorldInfo_eventGetPostProcessingFilterBlendWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleWorldInfo_GetPostProcessingFilterBlendWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleWorldInfo_GetPostProcessingFilterBlendWeight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleWorldInfo_GetPostProcessingFilterBlendWeight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleWorldInfo_GetPostProcessingFilterBlendWeight_Statics::CitySampleWorldInfo_eventGetPostProcessingFilterBlendWeight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleWorldInfo_GetPostProcessingFilterBlendWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleWorldInfo_GetPostProcessingFilterBlendWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleWorldInfo_GetSunlightAngle_Statics
	{
		struct CitySampleWorldInfo_eventGetSunlightAngle_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleWorldInfo_GetSunlightAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleWorldInfo_eventGetSunlightAngle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleWorldInfo_GetSunlightAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleWorldInfo_GetSunlightAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleWorldInfo_GetSunlightAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sim|Sunlight" },
		{ "ModuleRelativePath", "Public/Game/CitySampleWorldInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleWorldInfo_GetSunlightAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleWorldInfo, nullptr, "GetSunlightAngle", nullptr, nullptr, Z_Construct_UFunction_ACitySampleWorldInfo_GetSunlightAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleWorldInfo_GetSunlightAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleWorldInfo_GetSunlightAngle_Statics::CitySampleWorldInfo_eventGetSunlightAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleWorldInfo_GetSunlightAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleWorldInfo_GetSunlightAngle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleWorldInfo_GetSunlightAngle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleWorldInfo_GetSunlightAngle_Statics::CitySampleWorldInfo_eventGetSunlightAngle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleWorldInfo_GetSunlightAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleWorldInfo_GetSunlightAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapBounds_Statics
	{
		struct CitySampleWorldInfo_eventGetWorldMapBounds_Parms
		{
			UBoxComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapBounds_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleWorldInfo_eventGetWorldMapBounds_Parms, ReturnValue), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapBounds_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapBounds_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI|World Map" },
		{ "ModuleRelativePath", "Public/Game/CitySampleWorldInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleWorldInfo, nullptr, "GetWorldMapBounds", nullptr, nullptr, Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapBounds_Statics::CitySampleWorldInfo_eventGetWorldMapBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapBounds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapBounds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapBounds_Statics::CitySampleWorldInfo_eventGetWorldMapBounds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapSceneCapture_Statics
	{
		struct CitySampleWorldInfo_eventGetWorldMapSceneCapture_Parms
		{
			USceneCaptureComponent2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapSceneCapture_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapSceneCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleWorldInfo_eventGetWorldMapSceneCapture_Parms, ReturnValue), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapSceneCapture_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapSceneCapture_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapSceneCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapSceneCapture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapSceneCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI|World Map" },
		{ "ModuleRelativePath", "Public/Game/CitySampleWorldInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapSceneCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleWorldInfo, nullptr, "GetWorldMapSceneCapture", nullptr, nullptr, Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapSceneCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapSceneCapture_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapSceneCapture_Statics::CitySampleWorldInfo_eventGetWorldMapSceneCapture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapSceneCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapSceneCapture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapSceneCapture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapSceneCapture_Statics::CitySampleWorldInfo_eventGetWorldMapSceneCapture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapSceneCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapSceneCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleWorldInfo_InitializeSunlightSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleWorldInfo_InitializeSunlightSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sim|Sunlight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the sunlight settings using the angle of the directional light and sky dome. */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySampleWorldInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the sunlight settings using the angle of the directional light and sky dome." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleWorldInfo_InitializeSunlightSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleWorldInfo, nullptr, "InitializeSunlightSettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleWorldInfo_InitializeSunlightSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleWorldInfo_InitializeSunlightSettings_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACitySampleWorldInfo_InitializeSunlightSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleWorldInfo_InitializeSunlightSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleWorldInfo_ResetSunlightAngle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleWorldInfo_ResetSunlightAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sim|Sunlight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Resets the directional \"sun\" light and sky dome to match the initial angles. */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySampleWorldInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets the directional \"sun\" light and sky dome to match the initial angles." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleWorldInfo_ResetSunlightAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleWorldInfo, nullptr, "ResetSunlightAngle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleWorldInfo_ResetSunlightAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleWorldInfo_ResetSunlightAngle_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACitySampleWorldInfo_ResetSunlightAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleWorldInfo_ResetSunlightAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleWorldInfo_SetPostProcessingFilterBlendWeight_Statics
	{
		struct CitySampleWorldInfo_eventSetPostProcessingFilterBlendWeight_Parms
		{
			float BlendWeight;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleWorldInfo_SetPostProcessingFilterBlendWeight_Statics::NewProp_BlendWeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleWorldInfo_SetPostProcessingFilterBlendWeight_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleWorldInfo_eventSetPostProcessingFilterBlendWeight_Parms, BlendWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleWorldInfo_SetPostProcessingFilterBlendWeight_Statics::NewProp_BlendWeight_MetaData), Z_Construct_UFunction_ACitySampleWorldInfo_SetPostProcessingFilterBlendWeight_Statics::NewProp_BlendWeight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleWorldInfo_SetPostProcessingFilterBlendWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleWorldInfo_SetPostProcessingFilterBlendWeight_Statics::NewProp_BlendWeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleWorldInfo_SetPostProcessingFilterBlendWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sim|Post-Processing Filter" },
		{ "ModuleRelativePath", "Public/Game/CitySampleWorldInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleWorldInfo_SetPostProcessingFilterBlendWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleWorldInfo, nullptr, "SetPostProcessingFilterBlendWeight", nullptr, nullptr, Z_Construct_UFunction_ACitySampleWorldInfo_SetPostProcessingFilterBlendWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleWorldInfo_SetPostProcessingFilterBlendWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleWorldInfo_SetPostProcessingFilterBlendWeight_Statics::CitySampleWorldInfo_eventSetPostProcessingFilterBlendWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleWorldInfo_SetPostProcessingFilterBlendWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleWorldInfo_SetPostProcessingFilterBlendWeight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleWorldInfo_SetPostProcessingFilterBlendWeight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleWorldInfo_SetPostProcessingFilterBlendWeight_Statics::CitySampleWorldInfo_eventSetPostProcessingFilterBlendWeight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleWorldInfo_SetPostProcessingFilterBlendWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleWorldInfo_SetPostProcessingFilterBlendWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleWorldInfo_SetSunlightAngle_Statics
	{
		struct CitySampleWorldInfo_eventSetSunlightAngle_Parms
		{
			float Angle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleWorldInfo_SetSunlightAngle_Statics::NewProp_Angle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleWorldInfo_SetSunlightAngle_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleWorldInfo_eventSetSunlightAngle_Parms, Angle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleWorldInfo_SetSunlightAngle_Statics::NewProp_Angle_MetaData), Z_Construct_UFunction_ACitySampleWorldInfo_SetSunlightAngle_Statics::NewProp_Angle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleWorldInfo_SetSunlightAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleWorldInfo_SetSunlightAngle_Statics::NewProp_Angle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleWorldInfo_SetSunlightAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sim|Sunlight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the directional \"sun\" light and sky dome to match the given angle. */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySampleWorldInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the directional \"sun\" light and sky dome to match the given angle." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleWorldInfo_SetSunlightAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleWorldInfo, nullptr, "SetSunlightAngle", nullptr, nullptr, Z_Construct_UFunction_ACitySampleWorldInfo_SetSunlightAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleWorldInfo_SetSunlightAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleWorldInfo_SetSunlightAngle_Statics::CitySampleWorldInfo_eventSetSunlightAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleWorldInfo_SetSunlightAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleWorldInfo_SetSunlightAngle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleWorldInfo_SetSunlightAngle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleWorldInfo_SetSunlightAngle_Statics::CitySampleWorldInfo_eventSetSunlightAngle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleWorldInfo_SetSunlightAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleWorldInfo_SetSunlightAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACitySampleWorldInfo);
	UClass* Z_Construct_UClass_ACitySampleWorldInfo_NoRegister()
	{
		return ACitySampleWorldInfo::StaticClass();
	}
	struct Z_Construct_UClass_ACitySampleWorldInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldMapBoundingBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldMapBoundingBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldMapSceneCaptureComponent2D_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldMapSceneCaptureComponent2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MapResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SunLight_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SunLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyDome_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SkyDome;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialSunlightYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialSunlightYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SunlightYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SunlightYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyDomeYawOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SkyDomeYawOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessingFilter_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PostProcessingFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACitySampleWorldInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleWorldInfo_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACitySampleWorldInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACitySampleWorldInfo_GetPostProcessingFilterBlendWeight, "GetPostProcessingFilterBlendWeight" }, // 978968756
		{ &Z_Construct_UFunction_ACitySampleWorldInfo_GetSunlightAngle, "GetSunlightAngle" }, // 3508144471
		{ &Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapBounds, "GetWorldMapBounds" }, // 542529470
		{ &Z_Construct_UFunction_ACitySampleWorldInfo_GetWorldMapSceneCapture, "GetWorldMapSceneCapture" }, // 364346093
		{ &Z_Construct_UFunction_ACitySampleWorldInfo_InitializeSunlightSettings, "InitializeSunlightSettings" }, // 4294650388
		{ &Z_Construct_UFunction_ACitySampleWorldInfo_ResetSunlightAngle, "ResetSunlightAngle" }, // 3118400036
		{ &Z_Construct_UFunction_ACitySampleWorldInfo_SetPostProcessingFilterBlendWeight, "SetPostProcessingFilterBlendWeight" }, // 3218907826
		{ &Z_Construct_UFunction_ACitySampleWorldInfo_SetSunlightAngle, "SetSunlightAngle" }, // 2568905905
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleWorldInfo_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleWorldInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Actor for storing world data and whose bounds represent the world bounds.\n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/CitySampleWorldInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Game/CitySampleWorldInfo.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor for storing world data and whose bounds represent the world bounds." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_WorldMapBoundingBox_MetaData[] = {
		{ "Category", "UI|World Map" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bounding box representing the world map bounds. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Game/CitySampleWorldInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bounding box representing the world map bounds." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_WorldMapBoundingBox = { "WorldMapBoundingBox", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleWorldInfo, WorldMapBoundingBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_WorldMapBoundingBox_MetaData), Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_WorldMapBoundingBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_WorldMapSceneCaptureComponent2D_MetaData[] = {
		{ "Category", "UI|World Map" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** SceneCapture2D actor whose render target is used by the UI to represent the World Map. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Game/CitySampleWorldInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SceneCapture2D actor whose render target is used by the UI to represent the World Map." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_WorldMapSceneCaptureComponent2D = { "WorldMapSceneCaptureComponent2D", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleWorldInfo, WorldMapSceneCaptureComponent2D), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_WorldMapSceneCaptureComponent2D_MetaData), Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_WorldMapSceneCaptureComponent2D_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_MapResolution_MetaData[] = {
		{ "Category", "UI|World Map" },
		{ "ModuleRelativePath", "Public/Game/CitySampleWorldInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_MapResolution = { "MapResolution", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleWorldInfo, MapResolution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_MapResolution_MetaData), Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_MapResolution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_SunLight_MetaData[] = {
		{ "Category", "Sim|Sunlight" },
		{ "ModuleRelativePath", "Public/Game/CitySampleWorldInfo.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_SunLight = { "SunLight", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleWorldInfo, SunLight), Z_Construct_UClass_ADirectionalLight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_SunLight_MetaData), Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_SunLight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_SkyDome_MetaData[] = {
		{ "Category", "Sim|Sunlight" },
		{ "ModuleRelativePath", "Public/Game/CitySampleWorldInfo.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_SkyDome = { "SkyDome", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleWorldInfo, SkyDome), Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_SkyDome_MetaData), Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_SkyDome_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_InitialSunlightYaw_MetaData[] = {
		{ "Category", "Sim|Sunlight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Initial yaw set during InitializeSunlightSettings using the directional \"sun\" light. */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySampleWorldInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initial yaw set during InitializeSunlightSettings using the directional \"sun\" light." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_InitialSunlightYaw = { "InitialSunlightYaw", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleWorldInfo, InitialSunlightYaw), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_InitialSunlightYaw_MetaData), Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_InitialSunlightYaw_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_SunlightYaw_MetaData[] = {
		{ "Category", "Sim|Sunlight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The yaw of the \"sun\" light last set by SetSunlightAngle. */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySampleWorldInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The yaw of the \"sun\" light last set by SetSunlightAngle." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_SunlightYaw = { "SunlightYaw", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleWorldInfo, SunlightYaw), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_SunlightYaw_MetaData), Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_SunlightYaw_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_SkyDomeYawOffset_MetaData[] = {
		{ "Category", "Sim|Sunlight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Offset to align the sky dome \"sun\" with the sunlight direction. */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySampleWorldInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset to align the sky dome \"sun\" with the sunlight direction." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_SkyDomeYawOffset = { "SkyDomeYawOffset", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleWorldInfo, SkyDomeYawOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_SkyDomeYawOffset_MetaData), Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_SkyDomeYawOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_PostProcessingFilter_MetaData[] = {
		{ "Category", "Sim|Post-Processing Filter" },
		{ "ModuleRelativePath", "Public/Game/CitySampleWorldInfo.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_PostProcessingFilter = { "PostProcessingFilter", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleWorldInfo, PostProcessingFilter), Z_Construct_UClass_APostProcessVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_PostProcessingFilter_MetaData), Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_PostProcessingFilter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACitySampleWorldInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_WorldMapBoundingBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_WorldMapSceneCaptureComponent2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_MapResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_SunLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_SkyDome,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_InitialSunlightYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_SunlightYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_SkyDomeYawOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleWorldInfo_Statics::NewProp_PostProcessingFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACitySampleWorldInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACitySampleWorldInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACitySampleWorldInfo_Statics::ClassParams = {
		&ACitySampleWorldInfo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACitySampleWorldInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleWorldInfo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleWorldInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_ACitySampleWorldInfo_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleWorldInfo_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACitySampleWorldInfo()
	{
		if (!Z_Registration_Info_UClass_ACitySampleWorldInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACitySampleWorldInfo.OuterSingleton, Z_Construct_UClass_ACitySampleWorldInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACitySampleWorldInfo.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<ACitySampleWorldInfo>()
	{
		return ACitySampleWorldInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACitySampleWorldInfo);
	ACitySampleWorldInfo::~ACitySampleWorldInfo() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleWorldInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleWorldInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACitySampleWorldInfo, ACitySampleWorldInfo::StaticClass, TEXT("ACitySampleWorldInfo"), &Z_Registration_Info_UClass_ACitySampleWorldInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACitySampleWorldInfo), 192614837U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleWorldInfo_h_2976869494(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleWorldInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleWorldInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
