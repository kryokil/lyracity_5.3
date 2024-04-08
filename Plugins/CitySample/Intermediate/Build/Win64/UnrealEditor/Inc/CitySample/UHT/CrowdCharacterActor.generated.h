// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Crowd/CrowdCharacterActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDataAsset;
class UGroomComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;
enum class ECrowdHairSlots : uint8;
enum class ECrowdMeshSlots : uint8;
struct FCrowdCharacterDefinition;
struct FCrowdOutfitDefinition;
struct FCrowdVisualizationID;
struct FRandomStream;
#ifdef CITYSAMPLE_CrowdCharacterActor_generated_h
#error "CrowdCharacterActor.generated.h already included, missing '#pragma once' in CrowdCharacterActor.h"
#endif
#define CITYSAMPLE_CrowdCharacterActor_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterActor_h_29_DELEGATE \
CITYSAMPLE_API void FCrowdCharacterEvent_DelegateWrapper(const FMulticastScriptDelegate& CrowdCharacterEvent, FCrowdOutfitDefinition CurrentOutfit);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterActor_h_34_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterActor_h_34_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterActor_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterActor_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateOffset); \
	DECLARE_FUNCTION(execGetCurrentAccessoryAnimSet); \
	DECLARE_FUNCTION(execGetCurrentLocomotionAnimSet); \
	DECLARE_FUNCTION(execRandomizeFromStream); \
	DECLARE_FUNCTION(execRandomize); \
	DECLARE_FUNCTION(execSetEnableHair); \
	DECLARE_FUNCTION(execGetAccessoryMeshComponent); \
	DECLARE_FUNCTION(execGetGroomComponentForSlot); \
	DECLARE_FUNCTION(execGetSkeletalMeshComponentForSlot); \
	DECLARE_FUNCTION(execBuildCharacterFromID); \
	DECLARE_FUNCTION(execBuildCharacterFromDefinition); \
	DECLARE_FUNCTION(execBuildCharacter);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterActor_h_34_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterActor_h_34_CALLBACK_WRAPPERS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterActor_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACitySampleCrowdCharacter(); \
	friend struct Z_Construct_UClass_ACitySampleCrowdCharacter_Statics; \
public: \
	DECLARE_CLASS(ACitySampleCrowdCharacter, ACitySampleCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(ACitySampleCrowdCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ACitySampleCrowdCharacter*>(this); }


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterActor_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACitySampleCrowdCharacter(ACitySampleCrowdCharacter&&); \
	NO_API ACitySampleCrowdCharacter(const ACitySampleCrowdCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACitySampleCrowdCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACitySampleCrowdCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACitySampleCrowdCharacter) \
	NO_API virtual ~ACitySampleCrowdCharacter();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterActor_h_31_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterActor_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterActor_h_34_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterActor_h_34_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterActor_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterActor_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterActor_h_34_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterActor_h_34_CALLBACK_WRAPPERS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterActor_h_34_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterActor_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class ACitySampleCrowdCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
