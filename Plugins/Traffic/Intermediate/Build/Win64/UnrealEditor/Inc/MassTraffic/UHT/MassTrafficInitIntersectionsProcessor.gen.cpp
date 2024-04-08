// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficInitIntersectionsProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficInitIntersectionsProcessor() {}
// Cross Module References
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
	MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersectionsSpawnData();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficIntersectionsSpawnData;
class UScriptStruct* FMassTrafficIntersectionsSpawnData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficIntersectionsSpawnData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficIntersectionsSpawnData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficIntersectionsSpawnData, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficIntersectionsSpawnData"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficIntersectionsSpawnData.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficIntersectionsSpawnData>()
{
	return FMassTrafficIntersectionsSpawnData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassTrafficIntersectionsSpawnData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficIntersectionsSpawnData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficInitIntersectionsProcessor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassTrafficIntersectionsSpawnData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficIntersectionsSpawnData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficIntersectionsSpawnData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
		nullptr,
		&NewStructOps,
		"MassTrafficIntersectionsSpawnData",
		nullptr,
		0,
		sizeof(FMassTrafficIntersectionsSpawnData),
		alignof(FMassTrafficIntersectionsSpawnData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionsSpawnData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficIntersectionsSpawnData_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersectionsSpawnData()
	{
		if (!Z_Registration_Info_UScriptStruct_MassTrafficIntersectionsSpawnData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficIntersectionsSpawnData.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficIntersectionsSpawnData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassTrafficIntersectionsSpawnData.InnerSingleton;
	}
	void UMassTrafficInitIntersectionsProcessor::StaticRegisterNativesUMassTrafficInitIntersectionsProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficInitIntersectionsProcessor);
	UClass* Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor_NoRegister()
	{
		return UMassTrafficInitIntersectionsProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficInitIntersectionsProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficInitIntersectionsProcessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficInitIntersectionsProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor_Statics::ClassParams = {
		&UMassTrafficInitIntersectionsProcessor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficInitIntersectionsProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficInitIntersectionsProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficInitIntersectionsProcessor.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficInitIntersectionsProcessor>()
	{
		return UMassTrafficInitIntersectionsProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficInitIntersectionsProcessor);
	UMassTrafficInitIntersectionsProcessor::~UMassTrafficInitIntersectionsProcessor() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitIntersectionsProcessor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitIntersectionsProcessor_h_Statics::ScriptStructInfo[] = {
		{ FMassTrafficIntersectionsSpawnData::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficIntersectionsSpawnData_Statics::NewStructOps, TEXT("MassTrafficIntersectionsSpawnData"), &Z_Registration_Info_UScriptStruct_MassTrafficIntersectionsSpawnData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficIntersectionsSpawnData), 315929856U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitIntersectionsProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor, UMassTrafficInitIntersectionsProcessor::StaticClass, TEXT("UMassTrafficInitIntersectionsProcessor"), &Z_Registration_Info_UClass_UMassTrafficInitIntersectionsProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficInitIntersectionsProcessor), 2970236644U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitIntersectionsProcessor_h_43215409(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitIntersectionsProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitIntersectionsProcessor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitIntersectionsProcessor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitIntersectionsProcessor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
