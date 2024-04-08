// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CrossfaderSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMixStateBank;
class UObject;
struct FGameplayTag;
#ifdef CROSSFADER_CrossfaderSubsystem_generated_h
#error "CrossfaderSubsystem.generated.h already included, missing '#pragma once' in CrossfaderSubsystem.h"
#endif
#define CROSSFADER_CrossfaderSubsystem_generated_h

#define FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_22_SPARSE_DATA
#define FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_22_RPC_WRAPPERS
#define FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_22_ACCESSORS
#define FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUCrossfaderSettings(); \
	friend struct Z_Construct_UClass_UCrossfaderSettings_Statics; \
public: \
	DECLARE_CLASS(UCrossfaderSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Crossfader"), NO_API) \
	DECLARE_SERIALIZER(UCrossfaderSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrossfaderSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrossfaderSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrossfaderSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrossfaderSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrossfaderSettings(UCrossfaderSettings&&); \
	NO_API UCrossfaderSettings(const UCrossfaderSettings&); \
public: \
	NO_API virtual ~UCrossfaderSettings();


#define FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_19_PROLOG
#define FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_22_SPARSE_DATA \
	FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_22_RPC_WRAPPERS \
	FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_22_ACCESSORS \
	FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_22_INCLASS \
	FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSFADER_API UClass* StaticClass<class UCrossfaderSettings>();

#define FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCrossfaderMixBusStatePair_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CROSSFADER_API UScriptStruct* StaticStruct<struct FCrossfaderMixBusStatePair>();

#define FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_82_SPARSE_DATA
#define FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_82_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_82_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearMixState); \
	DECLARE_FUNCTION(execSetMixState); \
	DECLARE_FUNCTION(execRemoveBank); \
	DECLARE_FUNCTION(execAddBank);


#define FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_82_ACCESSORS
#define FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCrossfaderSubsystem(); \
	friend struct Z_Construct_UClass_UCrossfaderSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCrossfaderSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Crossfader"), NO_API) \
	DECLARE_SERIALIZER(UCrossfaderSubsystem)


#define FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrossfaderSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrossfaderSubsystem(UCrossfaderSubsystem&&); \
	NO_API UCrossfaderSubsystem(const UCrossfaderSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrossfaderSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrossfaderSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCrossfaderSubsystem) \
	NO_API virtual ~UCrossfaderSubsystem();


#define FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_79_PROLOG
#define FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_82_SPARSE_DATA \
	FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_82_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_82_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_82_ACCESSORS \
	FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_82_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSFADER_API UClass* StaticClass<class UCrossfaderSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
