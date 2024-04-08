// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleAnimGraphRuntime/Public/CitySampleAnimGraphNode_CopyPoseRotations.h"
#include "CitySample/Public/Anim/CitySampleAnimNode_CopyPoseRotations.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleAnimGraphNode_CopyPoseRotations() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations();
	CITYSAMPLEANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UCitySampleAnimGraphNode_CopyPoseRotations();
	CITYSAMPLEANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UCitySampleAnimGraphNode_CopyPoseRotations_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySampleAnimGraphRuntime();
// End Cross Module References
	void UCitySampleAnimGraphNode_CopyPoseRotations::StaticRegisterNativesUCitySampleAnimGraphNode_CopyPoseRotations()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleAnimGraphNode_CopyPoseRotations);
	UClass* Z_Construct_UClass_UCitySampleAnimGraphNode_CopyPoseRotations_NoRegister()
	{
		return UCitySampleAnimGraphNode_CopyPoseRotations::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleAnimGraphNode_CopyPoseRotations_Statics
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
	UObject* (*const Z_Construct_UClass_UCitySampleAnimGraphNode_CopyPoseRotations_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySampleAnimGraphRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimGraphNode_CopyPoseRotations_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimGraphNode_CopyPoseRotations_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CitySampleAnimGraphNode_CopyPoseRotations.h" },
		{ "ModuleRelativePath", "Public/CitySampleAnimGraphNode_CopyPoseRotations.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimGraphNode_CopyPoseRotations_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CitySampleAnimGraphNode_CopyPoseRotations.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleAnimGraphNode_CopyPoseRotations_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimGraphNode_CopyPoseRotations, Node), Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimGraphNode_CopyPoseRotations_Statics::NewProp_Node_MetaData), Z_Construct_UClass_UCitySampleAnimGraphNode_CopyPoseRotations_Statics::NewProp_Node_MetaData) }; // 662015176
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleAnimGraphNode_CopyPoseRotations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimGraphNode_CopyPoseRotations_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleAnimGraphNode_CopyPoseRotations_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleAnimGraphNode_CopyPoseRotations>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleAnimGraphNode_CopyPoseRotations_Statics::ClassParams = {
		&UCitySampleAnimGraphNode_CopyPoseRotations::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCitySampleAnimGraphNode_CopyPoseRotations_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimGraphNode_CopyPoseRotations_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimGraphNode_CopyPoseRotations_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleAnimGraphNode_CopyPoseRotations_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimGraphNode_CopyPoseRotations_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCitySampleAnimGraphNode_CopyPoseRotations()
	{
		if (!Z_Registration_Info_UClass_UCitySampleAnimGraphNode_CopyPoseRotations.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleAnimGraphNode_CopyPoseRotations.OuterSingleton, Z_Construct_UClass_UCitySampleAnimGraphNode_CopyPoseRotations_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleAnimGraphNode_CopyPoseRotations.OuterSingleton;
	}
	template<> CITYSAMPLEANIMGRAPHRUNTIME_API UClass* StaticClass<UCitySampleAnimGraphNode_CopyPoseRotations>()
	{
		return UCitySampleAnimGraphNode_CopyPoseRotations::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleAnimGraphNode_CopyPoseRotations);
	UCitySampleAnimGraphNode_CopyPoseRotations::~UCitySampleAnimGraphNode_CopyPoseRotations() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleAnimGraphRuntime_Source_CitySampleAnimGraphRuntime_Public_CitySampleAnimGraphNode_CopyPoseRotations_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleAnimGraphRuntime_Source_CitySampleAnimGraphRuntime_Public_CitySampleAnimGraphNode_CopyPoseRotations_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleAnimGraphNode_CopyPoseRotations, UCitySampleAnimGraphNode_CopyPoseRotations::StaticClass, TEXT("UCitySampleAnimGraphNode_CopyPoseRotations"), &Z_Registration_Info_UClass_UCitySampleAnimGraphNode_CopyPoseRotations, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleAnimGraphNode_CopyPoseRotations), 3424599289U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleAnimGraphRuntime_Source_CitySampleAnimGraphRuntime_Public_CitySampleAnimGraphNode_CopyPoseRotations_h_3728864329(TEXT("/Script/CitySampleAnimGraphRuntime"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleAnimGraphRuntime_Source_CitySampleAnimGraphRuntime_Public_CitySampleAnimGraphNode_CopyPoseRotations_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleAnimGraphRuntime_Source_CitySampleAnimGraphRuntime_Public_CitySampleAnimGraphNode_CopyPoseRotations_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
