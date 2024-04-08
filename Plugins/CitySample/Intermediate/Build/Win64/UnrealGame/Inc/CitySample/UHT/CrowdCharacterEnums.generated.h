// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Crowd/CrowdCharacterEnums.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CITYSAMPLE_CrowdCharacterEnums_generated_h
#error "CrowdCharacterEnums.generated.h already included, missing '#pragma once' in CrowdCharacterEnums.h"
#endif
#define CITYSAMPLE_CrowdCharacterEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterEnums_h


#define FOREACH_ENUM_ECITYSAMPLECROWDGENDER(op) \
	op(ECitySampleCrowdGender::A) \
	op(ECitySampleCrowdGender::B) 

enum class ECitySampleCrowdGender : uint8;
template<> struct TIsUEnumClass<ECitySampleCrowdGender> { enum { Value = true }; };
template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySampleCrowdGender>();

#define FOREACH_ENUM_ECITYSAMPLECROWDBODYTYPE(op) \
	op(ECitySampleCrowdBodyType::NormalWeight) \
	op(ECitySampleCrowdBodyType::OverWeight) \
	op(ECitySampleCrowdBodyType::UnderWeight) 

enum class ECitySampleCrowdBodyType : uint8;
template<> struct TIsUEnumClass<ECitySampleCrowdBodyType> { enum { Value = true }; };
template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySampleCrowdBodyType>();

#define FOREACH_ENUM_ECROWDHAIRSLOTS(op) \
	op(ECrowdHairSlots::Hair) \
	op(ECrowdHairSlots::Eyebrows) \
	op(ECrowdHairSlots::Fuzz) \
	op(ECrowdHairSlots::Eyelashes) \
	op(ECrowdHairSlots::Mustache) \
	op(ECrowdHairSlots::Beard) 

enum class ECrowdHairSlots : uint8;
template<> struct TIsUEnumClass<ECrowdHairSlots> { enum { Value = true }; };
template<> CITYSAMPLE_API UEnum* StaticEnum<ECrowdHairSlots>();

#define FOREACH_ENUM_ECROWDMESHSLOTS(op) \
	op(ECrowdMeshSlots::Base) \
	op(ECrowdMeshSlots::Body) \
	op(ECrowdMeshSlots::Head) \
	op(ECrowdMeshSlots::Top) \
	op(ECrowdMeshSlots::Bottom) \
	op(ECrowdMeshSlots::Shoes) 

enum class ECrowdMeshSlots : uint8;
template<> struct TIsUEnumClass<ECrowdMeshSlots> { enum { Value = true }; };
template<> CITYSAMPLE_API UEnum* StaticEnum<ECrowdMeshSlots>();

#define FOREACH_ENUM_ECROWDLINEUPVARIATION(op) \
	op(ECrowdLineupVariation::Skeleton) \
	op(ECrowdLineupVariation::BodyType) \
	op(ECrowdLineupVariation::Head) \
	op(ECrowdLineupVariation::Outfit) \
	op(ECrowdLineupVariation::OutfitMaterial) \
	op(ECrowdLineupVariation::Hair) \
	op(ECrowdLineupVariation::Eyebrows) \
	op(ECrowdLineupVariation::Fuzz) \
	op(ECrowdLineupVariation::Eyelashes) \
	op(ECrowdLineupVariation::Mustache) \
	op(ECrowdLineupVariation::Beard) \
	op(ECrowdLineupVariation::HairColor) \
	op(ECrowdLineupVariation::SkinTexture) \
	op(ECrowdLineupVariation::SkinTextureModifier) \
	op(ECrowdLineupVariation::Accessory) \
	op(ECrowdLineupVariation::ScaleFactor) \
	op(ECrowdLineupVariation::PatternColor) \
	op(ECrowdLineupVariation::PatternOption) 

enum class ECrowdLineupVariation : uint8;
template<> struct TIsUEnumClass<ECrowdLineupVariation> { enum { Value = true }; };
template<> CITYSAMPLE_API UEnum* StaticEnum<ECrowdLineupVariation>();

#define FOREACH_ENUM_ECHARACTERDEFINITIONTYPE(op) \
	op(ECharacterDefinitionType::Crowd) \
	op(ECharacterDefinitionType::Hero) 

enum class ECharacterDefinitionType : uint8;
template<> struct TIsUEnumClass<ECharacterDefinitionType> { enum { Value = true }; };
template<> CITYSAMPLE_API UEnum* StaticEnum<ECharacterDefinitionType>();

#define FOREACH_ENUM_ECROWDMATERIALPARAMETERTYPE(op) \
	op(ECrowdMaterialParameterType::Color) \
	op(ECrowdMaterialParameterType::Vector) \
	op(ECrowdMaterialParameterType::Float) 

enum class ECrowdMaterialParameterType : uint8;
template<> struct TIsUEnumClass<ECrowdMaterialParameterType> { enum { Value = true }; };
template<> CITYSAMPLE_API UEnum* StaticEnum<ECrowdMaterialParameterType>();

#define FOREACH_ENUM_ECROWDPATTERNUSAGE(op) \
	op(ECrowdPatternUsage::None) \
	op(ECrowdPatternUsage::PatternList) \
	op(ECrowdPatternUsage::Driven) 

enum class ECrowdPatternUsage : uint8;
template<> struct TIsUEnumClass<ECrowdPatternUsage> { enum { Value = true }; };
template<> CITYSAMPLE_API UEnum* StaticEnum<ECrowdPatternUsage>();

#define FOREACH_ENUM_EANIMTOTEXTUREDATAASSETSLOTS(op) \
	op(ATTDAS_Body) \
	op(ATTDAS_Top) \
	op(ATTDAS_Bottom) \
	op(ATTDAS_Shoes) 

enum EAnimToTextureDataAssetSlots : int;
template<> CITYSAMPLE_API UEnum* StaticEnum<EAnimToTextureDataAssetSlots>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
