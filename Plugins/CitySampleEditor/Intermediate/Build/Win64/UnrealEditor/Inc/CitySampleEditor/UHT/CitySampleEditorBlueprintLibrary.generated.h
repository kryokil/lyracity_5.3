// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CitySampleEditorBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class AActor;
class ULevelSequence;
class UMovieSceneTrack;
class UPhysicsAsset;
class USkeletalMesh;
class UStaticMesh;
class UStaticMeshComponent;
#ifdef CITYSAMPLEEDITOR_CitySampleEditorBlueprintLibrary_generated_h
#error "CitySampleEditorBlueprintLibrary.generated.h already included, missing '#pragma once' in CitySampleEditorBlueprintLibrary.h"
#endif
#define CITYSAMPLEEDITOR_CitySampleEditorBlueprintLibrary_generated_h

#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleEditorBlueprintLibrary_h_35_SPARSE_DATA
#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleEditorBlueprintLibrary_h_35_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleEditorBlueprintLibrary_h_35_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleEditorBlueprintLibrary_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSequenceEvents); \
	DECLARE_FUNCTION(execIsTrackMuted); \
	DECLARE_FUNCTION(execSetRayTracingGroupID); \
	DECLARE_FUNCTION(execCopyMeshMaterials); \
	DECLARE_FUNCTION(execIsMaterialIndexUsed); \
	DECLARE_FUNCTION(execResetMaterialSectionSlots); \
	DECLARE_FUNCTION(execGetGenerateLightmapUVs); \
	DECLARE_FUNCTION(execReimportStaticMeshWithModify); \
	DECLARE_FUNCTION(execUpdateReimportPath); \
	DECLARE_FUNCTION(execDeleteMaterialSlot); \
	DECLARE_FUNCTION(execExploreProfilesDirectory); \
	DECLARE_FUNCTION(execSetStatsShouldEmitNamedEvents); \
	DECLARE_FUNCTION(execCopyConstraintSettingsFromBoneNames); \
	DECLARE_FUNCTION(execCopyConstraintSettingsFromJointNames); \
	DECLARE_FUNCTION(execCopyPhysicsAssetSettings); \
	DECLARE_FUNCTION(execGetNeverNeedsCookedCollisionData); \
	DECLARE_FUNCTION(execSetNeverNeedsCookedCollisionData); \
	DECLARE_FUNCTION(execGetCollisionComplexity); \
	DECLARE_FUNCTION(execSetCollisionComplexity); \
	DECLARE_FUNCTION(execGenerateGeometryCollection); \
	DECLARE_FUNCTION(execSetNaniteSettings);


#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleEditorBlueprintLibrary_h_35_ACCESSORS
#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleEditorBlueprintLibrary_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCitySampleEditorBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UCitySampleEditorBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UCitySampleEditorBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CitySampleEditor"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleEditorBlueprintLibrary)


#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleEditorBlueprintLibrary_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCitySampleEditorBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleEditorBlueprintLibrary(UCitySampleEditorBlueprintLibrary&&); \
	NO_API UCitySampleEditorBlueprintLibrary(const UCitySampleEditorBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleEditorBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleEditorBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCitySampleEditorBlueprintLibrary) \
	NO_API virtual ~UCitySampleEditorBlueprintLibrary();


#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleEditorBlueprintLibrary_h_32_PROLOG
#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleEditorBlueprintLibrary_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleEditorBlueprintLibrary_h_35_SPARSE_DATA \
	FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleEditorBlueprintLibrary_h_35_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleEditorBlueprintLibrary_h_35_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleEditorBlueprintLibrary_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleEditorBlueprintLibrary_h_35_ACCESSORS \
	FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleEditorBlueprintLibrary_h_35_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleEditorBlueprintLibrary_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLEEDITOR_API UClass* StaticClass<class UCitySampleEditorBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleEditorBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
