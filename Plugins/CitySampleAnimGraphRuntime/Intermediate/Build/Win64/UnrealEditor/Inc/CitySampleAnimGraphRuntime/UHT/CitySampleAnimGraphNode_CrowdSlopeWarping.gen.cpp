// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleAnimGraphRuntime/Public/CitySampleAnimGraphNode_CrowdSlopeWarping.h"
#include "CitySample/Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleAnimGraphNode_CrowdSlopeWarping() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping();
	CITYSAMPLEANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping();
	CITYSAMPLEANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySampleAnimGraphRuntime();
// End Cross Module References
	void UCitySampleAnimGraphNode_CrowdSlopeWarping::StaticRegisterNativesUCitySampleAnimGraphNode_CrowdSlopeWarping()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleAnimGraphNode_CrowdSlopeWarping);
	UClass* Z_Construct_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping_NoRegister()
	{
		return UCitySampleAnimGraphNode_CrowdSlopeWarping::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping_Statics
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
	UObject* (*const Z_Construct_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySampleAnimGraphRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CitySampleAnimGraphNode_CrowdSlopeWarping.h" },
		{ "ModuleRelativePath", "Public/CitySampleAnimGraphNode_CrowdSlopeWarping.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CitySampleAnimGraphNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimGraphNode_CrowdSlopeWarping, Node), Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping_Statics::NewProp_Node_MetaData), Z_Construct_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping_Statics::NewProp_Node_MetaData) }; // 3956721150
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleAnimGraphNode_CrowdSlopeWarping>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping_Statics::ClassParams = {
		&UCitySampleAnimGraphNode_CrowdSlopeWarping::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping()
	{
		if (!Z_Registration_Info_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping.OuterSingleton, Z_Construct_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping.OuterSingleton;
	}
	template<> CITYSAMPLEANIMGRAPHRUNTIME_API UClass* StaticClass<UCitySampleAnimGraphNode_CrowdSlopeWarping>()
	{
		return UCitySampleAnimGraphNode_CrowdSlopeWarping::StaticClass();
	}
	UCitySampleAnimGraphNode_CrowdSlopeWarping::UCitySampleAnimGraphNode_CrowdSlopeWarping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleAnimGraphNode_CrowdSlopeWarping);
	UCitySampleAnimGraphNode_CrowdSlopeWarping::~UCitySampleAnimGraphNode_CrowdSlopeWarping() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleAnimGraphRuntime_Source_CitySampleAnimGraphRuntime_Public_CitySampleAnimGraphNode_CrowdSlopeWarping_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleAnimGraphRuntime_Source_CitySampleAnimGraphRuntime_Public_CitySampleAnimGraphNode_CrowdSlopeWarping_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping, UCitySampleAnimGraphNode_CrowdSlopeWarping::StaticClass, TEXT("UCitySampleAnimGraphNode_CrowdSlopeWarping"), &Z_Registration_Info_UClass_UCitySampleAnimGraphNode_CrowdSlopeWarping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleAnimGraphNode_CrowdSlopeWarping), 4065811495U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleAnimGraphRuntime_Source_CitySampleAnimGraphRuntime_Public_CitySampleAnimGraphNode_CrowdSlopeWarping_h_556785582(TEXT("/Script/CitySampleAnimGraphRuntime"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleAnimGraphRuntime_Source_CitySampleAnimGraphRuntime_Public_CitySampleAnimGraphNode_CrowdSlopeWarping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleAnimGraphRuntime_Source_CitySampleAnimGraphRuntime_Public_CitySampleAnimGraphNode_CrowdSlopeWarping_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
