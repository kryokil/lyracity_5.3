// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Util/CitySampleBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACitySampleCharacter;
class ACitySampleGameMode;
class ACitySampleGameState;
class ACitySamplePlayerController;
class ACitySampleWorldInfo;
class UObject;
enum class EDeviceProfileOverrideMode : uint8;
enum class EPlayerTraversalState : uint8;
struct FAccelerationInterpolatorFloat;
struct FAccelerationInterpolatorRotator;
struct FAccelerationInterpolatorVector;
struct FDoubleIIRInterpolatorVector;
struct FIIRInterpolatorFloat;
struct FIIRInterpolatorRotator;
struct FIIRInterpolatorVector;
struct FZoneGraphTag;
#ifdef CITYSAMPLE_CitySampleBlueprintLibrary_generated_h
#error "CitySampleBlueprintLibrary.generated.h already included, missing '#pragma once' in CitySampleBlueprintLibrary.h"
#endif
#define CITYSAMPLE_CitySampleBlueprintLibrary_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleBlueprintLibrary_h_28_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleBlueprintLibrary_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleBlueprintLibrary_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleBlueprintLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEvalDoubleIIRInterpolatorRotator); \
	DECLARE_FUNCTION(execEvalDoubleIIRInterpolatorVector); \
	DECLARE_FUNCTION(execEvaIIRInterpolatorRotator); \
	DECLARE_FUNCTION(execEvalIIRInterpolatorVector); \
	DECLARE_FUNCTION(execEvalIIRInterpolatorFloat); \
	DECLARE_FUNCTION(execEvalAccelInterpolatorRotator); \
	DECLARE_FUNCTION(execEvalAccelInterpolatorVector); \
	DECLARE_FUNCTION(execEvalAccelInterpolatorFloat); \
	DECLARE_FUNCTION(execFindNearestLaneLocationByTags); \
	DECLARE_FUNCTION(execFindNearestLaneLocationByNames); \
	DECLARE_FUNCTION(execFindNearestLaneLocationByTag); \
	DECLARE_FUNCTION(execFindNearestLaneLocationByName); \
	DECLARE_FUNCTION(execIsMassVisualizationEnabled); \
	DECLARE_FUNCTION(execGetWorldInfo); \
	DECLARE_FUNCTION(execIsPlayerOfTraversalType); \
	DECLARE_FUNCTION(execGetCitySampleGameState); \
	DECLARE_FUNCTION(execGetCitySampleGameMode); \
	DECLARE_FUNCTION(execGetCitySamplePlayerCharacter); \
	DECLARE_FUNCTION(execGetCitySamplePlayerController); \
	DECLARE_FUNCTION(execApplyDefaultLoadingSettings); \
	DECLARE_FUNCTION(execRestoreDefaultDeviceProfile); \
	DECLARE_FUNCTION(execOverrideDeviceProfileForMode); \
	DECLARE_FUNCTION(execGetBaseDeviceProfileName); \
	DECLARE_FUNCTION(execGetActiveDeviceProfileName); \
	DECLARE_FUNCTION(execLogCSVEvent); \
	DECLARE_FUNCTION(execLogCitySampleDebugMessage); \
	DECLARE_FUNCTION(execGetVersionString);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleBlueprintLibrary_h_28_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleBlueprintLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCitySampleBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UCitySampleBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UCitySampleBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleBlueprintLibrary)


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleBlueprintLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCitySampleBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleBlueprintLibrary(UCitySampleBlueprintLibrary&&); \
	NO_API UCitySampleBlueprintLibrary(const UCitySampleBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCitySampleBlueprintLibrary) \
	NO_API virtual ~UCitySampleBlueprintLibrary();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleBlueprintLibrary_h_25_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleBlueprintLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleBlueprintLibrary_h_28_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleBlueprintLibrary_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleBlueprintLibrary_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleBlueprintLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleBlueprintLibrary_h_28_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleBlueprintLibrary_h_28_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleBlueprintLibrary_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UCitySampleBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
