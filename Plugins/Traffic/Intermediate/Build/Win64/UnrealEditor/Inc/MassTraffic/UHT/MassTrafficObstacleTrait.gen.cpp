// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficObstacleTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficObstacleTrait() {}
// Cross Module References
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficObstacleTrait();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficObstacleTrait_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	void UMassTrafficObstacleTrait::StaticRegisterNativesUMassTrafficObstacleTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficObstacleTrait);
	UClass* Z_Construct_UClass_UMassTrafficObstacleTrait_NoRegister()
	{
		return UMassTrafficObstacleTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficObstacleTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficObstacleTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficObstacleTrait_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficObstacleTrait_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Traffic Obstacle" },
		{ "IncludePath", "MassTrafficObstacleTrait.h" },
		{ "ModuleRelativePath", "Public/MassTrafficObstacleTrait.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficObstacleTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficObstacleTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficObstacleTrait_Statics::ClassParams = {
		&UMassTrafficObstacleTrait::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficObstacleTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficObstacleTrait_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassTrafficObstacleTrait()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficObstacleTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficObstacleTrait.OuterSingleton, Z_Construct_UClass_UMassTrafficObstacleTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficObstacleTrait.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficObstacleTrait>()
	{
		return UMassTrafficObstacleTrait::StaticClass();
	}
	UMassTrafficObstacleTrait::UMassTrafficObstacleTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficObstacleTrait);
	UMassTrafficObstacleTrait::~UMassTrafficObstacleTrait() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficObstacleTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficObstacleTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficObstacleTrait, UMassTrafficObstacleTrait::StaticClass, TEXT("UMassTrafficObstacleTrait"), &Z_Registration_Info_UClass_UMassTrafficObstacleTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficObstacleTrait), 1934363254U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficObstacleTrait_h_3260779273(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficObstacleTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficObstacleTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
