// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumans/MetaHumanToolEditorBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimBlueprint;
class UAnimGraphNode_PoseDriver;
class UAnimSequence;
class UPoseAsset;
class USkeletalMesh;
struct FAnimNode_PoseDriver;
#ifdef CITYSAMPLEEDITOR_MetaHumanToolEditorBlueprintLibrary_generated_h
#error "MetaHumanToolEditorBlueprintLibrary.generated.h already included, missing '#pragma once' in MetaHumanToolEditorBlueprintLibrary.h"
#endif
#define CITYSAMPLEEDITOR_MetaHumanToolEditorBlueprintLibrary_generated_h

#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MetaHumans_MetaHumanToolEditorBlueprintLibrary_h_18_SPARSE_DATA
#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MetaHumans_MetaHumanToolEditorBlueprintLibrary_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MetaHumans_MetaHumanToolEditorBlueprintLibrary_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MetaHumans_MetaHumanToolEditorBlueprintLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPoseAssetPreviewMesh); \
	DECLARE_FUNCTION(execSetAnimPreviewMesh); \
	DECLARE_FUNCTION(execSetBpPreviewMesh); \
	DECLARE_FUNCTION(execUpdateFromAnimSequence); \
	DECLARE_FUNCTION(execGetDrivingBones); \
	DECLARE_FUNCTION(execSetDrivingBones); \
	DECLARE_FUNCTION(execGetSourceBones); \
	DECLARE_FUNCTION(execSetSourceBones); \
	DECLARE_FUNCTION(execGetPoseDriverNode); \
	DECLARE_FUNCTION(execRetrievePoseDriverGraphNodes);


#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MetaHumans_MetaHumanToolEditorBlueprintLibrary_h_18_ACCESSORS
#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MetaHumans_MetaHumanToolEditorBlueprintLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanToolEditorFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMetaHumanToolEditorFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMetaHumanToolEditorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CitySampleEditor"), NO_API) \
	DECLARE_SERIALIZER(UMetaHumanToolEditorFunctionLibrary)


#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MetaHumans_MetaHumanToolEditorBlueprintLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanToolEditorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMetaHumanToolEditorFunctionLibrary(UMetaHumanToolEditorFunctionLibrary&&); \
	NO_API UMetaHumanToolEditorFunctionLibrary(const UMetaHumanToolEditorFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanToolEditorFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanToolEditorFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanToolEditorFunctionLibrary) \
	NO_API virtual ~UMetaHumanToolEditorFunctionLibrary();


#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MetaHumans_MetaHumanToolEditorBlueprintLibrary_h_15_PROLOG
#define FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MetaHumans_MetaHumanToolEditorBlueprintLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MetaHumans_MetaHumanToolEditorBlueprintLibrary_h_18_SPARSE_DATA \
	FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MetaHumans_MetaHumanToolEditorBlueprintLibrary_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MetaHumans_MetaHumanToolEditorBlueprintLibrary_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MetaHumans_MetaHumanToolEditorBlueprintLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MetaHumans_MetaHumanToolEditorBlueprintLibrary_h_18_ACCESSORS \
	FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MetaHumans_MetaHumanToolEditorBlueprintLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MetaHumans_MetaHumanToolEditorBlueprintLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLEEDITOR_API UClass* StaticClass<class UMetaHumanToolEditorFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_MetaHumans_MetaHumanToolEditorBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
