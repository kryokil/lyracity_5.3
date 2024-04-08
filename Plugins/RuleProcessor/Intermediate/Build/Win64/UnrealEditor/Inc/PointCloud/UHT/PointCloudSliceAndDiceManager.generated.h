// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PointCloudSliceAndDiceManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASliceAndDiceManager;
class ULevel;
class UPointCloud;
class UPointCloudSliceAndDiceRuleSet;
class USliceAndDiceMapping;
class UWorld;
enum class EPointCloudReportLevel : uint8;
#ifdef POINTCLOUD_PointCloudSliceAndDiceManager_generated_h
#error "PointCloudSliceAndDiceManager.generated.h already included, missing '#pragma once' in PointCloudSliceAndDiceManager.h"
#endif
#define POINTCLOUD_PointCloudSliceAndDiceManager_generated_h

#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POINTCLOUD_API UScriptStruct* StaticStruct<struct FSliceAndDiceManagedActorsHashInfo>();

#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_46_SPARSE_DATA
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_46_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_46_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_46_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_46_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSliceAndDiceManagedActors(); \
	friend struct Z_Construct_UClass_USliceAndDiceManagedActors_Statics; \
public: \
	DECLARE_CLASS(USliceAndDiceManagedActors, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PointCloud"), NO_API) \
	DECLARE_SERIALIZER(USliceAndDiceManagedActors)


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USliceAndDiceManagedActors(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USliceAndDiceManagedActors(USliceAndDiceManagedActors&&); \
	NO_API USliceAndDiceManagedActors(const USliceAndDiceManagedActors&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USliceAndDiceManagedActors); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USliceAndDiceManagedActors); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USliceAndDiceManagedActors) \
	NO_API virtual ~USliceAndDiceManagedActors();


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_43_PROLOG
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_46_SPARSE_DATA \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_46_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_46_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_46_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_46_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POINTCLOUD_API UClass* StaticClass<class USliceAndDiceManagedActors>();

#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_190_SPARSE_DATA
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_190_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_190_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_190_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearManagedActors);


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_190_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_190_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSliceAndDiceMapping(); \
	friend struct Z_Construct_UClass_USliceAndDiceMapping_Statics; \
public: \
	DECLARE_CLASS(USliceAndDiceMapping, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PointCloud"), NO_API) \
	DECLARE_SERIALIZER(USliceAndDiceMapping)


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_190_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USliceAndDiceMapping(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USliceAndDiceMapping(USliceAndDiceMapping&&); \
	NO_API USliceAndDiceMapping(const USliceAndDiceMapping&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USliceAndDiceMapping); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USliceAndDiceMapping); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USliceAndDiceMapping) \
	NO_API virtual ~USliceAndDiceMapping();


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_187_PROLOG
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_190_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_190_SPARSE_DATA \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_190_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_190_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_190_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_190_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_190_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_190_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POINTCLOUD_API UClass* StaticClass<class USliceAndDiceMapping>();

#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_244_SPARSE_DATA
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_244_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_244_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_244_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLogging); \
	DECLARE_FUNCTION(execReloadPointCloudsOnMappings); \
	DECLARE_FUNCTION(execReloadAllPointClouds); \
	DECLARE_FUNCTION(execRunRulesOnMappings); \
	DECLARE_FUNCTION(execRunRules); \
	DECLARE_FUNCTION(execRunReportOnMappings); \
	DECLARE_FUNCTION(execRunReport); \
	DECLARE_FUNCTION(execMoveMappings); \
	DECLARE_FUNCTION(execMoveMapping); \
	DECLARE_FUNCTION(execRemoveMapping); \
	DECLARE_FUNCTION(execAddNewMapping); \
	DECLARE_FUNCTION(execDeleteManagedActorsFromMapping); \
	DECLARE_FUNCTION(execDeleteManagedActorsFromMappings); \
	DECLARE_FUNCTION(execDeleteAllManagedActors); \
	DECLARE_FUNCTION(execFindMapping); \
	DECLARE_FUNCTION(execFindOrAddMapping); \
	DECLARE_FUNCTION(execGetSliceAndDiceManagers); \
	DECLARE_FUNCTION(execGetSliceAndDiceManagersInLevel); \
	DECLARE_FUNCTION(execNumMappings); \
	DECLARE_FUNCTION(execCreateSliceAndDiceManager);


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_244_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_244_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASliceAndDiceManager(); \
	friend struct Z_Construct_UClass_ASliceAndDiceManager_Statics; \
public: \
	DECLARE_CLASS(ASliceAndDiceManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PointCloud"), NO_API) \
	DECLARE_SERIALIZER(ASliceAndDiceManager)


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_244_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASliceAndDiceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASliceAndDiceManager(ASliceAndDiceManager&&); \
	NO_API ASliceAndDiceManager(const ASliceAndDiceManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASliceAndDiceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASliceAndDiceManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASliceAndDiceManager) \
	NO_API virtual ~ASliceAndDiceManager();


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_241_PROLOG
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_244_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_244_SPARSE_DATA \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_244_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_244_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_244_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_244_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_244_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_244_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POINTCLOUD_API UClass* StaticClass<class ASliceAndDiceManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
