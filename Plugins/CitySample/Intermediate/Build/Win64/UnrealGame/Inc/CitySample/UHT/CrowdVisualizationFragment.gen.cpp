// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Crowd/CrowdVisualizationFragment.h"
#include "CitySample/Public/Crowd/CrowdCharacterDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdVisualizationFragment() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCrowdVisualizationFragmentInitializer();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCrowdVisualizationFragmentInitializer_NoRegister();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdVisualizationID();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

static_assert(std::is_polymorphic<FCitySampleCrowdVisualizationFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FCitySampleCrowdVisualizationFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleCrowdVisualizationFragment;
class UScriptStruct* FCitySampleCrowdVisualizationFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleCrowdVisualizationFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleCrowdVisualizationFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySampleCrowdVisualizationFragment"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleCrowdVisualizationFragment.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySampleCrowdVisualizationFragment>()
{
	return FCitySampleCrowdVisualizationFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizationID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisualizationID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopColor_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TopColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomColor_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_BottomColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShoesColor_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ShoesColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinAtlasIndex_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SkinAtlasIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Crowd/CrowdVisualizationFragment.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleCrowdVisualizationFragment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewProp_VisualizationID_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdVisualizationFragment.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewProp_VisualizationID = { "VisualizationID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleCrowdVisualizationFragment, VisualizationID), Z_Construct_UScriptStruct_FCrowdVisualizationID, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewProp_VisualizationID_MetaData), Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewProp_VisualizationID_MetaData) }; // 4281151495
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewProp_TopColor_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdVisualizationFragment.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewProp_TopColor = { "TopColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleCrowdVisualizationFragment, TopColor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewProp_TopColor_MetaData), Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewProp_TopColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewProp_BottomColor_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdVisualizationFragment.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewProp_BottomColor = { "BottomColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleCrowdVisualizationFragment, BottomColor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewProp_BottomColor_MetaData), Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewProp_BottomColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewProp_ShoesColor_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdVisualizationFragment.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewProp_ShoesColor = { "ShoesColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleCrowdVisualizationFragment, ShoesColor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewProp_ShoesColor_MetaData), Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewProp_ShoesColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewProp_SkinAtlasIndex_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdVisualizationFragment.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewProp_SkinAtlasIndex = { "SkinAtlasIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleCrowdVisualizationFragment, SkinAtlasIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewProp_SkinAtlasIndex_MetaData), Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewProp_SkinAtlasIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewProp_VisualizationID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewProp_TopColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewProp_BottomColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewProp_ShoesColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewProp_SkinAtlasIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"CitySampleCrowdVisualizationFragment",
		Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::PropPointers),
		sizeof(FCitySampleCrowdVisualizationFragment),
		alignof(FCitySampleCrowdVisualizationFragment),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_CitySampleCrowdVisualizationFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleCrowdVisualizationFragment.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CitySampleCrowdVisualizationFragment.InnerSingleton;
	}
	void UCitySampleCrowdVisualizationFragmentInitializer::StaticRegisterNativesUCitySampleCrowdVisualizationFragmentInitializer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleCrowdVisualizationFragmentInitializer);
	UClass* Z_Construct_UClass_UCitySampleCrowdVisualizationFragmentInitializer_NoRegister()
	{
		return UCitySampleCrowdVisualizationFragmentInitializer::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleCrowdVisualizationFragmentInitializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleCrowdVisualizationFragmentInitializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCrowdVisualizationFragmentInitializer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCrowdVisualizationFragmentInitializer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Crowd/CrowdVisualizationFragment.h" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdVisualizationFragment.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleCrowdVisualizationFragmentInitializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleCrowdVisualizationFragmentInitializer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleCrowdVisualizationFragmentInitializer_Statics::ClassParams = {
		&UCitySampleCrowdVisualizationFragmentInitializer::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCrowdVisualizationFragmentInitializer_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleCrowdVisualizationFragmentInitializer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCitySampleCrowdVisualizationFragmentInitializer()
	{
		if (!Z_Registration_Info_UClass_UCitySampleCrowdVisualizationFragmentInitializer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleCrowdVisualizationFragmentInitializer.OuterSingleton, Z_Construct_UClass_UCitySampleCrowdVisualizationFragmentInitializer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleCrowdVisualizationFragmentInitializer.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleCrowdVisualizationFragmentInitializer>()
	{
		return UCitySampleCrowdVisualizationFragmentInitializer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleCrowdVisualizationFragmentInitializer);
	UCitySampleCrowdVisualizationFragmentInitializer::~UCitySampleCrowdVisualizationFragmentInitializer() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdVisualizationFragment_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdVisualizationFragment_h_Statics::ScriptStructInfo[] = {
		{ FCitySampleCrowdVisualizationFragment::StaticStruct, Z_Construct_UScriptStruct_FCitySampleCrowdVisualizationFragment_Statics::NewStructOps, TEXT("CitySampleCrowdVisualizationFragment"), &Z_Registration_Info_UScriptStruct_CitySampleCrowdVisualizationFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleCrowdVisualizationFragment), 790982940U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdVisualizationFragment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleCrowdVisualizationFragmentInitializer, UCitySampleCrowdVisualizationFragmentInitializer::StaticClass, TEXT("UCitySampleCrowdVisualizationFragmentInitializer"), &Z_Registration_Info_UClass_UCitySampleCrowdVisualizationFragmentInitializer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleCrowdVisualizationFragmentInitializer), 545588649U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdVisualizationFragment_h_1994026499(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdVisualizationFragment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdVisualizationFragment_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdVisualizationFragment_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdVisualizationFragment_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
