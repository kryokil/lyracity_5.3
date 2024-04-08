// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/CitySamplePlayerCameraManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UCitySampleCameraMode;
enum class EDebugCameraStyle : uint8;
#ifdef CITYSAMPLE_CitySamplePlayerCameraManager_generated_h
#error "CitySamplePlayerCameraManager.generated.h already included, missing '#pragma once' in CitySamplePlayerCameraManager.h"
#endif
#define CITYSAMPLE_CitySamplePlayerCameraManager_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActiveCitySampleCamera_Statics; \
	CITYSAMPLE_API static class UScriptStruct* StaticStruct();


template<> CITYSAMPLE_API UScriptStruct* StaticStruct<struct FActiveCitySampleCamera>();

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCitySampleCameraModeInstance_Statics; \
	CITYSAMPLE_API static class UScriptStruct* StaticStruct();


template<> CITYSAMPLE_API UScriptStruct* StaticStruct<struct FCitySampleCameraModeInstance>();

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_100_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_100_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_100_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCameraClassForCharacter); \
	DECLARE_FUNCTION(execIsUsingAlternateCamera); \
	DECLARE_FUNCTION(execClearAlternateCamera); \
	DECLARE_FUNCTION(execSetUsingAlternateCamera); \
	DECLARE_FUNCTION(execConfigureAlternateCamera); \
	DECLARE_FUNCTION(execResetViewPitchLimits); \
	DECLARE_FUNCTION(execSetViewPitchLimits); \
	DECLARE_FUNCTION(execSetDebugCameraStyle); \
	DECLARE_FUNCTION(execGetCurrentCameraMode);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_100_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_100_CALLBACK_WRAPPERS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACitySamplePlayerCameraManager(); \
	friend struct Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics; \
public: \
	DECLARE_CLASS(ACitySamplePlayerCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(ACitySamplePlayerCameraManager)


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_100_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACitySamplePlayerCameraManager(ACitySamplePlayerCameraManager&&); \
	NO_API ACitySamplePlayerCameraManager(const ACitySamplePlayerCameraManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACitySamplePlayerCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACitySamplePlayerCameraManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACitySamplePlayerCameraManager) \
	NO_API virtual ~ACitySamplePlayerCameraManager();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_97_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_100_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_100_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_100_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_100_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_100_CALLBACK_WRAPPERS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_100_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class ACitySamplePlayerCameraManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h


#define FOREACH_ENUM_EDEBUGCAMERASTYLE(op) \
	op(EDebugCameraStyle::None) \
	op(EDebugCameraStyle::Fixed) \
	op(EDebugCameraStyle::ThirdPerson) \
	op(EDebugCameraStyle::FreeCam) \
	op(EDebugCameraStyle::FreeCam_Default) \
	op(EDebugCameraStyle::FirstPerson) 

enum class EDebugCameraStyle : uint8;
template<> struct TIsUEnumClass<EDebugCameraStyle> { enum { Value = true }; };
template<> CITYSAMPLE_API UEnum* StaticEnum<EDebugCameraStyle>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
