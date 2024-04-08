// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleMassCrowd/Public/SmartObjectMassInteractionDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectMassInteractionDefinition() {}
// Cross Module References
	CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_USmartObjectMassInteractionDefinition();
	CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_USmartObjectMassInteractionDefinition_NoRegister();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister();
	MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_USmartObjectMassBehaviorDefinition();
	UPackage* Z_Construct_UPackage__Script_CitySampleMassCrowd();
// End Cross Module References
	void USmartObjectMassInteractionDefinition::StaticRegisterNativesUSmartObjectMassInteractionDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectMassInteractionDefinition);
	UClass* Z_Construct_UClass_USmartObjectMassInteractionDefinition_NoRegister()
	{
		return USmartObjectMassInteractionDefinition::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextualAnimAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextualAnimAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlignmentTrack_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AlignmentTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractorRole_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InteractorRole;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USmartObjectMassBehaviorDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SmartObjectMassInteractionDefinition.h" },
		{ "ModuleRelativePath", "Public/SmartObjectMassInteractionDefinition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::NewProp_ContextualAnimAsset_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/SmartObjectMassInteractionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::NewProp_ContextualAnimAsset = { "ContextualAnimAsset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmartObjectMassInteractionDefinition, ContextualAnimAsset), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::NewProp_ContextualAnimAsset_MetaData), Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::NewProp_ContextualAnimAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::NewProp_AlignmentTrack_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/SmartObjectMassInteractionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::NewProp_AlignmentTrack = { "AlignmentTrack", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmartObjectMassInteractionDefinition, AlignmentTrack), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::NewProp_AlignmentTrack_MetaData), Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::NewProp_AlignmentTrack_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::NewProp_InteractorRole_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/SmartObjectMassInteractionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::NewProp_InteractorRole = { "InteractorRole", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmartObjectMassInteractionDefinition, InteractorRole), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::NewProp_InteractorRole_MetaData), Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::NewProp_InteractorRole_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::NewProp_ContextualAnimAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::NewProp_AlignmentTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::NewProp_InteractorRole,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectMassInteractionDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::ClassParams = {
		&USmartObjectMassInteractionDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::PropPointers),
		0,
		0x000030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USmartObjectMassInteractionDefinition()
	{
		if (!Z_Registration_Info_UClass_USmartObjectMassInteractionDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectMassInteractionDefinition.OuterSingleton, Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectMassInteractionDefinition.OuterSingleton;
	}
	template<> CITYSAMPLEMASSCROWD_API UClass* StaticClass<USmartObjectMassInteractionDefinition>()
	{
		return USmartObjectMassInteractionDefinition::StaticClass();
	}
	USmartObjectMassInteractionDefinition::USmartObjectMassInteractionDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectMassInteractionDefinition);
	USmartObjectMassInteractionDefinition::~USmartObjectMassInteractionDefinition() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_SmartObjectMassInteractionDefinition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_SmartObjectMassInteractionDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USmartObjectMassInteractionDefinition, USmartObjectMassInteractionDefinition::StaticClass, TEXT("USmartObjectMassInteractionDefinition"), &Z_Registration_Info_UClass_USmartObjectMassInteractionDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectMassInteractionDefinition), 3890202570U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_SmartObjectMassInteractionDefinition_h_3483501808(TEXT("/Script/CitySampleMassCrowd"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_SmartObjectMassInteractionDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_SmartObjectMassInteractionDefinition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
