// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficDriverVisualizationProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficDriverVisualizationProcessor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_NoRegister();
	MASSTRAFFIC_API UEnum* Z_Construct_UEnum_MassTraffic_EMassTrafficVehicleDamageState();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	void UMassTrafficDriverVisualizationProcessor::StaticRegisterNativesUMassTrafficDriverVisualizationProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficDriverVisualizationProcessor);
	UClass* Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_NoRegister()
	{
		return UMassTrafficDriverVisualizationProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackSteeringThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackSteeringThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookIdleMinDistSqrd_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookIdleMinDistSqrd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookIdleMinDotToPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookIdleMinDotToPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlternateDrivingStanceRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AlternateDrivingStanceRatio;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RemoveDriverDamageThreshold_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveDriverDamageThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RemoveDriverDamageThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Overridden visualization processor to make it tied to the TrafficVehicle via the requirements\n */" },
#endif
		{ "HideCategories", "Mass|LOD" },
		{ "IncludePath", "MassTrafficDriverVisualizationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficDriverVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overridden visualization processor to make it tied to the TrafficVehicle via the requirements" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_PlaybackSteeringThreshold_MetaData[] = {
		{ "Category", "MassTrafficDriverVisualizationProcessor" },
		{ "ModuleRelativePath", "Public/MassTrafficDriverVisualizationProcessor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_PlaybackSteeringThreshold = { "PlaybackSteeringThreshold", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficDriverVisualizationProcessor, PlaybackSteeringThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_PlaybackSteeringThreshold_MetaData), Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_PlaybackSteeringThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_LowSpeedThreshold_MetaData[] = {
		{ "Category", "MassTrafficDriverVisualizationProcessor" },
		{ "ModuleRelativePath", "Public/MassTrafficDriverVisualizationProcessor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_LowSpeedThreshold = { "LowSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficDriverVisualizationProcessor, LowSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_LowSpeedThreshold_MetaData), Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_LowSpeedThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_LookIdleMinDistSqrd_MetaData[] = {
		{ "Category", "MassTrafficDriverVisualizationProcessor" },
		{ "ModuleRelativePath", "Public/MassTrafficDriverVisualizationProcessor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_LookIdleMinDistSqrd = { "LookIdleMinDistSqrd", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficDriverVisualizationProcessor, LookIdleMinDistSqrd), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_LookIdleMinDistSqrd_MetaData), Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_LookIdleMinDistSqrd_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_LookIdleMinDotToPlayer_MetaData[] = {
		{ "Category", "MassTrafficDriverVisualizationProcessor" },
		{ "ModuleRelativePath", "Public/MassTrafficDriverVisualizationProcessor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_LookIdleMinDotToPlayer = { "LookIdleMinDotToPlayer", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficDriverVisualizationProcessor, LookIdleMinDotToPlayer), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_LookIdleMinDotToPlayer_MetaData), Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_LookIdleMinDotToPlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_AlternateDrivingStanceRatio_MetaData[] = {
		{ "Category", "MassTrafficDriverVisualizationProcessor" },
		{ "ModuleRelativePath", "Public/MassTrafficDriverVisualizationProcessor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_AlternateDrivingStanceRatio = { "AlternateDrivingStanceRatio", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficDriverVisualizationProcessor, AlternateDrivingStanceRatio), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_AlternateDrivingStanceRatio_MetaData), Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_AlternateDrivingStanceRatio_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_RemoveDriverDamageThreshold_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_RemoveDriverDamageThreshold_MetaData[] = {
		{ "Category", "MassTrafficDriverVisualizationProcessor" },
		{ "ModuleRelativePath", "Public/MassTrafficDriverVisualizationProcessor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_RemoveDriverDamageThreshold = { "RemoveDriverDamageThreshold", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficDriverVisualizationProcessor, RemoveDriverDamageThreshold), Z_Construct_UEnum_MassTraffic_EMassTrafficVehicleDamageState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_RemoveDriverDamageThreshold_MetaData), Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_RemoveDriverDamageThreshold_MetaData) }; // 3930928651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_World_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Caching ptr to our associated world */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficDriverVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Caching ptr to our associated world" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficDriverVisualizationProcessor, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_World_MetaData), Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_World_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_PlaybackSteeringThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_LowSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_LookIdleMinDistSqrd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_LookIdleMinDotToPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_AlternateDrivingStanceRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_RemoveDriverDamageThreshold_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_RemoveDriverDamageThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_World,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficDriverVisualizationProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::ClassParams = {
		&UMassTrafficDriverVisualizationProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::PropPointers),
		0,
		0x401030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficDriverVisualizationProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficDriverVisualizationProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficDriverVisualizationProcessor.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficDriverVisualizationProcessor>()
	{
		return UMassTrafficDriverVisualizationProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficDriverVisualizationProcessor);
	UMassTrafficDriverVisualizationProcessor::~UMassTrafficDriverVisualizationProcessor() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDriverVisualizationProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDriverVisualizationProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor, UMassTrafficDriverVisualizationProcessor::StaticClass, TEXT("UMassTrafficDriverVisualizationProcessor"), &Z_Registration_Info_UClass_UMassTrafficDriverVisualizationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficDriverVisualizationProcessor), 1255684065U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDriverVisualizationProcessor_h_2973871606(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDriverVisualizationProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDriverVisualizationProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
