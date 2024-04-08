// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Anim/CitySampleAnimSet_Locomotion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleAnimSet_Locomotion() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAnimSet_Locomotion();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAnimSet_Locomotion_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	void UCitySampleAnimSet_Locomotion::StaticRegisterNativesUCitySampleAnimSet_Locomotion()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleAnimSet_Locomotion);
	UClass* Z_Construct_UClass_UCitySampleAnimSet_Locomotion_NoRegister()
	{
		return UCitySampleAnimSet_Locomotion::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkFwdCycle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WalkFwdCycle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkFwdQuicklyCycle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WalkFwdQuicklyCycle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Anim/CitySampleAnimSet_Locomotion.h" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimSet_Locomotion.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::NewProp_WalkFwdCycle_MetaData[] = {
		{ "Category", "Core Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimSet_Locomotion.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::NewProp_WalkFwdCycle = { "WalkFwdCycle", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimSet_Locomotion, WalkFwdCycle), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::NewProp_WalkFwdCycle_MetaData), Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::NewProp_WalkFwdCycle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::NewProp_WalkFwdQuicklyCycle_MetaData[] = {
		{ "Category", "Core Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimSet_Locomotion.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::NewProp_WalkFwdQuicklyCycle = { "WalkFwdQuicklyCycle", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimSet_Locomotion, WalkFwdQuicklyCycle), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::NewProp_WalkFwdQuicklyCycle_MetaData), Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::NewProp_WalkFwdQuicklyCycle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::NewProp_WalkFwdCycle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::NewProp_WalkFwdQuicklyCycle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleAnimSet_Locomotion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::ClassParams = {
		&UCitySampleAnimSet_Locomotion::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCitySampleAnimSet_Locomotion()
	{
		if (!Z_Registration_Info_UClass_UCitySampleAnimSet_Locomotion.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleAnimSet_Locomotion.OuterSingleton, Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleAnimSet_Locomotion.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleAnimSet_Locomotion>()
	{
		return UCitySampleAnimSet_Locomotion::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleAnimSet_Locomotion);
	UCitySampleAnimSet_Locomotion::~UCitySampleAnimSet_Locomotion() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimSet_Locomotion_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimSet_Locomotion_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleAnimSet_Locomotion, UCitySampleAnimSet_Locomotion::StaticClass, TEXT("UCitySampleAnimSet_Locomotion"), &Z_Registration_Info_UClass_UCitySampleAnimSet_Locomotion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleAnimSet_Locomotion), 357347347U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimSet_Locomotion_h_1756899892(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimSet_Locomotion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimSet_Locomotion_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
