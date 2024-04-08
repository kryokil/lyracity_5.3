// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficVehicleSimulationLODProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficVehicleSimulationLODProcessor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	void UMassTrafficVehicleSimulationLODProcessor::StaticRegisterNativesUMassTrafficVehicleSimulationLODProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficVehicleSimulationLODProcessor);
	UClass* Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_NoRegister()
	{
		return UMassTrafficVehicleSimulationLODProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseLODDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLODDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibleLODDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VisibleLODDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferHysteresisOnDistancePercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BufferHysteresisOnDistancePercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODMaxCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODMaxCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToFrustum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToFrustum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToFrustumHysteresis_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToFrustumHysteresis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficVehicleSimulationLODProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationLODProcessor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_RandomStream_MetaData[] = {
		{ "Category", "Processor" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationLODProcessor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficVehicleSimulationLODProcessor, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_RandomStream_MetaData), Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_RandomStream_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_BaseLODDistance_MetaData[] = {
		{ "ArraySizeEnum", "/Script/MassLOD.EMassLOD" },
		{ "Category", "Mass|LOD" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationLODProcessor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_BaseLODDistance = { "BaseLODDistance", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(BaseLODDistance, UMassTrafficVehicleSimulationLODProcessor), STRUCT_OFFSET(UMassTrafficVehicleSimulationLODProcessor, BaseLODDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_BaseLODDistance_MetaData), Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_BaseLODDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_VisibleLODDistance_MetaData[] = {
		{ "ArraySizeEnum", "/Script/MassLOD.EMassLOD" },
		{ "Category", "Mass|LOD" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationLODProcessor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_VisibleLODDistance = { "VisibleLODDistance", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(VisibleLODDistance, UMassTrafficVehicleSimulationLODProcessor), STRUCT_OFFSET(UMassTrafficVehicleSimulationLODProcessor, VisibleLODDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_VisibleLODDistance_MetaData), Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_VisibleLODDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_BufferHysteresisOnDistancePercentage_MetaData[] = {
		{ "Category", "Mass|LOD" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hysteresis percentage on delta between the LOD distances */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationLODProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hysteresis percentage on delta between the LOD distances" },
#endif
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_BufferHysteresisOnDistancePercentage = { "BufferHysteresisOnDistancePercentage", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficVehicleSimulationLODProcessor, BufferHysteresisOnDistancePercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_BufferHysteresisOnDistancePercentage_MetaData), Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_BufferHysteresisOnDistancePercentage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_LODMaxCount_MetaData[] = {
		{ "ArraySizeEnum", "/Script/MassLOD.EMassLOD" },
		{ "Category", "Mass|LOD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum limit of entity per LOD */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationLODProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum limit of entity per LOD" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_LODMaxCount = { "LODMaxCount", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(LODMaxCount, UMassTrafficVehicleSimulationLODProcessor), STRUCT_OFFSET(UMassTrafficVehicleSimulationLODProcessor, LODMaxCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_LODMaxCount_MetaData), Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_LODMaxCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_DistanceToFrustum_MetaData[] = {
		{ "Category", "Mass|LOD" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How far away from frustum does this entities are considered visible */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationLODProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far away from frustum does this entities are considered visible" },
#endif
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_DistanceToFrustum = { "DistanceToFrustum", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficVehicleSimulationLODProcessor, DistanceToFrustum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_DistanceToFrustum_MetaData), Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_DistanceToFrustum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_DistanceToFrustumHysteresis_MetaData[] = {
		{ "Category", "Mass|LOD" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Once visible how much further than DistanceToFrustum does the entities need to be before being cull again */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationLODProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Once visible how much further than DistanceToFrustum does the entities need to be before being cull again" },
#endif
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_DistanceToFrustumHysteresis = { "DistanceToFrustumHysteresis", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficVehicleSimulationLODProcessor, DistanceToFrustumHysteresis), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_DistanceToFrustumHysteresis_MetaData), Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_DistanceToFrustumHysteresis_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_RandomStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_BaseLODDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_VisibleLODDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_BufferHysteresisOnDistancePercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_LODMaxCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_DistanceToFrustum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::NewProp_DistanceToFrustumHysteresis,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVehicleSimulationLODProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::ClassParams = {
		&UMassTrafficVehicleSimulationLODProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::PropPointers),
		0,
		0x401030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficVehicleSimulationLODProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehicleSimulationLODProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficVehicleSimulationLODProcessor.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficVehicleSimulationLODProcessor>()
	{
		return UMassTrafficVehicleSimulationLODProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficVehicleSimulationLODProcessor);
	UMassTrafficVehicleSimulationLODProcessor::~UMassTrafficVehicleSimulationLODProcessor() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationLODProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationLODProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficVehicleSimulationLODProcessor, UMassTrafficVehicleSimulationLODProcessor::StaticClass, TEXT("UMassTrafficVehicleSimulationLODProcessor"), &Z_Registration_Info_UClass_UMassTrafficVehicleSimulationLODProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehicleSimulationLODProcessor), 1663599406U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationLODProcessor_h_2429123472(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationLODProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationLODProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
