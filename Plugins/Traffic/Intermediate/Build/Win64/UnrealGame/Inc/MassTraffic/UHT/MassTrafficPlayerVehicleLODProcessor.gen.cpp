// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficPlayerVehicleLODProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficPlayerVehicleLODProcessor() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	void UMassTrafficPlayerVehicleLODProcessor::StaticRegisterNativesUMassTrafficPlayerVehicleLODProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficPlayerVehicleLODProcessor);
	UClass* Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor_NoRegister()
	{
		return UMassTrafficPlayerVehicleLODProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Scale the LOD distance for the player vehicle so it stays around\n * way way longer that would be normally.\n */" },
#endif
		{ "IncludePath", "MassTrafficPlayerVehicleLODProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficPlayerVehicleLODProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Scale the LOD distance for the player vehicle so it stays around\n* way way longer that would be normally." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficPlayerVehicleLODProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor_Statics::ClassParams = {
		&UMassTrafficPlayerVehicleLODProcessor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficPlayerVehicleLODProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficPlayerVehicleLODProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficPlayerVehicleLODProcessor.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficPlayerVehicleLODProcessor>()
	{
		return UMassTrafficPlayerVehicleLODProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficPlayerVehicleLODProcessor);
	UMassTrafficPlayerVehicleLODProcessor::~UMassTrafficPlayerVehicleLODProcessor() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPlayerVehicleLODProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPlayerVehicleLODProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor, UMassTrafficPlayerVehicleLODProcessor::StaticClass, TEXT("UMassTrafficPlayerVehicleLODProcessor"), &Z_Registration_Info_UClass_UMassTrafficPlayerVehicleLODProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficPlayerVehicleLODProcessor), 3774854368U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPlayerVehicleLODProcessor_h_1917248518(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPlayerVehicleLODProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPlayerVehicleLODProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
