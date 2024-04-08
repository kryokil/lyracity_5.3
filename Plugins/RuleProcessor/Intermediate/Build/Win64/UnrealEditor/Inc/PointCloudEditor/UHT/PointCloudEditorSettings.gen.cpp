// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Shared/PointCloudEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UPointCloudEditorSettings();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UPointCloudEditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References
	void UPointCloudEditorSettings::StaticRegisterNativesUPointCloudEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPointCloudEditorSettings);
	UClass* Z_Construct_UClass_UPointCloudEditorSettings_NoRegister()
	{
		return UPointCloudEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPointCloudEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMetadataKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultMetadataKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGroupingMetadataKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultGroupingMetadataKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointCloudEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudEditorSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Shared/PointCloudEditorSettings.h" },
		{ "ModuleRelativePath", "Private/Shared/PointCloudEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudEditorSettings_Statics::NewProp_DefaultMetadataKey_MetaData[] = {
		{ "Category", "Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Point primary metadata key (module, mesh, blueprint, etc.) */" },
#endif
		{ "ModuleRelativePath", "Private/Shared/PointCloudEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Point primary metadata key (module, mesh, blueprint, etc.)" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPointCloudEditorSettings_Statics::NewProp_DefaultMetadataKey = { "DefaultMetadataKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPointCloudEditorSettings, DefaultMetadataKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudEditorSettings_Statics::NewProp_DefaultMetadataKey_MetaData), Z_Construct_UClass_UPointCloudEditorSettings_Statics::NewProp_DefaultMetadataKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudEditorSettings_Statics::NewProp_DefaultGroupingMetadataKey_MetaData[] = {
		{ "Category", "Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default grouping metadata key (building, ...) */" },
#endif
		{ "ModuleRelativePath", "Private/Shared/PointCloudEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default grouping metadata key (building, ...)" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPointCloudEditorSettings_Statics::NewProp_DefaultGroupingMetadataKey = { "DefaultGroupingMetadataKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPointCloudEditorSettings, DefaultGroupingMetadataKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudEditorSettings_Statics::NewProp_DefaultGroupingMetadataKey_MetaData), Z_Construct_UClass_UPointCloudEditorSettings_Statics::NewProp_DefaultGroupingMetadataKey_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPointCloudEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudEditorSettings_Statics::NewProp_DefaultMetadataKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudEditorSettings_Statics::NewProp_DefaultGroupingMetadataKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointCloudEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudEditorSettings_Statics::ClassParams = {
		&UPointCloudEditorSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPointCloudEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudEditorSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPointCloudEditorSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudEditorSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPointCloudEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UPointCloudEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPointCloudEditorSettings.OuterSingleton, Z_Construct_UClass_UPointCloudEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPointCloudEditorSettings.OuterSingleton;
	}
	template<> POINTCLOUDEDITOR_API UClass* StaticClass<UPointCloudEditorSettings>()
	{
		return UPointCloudEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudEditorSettings);
	UPointCloudEditorSettings::~UPointCloudEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Shared_PointCloudEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Shared_PointCloudEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPointCloudEditorSettings, UPointCloudEditorSettings::StaticClass, TEXT("UPointCloudEditorSettings"), &Z_Registration_Info_UClass_UPointCloudEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPointCloudEditorSettings), 2201597545U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Shared_PointCloudEditorSettings_h_477095640(TEXT("/Script/PointCloudEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Shared_PointCloudEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Shared_PointCloudEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
