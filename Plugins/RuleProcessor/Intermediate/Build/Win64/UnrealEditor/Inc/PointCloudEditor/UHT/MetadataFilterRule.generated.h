// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rules/MetadataFilterRule.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POINTCLOUDEDITOR_MetadataFilterRule_generated_h
#error "MetadataFilterRule.generated.h already included, missing '#pragma once' in MetadataFilterRule.h"
#endif
#define POINTCLOUDEDITOR_MetadataFilterRule_generated_h

#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics; \
	POINTCLOUDEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FPointCloudRuleData Super;


template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<struct FMetadataFilterRuleData>();

#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_51_SPARSE_DATA
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_51_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_51_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_51_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_51_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_51_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMetadataFilterRule, NO_API)


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetadataFilterRule(); \
	friend struct Z_Construct_UClass_UMetadataFilterRule_Statics; \
public: \
	DECLARE_CLASS(UMetadataFilterRule, UPointCloudRule, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(UMetadataFilterRule) \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_51_ARCHIVESERIALIZER


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMetadataFilterRule(UMetadataFilterRule&&); \
	NO_API UMetadataFilterRule(const UMetadataFilterRule&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetadataFilterRule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetadataFilterRule); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetadataFilterRule) \
	NO_API virtual ~UMetadataFilterRule();


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_48_PROLOG
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_51_SPARSE_DATA \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_51_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_51_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_51_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_51_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POINTCLOUDEDITOR_API UClass* StaticClass<class UMetadataFilterRule>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h


#define FOREACH_ENUM_EPOINTCLOUDMETADATAFILTERTYPE(op) \
	op(EPointCloudMetadataFilterType::Value) \
	op(EPointCloudMetadataFilterType::Pattern) 

enum class EPointCloudMetadataFilterType;
template<> struct TIsUEnumClass<EPointCloudMetadataFilterType> { enum { Value = true }; };
template<> POINTCLOUDEDITOR_API UEnum* StaticEnum<EPointCloudMetadataFilterType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
