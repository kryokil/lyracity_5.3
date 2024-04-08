// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Util/CitySampleVisualizationToggleType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleVisualizationToggleType() {}
// Cross Module References
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySampleVisualizationToggleType();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECitySampleVisualizationToggleType;
	static UEnum* ECitySampleVisualizationToggleType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECitySampleVisualizationToggleType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECitySampleVisualizationToggleType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ECitySampleVisualizationToggleType, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("ECitySampleVisualizationToggleType"));
		}
		return Z_Registration_Info_UEnum_ECitySampleVisualizationToggleType.OuterSingleton;
	}
	template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySampleVisualizationToggleType>()
	{
		return ECitySampleVisualizationToggleType_StaticEnum();
	}
	struct Z_Construct_UEnum_CitySample_ECitySampleVisualizationToggleType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CitySample_ECitySampleVisualizationToggleType_Statics::Enumerators[] = {
		{ "ECitySampleVisualizationToggleType::None", (int64)ECitySampleVisualizationToggleType::None },
		{ "ECitySampleVisualizationToggleType::Nanite", (int64)ECitySampleVisualizationToggleType::Nanite },
		{ "ECitySampleVisualizationToggleType::Mass", (int64)ECitySampleVisualizationToggleType::Mass },
		{ "ECitySampleVisualizationToggleType::DayNight", (int64)ECitySampleVisualizationToggleType::DayNight },
		{ "ECitySampleVisualizationToggleType::TSR", (int64)ECitySampleVisualizationToggleType::TSR },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CitySample_ECitySampleVisualizationToggleType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Different Visualization Toggle Types we support*/" },
#endif
		{ "DayNight.Name", "ECitySampleVisualizationToggleType::DayNight" },
		{ "Mass.Name", "ECitySampleVisualizationToggleType::Mass" },
		{ "ModuleRelativePath", "Public/Util/CitySampleVisualizationToggleType.h" },
		{ "Nanite.Name", "ECitySampleVisualizationToggleType::Nanite" },
		{ "None.Name", "ECitySampleVisualizationToggleType::None" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Different Visualization Toggle Types we support" },
#endif
		{ "TSR.Name", "ECitySampleVisualizationToggleType::TSR" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ECitySampleVisualizationToggleType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		"ECitySampleVisualizationToggleType",
		"ECitySampleVisualizationToggleType",
		Z_Construct_UEnum_CitySample_ECitySampleVisualizationToggleType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleVisualizationToggleType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleVisualizationToggleType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_ECitySampleVisualizationToggleType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CitySample_ECitySampleVisualizationToggleType()
	{
		if (!Z_Registration_Info_UEnum_ECitySampleVisualizationToggleType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECitySampleVisualizationToggleType.InnerSingleton, Z_Construct_UEnum_CitySample_ECitySampleVisualizationToggleType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECitySampleVisualizationToggleType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleVisualizationToggleType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleVisualizationToggleType_h_Statics::EnumInfo[] = {
		{ ECitySampleVisualizationToggleType_StaticEnum, TEXT("ECitySampleVisualizationToggleType"), &Z_Registration_Info_UEnum_ECitySampleVisualizationToggleType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2333733195U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleVisualizationToggleType_h_3924350921(TEXT("/Script/CitySample"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleVisualizationToggleType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleVisualizationToggleType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
