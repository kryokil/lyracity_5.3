// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleEditor/Public/WorldPartition/CitySampleHLODBuilderMeshApproximate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleHLODBuilderMeshApproximate() {}
// Cross Module References
	CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate();
	CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySampleEditor();
	WORLDPARTITIONHLODUTILITIES_API UClass* Z_Construct_UClass_UHLODBuilderMeshApproximate();
// End Cross Module References
	void UCitySampleHLODBuilderMeshApproximate::StaticRegisterNativesUCitySampleHLODBuilderMeshApproximate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleHLODBuilderMeshApproximate);
	UClass* Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_NoRegister()
	{
		return UCitySampleHLODBuilderMeshApproximate::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHLODBuilderMeshApproximate,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySampleEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Extend the MeshApproximate HLOD builder to feed CitySample specific data to the mesh generation process.\n * In order to have better texture space utilization, we use this class to add the collision meshes of\n * buildings to the actor approximation algorithm. This ensure buildings are processed as watertight blocks.\n */" },
#endif
		{ "IncludePath", "WorldPartition/CitySampleHLODBuilderMeshApproximate.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/CitySampleHLODBuilderMeshApproximate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extend the MeshApproximate HLOD builder to feed CitySample specific data to the mesh generation process.\nIn order to have better texture space utilization, we use this class to add the collision meshes of\nbuildings to the actor approximation algorithm. This ensure buildings are processed as watertight blocks." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleHLODBuilderMeshApproximate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_Statics::ClassParams = {
		&UCitySampleHLODBuilderMeshApproximate::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate()
	{
		if (!Z_Registration_Info_UClass_UCitySampleHLODBuilderMeshApproximate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleHLODBuilderMeshApproximate.OuterSingleton, Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleHLODBuilderMeshApproximate.OuterSingleton;
	}
	template<> CITYSAMPLEEDITOR_API UClass* StaticClass<UCitySampleHLODBuilderMeshApproximate>()
	{
		return UCitySampleHLODBuilderMeshApproximate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleHLODBuilderMeshApproximate);
	UCitySampleHLODBuilderMeshApproximate::~UCitySampleHLODBuilderMeshApproximate() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_WorldPartition_CitySampleHLODBuilderMeshApproximate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_WorldPartition_CitySampleHLODBuilderMeshApproximate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate, UCitySampleHLODBuilderMeshApproximate::StaticClass, TEXT("UCitySampleHLODBuilderMeshApproximate"), &Z_Registration_Info_UClass_UCitySampleHLODBuilderMeshApproximate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleHLODBuilderMeshApproximate), 1970625524U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_WorldPartition_CitySampleHLODBuilderMeshApproximate_h_4237508123(TEXT("/Script/CitySampleEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_WorldPartition_CitySampleHLODBuilderMeshApproximate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_WorldPartition_CitySampleHLODBuilderMeshApproximate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
