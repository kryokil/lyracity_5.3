// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficFindDeviantTrafficVehiclesProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficFindDeviantTrafficVehiclesProcessor() {}
// Cross Module References
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFindDeviantTrafficVehiclesProcessor();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFindDeviantTrafficVehiclesProcessor_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	void UMassTrafficFindDeviantTrafficVehiclesProcessor::StaticRegisterNativesUMassTrafficFindDeviantTrafficVehiclesProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficFindDeviantTrafficVehiclesProcessor);
	UClass* Z_Construct_UClass_UMassTrafficFindDeviantTrafficVehiclesProcessor_NoRegister()
	{
		return UMassTrafficFindDeviantTrafficVehiclesProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficFindDeviantTrafficVehiclesProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficFindDeviantTrafficVehiclesProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFindDeviantTrafficVehiclesProcessor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficFindDeviantTrafficVehiclesProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficFindDeviantTrafficVehiclesProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFindDeviantTrafficVehiclesProcessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficFindDeviantTrafficVehiclesProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficFindDeviantTrafficVehiclesProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficFindDeviantTrafficVehiclesProcessor_Statics::ClassParams = {
		&UMassTrafficFindDeviantTrafficVehiclesProcessor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFindDeviantTrafficVehiclesProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficFindDeviantTrafficVehiclesProcessor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassTrafficFindDeviantTrafficVehiclesProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficFindDeviantTrafficVehiclesProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficFindDeviantTrafficVehiclesProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficFindDeviantTrafficVehiclesProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficFindDeviantTrafficVehiclesProcessor.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficFindDeviantTrafficVehiclesProcessor>()
	{
		return UMassTrafficFindDeviantTrafficVehiclesProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficFindDeviantTrafficVehiclesProcessor);
	UMassTrafficFindDeviantTrafficVehiclesProcessor::~UMassTrafficFindDeviantTrafficVehiclesProcessor() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindDeviantTrafficVehiclesProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindDeviantTrafficVehiclesProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficFindDeviantTrafficVehiclesProcessor, UMassTrafficFindDeviantTrafficVehiclesProcessor::StaticClass, TEXT("UMassTrafficFindDeviantTrafficVehiclesProcessor"), &Z_Registration_Info_UClass_UMassTrafficFindDeviantTrafficVehiclesProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficFindDeviantTrafficVehiclesProcessor), 1721618917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindDeviantTrafficVehiclesProcessor_h_4003342673(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindDeviantTrafficVehiclesProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindDeviantTrafficVehiclesProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
