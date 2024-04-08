// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficVehicleControlProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficVehicleControlProcessor() {}
// Cross Module References
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleControlProcessor();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleControlProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	void UMassTrafficVehicleControlProcessor::StaticRegisterNativesUMassTrafficVehicleControlProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficVehicleControlProcessor);
	UClass* Z_Construct_UClass_UMassTrafficVehicleControlProcessor_NoRegister()
	{
		return UMassTrafficVehicleControlProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficVehicleControlProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficVehicleControlProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleControlProcessor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficVehicleControlProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficVehicleControlProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleControlProcessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficVehicleControlProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVehicleControlProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehicleControlProcessor_Statics::ClassParams = {
		&UMassTrafficVehicleControlProcessor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleControlProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehicleControlProcessor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassTrafficVehicleControlProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficVehicleControlProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehicleControlProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficVehicleControlProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficVehicleControlProcessor.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficVehicleControlProcessor>()
	{
		return UMassTrafficVehicleControlProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficVehicleControlProcessor);
	UMassTrafficVehicleControlProcessor::~UMassTrafficVehicleControlProcessor() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficVehicleControlProcessor, UMassTrafficVehicleControlProcessor::StaticClass, TEXT("UMassTrafficVehicleControlProcessor"), &Z_Registration_Info_UClass_UMassTrafficVehicleControlProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehicleControlProcessor), 3298511445U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlProcessor_h_3130818825(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
