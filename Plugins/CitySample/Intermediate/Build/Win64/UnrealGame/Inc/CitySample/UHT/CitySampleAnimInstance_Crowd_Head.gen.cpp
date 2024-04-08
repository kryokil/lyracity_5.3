// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Anim/CitySampleAnimInstance_Crowd_Head.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleAnimInstance_Crowd_Head() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleCrowdCharacter_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	void UCitySampleAnimInstance_Crowd_Head::StaticRegisterNativesUCitySampleAnimInstance_Crowd_Head()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleAnimInstance_Crowd_Head);
	UClass* Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_NoRegister()
	{
		return UCitySampleAnimInstance_Crowd_Head::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrowdCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CrowdCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_Overweight_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName_Overweight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_Underweight_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName_Underweight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Anim/CitySampleAnimInstance_Crowd_Head.h" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd_Head.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_CrowdCharacter_MetaData[] = {
		{ "Category", "Defaults" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd_Head.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_CrowdCharacter = { "CrowdCharacter", nullptr, (EPropertyFlags)0x002408000008200c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd_Head, CrowdCharacter), Z_Construct_UClass_ACitySampleCrowdCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_CrowdCharacter_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_CrowdCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_SourceMeshComponent_MetaData[] = {
		{ "Category", "Defaults" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd_Head.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_SourceMeshComponent = { "SourceMeshComponent", nullptr, (EPropertyFlags)0x002408000008200c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd_Head, SourceMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_SourceMeshComponent_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_SourceMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_CurveName_Overweight_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd_Head.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_CurveName_Overweight = { "CurveName_Overweight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd_Head, CurveName_Overweight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_CurveName_Overweight_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_CurveName_Overweight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_CurveName_Underweight_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd_Head.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_CurveName_Underweight = { "CurveName_Underweight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd_Head, CurveName_Underweight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_CurveName_Underweight_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_CurveName_Underweight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_CrowdCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_SourceMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_CurveName_Overweight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_CurveName_Underweight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleAnimInstance_Crowd_Head>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::ClassParams = {
		&UCitySampleAnimInstance_Crowd_Head::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head()
	{
		if (!Z_Registration_Info_UClass_UCitySampleAnimInstance_Crowd_Head.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleAnimInstance_Crowd_Head.OuterSingleton, Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleAnimInstance_Crowd_Head.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleAnimInstance_Crowd_Head>()
	{
		return UCitySampleAnimInstance_Crowd_Head::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleAnimInstance_Crowd_Head);
	UCitySampleAnimInstance_Crowd_Head::~UCitySampleAnimInstance_Crowd_Head() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_Head_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_Head_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head, UCitySampleAnimInstance_Crowd_Head::StaticClass, TEXT("UCitySampleAnimInstance_Crowd_Head"), &Z_Registration_Info_UClass_UCitySampleAnimInstance_Crowd_Head, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleAnimInstance_Crowd_Head), 664302517U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_Head_h_1846376966(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_Head_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_Head_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
