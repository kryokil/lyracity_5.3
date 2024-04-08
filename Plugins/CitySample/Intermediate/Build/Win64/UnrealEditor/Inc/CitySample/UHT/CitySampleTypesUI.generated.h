// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/CitySampleTypesUI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CITYSAMPLE_CitySampleTypesUI_generated_h
#error "CitySampleTypesUI.generated.h already included, missing '#pragma once' in CitySampleTypesUI.h"
#endif
#define CITYSAMPLE_CitySampleTypesUI_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleTypesUI_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics; \
	CITYSAMPLE_API static class UScriptStruct* StaticStruct();


template<> CITYSAMPLE_API UScriptStruct* StaticStruct<struct FCitySampleTextConfig>();

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleTypesUI_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics; \
	CITYSAMPLE_API static class UScriptStruct* StaticStruct();


template<> CITYSAMPLE_API UScriptStruct* StaticStruct<struct FCitySampleImageConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleTypesUI_h


#define FOREACH_ENUM_ECITYSAMPLECONTROLSFLAVOR(op) \
	op(ECitySampleControlsFlavor::Keyboard) \
	op(ECitySampleControlsFlavor::Gamepad) 

enum class ECitySampleControlsFlavor : uint8;
template<> struct TIsUEnumClass<ECitySampleControlsFlavor> { enum { Value = true }; };
template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySampleControlsFlavor>();

#define FOREACH_ENUM_ECITYSAMPLEPROMPTTEXTTYPE(op) \
	op(ECitySamplePromptTextType::Center) \
	op(ECitySamplePromptTextType::Top) \
	op(ECitySamplePromptTextType::Left) \
	op(ECitySamplePromptTextType::Right) \
	op(ECitySamplePromptTextType::Bottom) 

enum class ECitySamplePromptTextType : uint8;
template<> struct TIsUEnumClass<ECitySamplePromptTextType> { enum { Value = true }; };
template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySamplePromptTextType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
