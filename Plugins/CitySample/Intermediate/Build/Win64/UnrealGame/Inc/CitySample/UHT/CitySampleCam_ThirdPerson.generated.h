// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/CitySampleCam_ThirdPerson.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CITYSAMPLE_CitySampleCam_ThirdPerson_generated_h
#error "CitySampleCam_ThirdPerson.generated.h already included, missing '#pragma once' in CitySampleCam_ThirdPerson.h"
#endif
#define CITYSAMPLE_CitySampleCam_ThirdPerson_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics; \
	CITYSAMPLE_API static class UScriptStruct* StaticStruct();


template<> CITYSAMPLE_API UScriptStruct* StaticStruct<struct FPenetrationAvoidanceRay>();

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h_83_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h_83_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h_83_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h_83_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h_83_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCitySampleCam_ThirdPerson(); \
	friend struct Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics; \
public: \
	DECLARE_CLASS(UCitySampleCam_ThirdPerson, UCitySampleCameraMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleCam_ThirdPerson)


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h_83_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleCam_ThirdPerson(UCitySampleCam_ThirdPerson&&); \
	NO_API UCitySampleCam_ThirdPerson(const UCitySampleCam_ThirdPerson&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleCam_ThirdPerson); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleCam_ThirdPerson); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCitySampleCam_ThirdPerson) \
	NO_API virtual ~UCitySampleCam_ThirdPerson();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h_80_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h_83_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h_83_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h_83_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h_83_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h_83_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UCitySampleCam_ThirdPerson>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h


#define FOREACH_ENUM_ECAMERAAUTOFOLLOWMODE(op) \
	op(ECameraAutoFollowMode::None) \
	op(ECameraAutoFollowMode::LazyFollow) \
	op(ECameraAutoFollowMode::FullFollow) 

enum class ECameraAutoFollowMode : uint8;
template<> struct TIsUEnumClass<ECameraAutoFollowMode> { enum { Value = true }; };
template<> CITYSAMPLE_API UEnum* StaticEnum<ECameraAutoFollowMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
