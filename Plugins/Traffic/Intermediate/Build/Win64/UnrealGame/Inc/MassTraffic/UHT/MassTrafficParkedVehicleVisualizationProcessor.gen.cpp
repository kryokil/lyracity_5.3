// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficParkedVehicleVisualizationProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficParkedVehicleVisualizationProcessor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationProcessor();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	void UMassTrafficParkedVehicleVisualizationProcessor::StaticRegisterNativesUMassTrafficParkedVehicleVisualizationProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficParkedVehicleVisualizationProcessor);
	UClass* Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor_NoRegister()
	{
		return UMassTrafficParkedVehicleVisualizationProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassVisualizationProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Overridden visualization processor to make it tied to the ParkedVehicle via the requirements\n */" },
#endif
		{ "IncludePath", "MassTrafficParkedVehicleVisualizationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicleVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overridden visualization processor to make it tied to the ParkedVehicle via the requirements" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficParkedVehicleVisualizationProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor_Statics::ClassParams = {
		&UMassTrafficParkedVehicleVisualizationProcessor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficParkedVehicleVisualizationProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficParkedVehicleVisualizationProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficParkedVehicleVisualizationProcessor.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficParkedVehicleVisualizationProcessor>()
	{
		return UMassTrafficParkedVehicleVisualizationProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficParkedVehicleVisualizationProcessor);
	UMassTrafficParkedVehicleVisualizationProcessor::~UMassTrafficParkedVehicleVisualizationProcessor() {}
	void UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor::StaticRegisterNativesUMassTrafficParkedVehicleUpdateCustomVisualizationProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor);
	UClass* Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_NoRegister()
	{
		return UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics
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
	UObject* (*const Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Custom visualization updates for ParkedVehicle \n */" },
#endif
		{ "IncludePath", "MassTrafficParkedVehicleVisualizationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicleVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom visualization updates for ParkedVehicle" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicleVisualizationProcessor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::NewProp_World_MetaData), Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::NewProp_World_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::NewProp_World,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::ClassParams = {
		&UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::PropPointers),
		0,
		0x401030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor>()
	{
		return UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor);
	UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor::~UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleVisualizationProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleVisualizationProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor, UMassTrafficParkedVehicleVisualizationProcessor::StaticClass, TEXT("UMassTrafficParkedVehicleVisualizationProcessor"), &Z_Registration_Info_UClass_UMassTrafficParkedVehicleVisualizationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficParkedVehicleVisualizationProcessor), 732840001U) },
		{ Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor, UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor::StaticClass, TEXT("UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor"), &Z_Registration_Info_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor), 2376769190U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleVisualizationProcessor_h_3788121705(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleVisualizationProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleVisualizationProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
