// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficDamageRepairProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficDamageRepairProcessor() {}
// Cross Module References
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficDamageRepairProcessor();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficDamageRepairProcessor_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	void UMassTrafficDamageRepairProcessor::StaticRegisterNativesUMassTrafficDamageRepairProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficDamageRepairProcessor);
	UClass* Z_Construct_UClass_UMassTrafficDamageRepairProcessor_NoRegister()
	{
		return UMassTrafficDamageRepairProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficDamageRepairProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficDamageRepairProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDamageRepairProcessor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficDamageRepairProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficDamageRepairProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficDamageRepairProcessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficDamageRepairProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficDamageRepairProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficDamageRepairProcessor_Statics::ClassParams = {
		&UMassTrafficDamageRepairProcessor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDamageRepairProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficDamageRepairProcessor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassTrafficDamageRepairProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficDamageRepairProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficDamageRepairProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficDamageRepairProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficDamageRepairProcessor.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficDamageRepairProcessor>()
	{
		return UMassTrafficDamageRepairProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficDamageRepairProcessor);
	UMassTrafficDamageRepairProcessor::~UMassTrafficDamageRepairProcessor() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDamageRepairProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDamageRepairProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficDamageRepairProcessor, UMassTrafficDamageRepairProcessor::StaticClass, TEXT("UMassTrafficDamageRepairProcessor"), &Z_Registration_Info_UClass_UMassTrafficDamageRepairProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficDamageRepairProcessor), 2970630786U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDamageRepairProcessor_h_242503449(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDamageRepairProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDamageRepairProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
