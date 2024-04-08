// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Crowd/CitySampleCrowdSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleCrowdSettings() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCrowdSettings();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCrowdSettings_NoRegister();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityConfigAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	DEFINE_FUNCTION(UCitySampleCrowdSettings::execGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UCitySampleCrowdSettings**)Z_Param__Result=UCitySampleCrowdSettings::Get();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCrowdSettings::execGetMutable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCitySampleCrowdSettings**)Z_Param__Result=UCitySampleCrowdSettings::GetMutable();
		P_NATIVE_END;
	}
	void UCitySampleCrowdSettings::StaticRegisterNativesUCitySampleCrowdSettings()
	{
		UClass* Class = UCitySampleCrowdSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &UCitySampleCrowdSettings::execGet },
			{ "GetMutable", &UCitySampleCrowdSettings::execGetMutable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics
	{
		struct CitySampleCrowdSettings_eventGet_Parms
		{
			const UCitySampleCrowdSettings* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdSettings_eventGet_Parms, ReturnValue), Z_Construct_UClass_UCitySampleCrowdSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Crowd/CitySampleCrowdSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdSettings, nullptr, "Get", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::CitySampleCrowdSettings_eventGet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::CitySampleCrowdSettings_eventGet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCrowdSettings_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics
	{
		struct CitySampleCrowdSettings_eventGetMutable_Parms
		{
			UCitySampleCrowdSettings* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdSettings_eventGetMutable_Parms, ReturnValue), Z_Construct_UClass_UCitySampleCrowdSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Crowd/CitySampleCrowdSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdSettings, nullptr, "GetMutable", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics::CitySampleCrowdSettings_eventGetMutable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics::CitySampleCrowdSettings_eventGetMutable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleCrowdSettings);
	UClass* Z_Construct_UClass_UCitySampleCrowdSettings_NoRegister()
	{
		return UCitySampleCrowdSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleCrowdSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ISMFarLodSignificanceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ISMFarLodSignificanceThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceMassCrowdToAverage_MetaData[];
#endif
		static void NewProp_bForceMassCrowdToAverage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceMassCrowdToAverage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideAccessoriesForMassCrowd_MetaData[];
#endif
		static void NewProp_bHideAccessoriesForMassCrowd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideAccessoriesForMassCrowd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMassCrowdShouldUseActorDefaultOptions_MetaData[];
#endif
		static void NewProp_bMassCrowdShouldUseActorDefaultOptions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMassCrowdShouldUseActorDefaultOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentConfigAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AgentConfigAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AgentConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ISMFarLodMeshOverride_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ISMFarLodMeshOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleCrowdSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCrowdSettings_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySampleCrowdSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleCrowdSettings_Get, "Get" }, // 3230911498
		{ &Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable, "GetMutable" }, // 3940345548
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCrowdSettings_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCrowdSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Crowd" },
		{ "IncludePath", "Crowd/CitySampleCrowdSettings.h" },
		{ "ModuleRelativePath", "Public/Crowd/CitySampleCrowdSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_ISMFarLodSignificanceThreshold_MetaData[] = {
		{ "Category", "LOD" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.0001" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Mass LOD significance at which to use a single ISM */" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CitySampleCrowdSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mass LOD significance at which to use a single ISM" },
#endif
		{ "UIMax", "4.0" },
		{ "UIMin", "0.0001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_ISMFarLodSignificanceThreshold = { "ISMFarLodSignificanceThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCrowdSettings, ISMFarLodSignificanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_ISMFarLodSignificanceThreshold_MetaData), Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_ISMFarLodSignificanceThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bForceMassCrowdToAverage_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Public/Crowd/CitySampleCrowdSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bForceMassCrowdToAverage_SetBit(void* Obj)
	{
		((UCitySampleCrowdSettings*)Obj)->bForceMassCrowdToAverage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bForceMassCrowdToAverage = { "bForceMassCrowdToAverage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleCrowdSettings), &Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bForceMassCrowdToAverage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bForceMassCrowdToAverage_MetaData), Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bForceMassCrowdToAverage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bHideAccessoriesForMassCrowd_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Public/Crowd/CitySampleCrowdSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bHideAccessoriesForMassCrowd_SetBit(void* Obj)
	{
		((UCitySampleCrowdSettings*)Obj)->bHideAccessoriesForMassCrowd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bHideAccessoriesForMassCrowd = { "bHideAccessoriesForMassCrowd", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleCrowdSettings), &Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bHideAccessoriesForMassCrowd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bHideAccessoriesForMassCrowd_MetaData), Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bHideAccessoriesForMassCrowd_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bMassCrowdShouldUseActorDefaultOptions_MetaData[] = {
		{ "Category", "Crowd" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Instead of randomizing the crowd characters, mass agents will attempt to use the default set of options from the template actor.\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CitySampleCrowdSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instead of randomizing the crowd characters, mass agents will attempt to use the default set of options from the template actor." },
#endif
	};
#endif
	void Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bMassCrowdShouldUseActorDefaultOptions_SetBit(void* Obj)
	{
		((UCitySampleCrowdSettings*)Obj)->bMassCrowdShouldUseActorDefaultOptions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bMassCrowdShouldUseActorDefaultOptions = { "bMassCrowdShouldUseActorDefaultOptions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleCrowdSettings), &Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bMassCrowdShouldUseActorDefaultOptions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bMassCrowdShouldUseActorDefaultOptions_MetaData), Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bMassCrowdShouldUseActorDefaultOptions_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_AgentConfigAsset_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Public/Crowd/CitySampleCrowdSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_AgentConfigAsset = { "AgentConfigAsset", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCrowdSettings, AgentConfigAsset), Z_Construct_UClass_UMassEntityConfigAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_AgentConfigAsset_MetaData), Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_AgentConfigAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_AgentConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/Crowd/CitySampleCrowdSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_AgentConfig = { "AgentConfig", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCrowdSettings, AgentConfig), Z_Construct_UClass_UMassEntityConfigAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_AgentConfig_MetaData), Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_AgentConfig_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_ISMFarLodMeshOverride_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Public/Crowd/CitySampleCrowdSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_ISMFarLodMeshOverride = { "ISMFarLodMeshOverride", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCrowdSettings, ISMFarLodMeshOverride), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_ISMFarLodMeshOverride_MetaData), Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_ISMFarLodMeshOverride_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleCrowdSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_ISMFarLodSignificanceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bForceMassCrowdToAverage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bHideAccessoriesForMassCrowd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bMassCrowdShouldUseActorDefaultOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_AgentConfigAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_AgentConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_ISMFarLodMeshOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleCrowdSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleCrowdSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleCrowdSettings_Statics::ClassParams = {
		&UCitySampleCrowdSettings::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCitySampleCrowdSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCrowdSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCrowdSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleCrowdSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCrowdSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCitySampleCrowdSettings()
	{
		if (!Z_Registration_Info_UClass_UCitySampleCrowdSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleCrowdSettings.OuterSingleton, Z_Construct_UClass_UCitySampleCrowdSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleCrowdSettings.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleCrowdSettings>()
	{
		return UCitySampleCrowdSettings::StaticClass();
	}
	UCitySampleCrowdSettings::UCitySampleCrowdSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleCrowdSettings);
	UCitySampleCrowdSettings::~UCitySampleCrowdSettings() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CitySampleCrowdSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CitySampleCrowdSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleCrowdSettings, UCitySampleCrowdSettings::StaticClass, TEXT("UCitySampleCrowdSettings"), &Z_Registration_Info_UClass_UCitySampleCrowdSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleCrowdSettings), 890190150U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CitySampleCrowdSettings_h_2221181020(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CitySampleCrowdSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CitySampleCrowdSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
