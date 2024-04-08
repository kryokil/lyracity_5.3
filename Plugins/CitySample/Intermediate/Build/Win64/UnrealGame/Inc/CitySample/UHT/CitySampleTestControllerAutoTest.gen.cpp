// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Tests/Controllers/CitySampleTestControllerAutoTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleTestControllerAutoTest() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleTestControllerAutoTest();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleTestControllerAutoTest_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleTestControllerBase();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySampleAutoTestState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECitySampleAutoTestState;
	static UEnum* ECitySampleAutoTestState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECitySampleAutoTestState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECitySampleAutoTestState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ECitySampleAutoTestState, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("ECitySampleAutoTestState"));
		}
		return Z_Registration_Info_UEnum_ECitySampleAutoTestState.OuterSingleton;
	}
	template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySampleAutoTestState>()
	{
		return ECitySampleAutoTestState_StaticEnum();
	}
	struct Z_Construct_UEnum_CitySample_ECitySampleAutoTestState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CitySample_ECitySampleAutoTestState_Statics::Enumerators[] = {
		{ "ECitySampleAutoTestState::InitialLoad", (int64)ECitySampleAutoTestState::InitialLoad },
		{ "ECitySampleAutoTestState::Intro", (int64)ECitySampleAutoTestState::Intro },
		{ "ECitySampleAutoTestState::Soak", (int64)ECitySampleAutoTestState::Soak },
		{ "ECitySampleAutoTestState::TestSequence", (int64)ECitySampleAutoTestState::TestSequence },
		{ "ECitySampleAutoTestState::Finished", (int64)ECitySampleAutoTestState::Finished },
		{ "ECitySampleAutoTestState::Shutdown", (int64)ECitySampleAutoTestState::Shutdown },
		{ "ECitySampleAutoTestState::MAX", (int64)ECitySampleAutoTestState::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CitySample_ECitySampleAutoTestState_Statics::Enum_MetaDataParams[] = {
		{ "Finished.Name", "ECitySampleAutoTestState::Finished" },
		{ "InitialLoad.Name", "ECitySampleAutoTestState::InitialLoad" },
		{ "Intro.Name", "ECitySampleAutoTestState::Intro" },
		{ "MAX.Name", "ECitySampleAutoTestState::MAX" },
		{ "ModuleRelativePath", "Public/Tests/Controllers/CitySampleTestControllerAutoTest.h" },
		{ "Shutdown.Name", "ECitySampleAutoTestState::Shutdown" },
		{ "Soak.Name", "ECitySampleAutoTestState::Soak" },
		{ "TestSequence.Name", "ECitySampleAutoTestState::TestSequence" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ECitySampleAutoTestState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		"ECitySampleAutoTestState",
		"ECitySampleAutoTestState",
		Z_Construct_UEnum_CitySample_ECitySampleAutoTestState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleAutoTestState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleAutoTestState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_ECitySampleAutoTestState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CitySample_ECitySampleAutoTestState()
	{
		if (!Z_Registration_Info_UEnum_ECitySampleAutoTestState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECitySampleAutoTestState.InnerSingleton, Z_Construct_UEnum_CitySample_ECitySampleAutoTestState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECitySampleAutoTestState.InnerSingleton;
	}
	DEFINE_FUNCTION(UCitySampleTestControllerAutoTest::execOnSoakTimeChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSoakTimeChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleTestControllerAutoTest::execOnSandboxTestSequenceFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSandboxTestSequenceFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleTestControllerAutoTest::execOnSandboxIntroFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSandboxIntroFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleTestControllerAutoTest::execOnSandboxIntroStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSandboxIntroStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleTestControllerAutoTest::execOnGameStateSet)
	{
		P_GET_OBJECT(AGameStateBase,Z_Param_GameStateBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameStateSet(Z_Param_GameStateBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleTestControllerAutoTest::execOnWorldBeginPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWorldBeginPlay();
		P_NATIVE_END;
	}
	void UCitySampleTestControllerAutoTest::StaticRegisterNativesUCitySampleTestControllerAutoTest()
	{
		UClass* Class = UCitySampleTestControllerAutoTest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnGameStateSet", &UCitySampleTestControllerAutoTest::execOnGameStateSet },
			{ "OnSandboxIntroFinished", &UCitySampleTestControllerAutoTest::execOnSandboxIntroFinished },
			{ "OnSandboxIntroStarted", &UCitySampleTestControllerAutoTest::execOnSandboxIntroStarted },
			{ "OnSandboxTestSequenceFinished", &UCitySampleTestControllerAutoTest::execOnSandboxTestSequenceFinished },
			{ "OnSoakTimeChanged", &UCitySampleTestControllerAutoTest::execOnSoakTimeChanged },
			{ "OnWorldBeginPlay", &UCitySampleTestControllerAutoTest::execOnWorldBeginPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnGameStateSet_Statics
	{
		struct CitySampleTestControllerAutoTest_eventOnGameStateSet_Parms
		{
			const AGameStateBase* GameStateBase;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameStateBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameStateBase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnGameStateSet_Statics::NewProp_GameStateBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnGameStateSet_Statics::NewProp_GameStateBase = { "GameStateBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleTestControllerAutoTest_eventOnGameStateSet_Parms, GameStateBase), Z_Construct_UClass_AGameStateBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnGameStateSet_Statics::NewProp_GameStateBase_MetaData), Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnGameStateSet_Statics::NewProp_GameStateBase_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnGameStateSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnGameStateSet_Statics::NewProp_GameStateBase,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnGameStateSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tests/Controllers/CitySampleTestControllerAutoTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnGameStateSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleTestControllerAutoTest, nullptr, "OnGameStateSet", nullptr, nullptr, Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnGameStateSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnGameStateSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnGameStateSet_Statics::CitySampleTestControllerAutoTest_eventOnGameStateSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnGameStateSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnGameStateSet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnGameStateSet_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnGameStateSet_Statics::CitySampleTestControllerAutoTest_eventOnGameStateSet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnGameStateSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnGameStateSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSandboxIntroFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSandboxIntroFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tests/Controllers/CitySampleTestControllerAutoTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSandboxIntroFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleTestControllerAutoTest, nullptr, "OnSandboxIntroFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSandboxIntroFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSandboxIntroFinished_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSandboxIntroFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSandboxIntroFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSandboxIntroStarted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSandboxIntroStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tests/Controllers/CitySampleTestControllerAutoTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSandboxIntroStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleTestControllerAutoTest, nullptr, "OnSandboxIntroStarted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSandboxIntroStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSandboxIntroStarted_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSandboxIntroStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSandboxIntroStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSandboxTestSequenceFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSandboxTestSequenceFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tests/Controllers/CitySampleTestControllerAutoTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSandboxTestSequenceFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleTestControllerAutoTest, nullptr, "OnSandboxTestSequenceFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSandboxTestSequenceFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSandboxTestSequenceFinished_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSandboxTestSequenceFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSandboxTestSequenceFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSoakTimeChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSoakTimeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tests/Controllers/CitySampleTestControllerAutoTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSoakTimeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleTestControllerAutoTest, nullptr, "OnSoakTimeChanged", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSoakTimeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSoakTimeChanged_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSoakTimeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSoakTimeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnWorldBeginPlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnWorldBeginPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tests/Controllers/CitySampleTestControllerAutoTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnWorldBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleTestControllerAutoTest, nullptr, "OnWorldBeginPlay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnWorldBeginPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnWorldBeginPlay_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnWorldBeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnWorldBeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleTestControllerAutoTest);
	UClass* Z_Construct_UClass_UCitySampleTestControllerAutoTest_NoRegister()
	{
		return UCitySampleTestControllerAutoTest::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleTestControllerAutoTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleTestControllerAutoTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCitySampleTestControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleTestControllerAutoTest_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySampleTestControllerAutoTest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnGameStateSet, "OnGameStateSet" }, // 3040318772
		{ &Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSandboxIntroFinished, "OnSandboxIntroFinished" }, // 3873296615
		{ &Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSandboxIntroStarted, "OnSandboxIntroStarted" }, // 75485089
		{ &Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSandboxTestSequenceFinished, "OnSandboxTestSequenceFinished" }, // 1221809670
		{ &Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnSoakTimeChanged, "OnSoakTimeChanged" }, // 676358229
		{ &Z_Construct_UFunction_UCitySampleTestControllerAutoTest_OnWorldBeginPlay, "OnWorldBeginPlay" }, // 2569422871
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleTestControllerAutoTest_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleTestControllerAutoTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/Controllers/CitySampleTestControllerAutoTest.h" },
		{ "ModuleRelativePath", "Public/Tests/Controllers/CitySampleTestControllerAutoTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleTestControllerAutoTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleTestControllerAutoTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleTestControllerAutoTest_Statics::ClassParams = {
		&UCitySampleTestControllerAutoTest::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleTestControllerAutoTest_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleTestControllerAutoTest_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCitySampleTestControllerAutoTest()
	{
		if (!Z_Registration_Info_UClass_UCitySampleTestControllerAutoTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleTestControllerAutoTest.OuterSingleton, Z_Construct_UClass_UCitySampleTestControllerAutoTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleTestControllerAutoTest.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleTestControllerAutoTest>()
	{
		return UCitySampleTestControllerAutoTest::StaticClass();
	}
	UCitySampleTestControllerAutoTest::UCitySampleTestControllerAutoTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleTestControllerAutoTest);
	UCitySampleTestControllerAutoTest::~UCitySampleTestControllerAutoTest() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerAutoTest_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerAutoTest_h_Statics::EnumInfo[] = {
		{ ECitySampleAutoTestState_StaticEnum, TEXT("ECitySampleAutoTestState"), &Z_Registration_Info_UEnum_ECitySampleAutoTestState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2545222527U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerAutoTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleTestControllerAutoTest, UCitySampleTestControllerAutoTest::StaticClass, TEXT("UCitySampleTestControllerAutoTest"), &Z_Registration_Info_UClass_UCitySampleTestControllerAutoTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleTestControllerAutoTest), 2040390714U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerAutoTest_h_2534522433(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerAutoTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerAutoTest_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerAutoTest_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerAutoTest_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
