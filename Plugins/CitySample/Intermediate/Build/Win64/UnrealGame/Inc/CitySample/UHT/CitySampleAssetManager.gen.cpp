// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Util/CitySampleAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleAssetManager() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAssetManager();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAssetManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	void UCitySampleAssetManager::StaticRegisterNativesUCitySampleAssetManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleAssetManager);
	UClass* Z_Construct_UClass_UCitySampleAssetManager_NoRegister()
	{
		return UCitySampleAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PlatformBundleState_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformBundleState_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlatformBundleState;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultBundleState_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBundleState_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultBundleState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetManager,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAssetManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAssetManager_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * See docs https://docs.unrealengine.com/4.26/en-US/ProductionPipelines/AssetManagement/\n *\n * We set this as our AssetManager in Config/DefaultEngine.ini.\n */" },
#endif
		{ "IncludePath", "Util/CitySampleAssetManager.h" },
		{ "ModuleRelativePath", "Public/Util/CitySampleAssetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "See docs https://docs.unrealengine.com/4.26/en-US/ProductionPipelines/AssetManagement/\n\nWe set this as our AssetManager in Config/DefaultEngine.ini." },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCitySampleAssetManager_Statics::NewProp_PlatformBundleState_Inner = { "PlatformBundleState", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAssetManager_Statics::NewProp_PlatformBundleState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bundle states for current platform */" },
#endif
		{ "ModuleRelativePath", "Public/Util/CitySampleAssetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bundle states for current platform" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCitySampleAssetManager_Statics::NewProp_PlatformBundleState = { "PlatformBundleState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAssetManager, PlatformBundleState), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAssetManager_Statics::NewProp_PlatformBundleState_MetaData), Z_Construct_UClass_UCitySampleAssetManager_Statics::NewProp_PlatformBundleState_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCitySampleAssetManager_Statics::NewProp_DefaultBundleState_Inner = { "DefaultBundleState", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAssetManager_Statics::NewProp_DefaultBundleState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current default bundle state, of in game or menu */" },
#endif
		{ "ModuleRelativePath", "Public/Util/CitySampleAssetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current default bundle state, of in game or menu" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCitySampleAssetManager_Statics::NewProp_DefaultBundleState = { "DefaultBundleState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAssetManager, DefaultBundleState), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAssetManager_Statics::NewProp_DefaultBundleState_MetaData), Z_Construct_UClass_UCitySampleAssetManager_Statics::NewProp_DefaultBundleState_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleAssetManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAssetManager_Statics::NewProp_PlatformBundleState_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAssetManager_Statics::NewProp_PlatformBundleState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAssetManager_Statics::NewProp_DefaultBundleState_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAssetManager_Statics::NewProp_DefaultBundleState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleAssetManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleAssetManager_Statics::ClassParams = {
		&UCitySampleAssetManager::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCitySampleAssetManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAssetManager_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleAssetManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAssetManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCitySampleAssetManager()
	{
		if (!Z_Registration_Info_UClass_UCitySampleAssetManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleAssetManager.OuterSingleton, Z_Construct_UClass_UCitySampleAssetManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleAssetManager.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleAssetManager>()
	{
		return UCitySampleAssetManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleAssetManager);
	UCitySampleAssetManager::~UCitySampleAssetManager() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleAssetManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleAssetManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleAssetManager, UCitySampleAssetManager::StaticClass, TEXT("UCitySampleAssetManager"), &Z_Registration_Info_UClass_UCitySampleAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleAssetManager), 3259907292U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleAssetManager_h_2579522224(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleAssetManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
