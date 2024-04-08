// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Crowd/CrowdBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCrowdCharacterDataAsset;
class UGroomAsset;
class UGroomComponent;
class USceneComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class USkeletalMeshLODSettings;
class USkinnedMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;
enum class EGroomBindingType : uint8;
enum class EGroomInterpolationType : uint8;
enum class ESkinCacheUsage : uint8;
struct FCrowdCharacterDefinition;
struct FCrowdCharacterOptions;
struct FHairGroupsCardsSourceDescription;
#ifdef CITYSAMPLE_CrowdBlueprintLibrary_generated_h
#error "CrowdBlueprintLibrary.generated.h already included, missing '#pragma once' in CrowdBlueprintLibrary.h"
#endif
#define CITYSAMPLE_CrowdBlueprintLibrary_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdBlueprintLibrary_h_19_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdBlueprintLibrary_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdBlueprintLibrary_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdBlueprintLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateCharacterDefinitionFromOptions); \
	DECLARE_FUNCTION(execScaleComponentByFactor); \
	DECLARE_FUNCTION(execAttachComponent); \
	DECLARE_FUNCTION(execAttachAccessory); \
	DECLARE_FUNCTION(execGetWorldSpaceRefPoseTransform); \
	DECLARE_FUNCTION(execSetOutfitMaterials); \
	DECLARE_FUNCTION(execSetBodyMaterials); \
	DECLARE_FUNCTION(execSetHeadMaterials); \
	DECLARE_FUNCTION(execSetHairMaterials); \
	DECLARE_FUNCTION(execSetGroomComponents); \
	DECLARE_FUNCTION(execSetMeshComponents);


#if WITH_EDITOR
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdBlueprintLibrary_h_19_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHairCardsImportedMesh); \
	DECLARE_FUNCTION(execRecomputeTangents); \
	DECLARE_FUNCTION(execAddMorphTarget); \
	DECLARE_FUNCTION(execRemoveAllMorphTargets); \
	DECLARE_FUNCTION(execDisableGroomPhysics); \
	DECLARE_FUNCTION(execSetGroomInterpolationType); \
	DECLARE_FUNCTION(execSetGroomGeometryType); \
	DECLARE_FUNCTION(execSetGroomBindingType); \
	DECLARE_FUNCTION(execDisableSkeletalMeshPostProcess); \
	DECLARE_FUNCTION(execEnableSkeletalMeshSkinCache); \
	DECLARE_FUNCTION(execSetLODSettings);


#else
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdBlueprintLibrary_h_19_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdBlueprintLibrary_h_19_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdBlueprintLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCitySampleCrowdFunctionLibrary(); \
	friend struct Z_Construct_UClass_UCitySampleCrowdFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UCitySampleCrowdFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleCrowdFunctionLibrary)


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdBlueprintLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCitySampleCrowdFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleCrowdFunctionLibrary(UCitySampleCrowdFunctionLibrary&&); \
	NO_API UCitySampleCrowdFunctionLibrary(const UCitySampleCrowdFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleCrowdFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleCrowdFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCitySampleCrowdFunctionLibrary) \
	NO_API virtual ~UCitySampleCrowdFunctionLibrary();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdBlueprintLibrary_h_16_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdBlueprintLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdBlueprintLibrary_h_19_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdBlueprintLibrary_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdBlueprintLibrary_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdBlueprintLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdBlueprintLibrary_h_19_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdBlueprintLibrary_h_19_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdBlueprintLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdBlueprintLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UCitySampleCrowdFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
