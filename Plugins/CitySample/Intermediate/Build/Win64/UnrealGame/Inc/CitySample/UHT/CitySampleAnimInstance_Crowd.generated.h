// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Anim/CitySampleAnimInstance_Crowd.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMassMovementAction : uint8;
#ifdef CITYSAMPLE_CitySampleAnimInstance_Crowd_generated_h
#error "CitySampleAnimInstance_Crowd.generated.h already included, missing '#pragma once' in CitySampleAnimInstance_Crowd.h"
#endif
#define CITYSAMPLE_CitySampleAnimInstance_Crowd_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_24_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_24_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLinkAccessoryLayer); \
	DECLARE_FUNCTION(execGet_BasePose_MTU); \
	DECLARE_FUNCTION(execGet_BasePose_MTO); \
	DECLARE_FUNCTION(execGet_BasePose_FTO); \
	DECLARE_FUNCTION(execGet_BasePose_FTU); \
	DECLARE_FUNCTION(execGet_BasePose_FTN); \
	DECLARE_FUNCTION(execGet_BasePose_MTN); \
	DECLARE_FUNCTION(execGetGait); \
	DECLARE_FUNCTION(execGetMassMoveState); \
	DECLARE_FUNCTION(execCalculateStride); \
	DECLARE_FUNCTION(execCalculateCycleDirection); \
	DECLARE_FUNCTION(execCalculatePlayRate);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_24_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCitySampleAnimInstance_Crowd(); \
	friend struct Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics; \
public: \
	DECLARE_CLASS(UCitySampleAnimInstance_Crowd, UMassCrowdAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleAnimInstance_Crowd)


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleAnimInstance_Crowd(UCitySampleAnimInstance_Crowd&&); \
	NO_API UCitySampleAnimInstance_Crowd(const UCitySampleAnimInstance_Crowd&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleAnimInstance_Crowd); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleAnimInstance_Crowd); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCitySampleAnimInstance_Crowd) \
	NO_API virtual ~UCitySampleAnimInstance_Crowd();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_21_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_24_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_24_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_24_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_24_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UCitySampleAnimInstance_Crowd>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h


#define FOREACH_ENUM_ECITYSAMPLELOCOMOTIONSTATE(op) \
	op(ECitySampleLocomotionState::Idle) \
	op(ECitySampleLocomotionState::Walk) \
	op(ECitySampleLocomotionState::Jog) \
	op(ECitySampleLocomotionState::Animating) 

enum class ECitySampleLocomotionState : uint8;
template<> struct TIsUEnumClass<ECitySampleLocomotionState> { enum { Value = true }; };
template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySampleLocomotionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
