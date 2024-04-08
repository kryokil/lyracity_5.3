// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/UI/CitySampleControlsOverlay.h"
#include "CitySample/Public/UI/CitySampleTypesUI.h"
#include "InputCoreTypes.h"
#include "Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleControlsOverlay() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleControlsOverlay();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleControlsOverlay_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySamplePanel();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySamplePromptTextType();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleImageConfig();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleTextConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPlayerInput_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleControlsOverlayButtonConfig;
class UScriptStruct* FCitySampleControlsOverlayButtonConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleControlsOverlayButtonConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleControlsOverlayButtonConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySampleControlsOverlayButtonConfig"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleControlsOverlayButtonConfig.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySampleControlsOverlayButtonConfig>()
{
	return FCitySampleControlsOverlayButtonConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlsFlavorImageConfig_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ControlsFlavorImageConfig_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ControlsFlavorImageConfig_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlsFlavorImageConfig_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ControlsFlavorImageConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PromptConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PromptConfig;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Prompts_ElementProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Prompts_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Prompts_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Prompts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotHorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SlotHorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotVerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SlotVerticalAlignment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleControlsOverlayButtonConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "CitySampleControlsOverlayButtonConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A button class used to create the button widget. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A button class used to create the button widget." },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleControlsOverlayButtonConfig, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_Class_MetaData), Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_Class_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_ControlsFlavorImageConfig_ValueProp = { "ControlsFlavorImageConfig", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCitySampleImageConfig, METADATA_PARAMS(0, nullptr) }; // 1898329872
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_ControlsFlavorImageConfig_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_ControlsFlavorImageConfig_Key_KeyProp = { "ControlsFlavorImageConfig_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor, METADATA_PARAMS(0, nullptr) }; // 2226154879
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_ControlsFlavorImageConfig_MetaData[] = {
		{ "Category", "CitySampleControlsOverlayButtonConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Image configs per controls flavor that should be applied to the button. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Image configs per controls flavor that should be applied to the button." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_ControlsFlavorImageConfig = { "ControlsFlavorImageConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleControlsOverlayButtonConfig, ControlsFlavorImageConfig), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_ControlsFlavorImageConfig_MetaData), Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_ControlsFlavorImageConfig_MetaData) }; // 2226154879 1898329872
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_PromptConfig_MetaData[] = {
		{ "Category", "CitySampleControlsOverlayButtonConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Prompt config that should be applied to the specified prompts. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prompt config that should be applied to the specified prompts." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_PromptConfig = { "PromptConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleControlsOverlayButtonConfig, PromptConfig), Z_Construct_UScriptStruct_FCitySampleTextConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_PromptConfig_MetaData), Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_PromptConfig_MetaData) }; // 1532245966
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_Prompts_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_Prompts_ElementProp = { "Prompts", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CitySample_ECitySamplePromptTextType, METADATA_PARAMS(0, nullptr) }; // 1613513498
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_Prompts_MetaData[] = {
		{ "Category", "CitySampleControlsOverlayButtonConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set of prompts to which the prompt config should be applied. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set of prompts to which the prompt config should be applied." },
#endif
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_Prompts = { "Prompts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleControlsOverlayButtonConfig, Prompts), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_Prompts_MetaData), Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_Prompts_MetaData) }; // 1613513498
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_SlotHorizontalAlignment_MetaData[] = {
		{ "Category", "CitySampleControlsOverlayButtonConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Horizontal alignment type applied to the vertical box slot that contains the button, if applicable. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Horizontal alignment type applied to the vertical box slot that contains the button, if applicable." },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_SlotHorizontalAlignment = { "SlotHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleControlsOverlayButtonConfig, SlotHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_SlotHorizontalAlignment_MetaData), Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_SlotHorizontalAlignment_MetaData) }; // 483256341
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_SlotVerticalAlignment_MetaData[] = {
		{ "Category", "CitySampleControlsOverlayButtonConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vertical alignment type applied to the vertical box slot that contains the button, if applicable. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertical alignment type applied to the vertical box slot that contains the button, if applicable." },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_SlotVerticalAlignment = { "SlotVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleControlsOverlayButtonConfig, SlotVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_SlotVerticalAlignment_MetaData), Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_SlotVerticalAlignment_MetaData) }; // 1653762848
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_ControlsFlavorImageConfig_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_ControlsFlavorImageConfig_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_ControlsFlavorImageConfig_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_ControlsFlavorImageConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_PromptConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_Prompts_ElementProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_Prompts_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_Prompts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_SlotHorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewProp_SlotVerticalAlignment,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"CitySampleControlsOverlayButtonConfig",
		Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::PropPointers),
		sizeof(FCitySampleControlsOverlayButtonConfig),
		alignof(FCitySampleControlsOverlayButtonConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_CitySampleControlsOverlayButtonConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleControlsOverlayButtonConfig.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CitySampleControlsOverlayButtonConfig.InnerSingleton;
	}
	DEFINE_FUNCTION(UCitySampleControlsOverlay::execDismissControlsDisplay)
	{
		P_GET_UBOOL(Z_Param_bDismiss);
		P_GET_UBOOL(Z_Param_bSkipAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DismissControlsDisplay(Z_Param_bDismiss,Z_Param_bSkipAnimation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleControlsOverlay::execToggleControlsDisplay)
	{
		P_GET_UBOOL(Z_Param_bSkipAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ToggleControlsDisplay(Z_Param_bSkipAnimation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleControlsOverlay::execHasControls)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasControls();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleControlsOverlay::execHasKeyboardMouseControls)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasKeyboardMouseControls();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleControlsOverlay::execHasGamepadControls)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasGamepadControls();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleControlsOverlay::execIsShowingControls)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsShowingControls();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleControlsOverlay::execUpdatePressedKeys)
	{
		P_GET_OBJECT(UPlayerInput,Z_Param_PlayerInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePressedKeys(Z_Param_PlayerInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleControlsOverlay::execSetControlsDescription)
	{
		P_GET_TMAP_REF(FKey,FText,Z_Param_Out_ControlsDescription);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlsDescription(Z_Param_Out_ControlsDescription);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleControlsOverlay::execSetControlsDescriptionFor)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlsDescriptionFor(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleControlsOverlay::execSetControlsDirty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlsDirty();
		P_NATIVE_END;
	}
	struct CitySampleControlsOverlay_eventOnButtonControlsFlavorChanged_Parms
	{
		UCitySampleButtonPrompt* ButtonPrompt;
		bool bHasControlsFlavor;
	};
	struct CitySampleControlsOverlay_eventOnControlsDescriptionSet_Parms
	{
		TMap<FKey,FText> ControlsDescription;
	};
	struct CitySampleControlsOverlay_eventOnUpdatePressedKeys_Parms
	{
		const UPlayerInput* PlayerInput;
	};
	struct CitySampleControlsOverlay_eventReceiveDismissControlsDisplay_Parms
	{
		bool bDismiss;
		bool bSkipAnimation;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		CitySampleControlsOverlay_eventReceiveDismissControlsDisplay_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged = FName(TEXT("OnButtonControlsFlavorChanged"));
	void UCitySampleControlsOverlay::OnButtonControlsFlavorChanged(UCitySampleButtonPrompt* ButtonPrompt, bool bHasControlsFlavor)
	{
		CitySampleControlsOverlay_eventOnButtonControlsFlavorChanged_Parms Parms;
		Parms.ButtonPrompt=ButtonPrompt;
		Parms.bHasControlsFlavor=bHasControlsFlavor ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged),&Parms);
	}
	static FName NAME_UCitySampleControlsOverlay_OnControlsDescriptionSet = FName(TEXT("OnControlsDescriptionSet"));
	void UCitySampleControlsOverlay::OnControlsDescriptionSet(TMap<FKey,FText> const& ControlsDescription)
	{
		CitySampleControlsOverlay_eventOnControlsDescriptionSet_Parms Parms;
		Parms.ControlsDescription=ControlsDescription;
		ProcessEvent(FindFunctionChecked(NAME_UCitySampleControlsOverlay_OnControlsDescriptionSet),&Parms);
	}
	static FName NAME_UCitySampleControlsOverlay_OnUpdatePressedKeys = FName(TEXT("OnUpdatePressedKeys"));
	void UCitySampleControlsOverlay::OnUpdatePressedKeys(const UPlayerInput* PlayerInput)
	{
		CitySampleControlsOverlay_eventOnUpdatePressedKeys_Parms Parms;
		Parms.PlayerInput=PlayerInput;
		ProcessEvent(FindFunctionChecked(NAME_UCitySampleControlsOverlay_OnUpdatePressedKeys),&Parms);
	}
	static FName NAME_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay = FName(TEXT("ReceiveDismissControlsDisplay"));
	bool UCitySampleControlsOverlay::ReceiveDismissControlsDisplay(bool bDismiss, bool bSkipAnimation)
	{
		CitySampleControlsOverlay_eventReceiveDismissControlsDisplay_Parms Parms;
		Parms.bDismiss=bDismiss ? true : false;
		Parms.bSkipAnimation=bSkipAnimation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay),&Parms);
		return !!Parms.ReturnValue;
	}
	void UCitySampleControlsOverlay::StaticRegisterNativesUCitySampleControlsOverlay()
	{
		UClass* Class = UCitySampleControlsOverlay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DismissControlsDisplay", &UCitySampleControlsOverlay::execDismissControlsDisplay },
			{ "HasControls", &UCitySampleControlsOverlay::execHasControls },
			{ "HasGamepadControls", &UCitySampleControlsOverlay::execHasGamepadControls },
			{ "HasKeyboardMouseControls", &UCitySampleControlsOverlay::execHasKeyboardMouseControls },
			{ "IsShowingControls", &UCitySampleControlsOverlay::execIsShowingControls },
			{ "SetControlsDescription", &UCitySampleControlsOverlay::execSetControlsDescription },
			{ "SetControlsDescriptionFor", &UCitySampleControlsOverlay::execSetControlsDescriptionFor },
			{ "SetControlsDirty", &UCitySampleControlsOverlay::execSetControlsDirty },
			{ "ToggleControlsDisplay", &UCitySampleControlsOverlay::execToggleControlsDisplay },
			{ "UpdatePressedKeys", &UCitySampleControlsOverlay::execUpdatePressedKeys },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics
	{
		struct CitySampleControlsOverlay_eventDismissControlsDisplay_Parms
		{
			bool bDismiss;
			bool bSkipAnimation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDismiss_MetaData[];
#endif
		static void NewProp_bDismiss_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDismiss;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipAnimation_MetaData[];
#endif
		static void NewProp_bSkipAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipAnimation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::NewProp_bDismiss_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::NewProp_bDismiss_SetBit(void* Obj)
	{
		((CitySampleControlsOverlay_eventDismissControlsDisplay_Parms*)Obj)->bDismiss = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::NewProp_bDismiss = { "bDismiss", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleControlsOverlay_eventDismissControlsDisplay_Parms), &Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::NewProp_bDismiss_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::NewProp_bDismiss_MetaData), Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::NewProp_bDismiss_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::NewProp_bSkipAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::NewProp_bSkipAnimation_SetBit(void* Obj)
	{
		((CitySampleControlsOverlay_eventDismissControlsDisplay_Parms*)Obj)->bSkipAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::NewProp_bSkipAnimation = { "bSkipAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleControlsOverlay_eventDismissControlsDisplay_Parms), &Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::NewProp_bSkipAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::NewProp_bSkipAnimation_MetaData), Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::NewProp_bSkipAnimation_MetaData) };
	void Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleControlsOverlay_eventDismissControlsDisplay_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleControlsOverlay_eventDismissControlsDisplay_Parms), &Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::NewProp_bDismiss,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::NewProp_bSkipAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Controls Overlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets whether the controls display should be dismissed or not. */" },
#endif
		{ "CPP_Default_bDismiss", "true" },
		{ "CPP_Default_bSkipAnimation", "false" },
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether the controls display should be dismissed or not." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleControlsOverlay, nullptr, "DismissControlsDisplay", nullptr, nullptr, Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::CitySampleControlsOverlay_eventDismissControlsDisplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::CitySampleControlsOverlay_eventDismissControlsDisplay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleControlsOverlay_HasControls_Statics
	{
		struct CitySampleControlsOverlay_eventHasControls_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCitySampleControlsOverlay_HasControls_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleControlsOverlay_eventHasControls_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlay_HasControls_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleControlsOverlay_eventHasControls_Parms), &Z_Construct_UFunction_UCitySampleControlsOverlay_HasControls_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleControlsOverlay_HasControls_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlay_HasControls_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_HasControls_Statics::Function_MetaDataParams[] = {
		{ "Category", "Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if there are any control descriptions. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if there are any control descriptions." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleControlsOverlay_HasControls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleControlsOverlay, nullptr, "HasControls", nullptr, nullptr, Z_Construct_UFunction_UCitySampleControlsOverlay_HasControls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_HasControls_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleControlsOverlay_HasControls_Statics::CitySampleControlsOverlay_eventHasControls_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_HasControls_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleControlsOverlay_HasControls_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_HasControls_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleControlsOverlay_HasControls_Statics::CitySampleControlsOverlay_eventHasControls_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleControlsOverlay_HasControls()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleControlsOverlay_HasControls_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleControlsOverlay_HasGamepadControls_Statics
	{
		struct CitySampleControlsOverlay_eventHasGamepadControls_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCitySampleControlsOverlay_HasGamepadControls_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleControlsOverlay_eventHasGamepadControls_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlay_HasGamepadControls_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleControlsOverlay_eventHasGamepadControls_Parms), &Z_Construct_UFunction_UCitySampleControlsOverlay_HasGamepadControls_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleControlsOverlay_HasGamepadControls_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlay_HasGamepadControls_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_HasGamepadControls_Statics::Function_MetaDataParams[] = {
		{ "Category", "Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if there are control descriptions for any gamepad input keys. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if there are control descriptions for any gamepad input keys." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleControlsOverlay_HasGamepadControls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleControlsOverlay, nullptr, "HasGamepadControls", nullptr, nullptr, Z_Construct_UFunction_UCitySampleControlsOverlay_HasGamepadControls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_HasGamepadControls_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleControlsOverlay_HasGamepadControls_Statics::CitySampleControlsOverlay_eventHasGamepadControls_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_HasGamepadControls_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleControlsOverlay_HasGamepadControls_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_HasGamepadControls_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleControlsOverlay_HasGamepadControls_Statics::CitySampleControlsOverlay_eventHasGamepadControls_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleControlsOverlay_HasGamepadControls()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleControlsOverlay_HasGamepadControls_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleControlsOverlay_HasKeyboardMouseControls_Statics
	{
		struct CitySampleControlsOverlay_eventHasKeyboardMouseControls_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCitySampleControlsOverlay_HasKeyboardMouseControls_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleControlsOverlay_eventHasKeyboardMouseControls_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlay_HasKeyboardMouseControls_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleControlsOverlay_eventHasKeyboardMouseControls_Parms), &Z_Construct_UFunction_UCitySampleControlsOverlay_HasKeyboardMouseControls_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleControlsOverlay_HasKeyboardMouseControls_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlay_HasKeyboardMouseControls_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_HasKeyboardMouseControls_Statics::Function_MetaDataParams[] = {
		{ "Category", "Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if there are control descriptions for any non-gamepad input keys. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if there are control descriptions for any non-gamepad input keys." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleControlsOverlay_HasKeyboardMouseControls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleControlsOverlay, nullptr, "HasKeyboardMouseControls", nullptr, nullptr, Z_Construct_UFunction_UCitySampleControlsOverlay_HasKeyboardMouseControls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_HasKeyboardMouseControls_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleControlsOverlay_HasKeyboardMouseControls_Statics::CitySampleControlsOverlay_eventHasKeyboardMouseControls_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_HasKeyboardMouseControls_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleControlsOverlay_HasKeyboardMouseControls_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_HasKeyboardMouseControls_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleControlsOverlay_HasKeyboardMouseControls_Statics::CitySampleControlsOverlay_eventHasKeyboardMouseControls_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleControlsOverlay_HasKeyboardMouseControls()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleControlsOverlay_HasKeyboardMouseControls_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleControlsOverlay_IsShowingControls_Statics
	{
		struct CitySampleControlsOverlay_eventIsShowingControls_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCitySampleControlsOverlay_IsShowingControls_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleControlsOverlay_eventIsShowingControls_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlay_IsShowingControls_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleControlsOverlay_eventIsShowingControls_Parms), &Z_Construct_UFunction_UCitySampleControlsOverlay_IsShowingControls_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleControlsOverlay_IsShowingControls_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlay_IsShowingControls_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_IsShowingControls_Statics::Function_MetaDataParams[] = {
		{ "Category", "Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true when controls are not toggled off and there are active control descriptions. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true when controls are not toggled off and there are active control descriptions." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleControlsOverlay_IsShowingControls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleControlsOverlay, nullptr, "IsShowingControls", nullptr, nullptr, Z_Construct_UFunction_UCitySampleControlsOverlay_IsShowingControls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_IsShowingControls_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleControlsOverlay_IsShowingControls_Statics::CitySampleControlsOverlay_eventIsShowingControls_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_IsShowingControls_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleControlsOverlay_IsShowingControls_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_IsShowingControls_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleControlsOverlay_IsShowingControls_Statics::CitySampleControlsOverlay_eventIsShowingControls_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleControlsOverlay_IsShowingControls()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleControlsOverlay_IsShowingControls_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonPrompt_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonPrompt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasControlsFlavor_MetaData[];
#endif
		static void NewProp_bHasControlsFlavor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasControlsFlavor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged_Statics::NewProp_ButtonPrompt_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged_Statics::NewProp_ButtonPrompt = { "ButtonPrompt", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleControlsOverlay_eventOnButtonControlsFlavorChanged_Parms, ButtonPrompt), Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged_Statics::NewProp_ButtonPrompt_MetaData), Z_Construct_UFunction_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged_Statics::NewProp_ButtonPrompt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged_Statics::NewProp_bHasControlsFlavor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged_Statics::NewProp_bHasControlsFlavor_SetBit(void* Obj)
	{
		((CitySampleControlsOverlay_eventOnButtonControlsFlavorChanged_Parms*)Obj)->bHasControlsFlavor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged_Statics::NewProp_bHasControlsFlavor = { "bHasControlsFlavor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleControlsOverlay_eventOnButtonControlsFlavorChanged_Parms), &Z_Construct_UFunction_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged_Statics::NewProp_bHasControlsFlavor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged_Statics::NewProp_bHasControlsFlavor_MetaData), Z_Construct_UFunction_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged_Statics::NewProp_bHasControlsFlavor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged_Statics::NewProp_ButtonPrompt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged_Statics::NewProp_bHasControlsFlavor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Controls Overlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hook for BP to handle updating when the controls flavor changes, i.e. hiding buttons without the current controls flavor configuration. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hook for BP to handle updating when the controls flavor changes, i.e. hiding buttons without the current controls flavor configuration." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleControlsOverlay, nullptr, "OnButtonControlsFlavorChanged", nullptr, nullptr, Z_Construct_UFunction_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged_Statics::PropPointers), sizeof(CitySampleControlsOverlay_eventOnButtonControlsFlavorChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySampleControlsOverlay_eventOnButtonControlsFlavorChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleControlsOverlay_OnControlsDescriptionSet_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ControlsDescription_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlsDescription_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlsDescription_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ControlsDescription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlay_OnControlsDescriptionSet_Statics::NewProp_ControlsDescription_ValueProp = { "ControlsDescription", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlay_OnControlsDescriptionSet_Statics::NewProp_ControlsDescription_Key_KeyProp = { "ControlsDescription_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_OnControlsDescriptionSet_Statics::NewProp_ControlsDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlay_OnControlsDescriptionSet_Statics::NewProp_ControlsDescription = { "ControlsDescription", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleControlsOverlay_eventOnControlsDescriptionSet_Parms, ControlsDescription), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_OnControlsDescriptionSet_Statics::NewProp_ControlsDescription_MetaData), Z_Construct_UFunction_UCitySampleControlsOverlay_OnControlsDescriptionSet_Statics::NewProp_ControlsDescription_MetaData) }; // 46000949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleControlsOverlay_OnControlsDescriptionSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlay_OnControlsDescriptionSet_Statics::NewProp_ControlsDescription_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlay_OnControlsDescriptionSet_Statics::NewProp_ControlsDescription_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlay_OnControlsDescriptionSet_Statics::NewProp_ControlsDescription,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_OnControlsDescriptionSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Controls Overlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hook for BP to handle when the controls description has been set. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hook for BP to handle when the controls description has been set." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleControlsOverlay_OnControlsDescriptionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleControlsOverlay, nullptr, "OnControlsDescriptionSet", nullptr, nullptr, Z_Construct_UFunction_UCitySampleControlsOverlay_OnControlsDescriptionSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_OnControlsDescriptionSet_Statics::PropPointers), sizeof(CitySampleControlsOverlay_eventOnControlsDescriptionSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_OnControlsDescriptionSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleControlsOverlay_OnControlsDescriptionSet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_OnControlsDescriptionSet_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySampleControlsOverlay_eventOnControlsDescriptionSet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleControlsOverlay_OnControlsDescriptionSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleControlsOverlay_OnControlsDescriptionSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleControlsOverlay_OnUpdatePressedKeys_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_OnUpdatePressedKeys_Statics::NewProp_PlayerInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlay_OnUpdatePressedKeys_Statics::NewProp_PlayerInput = { "PlayerInput", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleControlsOverlay_eventOnUpdatePressedKeys_Parms, PlayerInput), Z_Construct_UClass_UPlayerInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_OnUpdatePressedKeys_Statics::NewProp_PlayerInput_MetaData), Z_Construct_UFunction_UCitySampleControlsOverlay_OnUpdatePressedKeys_Statics::NewProp_PlayerInput_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleControlsOverlay_OnUpdatePressedKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlay_OnUpdatePressedKeys_Statics::NewProp_PlayerInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_OnUpdatePressedKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Controls Overlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP hook to do any extra work after updating pressed keys. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP hook to do any extra work after updating pressed keys." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleControlsOverlay_OnUpdatePressedKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleControlsOverlay, nullptr, "OnUpdatePressedKeys", nullptr, nullptr, Z_Construct_UFunction_UCitySampleControlsOverlay_OnUpdatePressedKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_OnUpdatePressedKeys_Statics::PropPointers), sizeof(CitySampleControlsOverlay_eventOnUpdatePressedKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_OnUpdatePressedKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleControlsOverlay_OnUpdatePressedKeys_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_OnUpdatePressedKeys_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySampleControlsOverlay_eventOnUpdatePressedKeys_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleControlsOverlay_OnUpdatePressedKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleControlsOverlay_OnUpdatePressedKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDismiss_MetaData[];
#endif
		static void NewProp_bDismiss_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDismiss;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipAnimation_MetaData[];
#endif
		static void NewProp_bSkipAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipAnimation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::NewProp_bDismiss_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::NewProp_bDismiss_SetBit(void* Obj)
	{
		((CitySampleControlsOverlay_eventReceiveDismissControlsDisplay_Parms*)Obj)->bDismiss = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::NewProp_bDismiss = { "bDismiss", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleControlsOverlay_eventReceiveDismissControlsDisplay_Parms), &Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::NewProp_bDismiss_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::NewProp_bDismiss_MetaData), Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::NewProp_bDismiss_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::NewProp_bSkipAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::NewProp_bSkipAnimation_SetBit(void* Obj)
	{
		((CitySampleControlsOverlay_eventReceiveDismissControlsDisplay_Parms*)Obj)->bSkipAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::NewProp_bSkipAnimation = { "bSkipAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleControlsOverlay_eventReceiveDismissControlsDisplay_Parms), &Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::NewProp_bSkipAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::NewProp_bSkipAnimation_MetaData), Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::NewProp_bSkipAnimation_MetaData) };
	void Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleControlsOverlay_eventReceiveDismissControlsDisplay_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleControlsOverlay_eventReceiveDismissControlsDisplay_Parms), &Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::NewProp_bDismiss,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::NewProp_bSkipAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Controls Overlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP hook to handle when the controls display is dismissed or not. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP hook to handle when the controls display is dismissed or not." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleControlsOverlay, nullptr, "ReceiveDismissControlsDisplay", nullptr, nullptr, Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::PropPointers), sizeof(CitySampleControlsOverlay_eventReceiveDismissControlsDisplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySampleControlsOverlay_eventReceiveDismissControlsDisplay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescription_Statics
	{
		struct CitySampleControlsOverlay_eventSetControlsDescription_Parms
		{
			TMap<FKey,FText> ControlsDescription;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ControlsDescription_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlsDescription_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlsDescription_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ControlsDescription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescription_Statics::NewProp_ControlsDescription_ValueProp = { "ControlsDescription", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescription_Statics::NewProp_ControlsDescription_Key_KeyProp = { "ControlsDescription_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescription_Statics::NewProp_ControlsDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescription_Statics::NewProp_ControlsDescription = { "ControlsDescription", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleControlsOverlay_eventSetControlsDescription_Parms, ControlsDescription), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescription_Statics::NewProp_ControlsDescription_MetaData), Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescription_Statics::NewProp_ControlsDescription_MetaData) }; // 46000949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescription_Statics::NewProp_ControlsDescription_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescription_Statics::NewProp_ControlsDescription_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescription_Statics::NewProp_ControlsDescription,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Controls Overlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Updates all key mapped button prompts with the given controls description. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates all key mapped button prompts with the given controls description." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleControlsOverlay, nullptr, "SetControlsDescription", nullptr, nullptr, Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescription_Statics::CitySampleControlsOverlay_eventSetControlsDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescription_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescription_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescription_Statics::CitySampleControlsOverlay_eventSetControlsDescription_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescriptionFor_Statics
	{
		struct CitySampleControlsOverlay_eventSetControlsDescriptionFor_Parms
		{
			const APlayerController* PlayerController;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescriptionFor_Statics::NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescriptionFor_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleControlsOverlay_eventSetControlsDescriptionFor_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescriptionFor_Statics::NewProp_PlayerController_MetaData), Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescriptionFor_Statics::NewProp_PlayerController_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescriptionFor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescriptionFor_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescriptionFor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Controls Overlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09Generates the current controls description for the given PlayerController and updates the controls overlay.\n\x09 *\n\x09 *\x09@note\x09Mappings are generated using controls descriptions provided (in order of priority) by:\n\x09 *\x09\x09\x09the Pawn, the Playspace, and the PlayerController.\n\x09 *\n\x09 *\x09\x09\x09Ignores anything that does not implement ICitySampleControlsInterface.\n\x09 *\n\x09 *\x09@note\x09""Empty control descriptions mapped to a provide input key will be defaulted to the name\n\x09 *\x09\x09\x09of the action mapped to the key, using the PlayerInput component on the PlayerController.\n\x09 *\n\x09 *\x09@see ICitySampleControlsOverlayInterface\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generates the current controls description for the given PlayerController and updates the controls overlay.\n\n@note   Mappings are generated using controls descriptions provided (in order of priority) by:\n                the Pawn, the Playspace, and the PlayerController.\n\n                Ignores anything that does not implement ICitySampleControlsInterface.\n\n@note   Empty control descriptions mapped to a provide input key will be defaulted to the name\n                of the action mapped to the key, using the PlayerInput component on the PlayerController.\n\n@see ICitySampleControlsOverlayInterface" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescriptionFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleControlsOverlay, nullptr, "SetControlsDescriptionFor", nullptr, nullptr, Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescriptionFor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescriptionFor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescriptionFor_Statics::CitySampleControlsOverlay_eventSetControlsDescriptionFor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescriptionFor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescriptionFor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescriptionFor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescriptionFor_Statics::CitySampleControlsOverlay_eventSetControlsDescriptionFor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescriptionFor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescriptionFor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDirty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Controls Overlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Marks the controls description as needing to be updated */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Marks the controls description as needing to be updated" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleControlsOverlay, nullptr, "SetControlsDirty", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDirty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDirty_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleControlsOverlay_ToggleControlsDisplay_Statics
	{
		struct CitySampleControlsOverlay_eventToggleControlsDisplay_Parms
		{
			bool bSkipAnimation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipAnimation_MetaData[];
#endif
		static void NewProp_bSkipAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipAnimation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_ToggleControlsDisplay_Statics::NewProp_bSkipAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCitySampleControlsOverlay_ToggleControlsDisplay_Statics::NewProp_bSkipAnimation_SetBit(void* Obj)
	{
		((CitySampleControlsOverlay_eventToggleControlsDisplay_Parms*)Obj)->bSkipAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlay_ToggleControlsDisplay_Statics::NewProp_bSkipAnimation = { "bSkipAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleControlsOverlay_eventToggleControlsDisplay_Parms), &Z_Construct_UFunction_UCitySampleControlsOverlay_ToggleControlsDisplay_Statics::NewProp_bSkipAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_ToggleControlsDisplay_Statics::NewProp_bSkipAnimation_MetaData), Z_Construct_UFunction_UCitySampleControlsOverlay_ToggleControlsDisplay_Statics::NewProp_bSkipAnimation_MetaData) };
	void Z_Construct_UFunction_UCitySampleControlsOverlay_ToggleControlsDisplay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleControlsOverlay_eventToggleControlsDisplay_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlay_ToggleControlsDisplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleControlsOverlay_eventToggleControlsDisplay_Parms), &Z_Construct_UFunction_UCitySampleControlsOverlay_ToggleControlsDisplay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleControlsOverlay_ToggleControlsDisplay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlay_ToggleControlsDisplay_Statics::NewProp_bSkipAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlay_ToggleControlsDisplay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_ToggleControlsDisplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Controls Overlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Toggles whether the controls display should be dismissed or not. */" },
#endif
		{ "CPP_Default_bSkipAnimation", "false" },
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggles whether the controls display should be dismissed or not." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleControlsOverlay_ToggleControlsDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleControlsOverlay, nullptr, "ToggleControlsDisplay", nullptr, nullptr, Z_Construct_UFunction_UCitySampleControlsOverlay_ToggleControlsDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_ToggleControlsDisplay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleControlsOverlay_ToggleControlsDisplay_Statics::CitySampleControlsOverlay_eventToggleControlsDisplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_ToggleControlsDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleControlsOverlay_ToggleControlsDisplay_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_ToggleControlsDisplay_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleControlsOverlay_ToggleControlsDisplay_Statics::CitySampleControlsOverlay_eventToggleControlsDisplay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleControlsOverlay_ToggleControlsDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleControlsOverlay_ToggleControlsDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleControlsOverlay_UpdatePressedKeys_Statics
	{
		struct CitySampleControlsOverlay_eventUpdatePressedKeys_Parms
		{
			const UPlayerInput* PlayerInput;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_UpdatePressedKeys_Statics::NewProp_PlayerInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlay_UpdatePressedKeys_Statics::NewProp_PlayerInput = { "PlayerInput", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleControlsOverlay_eventUpdatePressedKeys_Parms, PlayerInput), Z_Construct_UClass_UPlayerInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_UpdatePressedKeys_Statics::NewProp_PlayerInput_MetaData), Z_Construct_UFunction_UCitySampleControlsOverlay_UpdatePressedKeys_Statics::NewProp_PlayerInput_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleControlsOverlay_UpdatePressedKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlay_UpdatePressedKeys_Statics::NewProp_PlayerInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlay_UpdatePressedKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Controls Overlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the appropriate input type and calls PlayPressAnimation for any buttons pressed.  */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the appropriate input type and calls PlayPressAnimation for any buttons pressed." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleControlsOverlay_UpdatePressedKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleControlsOverlay, nullptr, "UpdatePressedKeys", nullptr, nullptr, Z_Construct_UFunction_UCitySampleControlsOverlay_UpdatePressedKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_UpdatePressedKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleControlsOverlay_UpdatePressedKeys_Statics::CitySampleControlsOverlay_eventUpdatePressedKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_UpdatePressedKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleControlsOverlay_UpdatePressedKeys_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlay_UpdatePressedKeys_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleControlsOverlay_UpdatePressedKeys_Statics::CitySampleControlsOverlay_eventUpdatePressedKeys_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleControlsOverlay_UpdatePressedKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleControlsOverlay_UpdatePressedKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleControlsOverlay);
	UClass* Z_Construct_UClass_UCitySampleControlsOverlay_NoRegister()
	{
		return UCitySampleControlsOverlay::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleControlsOverlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyButtonConfigMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyButtonConfigMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyButtonConfigMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_KeyButtonConfigMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonsPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonsPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonsContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonsContainer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeysCache_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeysCache_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeysCache;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonsCache_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonsCache_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ButtonsCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bControlsDisplayDismissed_MetaData[];
#endif
		static void NewProp_bControlsDisplayDismissed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bControlsDisplayDismissed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleControlsOverlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCitySamplePanel,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleControlsOverlay_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySampleControlsOverlay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleControlsOverlay_DismissControlsDisplay, "DismissControlsDisplay" }, // 2057790583
		{ &Z_Construct_UFunction_UCitySampleControlsOverlay_HasControls, "HasControls" }, // 1581769993
		{ &Z_Construct_UFunction_UCitySampleControlsOverlay_HasGamepadControls, "HasGamepadControls" }, // 396957901
		{ &Z_Construct_UFunction_UCitySampleControlsOverlay_HasKeyboardMouseControls, "HasKeyboardMouseControls" }, // 2539314370
		{ &Z_Construct_UFunction_UCitySampleControlsOverlay_IsShowingControls, "IsShowingControls" }, // 361737631
		{ &Z_Construct_UFunction_UCitySampleControlsOverlay_OnButtonControlsFlavorChanged, "OnButtonControlsFlavorChanged" }, // 3476940631
		{ &Z_Construct_UFunction_UCitySampleControlsOverlay_OnControlsDescriptionSet, "OnControlsDescriptionSet" }, // 1740804383
		{ &Z_Construct_UFunction_UCitySampleControlsOverlay_OnUpdatePressedKeys, "OnUpdatePressedKeys" }, // 2287734293
		{ &Z_Construct_UFunction_UCitySampleControlsOverlay_ReceiveDismissControlsDisplay, "ReceiveDismissControlsDisplay" }, // 1321072795
		{ &Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescription, "SetControlsDescription" }, // 4121996933
		{ &Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDescriptionFor, "SetControlsDescriptionFor" }, // 1509868936
		{ &Z_Construct_UFunction_UCitySampleControlsOverlay_SetControlsDirty, "SetControlsDirty" }, // 3714432042
		{ &Z_Construct_UFunction_UCitySampleControlsOverlay_ToggleControlsDisplay, "ToggleControlsDisplay" }, // 3676070189
		{ &Z_Construct_UFunction_UCitySampleControlsOverlay_UpdatePressedKeys, "UpdatePressedKeys" }, // 2550736070
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleControlsOverlay_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleControlsOverlay_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * CitySample Panel for overlaying context appropriate controls onto the screen and updating button prompts.\n */" },
#endif
		{ "IncludePath", "UI/CitySampleControlsOverlay.h" },
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CitySample Panel for overlaying context appropriate controls onto the screen and updating button prompts." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_KeyButtonConfigMap_ValueProp = { "KeyButtonConfigMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig, METADATA_PARAMS(0, nullptr) }; // 3929779177
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_KeyButtonConfigMap_Key_KeyProp = { "KeyButtonConfigMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_KeyButtonConfigMap_MetaData[] = {
		{ "Category", "Controls Overlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\x09Input key-button button prompt config map used to generate a set of possible controls. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input key-button button prompt config map used to generate a set of possible controls." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_KeyButtonConfigMap = { "KeyButtonConfigMap", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleControlsOverlay, KeyButtonConfigMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_KeyButtonConfigMap_MetaData), Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_KeyButtonConfigMap_MetaData) }; // 46000949 3929779177
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_ButtonsPadding_MetaData[] = {
		{ "Category", "Controls Overlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Padding applied to the vertical box slot that contains the button, if applicable. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Padding applied to the vertical box slot that contains the button, if applicable." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_ButtonsPadding = { "ButtonsPadding", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleControlsOverlay, ButtonsPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_ButtonsPadding_MetaData), Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_ButtonsPadding_MetaData) }; // 2235102396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_ButtonsContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Controls Overlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vertical box container that will be used to add buttons for the controls description. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertical box container that will be used to add buttons for the controls description." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_ButtonsContainer = { "ButtonsContainer", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleControlsOverlay, ButtonsContainer), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_ButtonsContainer_MetaData), Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_ButtonsContainer_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_KeysCache_Inner = { "KeysCache", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_KeysCache_MetaData[] = {
		{ "Category", "Controls Overlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cached list of keys corresponding to the buttons created for the controls description. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached list of keys corresponding to the buttons created for the controls description." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_KeysCache = { "KeysCache", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleControlsOverlay, KeysCache), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_KeysCache_MetaData), Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_KeysCache_MetaData) }; // 46000949
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_ButtonsCache_Inner = { "ButtonsCache", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_ButtonsCache_MetaData[] = {
		{ "Category", "Controls Overlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Cached list of buttons created for the controls description. \n\x09* Existing buttons are reconfigured when a new controls description is set and excess buttons are removed.\n\x09*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached list of buttons created for the controls description.\nExisting buttons are reconfigured when a new controls description is set and excess buttons are removed." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_ButtonsCache = { "ButtonsCache", nullptr, (EPropertyFlags)0x002008800002201d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleControlsOverlay, ButtonsCache), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_ButtonsCache_MetaData), Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_ButtonsCache_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_bControlsDisplayDismissed_MetaData[] = {
		{ "Category", "Controls Overlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the controls descriptions have been toggled off. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the controls descriptions have been toggled off." },
#endif
	};
#endif
	void Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_bControlsDisplayDismissed_SetBit(void* Obj)
	{
		((UCitySampleControlsOverlay*)Obj)->bControlsDisplayDismissed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_bControlsDisplayDismissed = { "bControlsDisplayDismissed", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleControlsOverlay), &Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_bControlsDisplayDismissed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_bControlsDisplayDismissed_MetaData), Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_bControlsDisplayDismissed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleControlsOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_KeyButtonConfigMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_KeyButtonConfigMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_KeyButtonConfigMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_ButtonsPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_ButtonsContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_KeysCache_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_KeysCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_ButtonsCache_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_ButtonsCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleControlsOverlay_Statics::NewProp_bControlsDisplayDismissed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleControlsOverlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleControlsOverlay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleControlsOverlay_Statics::ClassParams = {
		&UCitySampleControlsOverlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCitySampleControlsOverlay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleControlsOverlay_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleControlsOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleControlsOverlay_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleControlsOverlay_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCitySampleControlsOverlay()
	{
		if (!Z_Registration_Info_UClass_UCitySampleControlsOverlay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleControlsOverlay.OuterSingleton, Z_Construct_UClass_UCitySampleControlsOverlay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleControlsOverlay.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleControlsOverlay>()
	{
		return UCitySampleControlsOverlay::StaticClass();
	}
	UCitySampleControlsOverlay::UCitySampleControlsOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleControlsOverlay);
	UCitySampleControlsOverlay::~UCitySampleControlsOverlay() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_Statics::ScriptStructInfo[] = {
		{ FCitySampleControlsOverlayButtonConfig::StaticStruct, Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics::NewStructOps, TEXT("CitySampleControlsOverlayButtonConfig"), &Z_Registration_Info_UScriptStruct_CitySampleControlsOverlayButtonConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleControlsOverlayButtonConfig), 3929779177U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleControlsOverlay, UCitySampleControlsOverlay::StaticClass, TEXT("UCitySampleControlsOverlay"), &Z_Registration_Info_UClass_UCitySampleControlsOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleControlsOverlay), 3409578180U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_913284480(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
