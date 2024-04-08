// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficInterpolationProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficInterpolationProcessor() {}
// Cross Module References
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInterpolationProcessor();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInterpolationProcessor_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	void UMassTrafficInterpolationProcessor::StaticRegisterNativesUMassTrafficInterpolationProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficInterpolationProcessor);
	UClass* Z_Construct_UClass_UMassTrafficInterpolationProcessor_NoRegister()
	{
		return UMassTrafficInterpolationProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficInterpolationProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficInterpolationProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInterpolationProcessor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficInterpolationProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficInterpolationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficInterpolationProcessor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficInterpolationProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficInterpolationProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficInterpolationProcessor_Statics::ClassParams = {
		&UMassTrafficInterpolationProcessor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInterpolationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficInterpolationProcessor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassTrafficInterpolationProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficInterpolationProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficInterpolationProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficInterpolationProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficInterpolationProcessor.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficInterpolationProcessor>()
	{
		return UMassTrafficInterpolationProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficInterpolationProcessor);
	UMassTrafficInterpolationProcessor::~UMassTrafficInterpolationProcessor() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInterpolationProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInterpolationProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficInterpolationProcessor, UMassTrafficInterpolationProcessor::StaticClass, TEXT("UMassTrafficInterpolationProcessor"), &Z_Registration_Info_UClass_UMassTrafficInterpolationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficInterpolationProcessor), 1964069894U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInterpolationProcessor_h_1198881109(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInterpolationProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInterpolationProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
