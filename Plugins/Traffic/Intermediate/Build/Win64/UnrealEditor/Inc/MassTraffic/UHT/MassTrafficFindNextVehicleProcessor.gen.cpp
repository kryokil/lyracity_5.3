// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficFindNextVehicleProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficFindNextVehicleProcessor() {}
// Cross Module References
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	void UMassTrafficFindNextVehicleProcessor::StaticRegisterNativesUMassTrafficFindNextVehicleProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficFindNextVehicleProcessor);
	UClass* Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_NoRegister()
	{
		return UMassTrafficFindNextVehicleProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficFindNextVehicleProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFindNextVehicleProcessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficFindNextVehicleProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_Statics::ClassParams = {
		&UMassTrafficFindNextVehicleProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficFindNextVehicleProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficFindNextVehicleProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficFindNextVehicleProcessor.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficFindNextVehicleProcessor>()
	{
		return UMassTrafficFindNextVehicleProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficFindNextVehicleProcessor);
	UMassTrafficFindNextVehicleProcessor::~UMassTrafficFindNextVehicleProcessor() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindNextVehicleProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindNextVehicleProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor, UMassTrafficFindNextVehicleProcessor::StaticClass, TEXT("UMassTrafficFindNextVehicleProcessor"), &Z_Registration_Info_UClass_UMassTrafficFindNextVehicleProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficFindNextVehicleProcessor), 1500247250U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindNextVehicleProcessor_h_16371444(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindNextVehicleProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindNextVehicleProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
