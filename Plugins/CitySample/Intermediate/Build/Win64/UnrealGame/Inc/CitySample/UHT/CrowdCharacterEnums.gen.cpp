// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Crowd/CrowdCharacterEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdCharacterEnums() {}
// Cross Module References
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_EAnimToTextureDataAssetSlots();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECharacterDefinitionType();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySampleCrowdBodyType();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySampleCrowdGender();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECrowdHairSlots();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECrowdLineupVariation();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECrowdMaterialParameterType();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECrowdMeshSlots();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECrowdPatternUsage();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECitySampleCrowdGender;
	static UEnum* ECitySampleCrowdGender_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECitySampleCrowdGender.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECitySampleCrowdGender.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ECitySampleCrowdGender, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("ECitySampleCrowdGender"));
		}
		return Z_Registration_Info_UEnum_ECitySampleCrowdGender.OuterSingleton;
	}
	template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySampleCrowdGender>()
	{
		return ECitySampleCrowdGender_StaticEnum();
	}
	struct Z_Construct_UEnum_CitySample_ECitySampleCrowdGender_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CitySample_ECitySampleCrowdGender_Statics::Enumerators[] = {
		{ "ECitySampleCrowdGender::A", (int64)ECitySampleCrowdGender::A },
		{ "ECitySampleCrowdGender::B", (int64)ECitySampleCrowdGender::B },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CitySample_ECitySampleCrowdGender_Statics::Enum_MetaDataParams[] = {
		{ "A.Name", "ECitySampleCrowdGender::A" },
		{ "B.Name", "ECitySampleCrowdGender::B" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterEnums.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ECitySampleCrowdGender_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		"ECitySampleCrowdGender",
		"ECitySampleCrowdGender",
		Z_Construct_UEnum_CitySample_ECitySampleCrowdGender_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleCrowdGender_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleCrowdGender_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_ECitySampleCrowdGender_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CitySample_ECitySampleCrowdGender()
	{
		if (!Z_Registration_Info_UEnum_ECitySampleCrowdGender.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECitySampleCrowdGender.InnerSingleton, Z_Construct_UEnum_CitySample_ECitySampleCrowdGender_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECitySampleCrowdGender.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECitySampleCrowdBodyType;
	static UEnum* ECitySampleCrowdBodyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECitySampleCrowdBodyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECitySampleCrowdBodyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ECitySampleCrowdBodyType, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("ECitySampleCrowdBodyType"));
		}
		return Z_Registration_Info_UEnum_ECitySampleCrowdBodyType.OuterSingleton;
	}
	template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySampleCrowdBodyType>()
	{
		return ECitySampleCrowdBodyType_StaticEnum();
	}
	struct Z_Construct_UEnum_CitySample_ECitySampleCrowdBodyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CitySample_ECitySampleCrowdBodyType_Statics::Enumerators[] = {
		{ "ECitySampleCrowdBodyType::NormalWeight", (int64)ECitySampleCrowdBodyType::NormalWeight },
		{ "ECitySampleCrowdBodyType::OverWeight", (int64)ECitySampleCrowdBodyType::OverWeight },
		{ "ECitySampleCrowdBodyType::UnderWeight", (int64)ECitySampleCrowdBodyType::UnderWeight },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CitySample_ECitySampleCrowdBodyType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterEnums.h" },
		{ "NormalWeight.Name", "ECitySampleCrowdBodyType::NormalWeight" },
		{ "OverWeight.Name", "ECitySampleCrowdBodyType::OverWeight" },
		{ "UnderWeight.Name", "ECitySampleCrowdBodyType::UnderWeight" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ECitySampleCrowdBodyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		"ECitySampleCrowdBodyType",
		"ECitySampleCrowdBodyType",
		Z_Construct_UEnum_CitySample_ECitySampleCrowdBodyType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleCrowdBodyType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleCrowdBodyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_ECitySampleCrowdBodyType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CitySample_ECitySampleCrowdBodyType()
	{
		if (!Z_Registration_Info_UEnum_ECitySampleCrowdBodyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECitySampleCrowdBodyType.InnerSingleton, Z_Construct_UEnum_CitySample_ECitySampleCrowdBodyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECitySampleCrowdBodyType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECrowdHairSlots;
	static UEnum* ECrowdHairSlots_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECrowdHairSlots.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECrowdHairSlots.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ECrowdHairSlots, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("ECrowdHairSlots"));
		}
		return Z_Registration_Info_UEnum_ECrowdHairSlots.OuterSingleton;
	}
	template<> CITYSAMPLE_API UEnum* StaticEnum<ECrowdHairSlots>()
	{
		return ECrowdHairSlots_StaticEnum();
	}
	struct Z_Construct_UEnum_CitySample_ECrowdHairSlots_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CitySample_ECrowdHairSlots_Statics::Enumerators[] = {
		{ "ECrowdHairSlots::Hair", (int64)ECrowdHairSlots::Hair },
		{ "ECrowdHairSlots::Eyebrows", (int64)ECrowdHairSlots::Eyebrows },
		{ "ECrowdHairSlots::Fuzz", (int64)ECrowdHairSlots::Fuzz },
		{ "ECrowdHairSlots::Eyelashes", (int64)ECrowdHairSlots::Eyelashes },
		{ "ECrowdHairSlots::Mustache", (int64)ECrowdHairSlots::Mustache },
		{ "ECrowdHairSlots::Beard", (int64)ECrowdHairSlots::Beard },
		{ "ECrowdHairSlots::MAX", (int64)ECrowdHairSlots::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CitySample_ECrowdHairSlots_Statics::Enum_MetaDataParams[] = {
		{ "Beard.DisplayName", "Beard" },
		{ "Beard.Name", "ECrowdHairSlots::Beard" },
		{ "BlueprintType", "true" },
		{ "Eyebrows.DisplayName", "Eyebrows" },
		{ "Eyebrows.Name", "ECrowdHairSlots::Eyebrows" },
		{ "Eyelashes.DisplayName", "Eyelashes" },
		{ "Eyelashes.Name", "ECrowdHairSlots::Eyelashes" },
		{ "Fuzz.DisplayName", "Fuzz" },
		{ "Fuzz.Name", "ECrowdHairSlots::Fuzz" },
		{ "Hair.DisplayName", "Hair" },
		{ "Hair.Name", "ECrowdHairSlots::Hair" },
		{ "MAX.Name", "ECrowdHairSlots::MAX" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterEnums.h" },
		{ "Mustache.DisplayName", "Mustache" },
		{ "Mustache.Name", "ECrowdHairSlots::Mustache" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ECrowdHairSlots_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		"ECrowdHairSlots",
		"ECrowdHairSlots",
		Z_Construct_UEnum_CitySample_ECrowdHairSlots_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECrowdHairSlots_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECrowdHairSlots_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_ECrowdHairSlots_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CitySample_ECrowdHairSlots()
	{
		if (!Z_Registration_Info_UEnum_ECrowdHairSlots.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECrowdHairSlots.InnerSingleton, Z_Construct_UEnum_CitySample_ECrowdHairSlots_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECrowdHairSlots.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECrowdMeshSlots;
	static UEnum* ECrowdMeshSlots_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECrowdMeshSlots.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECrowdMeshSlots.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ECrowdMeshSlots, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("ECrowdMeshSlots"));
		}
		return Z_Registration_Info_UEnum_ECrowdMeshSlots.OuterSingleton;
	}
	template<> CITYSAMPLE_API UEnum* StaticEnum<ECrowdMeshSlots>()
	{
		return ECrowdMeshSlots_StaticEnum();
	}
	struct Z_Construct_UEnum_CitySample_ECrowdMeshSlots_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CitySample_ECrowdMeshSlots_Statics::Enumerators[] = {
		{ "ECrowdMeshSlots::Base", (int64)ECrowdMeshSlots::Base },
		{ "ECrowdMeshSlots::Body", (int64)ECrowdMeshSlots::Body },
		{ "ECrowdMeshSlots::Head", (int64)ECrowdMeshSlots::Head },
		{ "ECrowdMeshSlots::Top", (int64)ECrowdMeshSlots::Top },
		{ "ECrowdMeshSlots::Bottom", (int64)ECrowdMeshSlots::Bottom },
		{ "ECrowdMeshSlots::Shoes", (int64)ECrowdMeshSlots::Shoes },
		{ "ECrowdMeshSlots::MAX", (int64)ECrowdMeshSlots::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CitySample_ECrowdMeshSlots_Statics::Enum_MetaDataParams[] = {
		{ "Base.DisplayName", "Base" },
		{ "Base.Name", "ECrowdMeshSlots::Base" },
		{ "BlueprintType", "true" },
		{ "Body.DisplayName", "Body" },
		{ "Body.Name", "ECrowdMeshSlots::Body" },
		{ "Bottom.DisplayName", "Bottom" },
		{ "Bottom.Name", "ECrowdMeshSlots::Bottom" },
		{ "Head.DisplayName", "Head" },
		{ "Head.Name", "ECrowdMeshSlots::Head" },
		{ "MAX.Name", "ECrowdMeshSlots::MAX" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterEnums.h" },
		{ "Shoes.DisplayName", "Shoes" },
		{ "Shoes.Name", "ECrowdMeshSlots::Shoes" },
		{ "Top.DisplayName", "Top" },
		{ "Top.Name", "ECrowdMeshSlots::Top" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ECrowdMeshSlots_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		"ECrowdMeshSlots",
		"ECrowdMeshSlots",
		Z_Construct_UEnum_CitySample_ECrowdMeshSlots_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECrowdMeshSlots_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECrowdMeshSlots_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_ECrowdMeshSlots_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CitySample_ECrowdMeshSlots()
	{
		if (!Z_Registration_Info_UEnum_ECrowdMeshSlots.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECrowdMeshSlots.InnerSingleton, Z_Construct_UEnum_CitySample_ECrowdMeshSlots_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECrowdMeshSlots.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECrowdLineupVariation;
	static UEnum* ECrowdLineupVariation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECrowdLineupVariation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECrowdLineupVariation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ECrowdLineupVariation, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("ECrowdLineupVariation"));
		}
		return Z_Registration_Info_UEnum_ECrowdLineupVariation.OuterSingleton;
	}
	template<> CITYSAMPLE_API UEnum* StaticEnum<ECrowdLineupVariation>()
	{
		return ECrowdLineupVariation_StaticEnum();
	}
	struct Z_Construct_UEnum_CitySample_ECrowdLineupVariation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CitySample_ECrowdLineupVariation_Statics::Enumerators[] = {
		{ "ECrowdLineupVariation::Skeleton", (int64)ECrowdLineupVariation::Skeleton },
		{ "ECrowdLineupVariation::BodyType", (int64)ECrowdLineupVariation::BodyType },
		{ "ECrowdLineupVariation::Head", (int64)ECrowdLineupVariation::Head },
		{ "ECrowdLineupVariation::Outfit", (int64)ECrowdLineupVariation::Outfit },
		{ "ECrowdLineupVariation::OutfitMaterial", (int64)ECrowdLineupVariation::OutfitMaterial },
		{ "ECrowdLineupVariation::Hair", (int64)ECrowdLineupVariation::Hair },
		{ "ECrowdLineupVariation::Eyebrows", (int64)ECrowdLineupVariation::Eyebrows },
		{ "ECrowdLineupVariation::Fuzz", (int64)ECrowdLineupVariation::Fuzz },
		{ "ECrowdLineupVariation::Eyelashes", (int64)ECrowdLineupVariation::Eyelashes },
		{ "ECrowdLineupVariation::Mustache", (int64)ECrowdLineupVariation::Mustache },
		{ "ECrowdLineupVariation::Beard", (int64)ECrowdLineupVariation::Beard },
		{ "ECrowdLineupVariation::HairColor", (int64)ECrowdLineupVariation::HairColor },
		{ "ECrowdLineupVariation::SkinTexture", (int64)ECrowdLineupVariation::SkinTexture },
		{ "ECrowdLineupVariation::SkinTextureModifier", (int64)ECrowdLineupVariation::SkinTextureModifier },
		{ "ECrowdLineupVariation::Accessory", (int64)ECrowdLineupVariation::Accessory },
		{ "ECrowdLineupVariation::ScaleFactor", (int64)ECrowdLineupVariation::ScaleFactor },
		{ "ECrowdLineupVariation::PatternColor", (int64)ECrowdLineupVariation::PatternColor },
		{ "ECrowdLineupVariation::PatternOption", (int64)ECrowdLineupVariation::PatternOption },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CitySample_ECrowdLineupVariation_Statics::Enum_MetaDataParams[] = {
		{ "Accessory.Name", "ECrowdLineupVariation::Accessory" },
		{ "Beard.Name", "ECrowdLineupVariation::Beard" },
		{ "BlueprintType", "true" },
		{ "BodyType.Name", "ECrowdLineupVariation::BodyType" },
		{ "Eyebrows.Name", "ECrowdLineupVariation::Eyebrows" },
		{ "Eyelashes.Name", "ECrowdLineupVariation::Eyelashes" },
		{ "Fuzz.Name", "ECrowdLineupVariation::Fuzz" },
		{ "Hair.Name", "ECrowdLineupVariation::Hair" },
		{ "HairColor.Name", "ECrowdLineupVariation::HairColor" },
		{ "Head.Name", "ECrowdLineupVariation::Head" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterEnums.h" },
		{ "Mustache.Name", "ECrowdLineupVariation::Mustache" },
		{ "Outfit.Name", "ECrowdLineupVariation::Outfit" },
		{ "OutfitMaterial.Name", "ECrowdLineupVariation::OutfitMaterial" },
		{ "PatternColor.Name", "ECrowdLineupVariation::PatternColor" },
		{ "PatternOption.Name", "ECrowdLineupVariation::PatternOption" },
		{ "ScaleFactor.Name", "ECrowdLineupVariation::ScaleFactor" },
		{ "Skeleton.Name", "ECrowdLineupVariation::Skeleton" },
		{ "SkinTexture.Name", "ECrowdLineupVariation::SkinTexture" },
		{ "SkinTextureModifier.Name", "ECrowdLineupVariation::SkinTextureModifier" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ECrowdLineupVariation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		"ECrowdLineupVariation",
		"ECrowdLineupVariation",
		Z_Construct_UEnum_CitySample_ECrowdLineupVariation_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECrowdLineupVariation_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECrowdLineupVariation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_ECrowdLineupVariation_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CitySample_ECrowdLineupVariation()
	{
		if (!Z_Registration_Info_UEnum_ECrowdLineupVariation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECrowdLineupVariation.InnerSingleton, Z_Construct_UEnum_CitySample_ECrowdLineupVariation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECrowdLineupVariation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterDefinitionType;
	static UEnum* ECharacterDefinitionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECharacterDefinitionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECharacterDefinitionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ECharacterDefinitionType, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("ECharacterDefinitionType"));
		}
		return Z_Registration_Info_UEnum_ECharacterDefinitionType.OuterSingleton;
	}
	template<> CITYSAMPLE_API UEnum* StaticEnum<ECharacterDefinitionType>()
	{
		return ECharacterDefinitionType_StaticEnum();
	}
	struct Z_Construct_UEnum_CitySample_ECharacterDefinitionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CitySample_ECharacterDefinitionType_Statics::Enumerators[] = {
		{ "ECharacterDefinitionType::Crowd", (int64)ECharacterDefinitionType::Crowd },
		{ "ECharacterDefinitionType::Hero", (int64)ECharacterDefinitionType::Hero },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CitySample_ECharacterDefinitionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Crowd.Name", "ECharacterDefinitionType::Crowd" },
		{ "Hero.Name", "ECharacterDefinitionType::Hero" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterEnums.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ECharacterDefinitionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		"ECharacterDefinitionType",
		"ECharacterDefinitionType",
		Z_Construct_UEnum_CitySample_ECharacterDefinitionType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECharacterDefinitionType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECharacterDefinitionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_ECharacterDefinitionType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CitySample_ECharacterDefinitionType()
	{
		if (!Z_Registration_Info_UEnum_ECharacterDefinitionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterDefinitionType.InnerSingleton, Z_Construct_UEnum_CitySample_ECharacterDefinitionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECharacterDefinitionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECrowdMaterialParameterType;
	static UEnum* ECrowdMaterialParameterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECrowdMaterialParameterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECrowdMaterialParameterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ECrowdMaterialParameterType, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("ECrowdMaterialParameterType"));
		}
		return Z_Registration_Info_UEnum_ECrowdMaterialParameterType.OuterSingleton;
	}
	template<> CITYSAMPLE_API UEnum* StaticEnum<ECrowdMaterialParameterType>()
	{
		return ECrowdMaterialParameterType_StaticEnum();
	}
	struct Z_Construct_UEnum_CitySample_ECrowdMaterialParameterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CitySample_ECrowdMaterialParameterType_Statics::Enumerators[] = {
		{ "ECrowdMaterialParameterType::Color", (int64)ECrowdMaterialParameterType::Color },
		{ "ECrowdMaterialParameterType::Vector", (int64)ECrowdMaterialParameterType::Vector },
		{ "ECrowdMaterialParameterType::Float", (int64)ECrowdMaterialParameterType::Float },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CitySample_ECrowdMaterialParameterType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Color.Name", "ECrowdMaterialParameterType::Color" },
		{ "Float.Name", "ECrowdMaterialParameterType::Float" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterEnums.h" },
		{ "Vector.Name", "ECrowdMaterialParameterType::Vector" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ECrowdMaterialParameterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		"ECrowdMaterialParameterType",
		"ECrowdMaterialParameterType",
		Z_Construct_UEnum_CitySample_ECrowdMaterialParameterType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECrowdMaterialParameterType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECrowdMaterialParameterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_ECrowdMaterialParameterType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CitySample_ECrowdMaterialParameterType()
	{
		if (!Z_Registration_Info_UEnum_ECrowdMaterialParameterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECrowdMaterialParameterType.InnerSingleton, Z_Construct_UEnum_CitySample_ECrowdMaterialParameterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECrowdMaterialParameterType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECrowdPatternUsage;
	static UEnum* ECrowdPatternUsage_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECrowdPatternUsage.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECrowdPatternUsage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ECrowdPatternUsage, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("ECrowdPatternUsage"));
		}
		return Z_Registration_Info_UEnum_ECrowdPatternUsage.OuterSingleton;
	}
	template<> CITYSAMPLE_API UEnum* StaticEnum<ECrowdPatternUsage>()
	{
		return ECrowdPatternUsage_StaticEnum();
	}
	struct Z_Construct_UEnum_CitySample_ECrowdPatternUsage_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CitySample_ECrowdPatternUsage_Statics::Enumerators[] = {
		{ "ECrowdPatternUsage::None", (int64)ECrowdPatternUsage::None },
		{ "ECrowdPatternUsage::PatternList", (int64)ECrowdPatternUsage::PatternList },
		{ "ECrowdPatternUsage::Driven", (int64)ECrowdPatternUsage::Driven },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CitySample_ECrowdPatternUsage_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Driven.Name", "ECrowdPatternUsage::Driven" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterEnums.h" },
		{ "None.Name", "ECrowdPatternUsage::None" },
		{ "PatternList.Name", "ECrowdPatternUsage::PatternList" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ECrowdPatternUsage_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		"ECrowdPatternUsage",
		"ECrowdPatternUsage",
		Z_Construct_UEnum_CitySample_ECrowdPatternUsage_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECrowdPatternUsage_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECrowdPatternUsage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_ECrowdPatternUsage_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CitySample_ECrowdPatternUsage()
	{
		if (!Z_Registration_Info_UEnum_ECrowdPatternUsage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECrowdPatternUsage.InnerSingleton, Z_Construct_UEnum_CitySample_ECrowdPatternUsage_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECrowdPatternUsage.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimToTextureDataAssetSlots;
	static UEnum* EAnimToTextureDataAssetSlots_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimToTextureDataAssetSlots.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimToTextureDataAssetSlots.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_EAnimToTextureDataAssetSlots, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("EAnimToTextureDataAssetSlots"));
		}
		return Z_Registration_Info_UEnum_EAnimToTextureDataAssetSlots.OuterSingleton;
	}
	template<> CITYSAMPLE_API UEnum* StaticEnum<EAnimToTextureDataAssetSlots>()
	{
		return EAnimToTextureDataAssetSlots_StaticEnum();
	}
	struct Z_Construct_UEnum_CitySample_EAnimToTextureDataAssetSlots_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CitySample_EAnimToTextureDataAssetSlots_Statics::Enumerators[] = {
		{ "ATTDAS_Body", (int64)ATTDAS_Body },
		{ "ATTDAS_Top", (int64)ATTDAS_Top },
		{ "ATTDAS_Bottom", (int64)ATTDAS_Bottom },
		{ "ATTDAS_Shoes", (int64)ATTDAS_Shoes },
		{ "ATTDAS_MAX", (int64)ATTDAS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CitySample_EAnimToTextureDataAssetSlots_Statics::Enum_MetaDataParams[] = {
		{ "ATTDAS_Body.Name", "ATTDAS_Body" },
		{ "ATTDAS_Bottom.Name", "ATTDAS_Bottom" },
		{ "ATTDAS_MAX.Name", "ATTDAS_MAX" },
		{ "ATTDAS_Shoes.Name", "ATTDAS_Shoes" },
		{ "ATTDAS_Top.Name", "ATTDAS_Top" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterEnums.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_EAnimToTextureDataAssetSlots_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		"EAnimToTextureDataAssetSlots",
		"EAnimToTextureDataAssetSlots",
		Z_Construct_UEnum_CitySample_EAnimToTextureDataAssetSlots_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_EAnimToTextureDataAssetSlots_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_EAnimToTextureDataAssetSlots_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_EAnimToTextureDataAssetSlots_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CitySample_EAnimToTextureDataAssetSlots()
	{
		if (!Z_Registration_Info_UEnum_EAnimToTextureDataAssetSlots.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimToTextureDataAssetSlots.InnerSingleton, Z_Construct_UEnum_CitySample_EAnimToTextureDataAssetSlots_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimToTextureDataAssetSlots.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterEnums_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterEnums_h_Statics::EnumInfo[] = {
		{ ECitySampleCrowdGender_StaticEnum, TEXT("ECitySampleCrowdGender"), &Z_Registration_Info_UEnum_ECitySampleCrowdGender, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 490958628U) },
		{ ECitySampleCrowdBodyType_StaticEnum, TEXT("ECitySampleCrowdBodyType"), &Z_Registration_Info_UEnum_ECitySampleCrowdBodyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 494709775U) },
		{ ECrowdHairSlots_StaticEnum, TEXT("ECrowdHairSlots"), &Z_Registration_Info_UEnum_ECrowdHairSlots, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 994991259U) },
		{ ECrowdMeshSlots_StaticEnum, TEXT("ECrowdMeshSlots"), &Z_Registration_Info_UEnum_ECrowdMeshSlots, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3389942478U) },
		{ ECrowdLineupVariation_StaticEnum, TEXT("ECrowdLineupVariation"), &Z_Registration_Info_UEnum_ECrowdLineupVariation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3035681866U) },
		{ ECharacterDefinitionType_StaticEnum, TEXT("ECharacterDefinitionType"), &Z_Registration_Info_UEnum_ECharacterDefinitionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4119250061U) },
		{ ECrowdMaterialParameterType_StaticEnum, TEXT("ECrowdMaterialParameterType"), &Z_Registration_Info_UEnum_ECrowdMaterialParameterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1265215882U) },
		{ ECrowdPatternUsage_StaticEnum, TEXT("ECrowdPatternUsage"), &Z_Registration_Info_UEnum_ECrowdPatternUsage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3292691641U) },
		{ EAnimToTextureDataAssetSlots_StaticEnum, TEXT("EAnimToTextureDataAssetSlots"), &Z_Registration_Info_UEnum_EAnimToTextureDataAssetSlots, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1086009449U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterEnums_h_3188944328(TEXT("/Script/CitySample"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterEnums_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
