// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PointCloudView.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UPointCloud;
class UPointCloudView;
enum class EFilterMode : uint8;
#ifdef POINTCLOUD_PointCloudView_generated_h
#error "PointCloudView.generated.h already included, missing '#pragma once' in PointCloudView.h"
#endif
#define POINTCLOUD_PointCloudView_generated_h

#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudView_h_20_SPARSE_DATA
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudView_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudView_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudView_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPointCloud); \
	DECLARE_FUNCTION(execFilterOnIndex); \
	DECLARE_FUNCTION(execFilterOnRange); \
	DECLARE_FUNCTION(execFilterOnBoundingSphere); \
	DECLARE_FUNCTION(execFilterOnTile); \
	DECLARE_FUNCTION(execFilterOnOrientedBoundingBox); \
	DECLARE_FUNCTION(execFilterOnBoundingBox); \
	DECLARE_FUNCTION(execFilterOnPointExpression); \
	DECLARE_FUNCTION(execFilterOnMetadataPattern); \
	DECLARE_FUNCTION(execFilterOnMetadata); \
	DECLARE_FUNCTION(execGetHash); \
	DECLARE_FUNCTION(execGetCount); \
	DECLARE_FUNCTION(execGetUniqueMetadataValues); \
	DECLARE_FUNCTION(execGetUniqueMetadataValuesAndCounts); \
	DECLARE_FUNCTION(execGetMetadataValues); \
	DECLARE_FUNCTION(execGetMetadataValuesArrayAsFloat); \
	DECLARE_FUNCTION(execGetMetadataValuesArrayAsInt); \
	DECLARE_FUNCTION(execGetMetadata); \
	DECLARE_FUNCTION(execCountResultsInBox); \
	DECLARE_FUNCTION(execGetResultsBoundingBox); \
	DECLARE_FUNCTION(execGetIndexes); \
	DECLARE_FUNCTION(execGetTransformsAndIds); \
	DECLARE_FUNCTION(execGetTransforms); \
	DECLARE_FUNCTION(execMakeChildView);


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudView_h_20_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudView_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPointCloudView(); \
	friend struct Z_Construct_UClass_UPointCloudView_Statics; \
public: \
	DECLARE_CLASS(UPointCloudView, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PointCloud"), NO_API) \
	DECLARE_SERIALIZER(UPointCloudView)


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudView_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPointCloudView(UPointCloudView&&); \
	NO_API UPointCloudView(const UPointCloudView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointCloudView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointCloudView); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPointCloudView)


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudView_h_17_PROLOG
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudView_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudView_h_20_SPARSE_DATA \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudView_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudView_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudView_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudView_h_20_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudView_h_20_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudView_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POINTCLOUD_API UClass* StaticClass<class UPointCloudView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
