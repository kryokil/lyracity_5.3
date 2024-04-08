// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rules/DebugBuildRule.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POINTCLOUDEDITOR_DebugBuildRule_generated_h
#error "DebugBuildRule.generated.h already included, missing '#pragma once' in DebugBuildRule.h"
#endif
#define POINTCLOUDEDITOR_DebugBuildRule_generated_h

#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics; \
	POINTCLOUDEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FPointCloudRuleData Super;


template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<struct FDebugBuildRuleData>();

#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_46_SPARSE_DATA
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_46_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_46_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_46_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_46_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDebugBuildRule(); \
	friend struct Z_Construct_UClass_UDebugBuildRule_Statics; \
public: \
	DECLARE_CLASS(UDebugBuildRule, UPointCloudRule, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(UDebugBuildRule)


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDebugBuildRule(UDebugBuildRule&&); \
	NO_API UDebugBuildRule(const UDebugBuildRule&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDebugBuildRule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDebugBuildRule); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDebugBuildRule) \
	NO_API virtual ~UDebugBuildRule();


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_43_PROLOG
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_46_SPARSE_DATA \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_46_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_46_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_46_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_46_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POINTCLOUDEDITOR_API UClass* StaticClass<class UDebugBuildRule>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h


#define FOREACH_ENUM_EDEBUGBUILDRULEMESH(op) \
	op(EDebugBuildRuleMesh::DebugBuildRuleMesh_Sphere) \
	op(EDebugBuildRuleMesh::DebugBuildRuleMesh_Cube) \
	op(EDebugBuildRuleMesh::DebugBuildRuleMesh_Axis) 

enum class EDebugBuildRuleMesh : uint8;
template<> struct TIsUEnumClass<EDebugBuildRuleMesh> { enum { Value = true }; };
template<> POINTCLOUDEDITOR_API UEnum* StaticEnum<EDebugBuildRuleMesh>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
