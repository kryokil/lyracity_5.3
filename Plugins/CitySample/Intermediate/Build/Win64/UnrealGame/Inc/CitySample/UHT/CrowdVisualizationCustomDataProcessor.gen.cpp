// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Crowd/CrowdVisualizationCustomDataProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdVisualizationCustomDataProcessor() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSLOD_API UClass* Z_Construct_UClass_UMassLODSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	void UMassProcessor_CrowdVisualizationCustomData::StaticRegisterNativesUMassProcessor_CrowdVisualizationCustomData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassProcessor_CrowdVisualizationCustomData);
	UClass* Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData_NoRegister()
	{
		return UMassProcessor_CrowdVisualizationCustomData::StaticClass();
	}
	struct Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LODSubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Crowd/CrowdVisualizationCustomDataProcessor.h" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdVisualizationCustomDataProcessor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData_Statics::NewProp_LODSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Crowd/CrowdVisualizationCustomDataProcessor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData_Statics::NewProp_LODSubsystem = { "LODSubsystem", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassProcessor_CrowdVisualizationCustomData, LODSubsystem), Z_Construct_UClass_UMassLODSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData_Statics::NewProp_LODSubsystem_MetaData), Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData_Statics::NewProp_LODSubsystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/Crowd/CrowdVisualizationCustomDataProcessor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassProcessor_CrowdVisualizationCustomData, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData_Statics::NewProp_World_MetaData), Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData_Statics::NewProp_World_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData_Statics::NewProp_LODSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData_Statics::NewProp_World,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassProcessor_CrowdVisualizationCustomData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData_Statics::ClassParams = {
		&UMassProcessor_CrowdVisualizationCustomData::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData_Statics::PropPointers),
		0,
		0x400030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData()
	{
		if (!Z_Registration_Info_UClass_UMassProcessor_CrowdVisualizationCustomData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassProcessor_CrowdVisualizationCustomData.OuterSingleton, Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassProcessor_CrowdVisualizationCustomData.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UMassProcessor_CrowdVisualizationCustomData>()
	{
		return UMassProcessor_CrowdVisualizationCustomData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassProcessor_CrowdVisualizationCustomData);
	UMassProcessor_CrowdVisualizationCustomData::~UMassProcessor_CrowdVisualizationCustomData() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdVisualizationCustomDataProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdVisualizationCustomDataProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassProcessor_CrowdVisualizationCustomData, UMassProcessor_CrowdVisualizationCustomData::StaticClass, TEXT("UMassProcessor_CrowdVisualizationCustomData"), &Z_Registration_Info_UClass_UMassProcessor_CrowdVisualizationCustomData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassProcessor_CrowdVisualizationCustomData), 2017663944U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdVisualizationCustomDataProcessor_h_3683541872(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdVisualizationCustomDataProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdVisualizationCustomDataProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
