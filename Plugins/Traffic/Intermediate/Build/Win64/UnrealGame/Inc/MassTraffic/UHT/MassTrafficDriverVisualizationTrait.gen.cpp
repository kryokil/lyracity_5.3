// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficDriverVisualizationTrait.h"
#include "MassTraffic/Public/MassTrafficDrivers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficDriverVisualizationTrait() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationSubsystem_NoRegister();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficDriverInitializer();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficDriverInitializer_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficDriverVisualizationTrait();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficDriverVisualizationTrait_NoRegister();
	MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDriversParameters();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	void UMassTrafficDriverVisualizationTrait::StaticRegisterNativesUMassTrafficDriverVisualizationTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficDriverVisualizationTrait);
	UClass* Z_Construct_UClass_UMassTrafficDriverVisualizationTrait_NoRegister()
	{
		return UMassTrafficDriverVisualizationTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficDriverVisualizationTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepresentationSubsystemClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RepresentationSubsystemClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficDriverVisualizationTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverVisualizationTrait_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficDriverVisualizationTrait_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Traffic Vehicle Driver Visualization" },
		{ "IncludePath", "MassTrafficDriverVisualizationTrait.h" },
		{ "ModuleRelativePath", "Public/MassTrafficDriverVisualizationTrait.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficDriverVisualizationTrait_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "Mass Traffic|Drivers" },
		{ "ModuleRelativePath", "Public/MassTrafficDriverVisualizationTrait.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficDriverVisualizationTrait_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficDriverVisualizationTrait, Params), Z_Construct_UScriptStruct_FMassTrafficDriversParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverVisualizationTrait_Statics::NewProp_Params_MetaData), Z_Construct_UClass_UMassTrafficDriverVisualizationTrait_Statics::NewProp_Params_MetaData) }; // 4153405130
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficDriverVisualizationTrait_Statics::NewProp_RepresentationSubsystemClass_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Allow subclasses to override the representation subsystem to use */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficDriverVisualizationTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allow subclasses to override the representation subsystem to use" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMassTrafficDriverVisualizationTrait_Statics::NewProp_RepresentationSubsystemClass = { "RepresentationSubsystemClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficDriverVisualizationTrait, RepresentationSubsystemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMassRepresentationSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverVisualizationTrait_Statics::NewProp_RepresentationSubsystemClass_MetaData), Z_Construct_UClass_UMassTrafficDriverVisualizationTrait_Statics::NewProp_RepresentationSubsystemClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficDriverVisualizationTrait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficDriverVisualizationTrait_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficDriverVisualizationTrait_Statics::NewProp_RepresentationSubsystemClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficDriverVisualizationTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficDriverVisualizationTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficDriverVisualizationTrait_Statics::ClassParams = {
		&UMassTrafficDriverVisualizationTrait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassTrafficDriverVisualizationTrait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverVisualizationTrait_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverVisualizationTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficDriverVisualizationTrait_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverVisualizationTrait_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassTrafficDriverVisualizationTrait()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficDriverVisualizationTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficDriverVisualizationTrait.OuterSingleton, Z_Construct_UClass_UMassTrafficDriverVisualizationTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficDriverVisualizationTrait.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficDriverVisualizationTrait>()
	{
		return UMassTrafficDriverVisualizationTrait::StaticClass();
	}
	UMassTrafficDriverVisualizationTrait::UMassTrafficDriverVisualizationTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficDriverVisualizationTrait);
	UMassTrafficDriverVisualizationTrait::~UMassTrafficDriverVisualizationTrait() {}
	void UMassTrafficDriverInitializer::StaticRegisterNativesUMassTrafficDriverInitializer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficDriverInitializer);
	UClass* Z_Construct_UClass_UMassTrafficDriverInitializer_NoRegister()
	{
		return UMassTrafficDriverInitializer::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficDriverInitializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficDriverInitializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverInitializer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficDriverInitializer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficDriverVisualizationTrait.h" },
		{ "ModuleRelativePath", "Public/MassTrafficDriverVisualizationTrait.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficDriverInitializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficDriverInitializer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficDriverInitializer_Statics::ClassParams = {
		&UMassTrafficDriverInitializer::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverInitializer_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficDriverInitializer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassTrafficDriverInitializer()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficDriverInitializer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficDriverInitializer.OuterSingleton, Z_Construct_UClass_UMassTrafficDriverInitializer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficDriverInitializer.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficDriverInitializer>()
	{
		return UMassTrafficDriverInitializer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficDriverInitializer);
	UMassTrafficDriverInitializer::~UMassTrafficDriverInitializer() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDriverVisualizationTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDriverVisualizationTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficDriverVisualizationTrait, UMassTrafficDriverVisualizationTrait::StaticClass, TEXT("UMassTrafficDriverVisualizationTrait"), &Z_Registration_Info_UClass_UMassTrafficDriverVisualizationTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficDriverVisualizationTrait), 1634615620U) },
		{ Z_Construct_UClass_UMassTrafficDriverInitializer, UMassTrafficDriverInitializer::StaticClass, TEXT("UMassTrafficDriverInitializer"), &Z_Registration_Info_UClass_UMassTrafficDriverInitializer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficDriverInitializer), 134834272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDriverVisualizationTrait_h_292169465(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDriverVisualizationTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDriverVisualizationTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
