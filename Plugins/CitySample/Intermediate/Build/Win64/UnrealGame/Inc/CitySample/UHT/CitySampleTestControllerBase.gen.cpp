// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Tests/Controllers/CitySampleTestControllerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleTestControllerBase() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleTestControllerBase();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleTestControllerBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	GAUNTLET_API UClass* Z_Construct_UClass_UGauntletTestController();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	DEFINE_FUNCTION(UCitySampleTestControllerBase::execOnMemReportIntervalChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMemReportIntervalChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleTestControllerBase::execOnMemReportTimerExpired)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMemReportTimerExpired();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleTestControllerBase::execTryEarlyExec)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryEarlyExec(Z_Param_World);
		P_NATIVE_END;
	}
	void UCitySampleTestControllerBase::StaticRegisterNativesUCitySampleTestControllerBase()
	{
		UClass* Class = UCitySampleTestControllerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMemReportIntervalChanged", &UCitySampleTestControllerBase::execOnMemReportIntervalChanged },
			{ "OnMemReportTimerExpired", &UCitySampleTestControllerBase::execOnMemReportTimerExpired },
			{ "TryEarlyExec", &UCitySampleTestControllerBase::execTryEarlyExec },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCitySampleTestControllerBase_OnMemReportIntervalChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleTestControllerBase_OnMemReportIntervalChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tests/Controllers/CitySampleTestControllerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleTestControllerBase_OnMemReportIntervalChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleTestControllerBase, nullptr, "OnMemReportIntervalChanged", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleTestControllerBase_OnMemReportIntervalChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleTestControllerBase_OnMemReportIntervalChanged_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCitySampleTestControllerBase_OnMemReportIntervalChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleTestControllerBase_OnMemReportIntervalChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleTestControllerBase_OnMemReportTimerExpired_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleTestControllerBase_OnMemReportTimerExpired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tests/Controllers/CitySampleTestControllerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleTestControllerBase_OnMemReportTimerExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleTestControllerBase, nullptr, "OnMemReportTimerExpired", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleTestControllerBase_OnMemReportTimerExpired_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleTestControllerBase_OnMemReportTimerExpired_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCitySampleTestControllerBase_OnMemReportTimerExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleTestControllerBase_OnMemReportTimerExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleTestControllerBase_TryEarlyExec_Statics
	{
		struct CitySampleTestControllerBase_eventTryEarlyExec_Parms
		{
			const UWorld* World;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleTestControllerBase_TryEarlyExec_Statics::NewProp_World_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleTestControllerBase_TryEarlyExec_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleTestControllerBase_eventTryEarlyExec_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleTestControllerBase_TryEarlyExec_Statics::NewProp_World_MetaData), Z_Construct_UFunction_UCitySampleTestControllerBase_TryEarlyExec_Statics::NewProp_World_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleTestControllerBase_TryEarlyExec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleTestControllerBase_TryEarlyExec_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleTestControllerBase_TryEarlyExec_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tests/Controllers/CitySampleTestControllerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleTestControllerBase_TryEarlyExec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleTestControllerBase, nullptr, "TryEarlyExec", nullptr, nullptr, Z_Construct_UFunction_UCitySampleTestControllerBase_TryEarlyExec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleTestControllerBase_TryEarlyExec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleTestControllerBase_TryEarlyExec_Statics::CitySampleTestControllerBase_eventTryEarlyExec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleTestControllerBase_TryEarlyExec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleTestControllerBase_TryEarlyExec_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleTestControllerBase_TryEarlyExec_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleTestControllerBase_TryEarlyExec_Statics::CitySampleTestControllerBase_eventTryEarlyExec_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleTestControllerBase_TryEarlyExec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleTestControllerBase_TryEarlyExec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleTestControllerBase);
	UClass* Z_Construct_UClass_UCitySampleTestControllerBase_NoRegister()
	{
		return UCitySampleTestControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleTestControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleTestControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGauntletTestController,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleTestControllerBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySampleTestControllerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleTestControllerBase_OnMemReportIntervalChanged, "OnMemReportIntervalChanged" }, // 3474427133
		{ &Z_Construct_UFunction_UCitySampleTestControllerBase_OnMemReportTimerExpired, "OnMemReportTimerExpired" }, // 2481530812
		{ &Z_Construct_UFunction_UCitySampleTestControllerBase_TryEarlyExec, "TryEarlyExec" }, // 3448227952
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleTestControllerBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleTestControllerBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/Controllers/CitySampleTestControllerBase.h" },
		{ "ModuleRelativePath", "Public/Tests/Controllers/CitySampleTestControllerBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleTestControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleTestControllerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleTestControllerBase_Statics::ClassParams = {
		&UCitySampleTestControllerBase::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleTestControllerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleTestControllerBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCitySampleTestControllerBase()
	{
		if (!Z_Registration_Info_UClass_UCitySampleTestControllerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleTestControllerBase.OuterSingleton, Z_Construct_UClass_UCitySampleTestControllerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleTestControllerBase.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleTestControllerBase>()
	{
		return UCitySampleTestControllerBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleTestControllerBase);
	UCitySampleTestControllerBase::~UCitySampleTestControllerBase() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleTestControllerBase, UCitySampleTestControllerBase::StaticClass, TEXT("UCitySampleTestControllerBase"), &Z_Registration_Info_UClass_UCitySampleTestControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleTestControllerBase), 604992174U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerBase_h_3394816686(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
