// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficTrailerVisualizationProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficTrailerVisualizationProcessor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationProcessor();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	void UMassTrafficTrailerVisualizationProcessor::StaticRegisterNativesUMassTrafficTrailerVisualizationProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficTrailerVisualizationProcessor);
	UClass* Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor_NoRegister()
	{
		return UMassTrafficTrailerVisualizationProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassVisualizationProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Overridden visualization processor to make it tied to the TrafficVehicleTrailer via the requirements\n */" },
#endif
		{ "IncludePath", "MassTrafficTrailerVisualizationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficTrailerVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overridden visualization processor to make it tied to the TrafficVehicleTrailer via the requirements" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficTrailerVisualizationProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor_Statics::ClassParams = {
		&UMassTrafficTrailerVisualizationProcessor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficTrailerVisualizationProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficTrailerVisualizationProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficTrailerVisualizationProcessor.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficTrailerVisualizationProcessor>()
	{
		return UMassTrafficTrailerVisualizationProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficTrailerVisualizationProcessor);
	UMassTrafficTrailerVisualizationProcessor::~UMassTrafficTrailerVisualizationProcessor() {}
	void UMassTrafficTrailerUpdateCustomVisualizationProcessor::StaticRegisterNativesUMassTrafficTrailerUpdateCustomVisualizationProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficTrailerUpdateCustomVisualizationProcessor);
	UClass* Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_NoRegister()
	{
		return UMassTrafficTrailerUpdateCustomVisualizationProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Custom visualization updates for TrafficVehicleTrailer\n */" },
#endif
		{ "IncludePath", "MassTrafficTrailerVisualizationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficTrailerVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom visualization updates for TrafficVehicleTrailer" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficTrailerVisualizationProcessor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficTrailerUpdateCustomVisualizationProcessor, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::NewProp_World_MetaData), Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::NewProp_World_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::NewProp_World,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficTrailerUpdateCustomVisualizationProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::ClassParams = {
		&UMassTrafficTrailerUpdateCustomVisualizationProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::PropPointers),
		0,
		0x401030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficTrailerUpdateCustomVisualizationProcessor>()
	{
		return UMassTrafficTrailerUpdateCustomVisualizationProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficTrailerUpdateCustomVisualizationProcessor);
	UMassTrafficTrailerUpdateCustomVisualizationProcessor::~UMassTrafficTrailerUpdateCustomVisualizationProcessor() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerVisualizationProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerVisualizationProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor, UMassTrafficTrailerVisualizationProcessor::StaticClass, TEXT("UMassTrafficTrailerVisualizationProcessor"), &Z_Registration_Info_UClass_UMassTrafficTrailerVisualizationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficTrailerVisualizationProcessor), 3981236804U) },
		{ Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor, UMassTrafficTrailerUpdateCustomVisualizationProcessor::StaticClass, TEXT("UMassTrafficTrailerUpdateCustomVisualizationProcessor"), &Z_Registration_Info_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficTrailerUpdateCustomVisualizationProcessor), 3789139931U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerVisualizationProcessor_h_152907364(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerVisualizationProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerVisualizationProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
