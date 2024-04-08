// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Factories/PointCloudBlueprintFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudBlueprintFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintType();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UPointCloudBlueprintFactory();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UPointCloudBlueprintFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References
	void UPointCloudBlueprintFactory::StaticRegisterNativesUPointCloudBlueprintFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPointCloudBlueprintFactory);
	UClass* Z_Construct_UClass_UPointCloudBlueprintFactory_NoRegister()
	{
		return UPointCloudBlueprintFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPointCloudBlueprintFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlueprintType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointCloudBlueprintFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudBlueprintFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudBlueprintFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/PointCloudBlueprintFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/PointCloudBlueprintFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudBlueprintFactory_Statics::NewProp_BlueprintType_MetaData[] = {
		{ "Category", "PointCloudBlueprintFactory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The type of blueprint that will be created\n" },
#endif
		{ "ModuleRelativePath", "Private/Factories/PointCloudBlueprintFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of blueprint that will be created" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPointCloudBlueprintFactory_Statics::NewProp_BlueprintType = { "BlueprintType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPointCloudBlueprintFactory, BlueprintType), Z_Construct_UEnum_Engine_EBlueprintType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudBlueprintFactory_Statics::NewProp_BlueprintType_MetaData), Z_Construct_UClass_UPointCloudBlueprintFactory_Statics::NewProp_BlueprintType_MetaData) }; // 2003724569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudBlueprintFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "Category", "PointCloudBlueprintFactory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The parent class of the created blueprint\n" },
#endif
		{ "ModuleRelativePath", "Private/Factories/PointCloudBlueprintFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The parent class of the created blueprint" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPointCloudBlueprintFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPointCloudBlueprintFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudBlueprintFactory_Statics::NewProp_ParentClass_MetaData), Z_Construct_UClass_UPointCloudBlueprintFactory_Statics::NewProp_ParentClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPointCloudBlueprintFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudBlueprintFactory_Statics::NewProp_BlueprintType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudBlueprintFactory_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointCloudBlueprintFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudBlueprintFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudBlueprintFactory_Statics::ClassParams = {
		&UPointCloudBlueprintFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPointCloudBlueprintFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudBlueprintFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudBlueprintFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPointCloudBlueprintFactory_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudBlueprintFactory_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPointCloudBlueprintFactory()
	{
		if (!Z_Registration_Info_UClass_UPointCloudBlueprintFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPointCloudBlueprintFactory.OuterSingleton, Z_Construct_UClass_UPointCloudBlueprintFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPointCloudBlueprintFactory.OuterSingleton;
	}
	template<> POINTCLOUDEDITOR_API UClass* StaticClass<UPointCloudBlueprintFactory>()
	{
		return UPointCloudBlueprintFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudBlueprintFactory);
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Factories_PointCloudBlueprintFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Factories_PointCloudBlueprintFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPointCloudBlueprintFactory, UPointCloudBlueprintFactory::StaticClass, TEXT("UPointCloudBlueprintFactory"), &Z_Registration_Info_UClass_UPointCloudBlueprintFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPointCloudBlueprintFactory), 1946402241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Factories_PointCloudBlueprintFactory_h_19971639(TEXT("/Script/PointCloudEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Factories_PointCloudBlueprintFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Factories_PointCloudBlueprintFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
