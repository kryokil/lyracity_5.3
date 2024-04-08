// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/UI/CitySamplePanel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySamplePanel() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySamplePlayerController_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySamplePanel();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySamplePanel_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleUIComponent_NoRegister();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySamplePanelInput();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySamplePanelTransitionState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUMGSequencePlayer_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECitySamplePanelInput;
	static UEnum* ECitySamplePanelInput_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECitySamplePanelInput.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECitySamplePanelInput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ECitySamplePanelInput, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("ECitySamplePanelInput"));
		}
		return Z_Registration_Info_UEnum_ECitySamplePanelInput.OuterSingleton;
	}
	template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySamplePanelInput>()
	{
		return ECitySamplePanelInput_StaticEnum();
	}
	struct Z_Construct_UEnum_CitySample_ECitySamplePanelInput_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CitySample_ECitySamplePanelInput_Statics::Enumerators[] = {
		{ "ECitySamplePanelInput::None", (int64)ECitySamplePanelInput::None },
		{ "ECitySamplePanelInput::Up", (int64)ECitySamplePanelInput::Up },
		{ "ECitySamplePanelInput::Down", (int64)ECitySamplePanelInput::Down },
		{ "ECitySamplePanelInput::Left", (int64)ECitySamplePanelInput::Left },
		{ "ECitySamplePanelInput::Right", (int64)ECitySamplePanelInput::Right },
		{ "ECitySamplePanelInput::TogglePrev", (int64)ECitySamplePanelInput::TogglePrev },
		{ "ECitySamplePanelInput::ToggleNext", (int64)ECitySamplePanelInput::ToggleNext },
		{ "ECitySamplePanelInput::Confirm", (int64)ECitySamplePanelInput::Confirm },
		{ "ECitySamplePanelInput::Reset", (int64)ECitySamplePanelInput::Reset },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CitySample_ECitySamplePanelInput_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Confirm.Name", "ECitySamplePanelInput::Confirm" },
		{ "Down.Name", "ECitySamplePanelInput::Down" },
		{ "Left.Name", "ECitySamplePanelInput::Left" },
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
		{ "None.Name", "ECitySamplePanelInput::None" },
		{ "Reset.Name", "ECitySamplePanelInput::Reset" },
		{ "Right.Name", "ECitySamplePanelInput::Right" },
		{ "ToggleNext.Name", "ECitySamplePanelInput::ToggleNext" },
		{ "TogglePrev.Name", "ECitySamplePanelInput::TogglePrev" },
		{ "Up.Name", "ECitySamplePanelInput::Up" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ECitySamplePanelInput_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		"ECitySamplePanelInput",
		"ECitySamplePanelInput",
		Z_Construct_UEnum_CitySample_ECitySamplePanelInput_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySamplePanelInput_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySamplePanelInput_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_ECitySamplePanelInput_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CitySample_ECitySamplePanelInput()
	{
		if (!Z_Registration_Info_UEnum_ECitySamplePanelInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECitySamplePanelInput.InnerSingleton, Z_Construct_UEnum_CitySample_ECitySamplePanelInput_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECitySamplePanelInput.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySamplePanelTransitionState;
class UScriptStruct* FCitySamplePanelTransitionState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySamplePanelTransitionState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySamplePanelTransitionState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySamplePanelTransitionState, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySamplePanelTransitionState"));
	}
	return Z_Registration_Info_UScriptStruct_CitySamplePanelTransitionState.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySamplePanelTransitionState>()
{
	return FCitySamplePanelTransitionState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentPendingAdd_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentPendingAdd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipAnimation_MetaData[];
#endif
		static void NewProp_bSkipAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipAnimation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySamplePanelTransitionState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::NewProp_ParentPendingAdd_MetaData[] = {
		{ "Category", "CitySamplePanelTransitionState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::NewProp_ParentPendingAdd = { "ParentPendingAdd", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySamplePanelTransitionState, ParentPendingAdd), Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::NewProp_ParentPendingAdd_MetaData), Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::NewProp_ParentPendingAdd_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::NewProp_ContainerWidget_MetaData[] = {
		{ "Category", "CitySamplePanelTransitionState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::NewProp_ContainerWidget = { "ContainerWidget", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySamplePanelTransitionState, ContainerWidget), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::NewProp_ContainerWidget_MetaData), Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::NewProp_ContainerWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::NewProp_bSkipAnimation_MetaData[] = {
		{ "Category", "CitySamplePanelTransitionState" },
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::NewProp_bSkipAnimation_SetBit(void* Obj)
	{
		((FCitySamplePanelTransitionState*)Obj)->bSkipAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::NewProp_bSkipAnimation = { "bSkipAnimation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySamplePanelTransitionState), &Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::NewProp_bSkipAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::NewProp_bSkipAnimation_MetaData), Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::NewProp_bSkipAnimation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::NewProp_ParentPendingAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::NewProp_ContainerWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::NewProp_bSkipAnimation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"CitySamplePanelTransitionState",
		Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::PropPointers),
		sizeof(FCitySamplePanelTransitionState),
		alignof(FCitySamplePanelTransitionState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCitySamplePanelTransitionState()
	{
		if (!Z_Registration_Info_UScriptStruct_CitySamplePanelTransitionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySamplePanelTransitionState.InnerSingleton, Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CitySamplePanelTransitionState.InnerSingleton;
	}
	DEFINE_FUNCTION(UCitySamplePanel::execHasControlsFlavor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasControlsFlavor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySamplePanel::execSetControlsFlavor)
	{
		P_GET_ENUM(ECitySampleControlsFlavor,Z_Param_NewControlsFlavor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlsFlavor(ECitySampleControlsFlavor(Z_Param_NewControlsFlavor));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySamplePanel::execGetControlsFlavor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECitySampleControlsFlavor*)Z_Param__Result=P_THIS->GetControlsFlavor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySamplePanel::execGetOwningCitySampleUIComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCitySampleUIComponent**)Z_Param__Result=P_THIS->GetOwningCitySampleUIComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySamplePanel::execGetOwningCitySamplePlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACitySamplePlayerController**)Z_Param__Result=P_THIS->GetOwningCitySamplePlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySamplePanel::execIsHidingAllPanels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHidingAllPanels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySamplePanel::execSetAllPanelsHidden)
	{
		P_GET_UBOOL(Z_Param_bShouldBeHidden);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllPanelsHidden(Z_Param_bShouldBeHidden);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySamplePanel::execGetActivePanel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCitySamplePanel**)Z_Param__Result=P_THIS->GetActivePanel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySamplePanel::execGetChildPanels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UCitySamplePanel*>*)Z_Param__Result=P_THIS->GetChildPanels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySamplePanel::execGetParentPanel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCitySamplePanel**)Z_Param__Result=P_THIS->GetParentPanel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySamplePanel::execRemoveChildPanelChecked)
	{
		P_GET_OBJECT(UCitySamplePanel,Z_Param_ChildPanel);
		P_GET_UBOOL(Z_Param_bSkipAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveChildPanelChecked(Z_Param_ChildPanel,Z_Param_bSkipAnimation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySamplePanel::execRemoveChildPanel)
	{
		P_GET_OBJECT(UCitySamplePanel,Z_Param_ChildPanel);
		P_GET_UBOOL(Z_Param_bSkipAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveChildPanel(Z_Param_ChildPanel,Z_Param_bSkipAnimation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySamplePanel::execAddChildPanel)
	{
		P_GET_OBJECT(UCitySamplePanel,Z_Param_ChildPanel);
		P_GET_OBJECT(UPanelWidget,Z_Param_ContainerWidget);
		P_GET_UBOOL(Z_Param_bSkipAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCitySamplePanel**)Z_Param__Result=P_THIS->AddChildPanel(Z_Param_ChildPanel,Z_Param_ContainerWidget,Z_Param_bSkipAnimation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySamplePanel::execCreateChildPanel)
	{
		P_GET_OBJECT(UClass,Z_Param_PanelClass);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_OBJECT(UPanelWidget,Z_Param_ContainerWidget);
		P_GET_UBOOL(Z_Param_bSkipAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCitySamplePanel**)Z_Param__Result=P_THIS->CreateChildPanel(Z_Param_PanelClass,Z_Param_Name,Z_Param_ContainerWidget,Z_Param_bSkipAnimation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySamplePanel::execUpdatePanel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_OBJECT(UCitySampleUIComponent,Z_Param_OwningCitySampleUI);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePanel(Z_Param_DeltaTime,Z_Param_OwningCitySampleUI);
		P_NATIVE_END;
	}
	struct CitySamplePanel_eventAnimateIn_Parms
	{
		UUMGSequencePlayer* ReturnValue;

		/** Constructor, initializes return property only **/
		CitySamplePanel_eventAnimateIn_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct CitySamplePanel_eventAnimateOut_Parms
	{
		UUMGSequencePlayer* ReturnValue;

		/** Constructor, initializes return property only **/
		CitySamplePanel_eventAnimateOut_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct CitySamplePanel_eventOnAddedChildPanel_Parms
	{
		UCitySamplePanel* ChildPanel;
	};
	struct CitySamplePanel_eventOnChildFinishedAnimateIn_Parms
	{
		UCitySamplePanel* ChildPanel;
	};
	struct CitySamplePanel_eventOnChildFinishedAnimateOut_Parms
	{
		UCitySamplePanel* ChildPanel;
	};
	struct CitySamplePanel_eventOnControlsFlavorChanged_Parms
	{
		ECitySampleControlsFlavor NewControlsFlavor;
	};
	struct CitySamplePanel_eventOnRemoveChildPanel_Parms
	{
		UCitySamplePanel* ChildPanel;
	};
	struct CitySamplePanel_eventProcessInput_Parms
	{
		ECitySamplePanelInput Input;
		FVector2D ActionValue;
		float ElapsedTime;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		CitySamplePanel_eventProcessInput_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct CitySamplePanel_eventReceiveUpdatePanel_Parms
	{
		float DeltaTime;
		const UCitySampleUIComponent* OwningCitySampleUI;
	};
	static FName NAME_UCitySamplePanel_AnimateIn = FName(TEXT("AnimateIn"));
	UUMGSequencePlayer* UCitySamplePanel::AnimateIn()
	{
		CitySamplePanel_eventAnimateIn_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UCitySamplePanel_AnimateIn),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UCitySamplePanel_AnimateOut = FName(TEXT("AnimateOut"));
	UUMGSequencePlayer* UCitySamplePanel::AnimateOut()
	{
		CitySamplePanel_eventAnimateOut_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UCitySamplePanel_AnimateOut),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UCitySamplePanel_OnAddedChildPanel = FName(TEXT("OnAddedChildPanel"));
	void UCitySamplePanel::OnAddedChildPanel(UCitySamplePanel* ChildPanel)
	{
		CitySamplePanel_eventOnAddedChildPanel_Parms Parms;
		Parms.ChildPanel=ChildPanel;
		ProcessEvent(FindFunctionChecked(NAME_UCitySamplePanel_OnAddedChildPanel),&Parms);
	}
	static FName NAME_UCitySamplePanel_OnAddedToPanel = FName(TEXT("OnAddedToPanel"));
	void UCitySamplePanel::OnAddedToPanel()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCitySamplePanel_OnAddedToPanel),NULL);
	}
	static FName NAME_UCitySamplePanel_OnChildFinishedAnimateIn = FName(TEXT("OnChildFinishedAnimateIn"));
	void UCitySamplePanel::OnChildFinishedAnimateIn(UCitySamplePanel* ChildPanel)
	{
		CitySamplePanel_eventOnChildFinishedAnimateIn_Parms Parms;
		Parms.ChildPanel=ChildPanel;
		ProcessEvent(FindFunctionChecked(NAME_UCitySamplePanel_OnChildFinishedAnimateIn),&Parms);
	}
	static FName NAME_UCitySamplePanel_OnChildFinishedAnimateOut = FName(TEXT("OnChildFinishedAnimateOut"));
	void UCitySamplePanel::OnChildFinishedAnimateOut(UCitySamplePanel* ChildPanel)
	{
		CitySamplePanel_eventOnChildFinishedAnimateOut_Parms Parms;
		Parms.ChildPanel=ChildPanel;
		ProcessEvent(FindFunctionChecked(NAME_UCitySamplePanel_OnChildFinishedAnimateOut),&Parms);
	}
	static FName NAME_UCitySamplePanel_OnControlsFlavorChanged = FName(TEXT("OnControlsFlavorChanged"));
	void UCitySamplePanel::OnControlsFlavorChanged(const ECitySampleControlsFlavor NewControlsFlavor)
	{
		CitySamplePanel_eventOnControlsFlavorChanged_Parms Parms;
		Parms.NewControlsFlavor=NewControlsFlavor;
		ProcessEvent(FindFunctionChecked(NAME_UCitySamplePanel_OnControlsFlavorChanged),&Parms);
	}
	static FName NAME_UCitySamplePanel_OnFinishedAnimateIn = FName(TEXT("OnFinishedAnimateIn"));
	void UCitySamplePanel::OnFinishedAnimateIn()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCitySamplePanel_OnFinishedAnimateIn),NULL);
	}
	static FName NAME_UCitySamplePanel_OnFinishedAnimateOut = FName(TEXT("OnFinishedAnimateOut"));
	void UCitySamplePanel::OnFinishedAnimateOut()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCitySamplePanel_OnFinishedAnimateOut),NULL);
	}
	static FName NAME_UCitySamplePanel_OnRemoveChildPanel = FName(TEXT("OnRemoveChildPanel"));
	void UCitySamplePanel::OnRemoveChildPanel(UCitySamplePanel* ChildPanel)
	{
		CitySamplePanel_eventOnRemoveChildPanel_Parms Parms;
		Parms.ChildPanel=ChildPanel;
		ProcessEvent(FindFunctionChecked(NAME_UCitySamplePanel_OnRemoveChildPanel),&Parms);
	}
	static FName NAME_UCitySamplePanel_OnRemoveFromPanel = FName(TEXT("OnRemoveFromPanel"));
	void UCitySamplePanel::OnRemoveFromPanel()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCitySamplePanel_OnRemoveFromPanel),NULL);
	}
	static FName NAME_UCitySamplePanel_ProcessInput = FName(TEXT("ProcessInput"));
	bool UCitySamplePanel::ProcessInput(ECitySamplePanelInput const& Input, FVector2D const& ActionValue, const float ElapsedTime)
	{
		CitySamplePanel_eventProcessInput_Parms Parms;
		Parms.Input=Input;
		Parms.ActionValue=ActionValue;
		Parms.ElapsedTime=ElapsedTime;
		ProcessEvent(FindFunctionChecked(NAME_UCitySamplePanel_ProcessInput),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UCitySamplePanel_ReceiveUpdatePanel = FName(TEXT("ReceiveUpdatePanel"));
	void UCitySamplePanel::ReceiveUpdatePanel(const float DeltaTime, const UCitySampleUIComponent* OwningCitySampleUI)
	{
		CitySamplePanel_eventReceiveUpdatePanel_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		Parms.OwningCitySampleUI=OwningCitySampleUI;
		ProcessEvent(FindFunctionChecked(NAME_UCitySamplePanel_ReceiveUpdatePanel),&Parms);
	}
	void UCitySamplePanel::StaticRegisterNativesUCitySamplePanel()
	{
		UClass* Class = UCitySamplePanel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChildPanel", &UCitySamplePanel::execAddChildPanel },
			{ "CreateChildPanel", &UCitySamplePanel::execCreateChildPanel },
			{ "GetActivePanel", &UCitySamplePanel::execGetActivePanel },
			{ "GetChildPanels", &UCitySamplePanel::execGetChildPanels },
			{ "GetControlsFlavor", &UCitySamplePanel::execGetControlsFlavor },
			{ "GetOwningCitySamplePlayer", &UCitySamplePanel::execGetOwningCitySamplePlayer },
			{ "GetOwningCitySampleUIComponent", &UCitySamplePanel::execGetOwningCitySampleUIComponent },
			{ "GetParentPanel", &UCitySamplePanel::execGetParentPanel },
			{ "HasControlsFlavor", &UCitySamplePanel::execHasControlsFlavor },
			{ "IsHidingAllPanels", &UCitySamplePanel::execIsHidingAllPanels },
			{ "RemoveChildPanel", &UCitySamplePanel::execRemoveChildPanel },
			{ "RemoveChildPanelChecked", &UCitySamplePanel::execRemoveChildPanelChecked },
			{ "SetAllPanelsHidden", &UCitySamplePanel::execSetAllPanelsHidden },
			{ "SetControlsFlavor", &UCitySamplePanel::execSetControlsFlavor },
			{ "UpdatePanel", &UCitySamplePanel::execUpdatePanel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics
	{
		struct CitySamplePanel_eventAddChildPanel_Parms
		{
			UCitySamplePanel* ChildPanel;
			UPanelWidget* ContainerWidget;
			bool bSkipAnimation;
			UCitySamplePanel* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildPanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildPanel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerWidget;
		static void NewProp_bSkipAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::NewProp_ChildPanel_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::NewProp_ChildPanel = { "ChildPanel", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventAddChildPanel_Parms, ChildPanel), Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::NewProp_ChildPanel_MetaData), Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::NewProp_ChildPanel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::NewProp_ContainerWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::NewProp_ContainerWidget = { "ContainerWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventAddChildPanel_Parms, ContainerWidget), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::NewProp_ContainerWidget_MetaData), Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::NewProp_ContainerWidget_MetaData) };
	void Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::NewProp_bSkipAnimation_SetBit(void* Obj)
	{
		((CitySamplePanel_eventAddChildPanel_Parms*)Obj)->bSkipAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::NewProp_bSkipAnimation = { "bSkipAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySamplePanel_eventAddChildPanel_Parms), &Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::NewProp_bSkipAnimation_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventAddChildPanel_Parms, ReturnValue), Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::NewProp_ChildPanel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::NewProp_ContainerWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::NewProp_bSkipAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds a CitySamplePanel instance as a child panel and adds it to the viewport, or the specified container.\n\x09 *\n\x09 * @param\x09""ChildPanel\x09\x09""CitySamplePanel instance to be added to this panel as a child.\n\x09 * @param\x09""ContainerWidget\x09Widget that the CitySamplePanel will be added to as a sub-widget, optional.\n\x09 * @param\x09""bSkipAnimation\x09Whether to skip any animation, optional.\n\x09 *\n\x09 * @note\x09If no container is specified, then the CitySamplePanel will be added to the viewport directly.\n\x09 *\n\x09 * @returns Reference to the newly added child CitySamplePanel instance.\n\x09*/" },
#endif
		{ "CPP_Default_bSkipAnimation", "false" },
		{ "CPP_Default_ContainerWidget", "None" },
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a CitySamplePanel instance as a child panel and adds it to the viewport, or the specified container.\n\n@param       ChildPanel              CitySamplePanel instance to be added to this panel as a child.\n@param       ContainerWidget Widget that the CitySamplePanel will be added to as a sub-widget, optional.\n@param       bSkipAnimation  Whether to skip any animation, optional.\n\n@note        If no container is specified, then the CitySamplePanel will be added to the viewport directly.\n\n@returns Reference to the newly added child CitySamplePanel instance." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "AddChildPanel", nullptr, nullptr, Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::CitySamplePanel_eventAddChildPanel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::CitySamplePanel_eventAddChildPanel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySamplePanel_AddChildPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_AddChildPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_AnimateIn_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySamplePanel_AnimateIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventAnimateIn_Parms, ReturnValue), Z_Construct_UClass_UUMGSequencePlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySamplePanel_AnimateIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_AnimateIn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_AnimateIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel|Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Hook for a BP event/function to play an intro animation\n\x09 * \n\x09 * @returns\x09UUMGSequencePlayer for the played intro animation\n\x09 * @note\x09OnAddedToPanel and OnAddChildPanel events will be bound to the animation finish event.\n\x09 *\x09\x09\x09However, if nullptr is returned, the events will fire immediately.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hook for a BP event/function to play an intro animation\n\n@returns     UUMGSequencePlayer for the played intro animation\n@note        OnAddedToPanel and OnAddChildPanel events will be bound to the animation finish event.\n                     However, if nullptr is returned, the events will fire immediately." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_AnimateIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "AnimateIn", nullptr, nullptr, Z_Construct_UFunction_UCitySamplePanel_AnimateIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_AnimateIn_Statics::PropPointers), sizeof(CitySamplePanel_eventAnimateIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_AnimateIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_AnimateIn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_AnimateIn_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySamplePanel_eventAnimateIn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySamplePanel_AnimateIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_AnimateIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_AnimateOut_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySamplePanel_AnimateOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventAnimateOut_Parms, ReturnValue), Z_Construct_UClass_UUMGSequencePlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySamplePanel_AnimateOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_AnimateOut_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_AnimateOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel|Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Hook for a BP event/function to play an outro animation.\n\x09 * \n\x09 * @note\x09OnRemovedFromPanel and OnChildPanelRemoved events will be bound to the animation finish event.\n\x09 *\x09\x09\x09However, if nullptr is returned, the events will fire immediately.\n\x09 * \n\x09 * @returns\x09UUMGSequencePlayer for the played outro animation\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hook for a BP event/function to play an outro animation.\n\n@note        OnRemovedFromPanel and OnChildPanelRemoved events will be bound to the animation finish event.\n                     However, if nullptr is returned, the events will fire immediately.\n\n@returns     UUMGSequencePlayer for the played outro animation" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_AnimateOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "AnimateOut", nullptr, nullptr, Z_Construct_UFunction_UCitySamplePanel_AnimateOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_AnimateOut_Statics::PropPointers), sizeof(CitySamplePanel_eventAnimateOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_AnimateOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_AnimateOut_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_AnimateOut_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySamplePanel_eventAnimateOut_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySamplePanel_AnimateOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_AnimateOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics
	{
		struct CitySamplePanel_eventCreateChildPanel_Parms
		{
			TSubclassOf<UCitySamplePanel>  PanelClass;
			FName Name;
			UPanelWidget* ContainerWidget;
			bool bSkipAnimation;
			UCitySamplePanel* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_PanelClass;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipAnimation_MetaData[];
#endif
		static void NewProp_bSkipAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::NewProp_PanelClass = { "PanelClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventCreateChildPanel_Parms, PanelClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventCreateChildPanel_Parms, Name), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::NewProp_ContainerWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::NewProp_ContainerWidget = { "ContainerWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventCreateChildPanel_Parms, ContainerWidget), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::NewProp_ContainerWidget_MetaData), Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::NewProp_ContainerWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::NewProp_bSkipAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::NewProp_bSkipAnimation_SetBit(void* Obj)
	{
		((CitySamplePanel_eventCreateChildPanel_Parms*)Obj)->bSkipAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::NewProp_bSkipAnimation = { "bSkipAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySamplePanel_eventCreateChildPanel_Parms), &Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::NewProp_bSkipAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::NewProp_bSkipAnimation_MetaData), Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::NewProp_bSkipAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventCreateChildPanel_Parms, ReturnValue), Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::NewProp_PanelClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::NewProp_ContainerWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::NewProp_bSkipAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Creates a panel of the given class type, adds it as a child panel, and adds it to the viewport, or the specified container.\n\x09 *\n\x09 * @param\x09PanelClass\x09\x09""Class used to create the new CitySamplePanel.\n\x09 * @param\x09Name\x09\x09\x09Name for the new CitySamplePanel.\n\x09 * @param\x09""ContainerWidget\x09Widget that the CitySamplePanel will be added to as a sub-widget, optional.\n\x09 * @param\x09""bSkipAnimation\x09Whether to skip any animation, optional.\n\x09 *\n\x09 * @note\x09If no container is specified, then the CitySamplePanel will be added to the viewport directly.\n\x09 * \n\x09 * @returns\x09Reference to the newly created and added CitySamplePanel instance.\n\x09*/" },
#endif
		{ "CPP_Default_bSkipAnimation", "false" },
		{ "CPP_Default_ContainerWidget", "None" },
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a panel of the given class type, adds it as a child panel, and adds it to the viewport, or the specified container.\n\n@param       PanelClass              Class used to create the new CitySamplePanel.\n@param       Name                    Name for the new CitySamplePanel.\n@param       ContainerWidget Widget that the CitySamplePanel will be added to as a sub-widget, optional.\n@param       bSkipAnimation  Whether to skip any animation, optional.\n\n@note        If no container is specified, then the CitySamplePanel will be added to the viewport directly.\n\n@returns     Reference to the newly created and added CitySamplePanel instance." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "CreateChildPanel", nullptr, nullptr, Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::CitySamplePanel_eventCreateChildPanel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::CitySamplePanel_eventCreateChildPanel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_GetActivePanel_Statics
	{
		struct CitySamplePanel_eventGetActivePanel_Parms
		{
			UCitySamplePanel* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_GetActivePanel_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySamplePanel_GetActivePanel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventGetActivePanel_Parms, ReturnValue), Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_GetActivePanel_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UCitySamplePanel_GetActivePanel_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySamplePanel_GetActivePanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_GetActivePanel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_GetActivePanel_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Returns the child CitySamplePanel most recently added to the viewport, if any children were added to the viewport.\n\x09 * Otherwise returns this, if there were none or all children were added as sub-widgets. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the child CitySamplePanel most recently added to the viewport, if any children were added to the viewport.\nOtherwise returns this, if there were none or all children were added as sub-widgets." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_GetActivePanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "GetActivePanel", nullptr, nullptr, Z_Construct_UFunction_UCitySamplePanel_GetActivePanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_GetActivePanel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySamplePanel_GetActivePanel_Statics::CitySamplePanel_eventGetActivePanel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_GetActivePanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_GetActivePanel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_GetActivePanel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySamplePanel_GetActivePanel_Statics::CitySamplePanel_eventGetActivePanel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySamplePanel_GetActivePanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_GetActivePanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_GetChildPanels_Statics
	{
		struct CitySamplePanel_eventGetChildPanels_Parms
		{
			TArray<UCitySamplePanel*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySamplePanel_GetChildPanels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_GetChildPanels_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCitySamplePanel_GetChildPanels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventGetChildPanels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_GetChildPanels_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UCitySamplePanel_GetChildPanels_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySamplePanel_GetChildPanels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_GetChildPanels_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_GetChildPanels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_GetChildPanels_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the list of dynamically added CitySamplePanel instances contained by this one. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the list of dynamically added CitySamplePanel instances contained by this one." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_GetChildPanels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "GetChildPanels", nullptr, nullptr, Z_Construct_UFunction_UCitySamplePanel_GetChildPanels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_GetChildPanels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySamplePanel_GetChildPanels_Statics::CitySamplePanel_eventGetChildPanels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_GetChildPanels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_GetChildPanels_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_GetChildPanels_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySamplePanel_GetChildPanels_Statics::CitySamplePanel_eventGetChildPanels_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySamplePanel_GetChildPanels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_GetChildPanels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_GetControlsFlavor_Statics
	{
		struct CitySamplePanel_eventGetControlsFlavor_Parms
		{
			ECitySampleControlsFlavor ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySamplePanel_GetControlsFlavor_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCitySamplePanel_GetControlsFlavor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventGetControlsFlavor_Parms, ReturnValue), Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor, METADATA_PARAMS(0, nullptr) }; // 2226154879
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySamplePanel_GetControlsFlavor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_GetControlsFlavor_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_GetControlsFlavor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_GetControlsFlavor_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the current controls flavor of the UI, if applicable. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current controls flavor of the UI, if applicable." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_GetControlsFlavor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "GetControlsFlavor", nullptr, nullptr, Z_Construct_UFunction_UCitySamplePanel_GetControlsFlavor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_GetControlsFlavor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySamplePanel_GetControlsFlavor_Statics::CitySamplePanel_eventGetControlsFlavor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_GetControlsFlavor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_GetControlsFlavor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_GetControlsFlavor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySamplePanel_GetControlsFlavor_Statics::CitySamplePanel_eventGetControlsFlavor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySamplePanel_GetControlsFlavor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_GetControlsFlavor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySamplePlayer_Statics
	{
		struct CitySamplePanel_eventGetOwningCitySamplePlayer_Parms
		{
			ACitySamplePlayerController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySamplePlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventGetOwningCitySamplePlayer_Parms, ReturnValue), Z_Construct_UClass_ACitySamplePlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySamplePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySamplePlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySamplePlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the owning CitySamplePlayerController, if applicable. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the owning CitySamplePlayerController, if applicable." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySamplePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "GetOwningCitySamplePlayer", nullptr, nullptr, Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySamplePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySamplePlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySamplePlayer_Statics::CitySamplePanel_eventGetOwningCitySamplePlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySamplePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySamplePlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySamplePlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySamplePlayer_Statics::CitySamplePanel_eventGetOwningCitySamplePlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySamplePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySamplePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySampleUIComponent_Statics
	{
		struct CitySamplePanel_eventGetOwningCitySampleUIComponent_Parms
		{
			UCitySampleUIComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySampleUIComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySampleUIComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventGetOwningCitySampleUIComponent_Parms, ReturnValue), Z_Construct_UClass_UCitySampleUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySampleUIComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySampleUIComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySampleUIComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySampleUIComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySampleUIComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the owning player's CitySampleUIComponent, if applicable. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the owning player's CitySampleUIComponent, if applicable." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySampleUIComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "GetOwningCitySampleUIComponent", nullptr, nullptr, Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySampleUIComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySampleUIComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySampleUIComponent_Statics::CitySamplePanel_eventGetOwningCitySampleUIComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySampleUIComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySampleUIComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySampleUIComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySampleUIComponent_Statics::CitySamplePanel_eventGetOwningCitySampleUIComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySampleUIComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySampleUIComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_GetParentPanel_Statics
	{
		struct CitySamplePanel_eventGetParentPanel_Parms
		{
			UCitySamplePanel* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_GetParentPanel_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySamplePanel_GetParentPanel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventGetParentPanel_Parms, ReturnValue), Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_GetParentPanel_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UCitySamplePanel_GetParentPanel_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySamplePanel_GetParentPanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_GetParentPanel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_GetParentPanel_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the parent CitySamplePanel, if this panel is a child. Otherwise, nullptr. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the parent CitySamplePanel, if this panel is a child. Otherwise, nullptr." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_GetParentPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "GetParentPanel", nullptr, nullptr, Z_Construct_UFunction_UCitySamplePanel_GetParentPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_GetParentPanel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySamplePanel_GetParentPanel_Statics::CitySamplePanel_eventGetParentPanel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_GetParentPanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_GetParentPanel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_GetParentPanel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySamplePanel_GetParentPanel_Statics::CitySamplePanel_eventGetParentPanel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySamplePanel_GetParentPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_GetParentPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_HasControlsFlavor_Statics
	{
		struct CitySamplePanel_eventHasControlsFlavor_Parms
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
	void Z_Construct_UFunction_UCitySamplePanel_HasControlsFlavor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySamplePanel_eventHasControlsFlavor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySamplePanel_HasControlsFlavor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySamplePanel_eventHasControlsFlavor_Parms), &Z_Construct_UFunction_UCitySamplePanel_HasControlsFlavor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySamplePanel_HasControlsFlavor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_HasControlsFlavor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_HasControlsFlavor_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the panel is able to be configured for the current controls flavor. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the panel is able to be configured for the current controls flavor." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_HasControlsFlavor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "HasControlsFlavor", nullptr, nullptr, Z_Construct_UFunction_UCitySamplePanel_HasControlsFlavor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_HasControlsFlavor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySamplePanel_HasControlsFlavor_Statics::CitySamplePanel_eventHasControlsFlavor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_HasControlsFlavor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_HasControlsFlavor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_HasControlsFlavor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySamplePanel_HasControlsFlavor_Statics::CitySamplePanel_eventHasControlsFlavor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySamplePanel_HasControlsFlavor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_HasControlsFlavor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_IsHidingAllPanels_Statics
	{
		struct CitySamplePanel_eventIsHidingAllPanels_Parms
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
	void Z_Construct_UFunction_UCitySamplePanel_IsHidingAllPanels_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySamplePanel_eventIsHidingAllPanels_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySamplePanel_IsHidingAllPanels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySamplePanel_eventIsHidingAllPanels_Parms), &Z_Construct_UFunction_UCitySamplePanel_IsHidingAllPanels_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySamplePanel_IsHidingAllPanels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_IsHidingAllPanels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_IsHidingAllPanels_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Whether this panel and all child panels should be hidden after a call to SetAllPanelsHidden.\n\x09 * @note\x09This does not reflect visibility of any panels handled through means other than SetAllPanelsHidden.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this panel and all child panels should be hidden after a call to SetAllPanelsHidden.\n@note        This does not reflect visibility of any panels handled through means other than SetAllPanelsHidden." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_IsHidingAllPanels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "IsHidingAllPanels", nullptr, nullptr, Z_Construct_UFunction_UCitySamplePanel_IsHidingAllPanels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_IsHidingAllPanels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySamplePanel_IsHidingAllPanels_Statics::CitySamplePanel_eventIsHidingAllPanels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_IsHidingAllPanels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_IsHidingAllPanels_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_IsHidingAllPanels_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySamplePanel_IsHidingAllPanels_Statics::CitySamplePanel_eventIsHidingAllPanels_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySamplePanel_IsHidingAllPanels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_IsHidingAllPanels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_OnAddedChildPanel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildPanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildPanel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_OnAddedChildPanel_Statics::NewProp_ChildPanel_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySamplePanel_OnAddedChildPanel_Statics::NewProp_ChildPanel = { "ChildPanel", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventOnAddedChildPanel_Parms, ChildPanel), Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_OnAddedChildPanel_Statics::NewProp_ChildPanel_MetaData), Z_Construct_UFunction_UCitySamplePanel_OnAddedChildPanel_Statics::NewProp_ChildPanel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySamplePanel_OnAddedChildPanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_OnAddedChildPanel_Statics::NewProp_ChildPanel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_OnAddedChildPanel_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hook for a BP event/function when a child panel is added to this panel */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hook for a BP event/function when a child panel is added to this panel" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_OnAddedChildPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "OnAddedChildPanel", nullptr, nullptr, Z_Construct_UFunction_UCitySamplePanel_OnAddedChildPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_OnAddedChildPanel_Statics::PropPointers), sizeof(CitySamplePanel_eventOnAddedChildPanel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_OnAddedChildPanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_OnAddedChildPanel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_OnAddedChildPanel_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySamplePanel_eventOnAddedChildPanel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySamplePanel_OnAddedChildPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_OnAddedChildPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_OnAddedToPanel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_OnAddedToPanel_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hook for a BP event/function when this panel is added as a child to a parent panel */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hook for a BP event/function when this panel is added as a child to a parent panel" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_OnAddedToPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "OnAddedToPanel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_OnAddedToPanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_OnAddedToPanel_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCitySamplePanel_OnAddedToPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_OnAddedToPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateIn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildPanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildPanel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateIn_Statics::NewProp_ChildPanel_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateIn_Statics::NewProp_ChildPanel = { "ChildPanel", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventOnChildFinishedAnimateIn_Parms, ChildPanel), Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateIn_Statics::NewProp_ChildPanel_MetaData), Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateIn_Statics::NewProp_ChildPanel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateIn_Statics::NewProp_ChildPanel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel|Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * BP hook to handle when a child panel finishes animating in.\n\x09 *\n\x09 * @note\x09""Called immediately if AnimateIn returns nullptr or the animation was skipped.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP hook to handle when a child panel finishes animating in.\n\n@note        Called immediately if AnimateIn returns nullptr or the animation was skipped." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "OnChildFinishedAnimateIn", nullptr, nullptr, Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateIn_Statics::PropPointers), sizeof(CitySamplePanel_eventOnChildFinishedAnimateIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateIn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateIn_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySamplePanel_eventOnChildFinishedAnimateIn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateOut_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildPanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildPanel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateOut_Statics::NewProp_ChildPanel_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateOut_Statics::NewProp_ChildPanel = { "ChildPanel", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventOnChildFinishedAnimateOut_Parms, ChildPanel), Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateOut_Statics::NewProp_ChildPanel_MetaData), Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateOut_Statics::NewProp_ChildPanel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateOut_Statics::NewProp_ChildPanel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel|Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * BP hook to handle when a child panel finishes animating out. \n\x09 * \n\x09 * @note\x09""Called immediately if AnimateOut returns nullptr or the animation was skipped.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP hook to handle when a child panel finishes animating out.\n\n@note        Called immediately if AnimateOut returns nullptr or the animation was skipped." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "OnChildFinishedAnimateOut", nullptr, nullptr, Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateOut_Statics::PropPointers), sizeof(CitySamplePanel_eventOnChildFinishedAnimateOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateOut_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateOut_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySamplePanel_eventOnChildFinishedAnimateOut_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_OnControlsFlavorChanged_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewControlsFlavor_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewControlsFlavor_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewControlsFlavor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySamplePanel_OnControlsFlavorChanged_Statics::NewProp_NewControlsFlavor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_OnControlsFlavorChanged_Statics::NewProp_NewControlsFlavor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCitySamplePanel_OnControlsFlavorChanged_Statics::NewProp_NewControlsFlavor = { "NewControlsFlavor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventOnControlsFlavorChanged_Parms, NewControlsFlavor), Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_OnControlsFlavorChanged_Statics::NewProp_NewControlsFlavor_MetaData), Z_Construct_UFunction_UCitySamplePanel_OnControlsFlavorChanged_Statics::NewProp_NewControlsFlavor_MetaData) }; // 2226154879
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySamplePanel_OnControlsFlavorChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_OnControlsFlavorChanged_Statics::NewProp_NewControlsFlavor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_OnControlsFlavorChanged_Statics::NewProp_NewControlsFlavor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_OnControlsFlavorChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hook for a BP event/function when the controls flavor for the UI is changed. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hook for a BP event/function when the controls flavor for the UI is changed." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_OnControlsFlavorChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "OnControlsFlavorChanged", nullptr, nullptr, Z_Construct_UFunction_UCitySamplePanel_OnControlsFlavorChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_OnControlsFlavorChanged_Statics::PropPointers), sizeof(CitySamplePanel_eventOnControlsFlavorChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_OnControlsFlavorChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_OnControlsFlavorChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_OnControlsFlavorChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySamplePanel_eventOnControlsFlavorChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySamplePanel_OnControlsFlavorChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_OnControlsFlavorChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_OnFinishedAnimateIn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_OnFinishedAnimateIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel|Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * BP hook to handle when the panel finishes animating in.\n\x09 *\n\x09 * @note\x09""Called immediately if AnimateIn returns nullptr, or the animation was skipped.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP hook to handle when the panel finishes animating in.\n\n@note        Called immediately if AnimateIn returns nullptr, or the animation was skipped." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_OnFinishedAnimateIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "OnFinishedAnimateIn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_OnFinishedAnimateIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_OnFinishedAnimateIn_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCitySamplePanel_OnFinishedAnimateIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_OnFinishedAnimateIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_OnFinishedAnimateOut_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_OnFinishedAnimateOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel|Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * BP hook to handle when the panel finishes animating out. \n\x09 * \n\x09 * @note\x09""Called immediately if AnimateOut returns nullptr, or the animation was skipped. \n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP hook to handle when the panel finishes animating out.\n\n@note        Called immediately if AnimateOut returns nullptr, or the animation was skipped." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_OnFinishedAnimateOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "OnFinishedAnimateOut", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_OnFinishedAnimateOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_OnFinishedAnimateOut_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCitySamplePanel_OnFinishedAnimateOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_OnFinishedAnimateOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_OnRemoveChildPanel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildPanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildPanel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_OnRemoveChildPanel_Statics::NewProp_ChildPanel_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySamplePanel_OnRemoveChildPanel_Statics::NewProp_ChildPanel = { "ChildPanel", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventOnRemoveChildPanel_Parms, ChildPanel), Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_OnRemoveChildPanel_Statics::NewProp_ChildPanel_MetaData), Z_Construct_UFunction_UCitySamplePanel_OnRemoveChildPanel_Statics::NewProp_ChildPanel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySamplePanel_OnRemoveChildPanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_OnRemoveChildPanel_Statics::NewProp_ChildPanel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_OnRemoveChildPanel_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hook for a BP event/function when a child panel is about to be removed from this panel */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hook for a BP event/function when a child panel is about to be removed from this panel" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_OnRemoveChildPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "OnRemoveChildPanel", nullptr, nullptr, Z_Construct_UFunction_UCitySamplePanel_OnRemoveChildPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_OnRemoveChildPanel_Statics::PropPointers), sizeof(CitySamplePanel_eventOnRemoveChildPanel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_OnRemoveChildPanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_OnRemoveChildPanel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_OnRemoveChildPanel_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySamplePanel_eventOnRemoveChildPanel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySamplePanel_OnRemoveChildPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_OnRemoveChildPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_OnRemoveFromPanel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_OnRemoveFromPanel_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hook for a BP event/function when this panel is about to be removed from a parent panel */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hook for a BP event/function when this panel is about to be removed from a parent panel" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_OnRemoveFromPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "OnRemoveFromPanel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_OnRemoveFromPanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_OnRemoveFromPanel_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCitySamplePanel_OnRemoveFromPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_OnRemoveFromPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_Input_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::NewProp_Input_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventProcessInput_Parms, Input), Z_Construct_UEnum_CitySample_ECitySamplePanelInput, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::NewProp_Input_MetaData), Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::NewProp_Input_MetaData) }; // 3843730727
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::NewProp_ActionValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::NewProp_ActionValue = { "ActionValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventProcessInput_Parms, ActionValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::NewProp_ActionValue_MetaData), Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::NewProp_ActionValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::NewProp_ElapsedTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventProcessInput_Parms, ElapsedTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::NewProp_ElapsedTime_MetaData), Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::NewProp_ElapsedTime_MetaData) };
	void Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySamplePanel_eventProcessInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySamplePanel_eventProcessInput_Parms), &Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::NewProp_Input_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::NewProp_ActionValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::NewProp_ElapsedTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Input, ActionValue" },
		{ "Category", "CitySamplePanel|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Hook for a BP event/function to process an input type forwarded from the PlayerController\n\x09 * \n\x09 * @param\x09Input Enum value representing the input event type to be processed\n\x09 * @return\x09Should return true when handled and false otherwise.\n\x09 */" },
#endif
		{ "CPP_Default_ElapsedTime", "0.000000" },
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hook for a BP event/function to process an input type forwarded from the PlayerController\n\n@param       Input Enum value representing the input event type to be processed\n@return      Should return true when handled and false otherwise." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "ProcessInput", nullptr, nullptr, Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::PropPointers), sizeof(CitySamplePanel_eventProcessInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySamplePanel_eventProcessInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySamplePanel_ProcessInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_ProcessInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_ReceiveUpdatePanel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningCitySampleUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningCitySampleUI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_ReceiveUpdatePanel_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySamplePanel_ReceiveUpdatePanel_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventReceiveUpdatePanel_Parms, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_ReceiveUpdatePanel_Statics::NewProp_DeltaTime_MetaData), Z_Construct_UFunction_UCitySamplePanel_ReceiveUpdatePanel_Statics::NewProp_DeltaTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_ReceiveUpdatePanel_Statics::NewProp_OwningCitySampleUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySamplePanel_ReceiveUpdatePanel_Statics::NewProp_OwningCitySampleUI = { "OwningCitySampleUI", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventReceiveUpdatePanel_Parms, OwningCitySampleUI), Z_Construct_UClass_UCitySampleUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_ReceiveUpdatePanel_Statics::NewProp_OwningCitySampleUI_MetaData), Z_Construct_UFunction_UCitySamplePanel_ReceiveUpdatePanel_Statics::NewProp_OwningCitySampleUI_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySamplePanel_ReceiveUpdatePanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_ReceiveUpdatePanel_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_ReceiveUpdatePanel_Statics::NewProp_OwningCitySampleUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_ReceiveUpdatePanel_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hook for a BP event/function during a call to UpdatePanel. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hook for a BP event/function during a call to UpdatePanel." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_ReceiveUpdatePanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "ReceiveUpdatePanel", nullptr, nullptr, Z_Construct_UFunction_UCitySamplePanel_ReceiveUpdatePanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_ReceiveUpdatePanel_Statics::PropPointers), sizeof(CitySamplePanel_eventReceiveUpdatePanel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_ReceiveUpdatePanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_ReceiveUpdatePanel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_ReceiveUpdatePanel_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySamplePanel_eventReceiveUpdatePanel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySamplePanel_ReceiveUpdatePanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_ReceiveUpdatePanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanel_Statics
	{
		struct CitySamplePanel_eventRemoveChildPanel_Parms
		{
			UCitySamplePanel* ChildPanel;
			bool bSkipAnimation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildPanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildPanel;
		static void NewProp_bSkipAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipAnimation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanel_Statics::NewProp_ChildPanel_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanel_Statics::NewProp_ChildPanel = { "ChildPanel", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventRemoveChildPanel_Parms, ChildPanel), Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanel_Statics::NewProp_ChildPanel_MetaData), Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanel_Statics::NewProp_ChildPanel_MetaData) };
	void Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanel_Statics::NewProp_bSkipAnimation_SetBit(void* Obj)
	{
		((CitySamplePanel_eventRemoveChildPanel_Parms*)Obj)->bSkipAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanel_Statics::NewProp_bSkipAnimation = { "bSkipAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySamplePanel_eventRemoveChildPanel_Parms), &Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanel_Statics::NewProp_bSkipAnimation_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanel_Statics::NewProp_ChildPanel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanel_Statics::NewProp_bSkipAnimation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanel_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Explicitly removes the CitySamplePanel as a child of this one, removing it from the screen, if applicable. */" },
#endif
		{ "CPP_Default_bSkipAnimation", "false" },
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Explicitly removes the CitySamplePanel as a child of this one, removing it from the screen, if applicable." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "RemoveChildPanel", nullptr, nullptr, Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanel_Statics::CitySamplePanel_eventRemoveChildPanel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanel_Statics::CitySamplePanel_eventRemoveChildPanel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanelChecked_Statics
	{
		struct CitySamplePanel_eventRemoveChildPanelChecked_Parms
		{
			UCitySamplePanel* ChildPanel;
			bool bSkipAnimation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildPanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildPanel;
		static void NewProp_bSkipAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipAnimation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanelChecked_Statics::NewProp_ChildPanel_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanelChecked_Statics::NewProp_ChildPanel = { "ChildPanel", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventRemoveChildPanelChecked_Parms, ChildPanel), Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanelChecked_Statics::NewProp_ChildPanel_MetaData), Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanelChecked_Statics::NewProp_ChildPanel_MetaData) };
	void Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanelChecked_Statics::NewProp_bSkipAnimation_SetBit(void* Obj)
	{
		((CitySamplePanel_eventRemoveChildPanelChecked_Parms*)Obj)->bSkipAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanelChecked_Statics::NewProp_bSkipAnimation = { "bSkipAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySamplePanel_eventRemoveChildPanelChecked_Parms), &Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanelChecked_Statics::NewProp_bSkipAnimation_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanelChecked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanelChecked_Statics::NewProp_ChildPanel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanelChecked_Statics::NewProp_bSkipAnimation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanelChecked_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Explicitly removes the CitySamplePanel as a child of this one, removing it from the screen, if applicable.\n\x09 * Checks that the given CitySamplePanel to be removed is not null and is a valid child.\n\x09*/" },
#endif
		{ "CPP_Default_bSkipAnimation", "false" },
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Explicitly removes the CitySamplePanel as a child of this one, removing it from the screen, if applicable.\nChecks that the given CitySamplePanel to be removed is not null and is a valid child." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanelChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "RemoveChildPanelChecked", nullptr, nullptr, Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanelChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanelChecked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanelChecked_Statics::CitySamplePanel_eventRemoveChildPanelChecked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanelChecked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanelChecked_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanelChecked_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanelChecked_Statics::CitySamplePanel_eventRemoveChildPanelChecked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanelChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanelChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_SetAllPanelsHidden_Statics
	{
		struct CitySamplePanel_eventSetAllPanelsHidden_Parms
		{
			bool bShouldBeHidden;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeHidden_MetaData[];
#endif
		static void NewProp_bShouldBeHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeHidden;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_SetAllPanelsHidden_Statics::NewProp_bShouldBeHidden_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCitySamplePanel_SetAllPanelsHidden_Statics::NewProp_bShouldBeHidden_SetBit(void* Obj)
	{
		((CitySamplePanel_eventSetAllPanelsHidden_Parms*)Obj)->bShouldBeHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySamplePanel_SetAllPanelsHidden_Statics::NewProp_bShouldBeHidden = { "bShouldBeHidden", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySamplePanel_eventSetAllPanelsHidden_Parms), &Z_Construct_UFunction_UCitySamplePanel_SetAllPanelsHidden_Statics::NewProp_bShouldBeHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_SetAllPanelsHidden_Statics::NewProp_bShouldBeHidden_MetaData), Z_Construct_UFunction_UCitySamplePanel_SetAllPanelsHidden_Statics::NewProp_bShouldBeHidden_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySamplePanel_SetAllPanelsHidden_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_SetAllPanelsHidden_Statics::NewProp_bShouldBeHidden,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_SetAllPanelsHidden_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Toggles whether the panel and all its child panels are hidden, effectively hiding the entire hierarchy.\n\x09 *\n\x09 * @note\x09""Calling SetVisibility on the parent panel and any child panels after being hidden will not be tracked.\n\x09 *\x09\x09\x09When going from hidden to not hidden, this will revert the visibility of the UI to the state it was in before hiding.\n\x09 */" },
#endif
		{ "CPP_Default_bShouldBeHidden", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggles whether the panel and all its child panels are hidden, effectively hiding the entire hierarchy.\n\n@note        Calling SetVisibility on the parent panel and any child panels after being hidden will not be tracked.\n                     When going from hidden to not hidden, this will revert the visibility of the UI to the state it was in before hiding." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_SetAllPanelsHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "SetAllPanelsHidden", nullptr, nullptr, Z_Construct_UFunction_UCitySamplePanel_SetAllPanelsHidden_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_SetAllPanelsHidden_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySamplePanel_SetAllPanelsHidden_Statics::CitySamplePanel_eventSetAllPanelsHidden_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_SetAllPanelsHidden_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_SetAllPanelsHidden_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_SetAllPanelsHidden_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySamplePanel_SetAllPanelsHidden_Statics::CitySamplePanel_eventSetAllPanelsHidden_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySamplePanel_SetAllPanelsHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_SetAllPanelsHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_SetControlsFlavor_Statics
	{
		struct CitySamplePanel_eventSetControlsFlavor_Parms
		{
			ECitySampleControlsFlavor NewControlsFlavor;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewControlsFlavor_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewControlsFlavor_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewControlsFlavor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySamplePanel_SetControlsFlavor_Statics::NewProp_NewControlsFlavor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_SetControlsFlavor_Statics::NewProp_NewControlsFlavor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCitySamplePanel_SetControlsFlavor_Statics::NewProp_NewControlsFlavor = { "NewControlsFlavor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventSetControlsFlavor_Parms, NewControlsFlavor), Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_SetControlsFlavor_Statics::NewProp_NewControlsFlavor_MetaData), Z_Construct_UFunction_UCitySamplePanel_SetControlsFlavor_Statics::NewProp_NewControlsFlavor_MetaData) }; // 2226154879
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySamplePanel_SetControlsFlavor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_SetControlsFlavor_Statics::NewProp_NewControlsFlavor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_SetControlsFlavor_Statics::NewProp_NewControlsFlavor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_SetControlsFlavor_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the controls flavor. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the controls flavor." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_SetControlsFlavor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "SetControlsFlavor", nullptr, nullptr, Z_Construct_UFunction_UCitySamplePanel_SetControlsFlavor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_SetControlsFlavor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySamplePanel_SetControlsFlavor_Statics::CitySamplePanel_eventSetControlsFlavor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_SetControlsFlavor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_SetControlsFlavor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_SetControlsFlavor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySamplePanel_SetControlsFlavor_Statics::CitySamplePanel_eventSetControlsFlavor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySamplePanel_SetControlsFlavor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_SetControlsFlavor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySamplePanel_UpdatePanel_Statics
	{
		struct CitySamplePanel_eventUpdatePanel_Parms
		{
			float DeltaTime;
			const UCitySampleUIComponent* OwningCitySampleUI;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningCitySampleUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningCitySampleUI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_UpdatePanel_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySamplePanel_UpdatePanel_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventUpdatePanel_Parms, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_UpdatePanel_Statics::NewProp_DeltaTime_MetaData), Z_Construct_UFunction_UCitySamplePanel_UpdatePanel_Statics::NewProp_DeltaTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_UpdatePanel_Statics::NewProp_OwningCitySampleUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySamplePanel_UpdatePanel_Statics::NewProp_OwningCitySampleUI = { "OwningCitySampleUI", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePanel_eventUpdatePanel_Parms, OwningCitySampleUI), Z_Construct_UClass_UCitySampleUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_UpdatePanel_Statics::NewProp_OwningCitySampleUI_MetaData), Z_Construct_UFunction_UCitySamplePanel_UpdatePanel_Statics::NewProp_OwningCitySampleUI_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySamplePanel_UpdatePanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_UpdatePanel_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySamplePanel_UpdatePanel_Statics::NewProp_OwningCitySampleUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySamplePanel_UpdatePanel_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Virtual method for implementing panel specific updates, may be called during tick by UCitySampleUIComponent or manually, if desired. */" },
#endif
		{ "CPP_Default_DeltaTime", "0.000000" },
		{ "CPP_Default_OwningCitySampleUI", "None" },
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Virtual method for implementing panel specific updates, may be called during tick by UCitySampleUIComponent or manually, if desired." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySamplePanel_UpdatePanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySamplePanel, nullptr, "UpdatePanel", nullptr, nullptr, Z_Construct_UFunction_UCitySamplePanel_UpdatePanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_UpdatePanel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySamplePanel_UpdatePanel_Statics::CitySamplePanel_eventUpdatePanel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_UpdatePanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySamplePanel_UpdatePanel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySamplePanel_UpdatePanel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySamplePanel_UpdatePanel_Statics::CitySamplePanel_eventUpdatePanel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySamplePanel_UpdatePanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySamplePanel_UpdatePanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySamplePanel);
	UClass* Z_Construct_UClass_UCitySamplePanel_NoRegister()
	{
		return UCitySamplePanel::StaticClass();
	}
	struct Z_Construct_UClass_UCitySamplePanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ControlsFlavor_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlsFlavor_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ControlsFlavor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DesignerControlsFlavor_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesignerControlsFlavor_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DesignerControlsFlavor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildPanels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildPanels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildPanels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivePanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivePanel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsASubWidget_MetaData[];
#endif
		static void NewProp_bIsASubWidget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsASubWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHidingAllPanels_MetaData[];
#endif
		static void NewProp_bIsHidingAllPanels_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHidingAllPanels;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CachedVisibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CachedVisibility;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimateInPanelMapping_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimateInPanelMapping_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimateInPanelMapping_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AnimateInPanelMapping;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimateOutPanelMapping_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimateOutPanelMapping_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimateOutPanelMapping_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AnimateOutPanelMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingStateData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PendingStateData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySamplePanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySamplePanel_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySamplePanel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySamplePanel_AddChildPanel, "AddChildPanel" }, // 1043938791
		{ &Z_Construct_UFunction_UCitySamplePanel_AnimateIn, "AnimateIn" }, // 3995828918
		{ &Z_Construct_UFunction_UCitySamplePanel_AnimateOut, "AnimateOut" }, // 2394741854
		{ &Z_Construct_UFunction_UCitySamplePanel_CreateChildPanel, "CreateChildPanel" }, // 3805601460
		{ &Z_Construct_UFunction_UCitySamplePanel_GetActivePanel, "GetActivePanel" }, // 142961746
		{ &Z_Construct_UFunction_UCitySamplePanel_GetChildPanels, "GetChildPanels" }, // 747033179
		{ &Z_Construct_UFunction_UCitySamplePanel_GetControlsFlavor, "GetControlsFlavor" }, // 26587466
		{ &Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySamplePlayer, "GetOwningCitySamplePlayer" }, // 2802204716
		{ &Z_Construct_UFunction_UCitySamplePanel_GetOwningCitySampleUIComponent, "GetOwningCitySampleUIComponent" }, // 1529100840
		{ &Z_Construct_UFunction_UCitySamplePanel_GetParentPanel, "GetParentPanel" }, // 1844555548
		{ &Z_Construct_UFunction_UCitySamplePanel_HasControlsFlavor, "HasControlsFlavor" }, // 2289696546
		{ &Z_Construct_UFunction_UCitySamplePanel_IsHidingAllPanels, "IsHidingAllPanels" }, // 3138018451
		{ &Z_Construct_UFunction_UCitySamplePanel_OnAddedChildPanel, "OnAddedChildPanel" }, // 4044690282
		{ &Z_Construct_UFunction_UCitySamplePanel_OnAddedToPanel, "OnAddedToPanel" }, // 3496797108
		{ &Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateIn, "OnChildFinishedAnimateIn" }, // 2032418995
		{ &Z_Construct_UFunction_UCitySamplePanel_OnChildFinishedAnimateOut, "OnChildFinishedAnimateOut" }, // 3740348199
		{ &Z_Construct_UFunction_UCitySamplePanel_OnControlsFlavorChanged, "OnControlsFlavorChanged" }, // 258827985
		{ &Z_Construct_UFunction_UCitySamplePanel_OnFinishedAnimateIn, "OnFinishedAnimateIn" }, // 858003943
		{ &Z_Construct_UFunction_UCitySamplePanel_OnFinishedAnimateOut, "OnFinishedAnimateOut" }, // 3283261647
		{ &Z_Construct_UFunction_UCitySamplePanel_OnRemoveChildPanel, "OnRemoveChildPanel" }, // 576459181
		{ &Z_Construct_UFunction_UCitySamplePanel_OnRemoveFromPanel, "OnRemoveFromPanel" }, // 3258702088
		{ &Z_Construct_UFunction_UCitySamplePanel_ProcessInput, "ProcessInput" }, // 1833006815
		{ &Z_Construct_UFunction_UCitySamplePanel_ReceiveUpdatePanel, "ReceiveUpdatePanel" }, // 3620554099
		{ &Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanel, "RemoveChildPanel" }, // 167030045
		{ &Z_Construct_UFunction_UCitySamplePanel_RemoveChildPanelChecked, "RemoveChildPanelChecked" }, // 2621580372
		{ &Z_Construct_UFunction_UCitySamplePanel_SetAllPanelsHidden, "SetAllPanelsHidden" }, // 3637342810
		{ &Z_Construct_UFunction_UCitySamplePanel_SetControlsFlavor, "SetControlsFlavor" }, // 3488188175
		{ &Z_Construct_UFunction_UCitySamplePanel_UpdatePanel, "UpdatePanel" }, // 2805815008
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySamplePanel_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySamplePanel_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Basic UI element that provides a simple interface for hierarchically\n * adding and removing UCitySamplePanel derived BP widgets dynamically at runtime.\n */" },
#endif
		{ "IncludePath", "UI/CitySamplePanel.h" },
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic UI element that provides a simple interface for hierarchically\nadding and removing UCitySamplePanel derived BP widgets dynamically at runtime." },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_ControlsFlavor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_ControlsFlavor_MetaData[] = {
		{ "Category", "CitySamplePanel" },
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_ControlsFlavor = { "ControlsFlavor", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySamplePanel, ControlsFlavor), Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_ControlsFlavor_MetaData), Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_ControlsFlavor_MetaData) }; // 2226154879
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_DesignerControlsFlavor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_DesignerControlsFlavor_MetaData[] = {
		{ "Category", "CitySamplePanel|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The controls flavor applied to buttons in designer view. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The controls flavor applied to buttons in designer view." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_DesignerControlsFlavor = { "DesignerControlsFlavor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySamplePanel, DesignerControlsFlavor), Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_DesignerControlsFlavor_MetaData), Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_DesignerControlsFlavor_MetaData) }; // 2226154879
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** CitySamplePanel instance that contains this one, if dynamically added using CitySamplePanel methods. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CitySamplePanel instance that contains this one, if dynamically added using CitySamplePanel methods." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x00400000000a2009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySamplePanel, Parent), Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_Parent_MetaData), Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_Parent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_ChildPanels_Inner = { "ChildPanels", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_ChildPanels_MetaData[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of CitySamplePanel instances this panel contains, if added dynamically using CitySamplePanel methods. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of CitySamplePanel instances this panel contains, if added dynamically using CitySamplePanel methods." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_ChildPanels = { "ChildPanels", nullptr, (EPropertyFlags)0x0040008000022009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySamplePanel, ChildPanels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_ChildPanels_MetaData), Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_ChildPanels_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_ActivePanel_MetaData[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The most recently added FrosyPanel instance that was not added as a sub-widget, or itself. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The most recently added FrosyPanel instance that was not added as a sub-widget, or itself." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_ActivePanel = { "ActivePanel", nullptr, (EPropertyFlags)0x00400000000a2009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySamplePanel, ActivePanel), Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_ActivePanel_MetaData), Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_ActivePanel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_bIsASubWidget_MetaData[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the CitySamplePanel was added as a sub-widget. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the CitySamplePanel was added as a sub-widget." },
#endif
	};
#endif
	void Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_bIsASubWidget_SetBit(void* Obj)
	{
		((UCitySamplePanel*)Obj)->bIsASubWidget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_bIsASubWidget = { "bIsASubWidget", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySamplePanel), &Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_bIsASubWidget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_bIsASubWidget_MetaData), Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_bIsASubWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_bIsHidingAllPanels_MetaData[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the CitySamplePanel is hiding itself and all child panels. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the CitySamplePanel is hiding itself and all child panels." },
#endif
	};
#endif
	void Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_bIsHidingAllPanels_SetBit(void* Obj)
	{
		((UCitySamplePanel*)Obj)->bIsHidingAllPanels = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_bIsHidingAllPanels = { "bIsHidingAllPanels", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySamplePanel), &Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_bIsHidingAllPanels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_bIsHidingAllPanels_MetaData), Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_bIsHidingAllPanels_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_CachedVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_CachedVisibility_MetaData[] = {
		{ "Category", "CitySamplePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cached slate visibility value while the CitySamplePanel is hidden. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached slate visibility value while the CitySamplePanel is hidden." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_CachedVisibility = { "CachedVisibility", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySamplePanel, CachedVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_CachedVisibility_MetaData), Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_CachedVisibility_MetaData) }; // 1295612096
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_AnimateInPanelMapping_ValueProp = { "AnimateInPanelMapping", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_AnimateInPanelMapping_Key_KeyProp = { "AnimateInPanelMapping_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUMGSequencePlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_AnimateInPanelMapping_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Animation-Panel mappings for actively animated child panels\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation-Panel mappings for actively animated child panels" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_AnimateInPanelMapping = { "AnimateInPanelMapping", nullptr, (EPropertyFlags)0x0040008000002008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySamplePanel, AnimateInPanelMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_AnimateInPanelMapping_MetaData), Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_AnimateInPanelMapping_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_AnimateOutPanelMapping_ValueProp = { "AnimateOutPanelMapping", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_AnimateOutPanelMapping_Key_KeyProp = { "AnimateOutPanelMapping_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUMGSequencePlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_AnimateOutPanelMapping_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_AnimateOutPanelMapping = { "AnimateOutPanelMapping", nullptr, (EPropertyFlags)0x0040008000002008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySamplePanel, AnimateOutPanelMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_AnimateOutPanelMapping_MetaData), Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_AnimateOutPanelMapping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_PendingStateData_MetaData[] = {
		{ "Category", "CitySamplePanel|Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Data needed to add the CitySamplePanel to a new parent after being removed from the current parent\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySamplePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data needed to add the CitySamplePanel to a new parent after being removed from the current parent" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_PendingStateData = { "PendingStateData", nullptr, (EPropertyFlags)0x0040008000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySamplePanel, PendingStateData), Z_Construct_UScriptStruct_FCitySamplePanelTransitionState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_PendingStateData_MetaData), Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_PendingStateData_MetaData) }; // 2050875712
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySamplePanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_ControlsFlavor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_ControlsFlavor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_DesignerControlsFlavor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_DesignerControlsFlavor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_ChildPanels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_ChildPanels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_ActivePanel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_bIsASubWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_bIsHidingAllPanels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_CachedVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_CachedVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_AnimateInPanelMapping_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_AnimateInPanelMapping_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_AnimateInPanelMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_AnimateOutPanelMapping_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_AnimateOutPanelMapping_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_AnimateOutPanelMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySamplePanel_Statics::NewProp_PendingStateData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySamplePanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySamplePanel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySamplePanel_Statics::ClassParams = {
		&UCitySamplePanel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCitySamplePanel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySamplePanel_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySamplePanel_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySamplePanel_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySamplePanel_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCitySamplePanel()
	{
		if (!Z_Registration_Info_UClass_UCitySamplePanel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySamplePanel.OuterSingleton, Z_Construct_UClass_UCitySamplePanel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySamplePanel.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySamplePanel>()
	{
		return UCitySamplePanel::StaticClass();
	}
	UCitySamplePanel::UCitySamplePanel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySamplePanel);
	UCitySamplePanel::~UCitySamplePanel() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_Statics::EnumInfo[] = {
		{ ECitySamplePanelInput_StaticEnum, TEXT("ECitySamplePanelInput"), &Z_Registration_Info_UEnum_ECitySamplePanelInput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3843730727U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_Statics::ScriptStructInfo[] = {
		{ FCitySamplePanelTransitionState::StaticStruct, Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics::NewStructOps, TEXT("CitySamplePanelTransitionState"), &Z_Registration_Info_UScriptStruct_CitySamplePanelTransitionState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySamplePanelTransitionState), 2050875712U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySamplePanel, UCitySamplePanel::StaticClass, TEXT("UCitySamplePanel"), &Z_Registration_Info_UClass_UCitySamplePanel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySamplePanel), 901316895U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_363157756(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
