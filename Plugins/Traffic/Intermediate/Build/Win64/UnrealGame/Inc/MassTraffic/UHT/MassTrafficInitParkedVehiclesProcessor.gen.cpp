// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficInitParkedVehiclesProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficInitParkedVehiclesProcessor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
	MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficParkedVehiclesSpawnData();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficParkedVehiclesSpawnData;
class UScriptStruct* FMassTrafficParkedVehiclesSpawnData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficParkedVehiclesSpawnData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficParkedVehiclesSpawnData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficParkedVehiclesSpawnData, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficParkedVehiclesSpawnData"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficParkedVehiclesSpawnData.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficParkedVehiclesSpawnData>()
{
	return FMassTrafficParkedVehiclesSpawnData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassTrafficParkedVehiclesSpawnData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficParkedVehiclesSpawnData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficInitParkedVehiclesProcessor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassTrafficParkedVehiclesSpawnData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficParkedVehiclesSpawnData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficParkedVehiclesSpawnData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
		nullptr,
		&NewStructOps,
		"MassTrafficParkedVehiclesSpawnData",
		nullptr,
		0,
		sizeof(FMassTrafficParkedVehiclesSpawnData),
		alignof(FMassTrafficParkedVehiclesSpawnData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficParkedVehiclesSpawnData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficParkedVehiclesSpawnData_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficParkedVehiclesSpawnData()
	{
		if (!Z_Registration_Info_UScriptStruct_MassTrafficParkedVehiclesSpawnData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficParkedVehiclesSpawnData.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficParkedVehiclesSpawnData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassTrafficParkedVehiclesSpawnData.InnerSingleton;
	}
	void UMassTrafficInitParkedVehiclesProcessor::StaticRegisterNativesUMassTrafficInitParkedVehiclesProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficInitParkedVehiclesProcessor);
	UClass* Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_NoRegister()
	{
		return UMassTrafficInitParkedVehiclesProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficInitParkedVehiclesProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficInitParkedVehiclesProcessor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::NewProp_RandomStream_MetaData[] = {
		{ "Category", "Processor" },
		{ "ModuleRelativePath", "Public/MassTrafficInitParkedVehiclesProcessor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficInitParkedVehiclesProcessor, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::NewProp_RandomStream_MetaData), Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::NewProp_RandomStream_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::NewProp_RandomStream,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficInitParkedVehiclesProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::ClassParams = {
		&UMassTrafficInitParkedVehiclesProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::PropPointers),
		0,
		0x401030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficInitParkedVehiclesProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficInitParkedVehiclesProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficInitParkedVehiclesProcessor.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficInitParkedVehiclesProcessor>()
	{
		return UMassTrafficInitParkedVehiclesProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficInitParkedVehiclesProcessor);
	UMassTrafficInitParkedVehiclesProcessor::~UMassTrafficInitParkedVehiclesProcessor() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitParkedVehiclesProcessor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitParkedVehiclesProcessor_h_Statics::ScriptStructInfo[] = {
		{ FMassTrafficParkedVehiclesSpawnData::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficParkedVehiclesSpawnData_Statics::NewStructOps, TEXT("MassTrafficParkedVehiclesSpawnData"), &Z_Registration_Info_UScriptStruct_MassTrafficParkedVehiclesSpawnData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficParkedVehiclesSpawnData), 1795182971U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitParkedVehiclesProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor, UMassTrafficInitParkedVehiclesProcessor::StaticClass, TEXT("UMassTrafficInitParkedVehiclesProcessor"), &Z_Registration_Info_UClass_UMassTrafficInitParkedVehiclesProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficInitParkedVehiclesProcessor), 691955245U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitParkedVehiclesProcessor_h_3659946439(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitParkedVehiclesProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitParkedVehiclesProcessor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitParkedVehiclesProcessor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitParkedVehiclesProcessor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
