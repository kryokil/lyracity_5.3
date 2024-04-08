// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/CitySampleCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CITYSAMPLE_CitySampleCharacter_generated_h
#error "CitySampleCharacter.generated.h already included, missing '#pragma once' in CitySampleCharacter.h"
#endif
#define CITYSAMPLE_CitySampleCharacter_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleCharacter_h_24_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleCharacter_h_24_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleCharacter_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsDriving); \
	DECLARE_FUNCTION(execGetDesiredSprintMinInputSize); \
	DECLARE_FUNCTION(execGetDesiredWalkMinInputSize); \
	DECLARE_FUNCTION(execGetDesiredSprintSpeed); \
	DECLARE_FUNCTION(execGetDesiredWalkSpeed); \
	DECLARE_FUNCTION(execSetIsSprinting); \
	DECLARE_FUNCTION(execGetIsSprinting);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleCharacter_h_24_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleCharacter_h_24_CALLBACK_WRAPPERS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACitySampleCharacter(); \
	friend struct Z_Construct_UClass_ACitySampleCharacter_Statics; \
public: \
	DECLARE_CLASS(ACitySampleCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(ACitySampleCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ACitySampleCharacter*>(this); }


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACitySampleCharacter(ACitySampleCharacter&&); \
	NO_API ACitySampleCharacter(const ACitySampleCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACitySampleCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACitySampleCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACitySampleCharacter) \
	NO_API virtual ~ACitySampleCharacter();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleCharacter_h_17_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleCharacter_h_24_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleCharacter_h_24_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleCharacter_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleCharacter_h_24_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleCharacter_h_24_CALLBACK_WRAPPERS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class ACitySampleCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
