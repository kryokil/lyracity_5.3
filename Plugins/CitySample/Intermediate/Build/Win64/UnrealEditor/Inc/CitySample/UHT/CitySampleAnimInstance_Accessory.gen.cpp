// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Anim/CitySampleAnimInstance_Accessory.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleAnimInstance_Accessory() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAnimInstance_Accessory();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAnimInstance_Accessory_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	void UCitySampleAnimInstance_Accessory::StaticRegisterNativesUCitySampleAnimInstance_Accessory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleAnimInstance_Accessory);
	UClass* Z_Construct_UClass_UCitySampleAnimInstance_Accessory_NoRegister()
	{
		return UCitySampleAnimInstance_Accessory::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GaitCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GaitCurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockReactCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BlockReactCurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gait_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GaitLayerOverride_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GaitLayerOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockReact_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockReact;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Anim/CitySampleAnimInstance_Accessory.h" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Accessory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_GaitCurveName_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Accessory.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_GaitCurveName = { "GaitCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Accessory, GaitCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_GaitCurveName_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_GaitCurveName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_BlockReactCurveName_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Accessory.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_BlockReactCurveName = { "BlockReactCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Accessory, BlockReactCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_BlockReactCurveName_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_BlockReactCurveName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_Gait_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Accessory.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_Gait = { "Gait", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Accessory, Gait), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_Gait_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_Gait_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_GaitLayerOverride_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Accessory.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_GaitLayerOverride = { "GaitLayerOverride", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Accessory, GaitLayerOverride), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_GaitLayerOverride_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_GaitLayerOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_BlockReact_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Accessory.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_BlockReact = { "BlockReact", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Accessory, BlockReact), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_BlockReact_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_BlockReact_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_GaitCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_BlockReactCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_Gait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_GaitLayerOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_BlockReact,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleAnimInstance_Accessory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::ClassParams = {
		&UCitySampleAnimInstance_Accessory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCitySampleAnimInstance_Accessory()
	{
		if (!Z_Registration_Info_UClass_UCitySampleAnimInstance_Accessory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleAnimInstance_Accessory.OuterSingleton, Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleAnimInstance_Accessory.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleAnimInstance_Accessory>()
	{
		return UCitySampleAnimInstance_Accessory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleAnimInstance_Accessory);
	UCitySampleAnimInstance_Accessory::~UCitySampleAnimInstance_Accessory() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Accessory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Accessory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleAnimInstance_Accessory, UCitySampleAnimInstance_Accessory::StaticClass, TEXT("UCitySampleAnimInstance_Accessory"), &Z_Registration_Info_UClass_UCitySampleAnimInstance_Accessory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleAnimInstance_Accessory), 391421191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Accessory_h_2940258510(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Accessory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Accessory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
