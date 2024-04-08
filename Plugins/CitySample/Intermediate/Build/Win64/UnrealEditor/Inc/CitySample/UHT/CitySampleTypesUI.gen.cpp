// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/UI/CitySampleTypesUI.h"
#include "Fonts/SlateFontInfo.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleTypesUI() {}
// Cross Module References
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySamplePromptTextType();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleImageConfig();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleTextConfig();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECitySampleControlsFlavor;
	static UEnum* ECitySampleControlsFlavor_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECitySampleControlsFlavor.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECitySampleControlsFlavor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("ECitySampleControlsFlavor"));
		}
		return Z_Registration_Info_UEnum_ECitySampleControlsFlavor.OuterSingleton;
	}
	template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySampleControlsFlavor>()
	{
		return ECitySampleControlsFlavor_StaticEnum();
	}
	struct Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor_Statics::Enumerators[] = {
		{ "ECitySampleControlsFlavor::Keyboard", (int64)ECitySampleControlsFlavor::Keyboard },
		{ "ECitySampleControlsFlavor::Gamepad", (int64)ECitySampleControlsFlavor::Gamepad },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Gamepad.Name", "ECitySampleControlsFlavor::Gamepad" },
		{ "Keyboard.Name", "ECitySampleControlsFlavor::Keyboard" },
		{ "ModuleRelativePath", "Public/UI/CitySampleTypesUI.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		"ECitySampleControlsFlavor",
		"ECitySampleControlsFlavor",
		Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor()
	{
		if (!Z_Registration_Info_UEnum_ECitySampleControlsFlavor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECitySampleControlsFlavor.InnerSingleton, Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECitySampleControlsFlavor.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECitySamplePromptTextType;
	static UEnum* ECitySamplePromptTextType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECitySamplePromptTextType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECitySamplePromptTextType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ECitySamplePromptTextType, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("ECitySamplePromptTextType"));
		}
		return Z_Registration_Info_UEnum_ECitySamplePromptTextType.OuterSingleton;
	}
	template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySamplePromptTextType>()
	{
		return ECitySamplePromptTextType_StaticEnum();
	}
	struct Z_Construct_UEnum_CitySample_ECitySamplePromptTextType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CitySample_ECitySamplePromptTextType_Statics::Enumerators[] = {
		{ "ECitySamplePromptTextType::Center", (int64)ECitySamplePromptTextType::Center },
		{ "ECitySamplePromptTextType::Top", (int64)ECitySamplePromptTextType::Top },
		{ "ECitySamplePromptTextType::Left", (int64)ECitySamplePromptTextType::Left },
		{ "ECitySamplePromptTextType::Right", (int64)ECitySamplePromptTextType::Right },
		{ "ECitySamplePromptTextType::Bottom", (int64)ECitySamplePromptTextType::Bottom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CitySample_ECitySamplePromptTextType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bottom.Name", "ECitySamplePromptTextType::Bottom" },
		{ "Center.Name", "ECitySamplePromptTextType::Center" },
		{ "Left.Name", "ECitySamplePromptTextType::Left" },
		{ "ModuleRelativePath", "Public/UI/CitySampleTypesUI.h" },
		{ "Right.Name", "ECitySamplePromptTextType::Right" },
		{ "Top.Name", "ECitySamplePromptTextType::Top" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ECitySamplePromptTextType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		"ECitySamplePromptTextType",
		"ECitySamplePromptTextType",
		Z_Construct_UEnum_CitySample_ECitySamplePromptTextType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySamplePromptTextType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySamplePromptTextType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_ECitySamplePromptTextType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CitySample_ECitySamplePromptTextType()
	{
		if (!Z_Registration_Info_UEnum_ECitySamplePromptTextType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECitySamplePromptTextType.InnerSingleton, Z_Construct_UEnum_CitySample_ECitySamplePromptTextType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECitySamplePromptTextType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleTextConfig;
class UScriptStruct* FCitySampleTextConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleTextConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleTextConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleTextConfig, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySampleTextConfig"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleTextConfig.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySampleTextConfig>()
{
	return FCitySampleTextConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCollapseWhenEmpty_MetaData[];
#endif
		static void NewProp_bCollapseWhenEmpty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollapseWhenEmpty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleTypesUI.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleTextConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "CitySampleTextConfig" },
		{ "ModuleRelativePath", "Public/UI/CitySampleTypesUI.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleTextConfig, Text), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_Text_MetaData), Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_Text_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "CitySampleTextConfig" },
		{ "ModuleRelativePath", "Public/UI/CitySampleTypesUI.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleTextConfig, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_Font_MetaData), Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_Font_MetaData) }; // 2074891513
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "CitySampleTextConfig" },
		{ "ModuleRelativePath", "Public/UI/CitySampleTypesUI.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleTextConfig, Color), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_Color_MetaData), Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_Color_MetaData) }; // 3485079585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_bCollapseWhenEmpty_MetaData[] = {
		{ "Category", "CitySampleTextConfig" },
		{ "ModuleRelativePath", "Public/UI/CitySampleTypesUI.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_bCollapseWhenEmpty_SetBit(void* Obj)
	{
		((FCitySampleTextConfig*)Obj)->bCollapseWhenEmpty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_bCollapseWhenEmpty = { "bCollapseWhenEmpty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleTextConfig), &Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_bCollapseWhenEmpty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_bCollapseWhenEmpty_MetaData), Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_bCollapseWhenEmpty_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_Font,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_bCollapseWhenEmpty,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"CitySampleTextConfig",
		Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::PropPointers),
		sizeof(FCitySampleTextConfig),
		alignof(FCitySampleTextConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCitySampleTextConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_CitySampleTextConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleTextConfig.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CitySampleTextConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleImageConfig;
class UScriptStruct* FCitySampleImageConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleImageConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleImageConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleImageConfig, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySampleImageConfig"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleImageConfig.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySampleImageConfig>()
{
	return FCitySampleImageConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighlightColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HighlightColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LabelTextConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LabelTextConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleTypesUI.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleImageConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_Brush_MetaData[] = {
		{ "Category", "CitySampleImageConfig" },
		{ "ModuleRelativePath", "Public/UI/CitySampleTypesUI.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleImageConfig, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_Brush_MetaData), Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_Brush_MetaData) }; // 899956612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "CitySampleImageConfig" },
		{ "ModuleRelativePath", "Public/UI/CitySampleTypesUI.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleImageConfig, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_Color_MetaData), Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_Color_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_HighlightColor_MetaData[] = {
		{ "Category", "CitySampleImageConfig" },
		{ "ModuleRelativePath", "Public/UI/CitySampleTypesUI.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_HighlightColor = { "HighlightColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleImageConfig, HighlightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_HighlightColor_MetaData), Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_HighlightColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_LabelTextConfig_MetaData[] = {
		{ "Category", "CitySampleImageConfig" },
		{ "ModuleRelativePath", "Public/UI/CitySampleTypesUI.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_LabelTextConfig = { "LabelTextConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleImageConfig, LabelTextConfig), Z_Construct_UScriptStruct_FCitySampleTextConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_LabelTextConfig_MetaData), Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_LabelTextConfig_MetaData) }; // 1532245966
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_Brush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_HighlightColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_LabelTextConfig,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"CitySampleImageConfig",
		Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::PropPointers),
		sizeof(FCitySampleImageConfig),
		alignof(FCitySampleImageConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCitySampleImageConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_CitySampleImageConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleImageConfig.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CitySampleImageConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleTypesUI_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleTypesUI_h_Statics::EnumInfo[] = {
		{ ECitySampleControlsFlavor_StaticEnum, TEXT("ECitySampleControlsFlavor"), &Z_Registration_Info_UEnum_ECitySampleControlsFlavor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2226154879U) },
		{ ECitySamplePromptTextType_StaticEnum, TEXT("ECitySamplePromptTextType"), &Z_Registration_Info_UEnum_ECitySamplePromptTextType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1613513498U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleTypesUI_h_Statics::ScriptStructInfo[] = {
		{ FCitySampleTextConfig::StaticStruct, Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewStructOps, TEXT("CitySampleTextConfig"), &Z_Registration_Info_UScriptStruct_CitySampleTextConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleTextConfig), 1532245966U) },
		{ FCitySampleImageConfig::StaticStruct, Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewStructOps, TEXT("CitySampleImageConfig"), &Z_Registration_Info_UScriptStruct_CitySampleImageConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleImageConfig), 1898329872U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleTypesUI_h_2760065851(TEXT("/Script/CitySample"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleTypesUI_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleTypesUI_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleTypesUI_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleTypesUI_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
