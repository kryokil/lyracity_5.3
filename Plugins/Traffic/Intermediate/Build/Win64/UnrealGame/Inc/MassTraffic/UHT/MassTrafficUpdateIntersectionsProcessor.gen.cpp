// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficUpdateIntersectionsProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficUpdateIntersectionsProcessor() {}
// Cross Module References
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	void UMassTrafficUpdateIntersectionsProcessor::StaticRegisterNativesUMassTrafficUpdateIntersectionsProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficUpdateIntersectionsProcessor);
	UClass* Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor_NoRegister()
	{
		return UMassTrafficUpdateIntersectionsProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficUpdateIntersectionsProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficUpdateIntersectionsProcessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficUpdateIntersectionsProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor_Statics::ClassParams = {
		&UMassTrafficUpdateIntersectionsProcessor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficUpdateIntersectionsProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficUpdateIntersectionsProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficUpdateIntersectionsProcessor.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficUpdateIntersectionsProcessor>()
	{
		return UMassTrafficUpdateIntersectionsProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficUpdateIntersectionsProcessor);
	UMassTrafficUpdateIntersectionsProcessor::~UMassTrafficUpdateIntersectionsProcessor() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateIntersectionsProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateIntersectionsProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor, UMassTrafficUpdateIntersectionsProcessor::StaticClass, TEXT("UMassTrafficUpdateIntersectionsProcessor"), &Z_Registration_Info_UClass_UMassTrafficUpdateIntersectionsProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficUpdateIntersectionsProcessor), 2455281928U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateIntersectionsProcessor_h_1924234378(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateIntersectionsProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateIntersectionsProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS