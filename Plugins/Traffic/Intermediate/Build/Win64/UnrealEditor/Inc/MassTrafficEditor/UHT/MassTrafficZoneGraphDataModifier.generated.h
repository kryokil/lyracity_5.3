// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficZoneGraphDataModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSTRAFFICEDITOR_MassTrafficZoneGraphDataModifier_generated_h
#error "MassTrafficZoneGraphDataModifier.generated.h already included, missing '#pragma once' in MassTrafficZoneGraphDataModifier.h"
#endif
#define MASSTRAFFICEDITOR_MassTrafficZoneGraphDataModifier_generated_h

#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_23_SPARSE_DATA
#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUntagCrosswalkLanesNearFreewayLaneEndPoints); \
	DECLARE_FUNCTION(execSnapZoneGraphDataToGround); \
	DECLARE_FUNCTION(execBuildZoneGraphData);


#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_23_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMassTrafficZoneGraphDataModifier(); \
	friend struct Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics; \
public: \
	DECLARE_CLASS(AMassTrafficZoneGraphDataModifier, AEditorUtilityActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassTrafficEditor"), NO_API) \
	DECLARE_SERIALIZER(AMassTrafficZoneGraphDataModifier)


#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMassTrafficZoneGraphDataModifier(AMassTrafficZoneGraphDataModifier&&); \
	NO_API AMassTrafficZoneGraphDataModifier(const AMassTrafficZoneGraphDataModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMassTrafficZoneGraphDataModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMassTrafficZoneGraphDataModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMassTrafficZoneGraphDataModifier) \
	NO_API virtual ~AMassTrafficZoneGraphDataModifier();


#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_20_PROLOG
#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_23_SPARSE_DATA \
	FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_23_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_23_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSTRAFFICEDITOR_API UClass* StaticClass<class AMassTrafficZoneGraphDataModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h


#define FOREACH_ENUM_EMASSTRAFFICZONEGRAPHMODIFIERTRACETYPE(op) \
	op(EMassTrafficZoneGraphModifierTraceType::Line) \
	op(EMassTrafficZoneGraphModifierTraceType::Sphere) 

enum class EMassTrafficZoneGraphModifierTraceType : uint8;
template<> struct TIsUEnumClass<EMassTrafficZoneGraphModifierTraceType> { enum { Value = true }; };
template<> MASSTRAFFICEDITOR_API UEnum* StaticEnum<EMassTrafficZoneGraphModifierTraceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
