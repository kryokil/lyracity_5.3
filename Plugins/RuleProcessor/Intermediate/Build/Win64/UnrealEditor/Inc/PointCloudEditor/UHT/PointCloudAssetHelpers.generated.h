// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PointCloudAssetHelpers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDataLayerAsset;
class UDataLayerInstance;
class UPointCloud;
class UPointCloudView;
class USliceAndDiceMapping;
class UWorld;
enum class EPointCloudPivotType : uint8;
struct FPointCloudPoint;
struct FSpawnAndInitActorParameters;
#ifdef POINTCLOUDEDITOR_PointCloudAssetHelpers_generated_h
#error "PointCloudAssetHelpers.generated.h already included, missing '#pragma once' in PointCloudAssetHelpers.h"
#endif
#define POINTCLOUDEDITOR_PointCloudAssetHelpers_generated_h

#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPointCloudComponentData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<struct FPointCloudComponentData>();

#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<struct FPointCloudManagedActorData>();

#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<struct FSpawnAndInitMaterialOverrideParameters>();

#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<struct FSpawnAndInitActorParameters>();

#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_218_SPARSE_DATA
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_218_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_218_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_218_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExportToAlembic); \
	DECLARE_FUNCTION(execExportToCSV); \
	DECLARE_FUNCTION(execGetModulesFromMapping); \
	DECLARE_FUNCTION(execGetModulesFromDataLayers); \
	DECLARE_FUNCTION(execSetActorPivots); \
	DECLARE_FUNCTION(execDeleteAllActorsByPrefixInPartitionedWorld); \
	DECLARE_FUNCTION(execDeleteAllActorsOnDataLayer); \
	DECLARE_FUNCTION(execCreateActorFromView); \
	DECLARE_FUNCTION(execCreateEmptyPointCloudAsset); \
	DECLARE_FUNCTION(execLoadPointCloudAssetFromPath); \
	DECLARE_FUNCTION(execLoadPointCloudAlembic); \
	DECLARE_FUNCTION(execLoadPointCloudCSV); \
	DECLARE_FUNCTION(execGetSelectedRuleProcessorItemsFromContentBrowser);


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_218_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_218_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPointCloudAssetsHelpers(); \
	friend struct Z_Construct_UClass_UPointCloudAssetsHelpers_Statics; \
public: \
	DECLARE_CLASS(UPointCloudAssetsHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(UPointCloudAssetsHelpers)


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_218_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPointCloudAssetsHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPointCloudAssetsHelpers(UPointCloudAssetsHelpers&&); \
	NO_API UPointCloudAssetsHelpers(const UPointCloudAssetsHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointCloudAssetsHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointCloudAssetsHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointCloudAssetsHelpers) \
	NO_API virtual ~UPointCloudAssetsHelpers();


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_196_PROLOG
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_218_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_218_SPARSE_DATA \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_218_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_218_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_218_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_218_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_218_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_218_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POINTCLOUDEDITOR_API UClass* StaticClass<class UPointCloudAssetsHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
