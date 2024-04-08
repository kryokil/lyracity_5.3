// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PointCloud.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPointCloudView;
struct FPointCloudPoint;
#ifdef POINTCLOUD_PointCloud_generated_h
#error "PointCloud.generated.h already included, missing '#pragma once' in PointCloud.h"
#endif
#define POINTCLOUD_PointCloud_generated_h

#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPointCloudPoint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POINTCLOUD_API UScriptStruct* StaticStruct<struct FPointCloudPoint>();

#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_45_SPARSE_DATA
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_45_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_45_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReplacePoints); \
	DECLARE_FUNCTION(execReimport); \
	DECLARE_FUNCTION(execGetLoadedFiles); \
	DECLARE_FUNCTION(execLoggingEnabled); \
	DECLARE_FUNCTION(execStopLogging); \
	DECLARE_FUNCTION(execStartLogging); \
	DECLARE_FUNCTION(execSaveToDisk); \
	DECLARE_FUNCTION(execLoadFromPoints); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execGetCount); \
	DECLARE_FUNCTION(execHasMetaDataAttribute); \
	DECLARE_FUNCTION(execHasDefaultAttribute); \
	DECLARE_FUNCTION(execGetMetadataAttributes); \
	DECLARE_FUNCTION(execGetDefaultAttributes); \
	DECLARE_FUNCTION(execMakeView);


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_45_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPointCloud(); \
	friend struct Z_Construct_UClass_UPointCloud_Statics; \
public: \
	DECLARE_CLASS(UPointCloud, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PointCloud"), NO_API) \
	DECLARE_SERIALIZER(UPointCloud)


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPointCloud(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPointCloud(UPointCloud&&); \
	NO_API UPointCloud(const UPointCloud&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointCloud); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointCloud); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointCloud) \
	NO_API virtual ~UPointCloud();


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_40_PROLOG
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_45_SPARSE_DATA \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_45_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_45_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_45_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_45_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POINTCLOUD_API UClass* StaticClass<class UPointCloud>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h


#define FOREACH_ENUM_EFILTERMODE(op) \
	op(EFilterMode::FILTER_Or) \
	op(EFilterMode::FILTER_And) \
	op(EFilterMode::FILTER_Not) 

enum class EFilterMode : uint8;
template<> struct TIsUEnumClass<EFilterMode> { enum { Value = true }; };
template<> POINTCLOUD_API UEnum* StaticEnum<EFilterMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
