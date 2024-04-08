// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Anim/CitySampleAnimNode_RequestInertialization.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CITYSAMPLE_CitySampleAnimNode_RequestInertialization_generated_h
#error "CitySampleAnimNode_RequestInertialization.generated.h already included, missing '#pragma once' in CitySampleAnimNode_RequestInertialization.h"
#endif
#define CITYSAMPLE_CitySampleAnimNode_RequestInertialization_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimNode_RequestInertialization_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


template<> CITYSAMPLE_API UScriptStruct* StaticStruct<struct FCitySampleAnimNode_RequestInertialization>();

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimNode_RequestInertialization_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


template<> CITYSAMPLE_API UScriptStruct* StaticStruct<struct FCitySampleAnimNode_RequestInertializationOnAssetChange>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimNode_RequestInertialization_h


#define FOREACH_ENUM_EREQUESTINERTIALIZATIONCONDITION(op) \
	op(ERequestInertializationCondition::OnTrue) \
	op(ERequestInertializationCondition::OnChange) 

enum class ERequestInertializationCondition : uint8;
template<> struct TIsUEnumClass<ERequestInertializationCondition> { enum { Value = true }; };
template<> CITYSAMPLE_API UEnum* StaticEnum<ERequestInertializationCondition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
