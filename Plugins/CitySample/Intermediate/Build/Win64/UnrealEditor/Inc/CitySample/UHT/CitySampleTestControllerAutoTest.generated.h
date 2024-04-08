// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/Controllers/CitySampleTestControllerAutoTest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameStateBase;
#ifdef CITYSAMPLE_CitySampleTestControllerAutoTest_generated_h
#error "CitySampleTestControllerAutoTest.generated.h already included, missing '#pragma once' in CitySampleTestControllerAutoTest.h"
#endif
#define CITYSAMPLE_CitySampleTestControllerAutoTest_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerAutoTest_h_50_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerAutoTest_h_50_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerAutoTest_h_50_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerAutoTest_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSoakTimeChanged); \
	DECLARE_FUNCTION(execOnSandboxTestSequenceFinished); \
	DECLARE_FUNCTION(execOnSandboxIntroFinished); \
	DECLARE_FUNCTION(execOnSandboxIntroStarted); \
	DECLARE_FUNCTION(execOnGameStateSet); \
	DECLARE_FUNCTION(execOnWorldBeginPlay);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerAutoTest_h_50_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerAutoTest_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCitySampleTestControllerAutoTest(); \
	friend struct Z_Construct_UClass_UCitySampleTestControllerAutoTest_Statics; \
public: \
	DECLARE_CLASS(UCitySampleTestControllerAutoTest, UCitySampleTestControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleTestControllerAutoTest)


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerAutoTest_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCitySampleTestControllerAutoTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleTestControllerAutoTest(UCitySampleTestControllerAutoTest&&); \
	NO_API UCitySampleTestControllerAutoTest(const UCitySampleTestControllerAutoTest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleTestControllerAutoTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleTestControllerAutoTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCitySampleTestControllerAutoTest) \
	NO_API virtual ~UCitySampleTestControllerAutoTest();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerAutoTest_h_47_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerAutoTest_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerAutoTest_h_50_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerAutoTest_h_50_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerAutoTest_h_50_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerAutoTest_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerAutoTest_h_50_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerAutoTest_h_50_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerAutoTest_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UCitySampleTestControllerAutoTest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Tests_Controllers_CitySampleTestControllerAutoTest_h


#define FOREACH_ENUM_ECITYSAMPLEAUTOTESTSTATE(op) \
	op(ECitySampleAutoTestState::InitialLoad) \
	op(ECitySampleAutoTestState::Intro) \
	op(ECitySampleAutoTestState::Soak) \
	op(ECitySampleAutoTestState::TestSequence) \
	op(ECitySampleAutoTestState::Finished) \
	op(ECitySampleAutoTestState::Shutdown) 

enum class ECitySampleAutoTestState : uint8;
template<> struct TIsUEnumClass<ECitySampleAutoTestState> { enum { Value = true }; };
template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySampleAutoTestState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
