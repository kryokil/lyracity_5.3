// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/CitySampleInteractorInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class UCitySampleInteractionComponent;
#ifdef CITYSAMPLE_CitySampleInteractorInterface_generated_h
#error "CitySampleInteractorInterface.generated.h already included, missing '#pragma once' in CitySampleInteractorInterface.h"
#endif
#define CITYSAMPLE_CitySampleInteractorInterface_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractorInterface_h_13_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractorInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractorInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractorInterface_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsInteracting); \
	DECLARE_FUNCTION(execIsInteractingWith); \
	DECLARE_FUNCTION(execTryToInteract); \
	DECLARE_FUNCTION(execGetInteractingPawn); \
	DECLARE_FUNCTION(execAbortInteraction); \
	DECLARE_FUNCTION(execFinishInteraction);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractorInterface_h_13_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractorInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCitySampleInteractorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCitySampleInteractorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleInteractorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleInteractorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleInteractorInterface(UCitySampleInteractorInterface&&); \
	NO_API UCitySampleInteractorInterface(const UCitySampleInteractorInterface&); \
public: \
	NO_API virtual ~UCitySampleInteractorInterface();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractorInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCitySampleInteractorInterface(); \
	friend struct Z_Construct_UClass_UCitySampleInteractorInterface_Statics; \
public: \
	DECLARE_CLASS(UCitySampleInteractorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleInteractorInterface)


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractorInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractorInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractorInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractorInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ICitySampleInteractorInterface() {} \
public: \
	typedef UCitySampleInteractorInterface UClassType; \
	typedef ICitySampleInteractorInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractorInterface_h_10_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractorInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractorInterface_h_13_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractorInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractorInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractorInterface_h_13_RPC_WRAPPERS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractorInterface_h_13_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractorInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UCitySampleInteractorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
