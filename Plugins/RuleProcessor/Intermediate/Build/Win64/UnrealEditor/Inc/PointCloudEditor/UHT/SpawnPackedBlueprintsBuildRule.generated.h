// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rules/SpawnPackedBlueprintsBuildRule.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POINTCLOUDEDITOR_SpawnPackedBlueprintsBuildRule_generated_h
#error "SpawnPackedBlueprintsBuildRule.generated.h already included, missing '#pragma once' in SpawnPackedBlueprintsBuildRule.h"
#endif
#define POINTCLOUDEDITOR_SpawnPackedBlueprintsBuildRule_generated_h

#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics; \
	POINTCLOUDEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FPointCloudRuleData Super;


template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<struct FSpawnPackedBlueprintsBuildRuleData>();

#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_50_SPARSE_DATA
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_50_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_50_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_50_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_50_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpawnPackedBlueprintsBuildRule(); \
	friend struct Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics; \
public: \
	DECLARE_CLASS(USpawnPackedBlueprintsBuildRule, UPointCloudRule, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(USpawnPackedBlueprintsBuildRule)


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpawnPackedBlueprintsBuildRule(USpawnPackedBlueprintsBuildRule&&); \
	NO_API USpawnPackedBlueprintsBuildRule(const USpawnPackedBlueprintsBuildRule&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpawnPackedBlueprintsBuildRule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpawnPackedBlueprintsBuildRule); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpawnPackedBlueprintsBuildRule) \
	NO_API virtual ~USpawnPackedBlueprintsBuildRule();


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_47_PROLOG
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_50_SPARSE_DATA \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_50_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_50_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_50_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_50_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POINTCLOUDEDITOR_API UClass* StaticClass<class USpawnPackedBlueprintsBuildRule>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h


#define FOREACH_ENUM_EPOINTCLOUDLEVELINSTANCETYPE(op) \
	op(EPointCloudLevelInstanceType::LevelInstance) \
	op(EPointCloudLevelInstanceType::PackedLevelInstance) \
	op(EPointCloudLevelInstanceType::PackedLevelInstanceBlueprint) 

enum class EPointCloudLevelInstanceType : uint8;
template<> struct TIsUEnumClass<EPointCloudLevelInstanceType> { enum { Value = true }; };
template<> POINTCLOUDEDITOR_API UEnum* StaticEnum<EPointCloudLevelInstanceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
