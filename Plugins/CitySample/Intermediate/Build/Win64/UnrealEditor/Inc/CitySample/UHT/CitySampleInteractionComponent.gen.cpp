// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Game/CitySampleInteractionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleInteractionComponent() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleInteractionComponent();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleInteractionComponent_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleInteractorInterface_NoRegister();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_OnInteract__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CitySample_OnInteract__DelegateSignature_Statics
	{
		struct _Script_CitySample_eventOnInteract_Parms
		{
			TScriptInterface<ICitySampleInteractorInterface> InteractingChar;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractingChar_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_InteractingChar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_OnInteract__DelegateSignature_Statics::NewProp_InteractingChar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UDelegateFunction_CitySample_OnInteract__DelegateSignature_Statics::NewProp_InteractingChar = { "InteractingChar", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CitySample_eventOnInteract_Parms, InteractingChar), Z_Construct_UClass_UCitySampleInteractorInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnInteract__DelegateSignature_Statics::NewProp_InteractingChar_MetaData), Z_Construct_UDelegateFunction_CitySample_OnInteract__DelegateSignature_Statics::NewProp_InteractingChar_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CitySample_OnInteract__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_OnInteract__DelegateSignature_Statics::NewProp_InteractingChar,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_OnInteract__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/CitySampleInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_OnInteract__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "OnInteract__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CitySample_OnInteract__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnInteract__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CitySample_OnInteract__DelegateSignature_Statics::_Script_CitySample_eventOnInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnInteract__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_OnInteract__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnInteract__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CitySample_OnInteract__DelegateSignature_Statics::_Script_CitySample_eventOnInteract_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CitySample_OnInteract__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_OnInteract__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnInteract_DelegateWrapper(const FMulticastScriptDelegate& OnInteract, TScriptInterface<ICitySampleInteractorInterface> const& InteractingChar)
{
	struct _Script_CitySample_eventOnInteract_Parms
	{
		TScriptInterface<ICitySampleInteractorInterface> InteractingChar;
	};
	_Script_CitySample_eventOnInteract_Parms Parms;
	Parms.InteractingChar=InteractingChar;
	OnInteract.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCitySampleInteractionComponent::execTeleportPawnToSafePlace)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_StartingTransform);
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ActorHalfHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TeleportPawnToSafePlace(Z_Param_Out_StartingTransform,Z_Param_Pawn,Z_Param_ActorHalfHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleInteractionComponent::execGetInteractable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInteractable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleInteractionComponent::execSetInteractable)
	{
		P_GET_UBOOL(Z_Param_bNewInteractable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractable(Z_Param_bNewInteractable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleInteractionComponent::execGetPromptText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetPromptText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleInteractionComponent::execK2_CanInteractWith)
	{
		P_GET_TINTERFACE_REF(ICitySampleInteractorInterface,Z_Param_Out_Interactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_CanInteractWith_Implementation(Z_Param_Out_Interactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleInteractionComponent::execFinishInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishInteraction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleInteractionComponent::execAbortInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AbortInteraction();
		P_NATIVE_END;
	}
	struct CitySampleInteractionComponent_eventK2_CanInteractWith_Parms
	{
		TScriptInterface<ICitySampleInteractorInterface> Interactor;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		CitySampleInteractionComponent_eventK2_CanInteractWith_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct CitySampleInteractionComponent_eventOnInteractionAborted_Parms
	{
		TScriptInterface<ICitySampleInteractorInterface> Interactor;
	};
	struct CitySampleInteractionComponent_eventOnInteractionFinished_Parms
	{
		TScriptInterface<ICitySampleInteractorInterface> Interactor;
	};
	struct CitySampleInteractionComponent_eventOnInteractionStarted_Parms
	{
		TScriptInterface<ICitySampleInteractorInterface> Interactor;
	};
	static FName NAME_UCitySampleInteractionComponent_K2_CanInteractWith = FName(TEXT("K2_CanInteractWith"));
	bool UCitySampleInteractionComponent::K2_CanInteractWith(TScriptInterface<ICitySampleInteractorInterface> const& Interactor) const
	{
		CitySampleInteractionComponent_eventK2_CanInteractWith_Parms Parms;
		Parms.Interactor=Interactor;
		const_cast<UCitySampleInteractionComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_UCitySampleInteractionComponent_K2_CanInteractWith),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UCitySampleInteractionComponent_OnInteractionAborted = FName(TEXT("OnInteractionAborted"));
	void UCitySampleInteractionComponent::OnInteractionAborted(TScriptInterface<ICitySampleInteractorInterface> const& Interactor)
	{
		CitySampleInteractionComponent_eventOnInteractionAborted_Parms Parms;
		Parms.Interactor=Interactor;
		ProcessEvent(FindFunctionChecked(NAME_UCitySampleInteractionComponent_OnInteractionAborted),&Parms);
	}
	static FName NAME_UCitySampleInteractionComponent_OnInteractionFinished = FName(TEXT("OnInteractionFinished"));
	void UCitySampleInteractionComponent::OnInteractionFinished(TScriptInterface<ICitySampleInteractorInterface> const& Interactor)
	{
		CitySampleInteractionComponent_eventOnInteractionFinished_Parms Parms;
		Parms.Interactor=Interactor;
		ProcessEvent(FindFunctionChecked(NAME_UCitySampleInteractionComponent_OnInteractionFinished),&Parms);
	}
	static FName NAME_UCitySampleInteractionComponent_OnInteractionStarted = FName(TEXT("OnInteractionStarted"));
	void UCitySampleInteractionComponent::OnInteractionStarted(TScriptInterface<ICitySampleInteractorInterface> const& Interactor)
	{
		CitySampleInteractionComponent_eventOnInteractionStarted_Parms Parms;
		Parms.Interactor=Interactor;
		ProcessEvent(FindFunctionChecked(NAME_UCitySampleInteractionComponent_OnInteractionStarted),&Parms);
	}
	void UCitySampleInteractionComponent::StaticRegisterNativesUCitySampleInteractionComponent()
	{
		UClass* Class = UCitySampleInteractionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbortInteraction", &UCitySampleInteractionComponent::execAbortInteraction },
			{ "FinishInteraction", &UCitySampleInteractionComponent::execFinishInteraction },
			{ "GetInteractable", &UCitySampleInteractionComponent::execGetInteractable },
			{ "GetPromptText", &UCitySampleInteractionComponent::execGetPromptText },
			{ "K2_CanInteractWith", &UCitySampleInteractionComponent::execK2_CanInteractWith },
			{ "SetInteractable", &UCitySampleInteractionComponent::execSetInteractable },
			{ "TeleportPawnToSafePlace", &UCitySampleInteractionComponent::execTeleportPawnToSafePlace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCitySampleInteractionComponent_AbortInteraction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleInteractionComponent_AbortInteraction_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called to abort this interaction.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySampleInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to abort this interaction." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleInteractionComponent_AbortInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleInteractionComponent, nullptr, "AbortInteraction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_AbortInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleInteractionComponent_AbortInteraction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCitySampleInteractionComponent_AbortInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleInteractionComponent_AbortInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleInteractionComponent_FinishInteraction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleInteractionComponent_FinishInteraction_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Should be called to notify the interaction has been completed.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySampleInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should be called to notify the interaction has been completed." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleInteractionComponent_FinishInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleInteractionComponent, nullptr, "FinishInteraction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_FinishInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleInteractionComponent_FinishInteraction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCitySampleInteractionComponent_FinishInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleInteractionComponent_FinishInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleInteractionComponent_GetInteractable_Statics
	{
		struct CitySampleInteractionComponent_eventGetInteractable_Parms
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
	void Z_Construct_UFunction_UCitySampleInteractionComponent_GetInteractable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleInteractionComponent_eventGetInteractable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleInteractionComponent_GetInteractable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleInteractionComponent_eventGetInteractable_Parms), &Z_Construct_UFunction_UCitySampleInteractionComponent_GetInteractable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleInteractionComponent_GetInteractable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleInteractionComponent_GetInteractable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleInteractionComponent_GetInteractable_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Game/CitySampleInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleInteractionComponent_GetInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleInteractionComponent, nullptr, "GetInteractable", nullptr, nullptr, Z_Construct_UFunction_UCitySampleInteractionComponent_GetInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_GetInteractable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleInteractionComponent_GetInteractable_Statics::CitySampleInteractionComponent_eventGetInteractable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_GetInteractable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleInteractionComponent_GetInteractable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_GetInteractable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleInteractionComponent_GetInteractable_Statics::CitySampleInteractionComponent_eventGetInteractable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleInteractionComponent_GetInteractable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleInteractionComponent_GetInteractable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleInteractionComponent_GetPromptText_Statics
	{
		struct CitySampleInteractionComponent_eventGetPromptText_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCitySampleInteractionComponent_GetPromptText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleInteractionComponent_eventGetPromptText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleInteractionComponent_GetPromptText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleInteractionComponent_GetPromptText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleInteractionComponent_GetPromptText_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Game/CitySampleInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleInteractionComponent_GetPromptText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleInteractionComponent, nullptr, "GetPromptText", nullptr, nullptr, Z_Construct_UFunction_UCitySampleInteractionComponent_GetPromptText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_GetPromptText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleInteractionComponent_GetPromptText_Statics::CitySampleInteractionComponent_eventGetPromptText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_GetPromptText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleInteractionComponent_GetPromptText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_GetPromptText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleInteractionComponent_GetPromptText_Statics::CitySampleInteractionComponent_eventGetPromptText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleInteractionComponent_GetPromptText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleInteractionComponent_GetPromptText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleInteractionComponent_K2_CanInteractWith_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Interactor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleInteractionComponent_K2_CanInteractWith_Statics::NewProp_Interactor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UCitySampleInteractionComponent_K2_CanInteractWith_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleInteractionComponent_eventK2_CanInteractWith_Parms, Interactor), Z_Construct_UClass_UCitySampleInteractorInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_K2_CanInteractWith_Statics::NewProp_Interactor_MetaData), Z_Construct_UFunction_UCitySampleInteractionComponent_K2_CanInteractWith_Statics::NewProp_Interactor_MetaData) };
	void Z_Construct_UFunction_UCitySampleInteractionComponent_K2_CanInteractWith_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleInteractionComponent_eventK2_CanInteractWith_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleInteractionComponent_K2_CanInteractWith_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleInteractionComponent_eventK2_CanInteractWith_Parms), &Z_Construct_UFunction_UCitySampleInteractionComponent_K2_CanInteractWith_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleInteractionComponent_K2_CanInteractWith_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleInteractionComponent_K2_CanInteractWith_Statics::NewProp_Interactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleInteractionComponent_K2_CanInteractWith_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleInteractionComponent_K2_CanInteractWith_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "CanInteractWith" },
		{ "ModuleRelativePath", "Public/Game/CitySampleInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleInteractionComponent_K2_CanInteractWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleInteractionComponent, nullptr, "K2_CanInteractWith", nullptr, nullptr, Z_Construct_UFunction_UCitySampleInteractionComponent_K2_CanInteractWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_K2_CanInteractWith_Statics::PropPointers), sizeof(CitySampleInteractionComponent_eventK2_CanInteractWith_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_K2_CanInteractWith_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleInteractionComponent_K2_CanInteractWith_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_K2_CanInteractWith_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySampleInteractionComponent_eventK2_CanInteractWith_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleInteractionComponent_K2_CanInteractWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleInteractionComponent_K2_CanInteractWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionAborted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Interactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionAborted_Statics::NewProp_Interactor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionAborted_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleInteractionComponent_eventOnInteractionAborted_Parms, Interactor), Z_Construct_UClass_UCitySampleInteractorInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionAborted_Statics::NewProp_Interactor_MetaData), Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionAborted_Statics::NewProp_Interactor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionAborted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionAborted_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionAborted_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Notifies that the interaction was aborted.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySampleInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notifies that the interaction was aborted." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionAborted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleInteractionComponent, nullptr, "OnInteractionAborted", nullptr, nullptr, Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionAborted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionAborted_Statics::PropPointers), sizeof(CitySampleInteractionComponent_eventOnInteractionAborted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionAborted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionAborted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionAborted_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySampleInteractionComponent_eventOnInteractionAborted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionAborted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionAborted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Interactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionFinished_Statics::NewProp_Interactor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionFinished_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleInteractionComponent_eventOnInteractionFinished_Parms, Interactor), Z_Construct_UClass_UCitySampleInteractorInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionFinished_Statics::NewProp_Interactor_MetaData), Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionFinished_Statics::NewProp_Interactor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionFinished_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionFinished_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Notifies that the interaction was completed. */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySampleInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notifies that the interaction was completed." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleInteractionComponent, nullptr, "OnInteractionFinished", nullptr, nullptr, Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionFinished_Statics::PropPointers), sizeof(CitySampleInteractionComponent_eventOnInteractionFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionFinished_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionFinished_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySampleInteractionComponent_eventOnInteractionFinished_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionStarted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Interactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionStarted_Statics::NewProp_Interactor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionStarted_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleInteractionComponent_eventOnInteractionStarted_Parms, Interactor), Z_Construct_UClass_UCitySampleInteractorInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionStarted_Statics::NewProp_Interactor_MetaData), Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionStarted_Statics::NewProp_Interactor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionStarted_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionStarted_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Notifies that the interaction has started.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySampleInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notifies that the interaction has started." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleInteractionComponent, nullptr, "OnInteractionStarted", nullptr, nullptr, Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionStarted_Statics::PropPointers), sizeof(CitySampleInteractionComponent_eventOnInteractionStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionStarted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionStarted_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySampleInteractionComponent_eventOnInteractionStarted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleInteractionComponent_SetInteractable_Statics
	{
		struct CitySampleInteractionComponent_eventSetInteractable_Parms
		{
			bool bNewInteractable;
		};
		static void NewProp_bNewInteractable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewInteractable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCitySampleInteractionComponent_SetInteractable_Statics::NewProp_bNewInteractable_SetBit(void* Obj)
	{
		((CitySampleInteractionComponent_eventSetInteractable_Parms*)Obj)->bNewInteractable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleInteractionComponent_SetInteractable_Statics::NewProp_bNewInteractable = { "bNewInteractable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleInteractionComponent_eventSetInteractable_Parms), &Z_Construct_UFunction_UCitySampleInteractionComponent_SetInteractable_Statics::NewProp_bNewInteractable_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleInteractionComponent_SetInteractable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleInteractionComponent_SetInteractable_Statics::NewProp_bNewInteractable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleInteractionComponent_SetInteractable_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Game/CitySampleInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleInteractionComponent_SetInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleInteractionComponent, nullptr, "SetInteractable", nullptr, nullptr, Z_Construct_UFunction_UCitySampleInteractionComponent_SetInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_SetInteractable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleInteractionComponent_SetInteractable_Statics::CitySampleInteractionComponent_eventSetInteractable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_SetInteractable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleInteractionComponent_SetInteractable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_SetInteractable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleInteractionComponent_SetInteractable_Statics::CitySampleInteractionComponent_eventSetInteractable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleInteractionComponent_SetInteractable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleInteractionComponent_SetInteractable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleInteractionComponent_TeleportPawnToSafePlace_Statics
	{
		struct CitySampleInteractionComponent_eventTeleportPawnToSafePlace_Parms
		{
			FTransform StartingTransform;
			APawn* Pawn;
			float ActorHalfHeight;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartingTransform;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActorHalfHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleInteractionComponent_TeleportPawnToSafePlace_Statics::NewProp_StartingTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleInteractionComponent_TeleportPawnToSafePlace_Statics::NewProp_StartingTransform = { "StartingTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleInteractionComponent_eventTeleportPawnToSafePlace_Parms, StartingTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_TeleportPawnToSafePlace_Statics::NewProp_StartingTransform_MetaData), Z_Construct_UFunction_UCitySampleInteractionComponent_TeleportPawnToSafePlace_Statics::NewProp_StartingTransform_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleInteractionComponent_TeleportPawnToSafePlace_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleInteractionComponent_eventTeleportPawnToSafePlace_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleInteractionComponent_TeleportPawnToSafePlace_Statics::NewProp_ActorHalfHeight = { "ActorHalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleInteractionComponent_eventTeleportPawnToSafePlace_Parms, ActorHalfHeight), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleInteractionComponent_TeleportPawnToSafePlace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleInteractionComponent_TeleportPawnToSafePlace_Statics::NewProp_StartingTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleInteractionComponent_TeleportPawnToSafePlace_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleInteractionComponent_TeleportPawnToSafePlace_Statics::NewProp_ActorHalfHeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleInteractionComponent_TeleportPawnToSafePlace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/CitySampleInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleInteractionComponent_TeleportPawnToSafePlace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleInteractionComponent, nullptr, "TeleportPawnToSafePlace", nullptr, nullptr, Z_Construct_UFunction_UCitySampleInteractionComponent_TeleportPawnToSafePlace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_TeleportPawnToSafePlace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleInteractionComponent_TeleportPawnToSafePlace_Statics::CitySampleInteractionComponent_eventTeleportPawnToSafePlace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_TeleportPawnToSafePlace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleInteractionComponent_TeleportPawnToSafePlace_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractionComponent_TeleportPawnToSafePlace_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleInteractionComponent_TeleportPawnToSafePlace_Statics::CitySampleInteractionComponent_eventTeleportPawnToSafePlace_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleInteractionComponent_TeleportPawnToSafePlace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleInteractionComponent_TeleportPawnToSafePlace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleInteractionComponent);
	UClass* Z_Construct_UClass_UCitySampleInteractionComponent_NoRegister()
	{
		return UCitySampleInteractionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleInteractionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInteract_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteract;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasVisiblePrompt_MetaData[];
#endif
		static void NewProp_bHasVisiblePrompt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasVisiblePrompt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PromptText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_PromptText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractor_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_CurrentInteractor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleInteractionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USphereComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleInteractionComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySampleInteractionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleInteractionComponent_AbortInteraction, "AbortInteraction" }, // 3318794649
		{ &Z_Construct_UFunction_UCitySampleInteractionComponent_FinishInteraction, "FinishInteraction" }, // 2867602797
		{ &Z_Construct_UFunction_UCitySampleInteractionComponent_GetInteractable, "GetInteractable" }, // 3710214510
		{ &Z_Construct_UFunction_UCitySampleInteractionComponent_GetPromptText, "GetPromptText" }, // 1392450038
		{ &Z_Construct_UFunction_UCitySampleInteractionComponent_K2_CanInteractWith, "K2_CanInteractWith" }, // 793312682
		{ &Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionAborted, "OnInteractionAborted" }, // 3118423494
		{ &Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionFinished, "OnInteractionFinished" }, // 774051659
		{ &Z_Construct_UFunction_UCitySampleInteractionComponent_OnInteractionStarted, "OnInteractionStarted" }, // 4200542712
		{ &Z_Construct_UFunction_UCitySampleInteractionComponent_SetInteractable, "SetInteractable" }, // 3375101004
		{ &Z_Construct_UFunction_UCitySampleInteractionComponent_TeleportPawnToSafePlace, "TeleportPawnToSafePlace" }, // 3437615430
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleInteractionComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleInteractionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Component that can be added to Actors to allow for generic interactions.\n *\n * Prompts will be shown to Players to perform the interaction when they are in range. \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Game/CitySampleInteractionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Game/CitySampleInteractionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component that can be added to Actors to allow for generic interactions.\n\nPrompts will be shown to Players to perform the interaction when they are in range." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleInteractionComponent_Statics::NewProp_OnInteract_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/CitySampleInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCitySampleInteractionComponent_Statics::NewProp_OnInteract = { "OnInteract", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleInteractionComponent, OnInteract), Z_Construct_UDelegateFunction_CitySample_OnInteract__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleInteractionComponent_Statics::NewProp_OnInteract_MetaData), Z_Construct_UClass_UCitySampleInteractionComponent_Statics::NewProp_OnInteract_MetaData) }; // 4255114609
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleInteractionComponent_Statics::NewProp_bHasVisiblePrompt_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Game/CitySampleInteractionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCitySampleInteractionComponent_Statics::NewProp_bHasVisiblePrompt_SetBit(void* Obj)
	{
		((UCitySampleInteractionComponent*)Obj)->bHasVisiblePrompt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleInteractionComponent_Statics::NewProp_bHasVisiblePrompt = { "bHasVisiblePrompt", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleInteractionComponent), &Z_Construct_UClass_UCitySampleInteractionComponent_Statics::NewProp_bHasVisiblePrompt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleInteractionComponent_Statics::NewProp_bHasVisiblePrompt_MetaData), Z_Construct_UClass_UCitySampleInteractionComponent_Statics::NewProp_bHasVisiblePrompt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleInteractionComponent_Statics::NewProp_PromptText_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Game/CitySampleInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCitySampleInteractionComponent_Statics::NewProp_PromptText = { "PromptText", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleInteractionComponent, PromptText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleInteractionComponent_Statics::NewProp_PromptText_MetaData), Z_Construct_UClass_UCitySampleInteractionComponent_Statics::NewProp_PromptText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleInteractionComponent_Statics::NewProp_CurrentInteractor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/CitySampleInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UCitySampleInteractionComponent_Statics::NewProp_CurrentInteractor = { "CurrentInteractor", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleInteractionComponent, CurrentInteractor), Z_Construct_UClass_UCitySampleInteractorInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleInteractionComponent_Statics::NewProp_CurrentInteractor_MetaData), Z_Construct_UClass_UCitySampleInteractionComponent_Statics::NewProp_CurrentInteractor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleInteractionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleInteractionComponent_Statics::NewProp_OnInteract,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleInteractionComponent_Statics::NewProp_bHasVisiblePrompt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleInteractionComponent_Statics::NewProp_PromptText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleInteractionComponent_Statics::NewProp_CurrentInteractor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleInteractionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleInteractionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleInteractionComponent_Statics::ClassParams = {
		&UCitySampleInteractionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCitySampleInteractionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleInteractionComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleInteractionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleInteractionComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleInteractionComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCitySampleInteractionComponent()
	{
		if (!Z_Registration_Info_UClass_UCitySampleInteractionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleInteractionComponent.OuterSingleton, Z_Construct_UClass_UCitySampleInteractionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleInteractionComponent.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleInteractionComponent>()
	{
		return UCitySampleInteractionComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleInteractionComponent);
	UCitySampleInteractionComponent::~UCitySampleInteractionComponent() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleInteractionComponent, UCitySampleInteractionComponent::StaticClass, TEXT("UCitySampleInteractionComponent"), &Z_Registration_Info_UClass_UCitySampleInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleInteractionComponent), 3578215607U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractionComponent_h_2026714427(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
