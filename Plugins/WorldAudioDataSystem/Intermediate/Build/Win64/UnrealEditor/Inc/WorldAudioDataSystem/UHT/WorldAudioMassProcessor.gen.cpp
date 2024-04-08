// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldAudioDataSystem/Public/WorldAudioMassProcessor.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldAudioMassProcessor() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeColorPointHashMapCollection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WorldAudioDataSystem();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UWorldAudioMassProcessor();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UWorldAudioMassProcessor_NoRegister();
// End Cross Module References
	void UWorldAudioMassProcessor::StaticRegisterNativesUWorldAudioMassProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldAudioMassProcessor);
	UClass* Z_Construct_UClass_UWorldAudioMassProcessor_NoRegister()
	{
		return UWorldAudioMassProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UWorldAudioMassProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPointCollectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ColorPointCollectionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovingVehicleColorPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovingVehicleColorPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoppedVehicleColorPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StoppedVehicleColorPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovingPedestrianColorPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovingPedestrianColorPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoppedPedestrianColorPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StoppedPedestrianColorPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPointHashUpdateTimeSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ColorPointHashUpdateTimeSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleMovingSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VehicleMovingSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PedestrianMovingSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PedestrianMovingSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIndividuallyAudibleVehicles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIndividuallyAudibleVehicles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPointHashMapCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorPointHashMapCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldAudioMassProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioMassProcessor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioMassProcessor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Mass Processor that fills a SoundScape color point hash map from mass agent locations\n */" },
#endif
		{ "IncludePath", "WorldAudioMassProcessor.h" },
		{ "ModuleRelativePath", "Public/WorldAudioMassProcessor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mass Processor that fills a SoundScape color point hash map from mass agent locations" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_ColorPointCollectionName_MetaData[] = {
		{ "Category", "Mass|SoundScape" },
		{ "ModuleRelativePath", "Public/WorldAudioMassProcessor.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_ColorPointCollectionName = { "ColorPointCollectionName", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioMassProcessor, ColorPointCollectionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_ColorPointCollectionName_MetaData), Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_ColorPointCollectionName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_MovingVehicleColorPoint_MetaData[] = {
		{ "Category", "Mass|SoundScape" },
		{ "ModuleRelativePath", "Public/WorldAudioMassProcessor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_MovingVehicleColorPoint = { "MovingVehicleColorPoint", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioMassProcessor, MovingVehicleColorPoint), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_MovingVehicleColorPoint_MetaData), Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_MovingVehicleColorPoint_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_StoppedVehicleColorPoint_MetaData[] = {
		{ "Category", "Mass|SoundScape" },
		{ "ModuleRelativePath", "Public/WorldAudioMassProcessor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_StoppedVehicleColorPoint = { "StoppedVehicleColorPoint", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioMassProcessor, StoppedVehicleColorPoint), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_StoppedVehicleColorPoint_MetaData), Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_StoppedVehicleColorPoint_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_MovingPedestrianColorPoint_MetaData[] = {
		{ "Category", "Mass|SoundScape" },
		{ "ModuleRelativePath", "Public/WorldAudioMassProcessor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_MovingPedestrianColorPoint = { "MovingPedestrianColorPoint", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioMassProcessor, MovingPedestrianColorPoint), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_MovingPedestrianColorPoint_MetaData), Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_MovingPedestrianColorPoint_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_StoppedPedestrianColorPoint_MetaData[] = {
		{ "Category", "Mass|SoundScape" },
		{ "ModuleRelativePath", "Public/WorldAudioMassProcessor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_StoppedPedestrianColorPoint = { "StoppedPedestrianColorPoint", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioMassProcessor, StoppedPedestrianColorPoint), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_StoppedPedestrianColorPoint_MetaData), Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_StoppedPedestrianColorPoint_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_ColorPointHashUpdateTimeSeconds_MetaData[] = {
		{ "Category", "Mass|SoundScape" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hash Cell Update Timing\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioMassProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hash Cell Update Timing" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_ColorPointHashUpdateTimeSeconds = { "ColorPointHashUpdateTimeSeconds", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioMassProcessor, ColorPointHashUpdateTimeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_ColorPointHashUpdateTimeSeconds_MetaData), Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_ColorPointHashUpdateTimeSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_VehicleMovingSpeedThreshold_MetaData[] = {
		{ "Category", "Mass|SoundScape" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Speed above which traffic vehicles should use MovingVehicleColorPoint. StoppedVehicleColorPoint used otherwise.\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioMassProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed above which traffic vehicles should use MovingVehicleColorPoint. StoppedVehicleColorPoint used otherwise." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_VehicleMovingSpeedThreshold = { "VehicleMovingSpeedThreshold", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioMassProcessor, VehicleMovingSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_VehicleMovingSpeedThreshold_MetaData), Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_VehicleMovingSpeedThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_PedestrianMovingSpeedThreshold_MetaData[] = {
		{ "Category", "Mass|SoundScape" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Speed above which traffic vehicles should use MovingVehicleColorPoint. StoppedVehicleColorPoint used otherwise.\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioMassProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed above which traffic vehicles should use MovingVehicleColorPoint. StoppedVehicleColorPoint used otherwise." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_PedestrianMovingSpeedThreshold = { "PedestrianMovingSpeedThreshold", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioMassProcessor, PedestrianMovingSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_PedestrianMovingSpeedThreshold_MetaData), Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_PedestrianMovingSpeedThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_MaxIndividuallyAudibleVehicles_MetaData[] = {
		{ "Category", "Mass|SoundScape" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The maximum number of individually audible nearby vehicles  \n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioMassProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum number of individually audible nearby vehicles" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_MaxIndividuallyAudibleVehicles = { "MaxIndividuallyAudibleVehicles", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioMassProcessor, MaxIndividuallyAudibleVehicles), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_MaxIndividuallyAudibleVehicles_MetaData), Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_MaxIndividuallyAudibleVehicles_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_ColorPointHashMapCollection_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldAudioMassProcessor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_ColorPointHashMapCollection = { "ColorPointHashMapCollection", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioMassProcessor, ColorPointHashMapCollection), Z_Construct_UClass_USoundscapeColorPointHashMapCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_ColorPointHashMapCollection_MetaData), Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_ColorPointHashMapCollection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldAudioMassProcessor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_ColorPointCollectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_MovingVehicleColorPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_StoppedVehicleColorPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_MovingPedestrianColorPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_StoppedPedestrianColorPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_ColorPointHashUpdateTimeSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_VehicleMovingSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_PedestrianMovingSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_MaxIndividuallyAudibleVehicles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioMassProcessor_Statics::NewProp_ColorPointHashMapCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldAudioMassProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldAudioMassProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldAudioMassProcessor_Statics::ClassParams = {
		&UWorldAudioMassProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldAudioMassProcessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioMassProcessor_Statics::PropPointers),
		0,
		0x401030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioMassProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldAudioMassProcessor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioMassProcessor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWorldAudioMassProcessor()
	{
		if (!Z_Registration_Info_UClass_UWorldAudioMassProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldAudioMassProcessor.OuterSingleton, Z_Construct_UClass_UWorldAudioMassProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldAudioMassProcessor.OuterSingleton;
	}
	template<> WORLDAUDIODATASYSTEM_API UClass* StaticClass<UWorldAudioMassProcessor>()
	{
		return UWorldAudioMassProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldAudioMassProcessor);
	UWorldAudioMassProcessor::~UWorldAudioMassProcessor() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioMassProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioMassProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldAudioMassProcessor, UWorldAudioMassProcessor::StaticClass, TEXT("UWorldAudioMassProcessor"), &Z_Registration_Info_UClass_UWorldAudioMassProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldAudioMassProcessor), 2544908328U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioMassProcessor_h_3507059945(TEXT("/Script/WorldAudioDataSystem"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioMassProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioMassProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
