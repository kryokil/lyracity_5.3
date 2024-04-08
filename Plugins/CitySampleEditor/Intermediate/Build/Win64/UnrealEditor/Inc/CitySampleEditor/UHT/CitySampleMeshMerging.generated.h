// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshMerging/CitySampleMeshMerging.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USkeletalMesh;
class USkeleton;
struct FMeshApproximationSettings;
struct FMeshMergingSettings;
#ifdef CITYSAMPLEEDITOR_CitySampleMeshMerging_generated_h
#error "CitySampleMeshMerging.generated.h already included, missing '#pragma once' in CitySampleMeshMerging.h"
#endif
#define CITYSAMPLEEDITOR_CitySampleMeshMerging_generated_h

#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MeshMerging_CitySampleMeshMerging_h_19_SPARSE_DATA
#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MeshMerging_CitySampleMeshMerging_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MeshMerging_CitySampleMeshMerging_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MeshMerging_CitySampleMeshMerging_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApproximateActors); \
	DECLARE_FUNCTION(execMergeActors); \
	DECLARE_FUNCTION(execMergeSkeletalMeshes);


#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MeshMerging_CitySampleMeshMerging_h_19_ACCESSORS
#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MeshMerging_CitySampleMeshMerging_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCitySampleMeshMergingBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UCitySampleMeshMergingBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UCitySampleMeshMergingBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CitySampleEditor"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleMeshMergingBlueprintLibrary)


#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MeshMerging_CitySampleMeshMerging_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCitySampleMeshMergingBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleMeshMergingBlueprintLibrary(UCitySampleMeshMergingBlueprintLibrary&&); \
	NO_API UCitySampleMeshMergingBlueprintLibrary(const UCitySampleMeshMergingBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleMeshMergingBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleMeshMergingBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCitySampleMeshMergingBlueprintLibrary) \
	NO_API virtual ~UCitySampleMeshMergingBlueprintLibrary();


#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MeshMerging_CitySampleMeshMerging_h_16_PROLOG
#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MeshMerging_CitySampleMeshMerging_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MeshMerging_CitySampleMeshMerging_h_19_SPARSE_DATA \
	FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MeshMerging_CitySampleMeshMerging_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MeshMerging_CitySampleMeshMerging_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MeshMerging_CitySampleMeshMerging_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MeshMerging_CitySampleMeshMerging_h_19_ACCESSORS \
	FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MeshMerging_CitySampleMeshMerging_h_19_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MeshMerging_CitySampleMeshMerging_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLEEDITOR_API UClass* StaticClass<class UCitySampleMeshMergingBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MeshMerging_CitySampleMeshMerging_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
