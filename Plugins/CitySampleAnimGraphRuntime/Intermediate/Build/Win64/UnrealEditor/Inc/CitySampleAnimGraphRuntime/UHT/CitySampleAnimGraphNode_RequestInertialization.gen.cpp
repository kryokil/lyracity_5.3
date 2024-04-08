// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleAnimGraphRuntime/Public/CitySampleAnimGraphNode_RequestInertialization.h"
#include "CitySample/Public/Anim/CitySampleAnimNode_RequestInertialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleAnimGraphNode_RequestInertialization() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange();
	CITYSAMPLEANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertialization();
	CITYSAMPLEANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertialization_NoRegister();
	CITYSAMPLEANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange();
	CITYSAMPLEANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySampleAnimGraphRuntime();
// End Cross Module References
	void UCitySampleAnimGraphNode_RequestInertialization::StaticRegisterNativesUCitySampleAnimGraphNode_RequestInertialization()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleAnimGraphNode_RequestInertialization);
	UClass* Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertialization_NoRegister()
	{
		return UCitySampleAnimGraphNode_RequestInertialization::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertialization_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertialization_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySampleAnimGraphRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertialization_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertialization_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CitySampleAnimGraphNode_RequestInertialization.h" },
		{ "ModuleRelativePath", "Public/CitySampleAnimGraphNode_RequestInertialization.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertialization_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CitySampleAnimGraphNode_RequestInertialization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertialization_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimGraphNode_RequestInertialization, Node), Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertialization_Statics::NewProp_Node_MetaData), Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertialization_Statics::NewProp_Node_MetaData) }; // 2150483490
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertialization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertialization_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertialization_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleAnimGraphNode_RequestInertialization>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertialization_Statics::ClassParams = {
		&UCitySampleAnimGraphNode_RequestInertialization::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertialization_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertialization_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertialization_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertialization_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertialization_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertialization()
	{
		if (!Z_Registration_Info_UClass_UCitySampleAnimGraphNode_RequestInertialization.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleAnimGraphNode_RequestInertialization.OuterSingleton, Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertialization_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleAnimGraphNode_RequestInertialization.OuterSingleton;
	}
	template<> CITYSAMPLEANIMGRAPHRUNTIME_API UClass* StaticClass<UCitySampleAnimGraphNode_RequestInertialization>()
	{
		return UCitySampleAnimGraphNode_RequestInertialization::StaticClass();
	}
	UCitySampleAnimGraphNode_RequestInertialization::UCitySampleAnimGraphNode_RequestInertialization(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleAnimGraphNode_RequestInertialization);
	UCitySampleAnimGraphNode_RequestInertialization::~UCitySampleAnimGraphNode_RequestInertialization() {}
	void UCitySampleAnimGraphNode_RequestInertializationOnAssetChange::StaticRegisterNativesUCitySampleAnimGraphNode_RequestInertializationOnAssetChange()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleAnimGraphNode_RequestInertializationOnAssetChange);
	UClass* Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange_NoRegister()
	{
		return UCitySampleAnimGraphNode_RequestInertializationOnAssetChange::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySampleAnimGraphRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CitySampleAnimGraphNode_RequestInertialization.h" },
		{ "ModuleRelativePath", "Public/CitySampleAnimGraphNode_RequestInertialization.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CitySampleAnimGraphNode_RequestInertialization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimGraphNode_RequestInertializationOnAssetChange, Node), Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange_Statics::NewProp_Node_MetaData), Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange_Statics::NewProp_Node_MetaData) }; // 1345157434
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleAnimGraphNode_RequestInertializationOnAssetChange>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange_Statics::ClassParams = {
		&UCitySampleAnimGraphNode_RequestInertializationOnAssetChange::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange()
	{
		if (!Z_Registration_Info_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange.OuterSingleton, Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange.OuterSingleton;
	}
	template<> CITYSAMPLEANIMGRAPHRUNTIME_API UClass* StaticClass<UCitySampleAnimGraphNode_RequestInertializationOnAssetChange>()
	{
		return UCitySampleAnimGraphNode_RequestInertializationOnAssetChange::StaticClass();
	}
	UCitySampleAnimGraphNode_RequestInertializationOnAssetChange::UCitySampleAnimGraphNode_RequestInertializationOnAssetChange(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleAnimGraphNode_RequestInertializationOnAssetChange);
	UCitySampleAnimGraphNode_RequestInertializationOnAssetChange::~UCitySampleAnimGraphNode_RequestInertializationOnAssetChange() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleAnimGraphRuntime_Source_CitySampleAnimGraphRuntime_Public_CitySampleAnimGraphNode_RequestInertialization_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleAnimGraphRuntime_Source_CitySampleAnimGraphRuntime_Public_CitySampleAnimGraphNode_RequestInertialization_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertialization, UCitySampleAnimGraphNode_RequestInertialization::StaticClass, TEXT("UCitySampleAnimGraphNode_RequestInertialization"), &Z_Registration_Info_UClass_UCitySampleAnimGraphNode_RequestInertialization, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleAnimGraphNode_RequestInertialization), 713817831U) },
		{ Z_Construct_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange, UCitySampleAnimGraphNode_RequestInertializationOnAssetChange::StaticClass, TEXT("UCitySampleAnimGraphNode_RequestInertializationOnAssetChange"), &Z_Registration_Info_UClass_UCitySampleAnimGraphNode_RequestInertializationOnAssetChange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleAnimGraphNode_RequestInertializationOnAssetChange), 3770016644U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleAnimGraphRuntime_Source_CitySampleAnimGraphRuntime_Public_CitySampleAnimGraphNode_RequestInertialization_h_1471815889(TEXT("/Script/CitySampleAnimGraphRuntime"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleAnimGraphRuntime_Source_CitySampleAnimGraphRuntime_Public_CitySampleAnimGraphNode_RequestInertialization_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleAnimGraphRuntime_Source_CitySampleAnimGraphRuntime_Public_CitySampleAnimGraphNode_RequestInertialization_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
