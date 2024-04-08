// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/ICitySampleTraversalInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPlayerTraversalState : uint8;
#ifdef CITYSAMPLE_ICitySampleTraversalInterface_generated_h
#error "ICitySampleTraversalInterface.generated.h already included, missing '#pragma once' in ICitySampleTraversalInterface.h"
#endif
#define CITYSAMPLE_ICitySampleTraversalInterface_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_12_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_12_RPC_WRAPPERS \
	virtual EPlayerTraversalState GetTraversalState_Implementation() const { return (EPlayerTraversalState)0; }; \
 \
	DECLARE_FUNCTION(execGetTraversalState);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_12_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_12_CALLBACK_WRAPPERS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCitySampleTraversalInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCitySampleTraversalInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleTraversalInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleTraversalInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleTraversalInterface(UCitySampleTraversalInterface&&); \
	NO_API UCitySampleTraversalInterface(const UCitySampleTraversalInterface&); \
public: \
	NO_API virtual ~UCitySampleTraversalInterface();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCitySampleTraversalInterface(); \
	friend struct Z_Construct_UClass_UCitySampleTraversalInterface_Statics; \
public: \
	DECLARE_CLASS(UCitySampleTraversalInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleTraversalInterface)


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~ICitySampleTraversalInterface() {} \
public: \
	typedef UCitySampleTraversalInterface UClassType; \
	typedef ICitySampleTraversalInterface ThisClass; \
	static EPlayerTraversalState Execute_GetTraversalState(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_9_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_12_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_12_RPC_WRAPPERS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_12_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_12_CALLBACK_WRAPPERS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UCitySampleTraversalInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
