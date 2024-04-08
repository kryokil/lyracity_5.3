// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rules/SpawnNiagaraRule.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POINTCLOUDEDITOR_SpawnNiagaraRule_generated_h
#error "SpawnNiagaraRule.generated.h already included, missing '#pragma once' in SpawnNiagaraRule.h"
#endif
#define POINTCLOUDEDITOR_SpawnNiagaraRule_generated_h

#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics; \
	POINTCLOUDEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FPointCloudRuleData Super;


template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<struct FSpawnNiagaraRuleData>();

#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_63_SPARSE_DATA
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_63_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_63_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_63_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_63_ACCESSORS
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpawnNiagaraRule(); \
	friend struct Z_Construct_UClass_USpawnNiagaraRule_Statics; \
public: \
	DECLARE_CLASS(USpawnNiagaraRule, UPointCloudRule, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(USpawnNiagaraRule)


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_63_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpawnNiagaraRule(USpawnNiagaraRule&&); \
	NO_API USpawnNiagaraRule(const USpawnNiagaraRule&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpawnNiagaraRule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpawnNiagaraRule); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpawnNiagaraRule) \
	NO_API virtual ~USpawnNiagaraRule();


#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_60_PROLOG
#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_63_SPARSE_DATA \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_63_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_63_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_63_ACCESSORS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_63_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POINTCLOUDEDITOR_API UClass* StaticClass<class USpawnNiagaraRule>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h


#define FOREACH_ENUM_ENIAGARASPAWNMODE(op) \
	op(ENiagaraSpawnMode::Random) \
	op(ENiagaraSpawnMode::Data) 

enum class ENiagaraSpawnMode : uint8;
template<> struct TIsUEnumClass<ENiagaraSpawnMode> { enum { Value = true }; };
template<> POINTCLOUDEDITOR_API UEnum* StaticEnum<ENiagaraSpawnMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
