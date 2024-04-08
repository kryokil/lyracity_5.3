// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficParkedVehicleVisualizationTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficParkedVehicleVisualizationTrait() {}
// Cross Module References
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationTrait();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	void UMassTrafficParkedVehicleVisualizationTrait::StaticRegisterNativesUMassTrafficParkedVehicleVisualizationTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficParkedVehicleVisualizationTrait);
	UClass* Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait_NoRegister()
	{
		return UMassTrafficParkedVehicleVisualizationTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassVisualizationTrait,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Parked Vehicle Visualization" },
		{ "IncludePath", "MassTrafficParkedVehicleVisualizationTrait.h" },
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicleVisualizationTrait.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficParkedVehicleVisualizationTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait_Statics::ClassParams = {
		&UMassTrafficParkedVehicleVisualizationTrait::StaticClass,
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
		0x001030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficParkedVehicleVisualizationTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficParkedVehicleVisualizationTrait.OuterSingleton, Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficParkedVehicleVisualizationTrait.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficParkedVehicleVisualizationTrait>()
	{
		return UMassTrafficParkedVehicleVisualizationTrait::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficParkedVehicleVisualizationTrait);
	UMassTrafficParkedVehicleVisualizationTrait::~UMassTrafficParkedVehicleVisualizationTrait() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleVisualizationTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleVisualizationTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait, UMassTrafficParkedVehicleVisualizationTrait::StaticClass, TEXT("UMassTrafficParkedVehicleVisualizationTrait"), &Z_Registration_Info_UClass_UMassTrafficParkedVehicleVisualizationTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficParkedVehicleVisualizationTrait), 563960883U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleVisualizationTrait_h_2149686853(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleVisualizationTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleVisualizationTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
