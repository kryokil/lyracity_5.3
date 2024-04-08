// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleEditor/Public/CitySampleUnrealEdEngine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleUnrealEdEngine() {}
// Cross Module References
	CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleUnrealEdEngine();
	CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleUnrealEdEngine_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdEngine();
	UPackage* Z_Construct_UPackage__Script_CitySampleEditor();
// End Cross Module References
	void UCitySampleUnrealEdEngine::StaticRegisterNativesUCitySampleUnrealEdEngine()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleUnrealEdEngine);
	UClass* Z_Construct_UClass_UCitySampleUnrealEdEngine_NoRegister()
	{
		return UCitySampleUnrealEdEngine::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceControlStatusBranches_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceControlStatusBranches_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceControlStatusBranches;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUnrealEdEngine,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySampleEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CitySampleUnrealEdEngine.h" },
		{ "ModuleRelativePath", "Public/CitySampleUnrealEdEngine.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::NewProp_SourceControlStatusBranches_Inner = { "SourceControlStatusBranches", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::NewProp_SourceControlStatusBranches_MetaData[] = {
		{ "ModuleRelativePath", "Public/CitySampleUnrealEdEngine.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::NewProp_SourceControlStatusBranches = { "SourceControlStatusBranches", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleUnrealEdEngine, SourceControlStatusBranches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::NewProp_SourceControlStatusBranches_MetaData), Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::NewProp_SourceControlStatusBranches_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::NewProp_SourceControlStatusBranches_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::NewProp_SourceControlStatusBranches,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleUnrealEdEngine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::ClassParams = {
		&UCitySampleUnrealEdEngine::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::PropPointers),
		0,
		0x008000AEu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCitySampleUnrealEdEngine()
	{
		if (!Z_Registration_Info_UClass_UCitySampleUnrealEdEngine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleUnrealEdEngine.OuterSingleton, Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleUnrealEdEngine.OuterSingleton;
	}
	template<> CITYSAMPLEEDITOR_API UClass* StaticClass<UCitySampleUnrealEdEngine>()
	{
		return UCitySampleUnrealEdEngine::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleUnrealEdEngine);
	UCitySampleUnrealEdEngine::~UCitySampleUnrealEdEngine() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleUnrealEdEngine_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleUnrealEdEngine_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleUnrealEdEngine, UCitySampleUnrealEdEngine::StaticClass, TEXT("UCitySampleUnrealEdEngine"), &Z_Registration_Info_UClass_UCitySampleUnrealEdEngine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleUnrealEdEngine), 1477866603U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleUnrealEdEngine_h_4191139585(TEXT("/Script/CitySampleEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleUnrealEdEngine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleUnrealEdEngine_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
