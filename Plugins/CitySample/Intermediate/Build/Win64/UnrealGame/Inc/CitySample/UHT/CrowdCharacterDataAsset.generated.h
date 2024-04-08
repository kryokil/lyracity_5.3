// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Crowd/CrowdCharacterDataAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimToTextureDataAsset;
class UGroomAsset;
class USkeletalMesh;
class UStaticMesh;
enum class ECitySampleCrowdBodyType : uint8;
enum class ECitySampleCrowdGender : uint8;
struct FCrowdCharacterDefinition;
#ifdef CITYSAMPLE_CrowdCharacterDataAsset_generated_h
#error "CrowdCharacterDataAsset.generated.h already included, missing '#pragma once' in CrowdCharacterDataAsset.h"
#endif
#define CITYSAMPLE_CrowdCharacterDataAsset_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDataAsset_h_45_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDataAsset_h_45_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDataAsset_h_45_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDataAsset_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindAccesoryMeshes); \
	DECLARE_FUNCTION(execFindGroomMeshes); \
	DECLARE_FUNCTION(execFindGrooms); \
	DECLARE_FUNCTION(execFindSkeletalMeshes); \
	DECLARE_FUNCTION(execFindHeadSkeletalMeshes); \
	DECLARE_FUNCTION(execFindBodySkeletalMeshes); \
	DECLARE_FUNCTION(execFindBaseSkeletalMeshes); \
	DECLARE_FUNCTION(execFindOutfitSkeletalMeshes); \
	DECLARE_FUNCTION(execFindDataAssets); \
	DECLARE_FUNCTION(execFindHeadDataAssets); \
	DECLARE_FUNCTION(execFindBodyDataAssets); \
	DECLARE_FUNCTION(execFindOutfitDataAssets); \
	DECLARE_FUNCTION(execGetCharacterDefinitionFromIndex); \
	DECLARE_FUNCTION(execGetCharacterDefinition);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDataAsset_h_45_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDataAsset_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCrowdCharacterDataAsset(); \
	friend struct Z_Construct_UClass_UCrowdCharacterDataAsset_Statics; \
public: \
	DECLARE_CLASS(UCrowdCharacterDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCrowdCharacterDataAsset)


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDataAsset_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrowdCharacterDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrowdCharacterDataAsset(UCrowdCharacterDataAsset&&); \
	NO_API UCrowdCharacterDataAsset(const UCrowdCharacterDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrowdCharacterDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrowdCharacterDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrowdCharacterDataAsset) \
	NO_API virtual ~UCrowdCharacterDataAsset();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDataAsset_h_42_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDataAsset_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDataAsset_h_45_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDataAsset_h_45_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDataAsset_h_45_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDataAsset_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDataAsset_h_45_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDataAsset_h_45_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDataAsset_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UCrowdCharacterDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDataAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
