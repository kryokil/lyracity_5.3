// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficTrailerSpawnDataGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficTrailerSpawnDataGenerator() {}
// Cross Module References
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	void UMassTrafficTrailerSpawnDataGenerator::StaticRegisterNativesUMassTrafficTrailerSpawnDataGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficTrailerSpawnDataGenerator);
	UClass* Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_NoRegister()
	{
		return UMassTrafficTrailerSpawnDataGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Searches all currently spawned vehicles with UMassTrafficConstrainedTrailerTrait and spawns their\n * TrailerAgentConfigAsset, constrained to each vehicle respectively.\n * \n * Note: Only TrailerAgentConfigAsset's that appear in this spawners entity types list will be spawned. \n */" },
#endif
		{ "IncludePath", "MassTrafficTrailerSpawnDataGenerator.h" },
		{ "ModuleRelativePath", "Public/MassTrafficTrailerSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Searches all currently spawned vehicles with UMassTrafficConstrainedTrailerTrait and spawns their\nTrailerAgentConfigAsset, constrained to each vehicle respectively.\n\nNote: Only TrailerAgentConfigAsset's that appear in this spawners entity types list will be spawned." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficTrailerSpawnDataGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_Statics::ClassParams = {
		&UMassTrafficTrailerSpawnDataGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficTrailerSpawnDataGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficTrailerSpawnDataGenerator.OuterSingleton, Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficTrailerSpawnDataGenerator.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficTrailerSpawnDataGenerator>()
	{
		return UMassTrafficTrailerSpawnDataGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficTrailerSpawnDataGenerator);
	UMassTrafficTrailerSpawnDataGenerator::~UMassTrafficTrailerSpawnDataGenerator() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerSpawnDataGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerSpawnDataGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator, UMassTrafficTrailerSpawnDataGenerator::StaticClass, TEXT("UMassTrafficTrailerSpawnDataGenerator"), &Z_Registration_Info_UClass_UMassTrafficTrailerSpawnDataGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficTrailerSpawnDataGenerator), 3301633379U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerSpawnDataGenerator_h_1166407026(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerSpawnDataGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerSpawnDataGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
