// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficIntersectionSimulationTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficIntersectionSimulationTrait() {}
// Cross Module References
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	void UMassTrafficIntersectionSimulationTrait::StaticRegisterNativesUMassTrafficIntersectionSimulationTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficIntersectionSimulationTrait);
	UClass* Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_NoRegister()
	{
		return UMassTrafficIntersectionSimulationTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Traffic Intersection Simulation" },
		{ "IncludePath", "MassTrafficIntersectionSimulationTrait.h" },
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSimulationTrait.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficIntersectionSimulationTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_Statics::ClassParams = {
		&UMassTrafficIntersectionSimulationTrait::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficIntersectionSimulationTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficIntersectionSimulationTrait.OuterSingleton, Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficIntersectionSimulationTrait.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficIntersectionSimulationTrait>()
	{
		return UMassTrafficIntersectionSimulationTrait::StaticClass();
	}
	UMassTrafficIntersectionSimulationTrait::UMassTrafficIntersectionSimulationTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficIntersectionSimulationTrait);
	UMassTrafficIntersectionSimulationTrait::~UMassTrafficIntersectionSimulationTrait() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionSimulationTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionSimulationTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait, UMassTrafficIntersectionSimulationTrait::StaticClass, TEXT("UMassTrafficIntersectionSimulationTrait"), &Z_Registration_Info_UClass_UMassTrafficIntersectionSimulationTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficIntersectionSimulationTrait), 2776382426U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionSimulationTrait_h_2794967475(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionSimulationTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionSimulationTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
