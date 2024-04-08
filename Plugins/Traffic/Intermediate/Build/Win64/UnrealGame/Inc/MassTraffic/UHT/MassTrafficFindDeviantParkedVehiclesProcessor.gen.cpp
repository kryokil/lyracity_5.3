// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficFindDeviantParkedVehiclesProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficFindDeviantParkedVehiclesProcessor() {}
// Cross Module References
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	void UMassTrafficFindDeviantParkedVehiclesProcessor::StaticRegisterNativesUMassTrafficFindDeviantParkedVehiclesProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficFindDeviantParkedVehiclesProcessor);
	UClass* Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor_NoRegister()
	{
		return UMassTrafficFindDeviantParkedVehiclesProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficFindDeviantParkedVehiclesProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFindDeviantParkedVehiclesProcessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficFindDeviantParkedVehiclesProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor_Statics::ClassParams = {
		&UMassTrafficFindDeviantParkedVehiclesProcessor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficFindDeviantParkedVehiclesProcessor>()
	{
		return UMassTrafficFindDeviantParkedVehiclesProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficFindDeviantParkedVehiclesProcessor);
	UMassTrafficFindDeviantParkedVehiclesProcessor::~UMassTrafficFindDeviantParkedVehiclesProcessor() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindDeviantParkedVehiclesProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindDeviantParkedVehiclesProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor, UMassTrafficFindDeviantParkedVehiclesProcessor::StaticClass, TEXT("UMassTrafficFindDeviantParkedVehiclesProcessor"), &Z_Registration_Info_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficFindDeviantParkedVehiclesProcessor), 84445089U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindDeviantParkedVehiclesProcessor_h_3126810679(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindDeviantParkedVehiclesProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindDeviantParkedVehiclesProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
