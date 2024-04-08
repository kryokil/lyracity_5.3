// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/CitySampleOptionSelector.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCitySampleOptionSelector;
#ifdef CITYSAMPLE_CitySampleOptionSelector_generated_h
#error "CitySampleOptionSelector.generated.h already included, missing '#pragma once' in CitySampleOptionSelector.h"
#endif
#define CITYSAMPLE_CitySampleOptionSelector_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionSelector_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics; \
	CITYSAMPLE_API static class UScriptStruct* StaticStruct();


template<> CITYSAMPLE_API UScriptStruct* StaticStruct<struct FCitySampleOptionsNumericRangeCustomization>();

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionSelector_h_50_DELEGATE \
CITYSAMPLE_API void FCitySampleOptionSelectorOnValueChanged_DelegateWrapper(const FMulticastScriptDelegate& CitySampleOptionSelectorOnValueChanged, const UCitySampleOptionSelector* OptionSelector, const int32 Index, FText const& ValueLabel);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionSelector_h_51_DELEGATE \
CITYSAMPLE_API void FCitySampleOptionSelectorOnValueChangedBool_DelegateWrapper(const FMulticastScriptDelegate& CitySampleOptionSelectorOnValueChangedBool, const UCitySampleOptionSelector* OptionSelector, bool bValue, FText const& ValueLabel);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionSelector_h_52_DELEGATE \
CITYSAMPLE_API void FCitySampleOptionSelectorOnValueChangedNumeric_DelegateWrapper(const FMulticastScriptDelegate& CitySampleOptionSelectorOnValueChangedNumeric, const UCitySampleOptionSelector* OptionSelector, const float Value, FText const& ValueLabel);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionSelector_h_62_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionSelector_h_62_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionSelector_h_62_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionSelector_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCustomLabels); \
	DECLARE_FUNCTION(execGetValueLabel); \
	DECLARE_FUNCTION(execGetValueCount); \
	DECLARE_FUNCTION(execIndexOfNumeric); \
	DECLARE_FUNCTION(execGetValueIndex); \
	DECLARE_FUNCTION(execGetValueNumeric); \
	DECLARE_FUNCTION(execGetValueBool); \
	DECLARE_FUNCTION(execResetOptionSelector); \
	DECLARE_FUNCTION(execDecrementValue); \
	DECLARE_FUNCTION(execIncrementValue); \
	DECLARE_FUNCTION(execSetValueNumeric); \
	DECLARE_FUNCTION(execSetValueClamped); \
	DECLARE_FUNCTION(execSetValueChecked); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execInitOptionSelectorCustom); \
	DECLARE_FUNCTION(execInitOptionSelectorNumeric); \
	DECLARE_FUNCTION(execInitOptionSelectorBool);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionSelector_h_62_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionSelector_h_62_CALLBACK_WRAPPERS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionSelector_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCitySampleOptionSelector(); \
	friend struct Z_Construct_UClass_UCitySampleOptionSelector_Statics; \
public: \
	DECLARE_CLASS(UCitySampleOptionSelector, UCitySampleButtonPrompt, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleOptionSelector)


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionSelector_h_62_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleOptionSelector(UCitySampleOptionSelector&&); \
	NO_API UCitySampleOptionSelector(const UCitySampleOptionSelector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleOptionSelector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleOptionSelector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCitySampleOptionSelector) \
	NO_API virtual ~UCitySampleOptionSelector();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionSelector_h_59_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionSelector_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionSelector_h_62_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionSelector_h_62_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionSelector_h_62_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionSelector_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionSelector_h_62_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionSelector_h_62_CALLBACK_WRAPPERS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionSelector_h_62_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionSelector_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UCitySampleOptionSelector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionSelector_h


#define FOREACH_ENUM_ECITYSAMPLEOPTIONSELECTORTYPE(op) \
	op(ECitySampleOptionSelectorType::Boolean) \
	op(ECitySampleOptionSelectorType::Numeric) \
	op(ECitySampleOptionSelectorType::Custom) 

enum class ECitySampleOptionSelectorType : uint8;
template<> struct TIsUEnumClass<ECitySampleOptionSelectorType> { enum { Value = true }; };
template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySampleOptionSelectorType>();

#define FOREACH_ENUM_ECITYSAMPLEOPTIONSELECTORNUMERICTYPE(op) \
	op(ECitySampleOptionSelectorNumericType::Float) \
	op(ECitySampleOptionSelectorNumericType::Percent) \
	op(ECitySampleOptionSelectorNumericType::Integer) 

enum class ECitySampleOptionSelectorNumericType : uint8;
template<> struct TIsUEnumClass<ECitySampleOptionSelectorNumericType> { enum { Value = true }; };
template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySampleOptionSelectorNumericType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
