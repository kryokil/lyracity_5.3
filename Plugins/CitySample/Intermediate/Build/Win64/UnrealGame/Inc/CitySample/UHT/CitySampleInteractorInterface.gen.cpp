// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Game/CitySampleInteractorInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleInteractorInterface() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleInteractionComponent_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleInteractorInterface();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleInteractorInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	DEFINE_FUNCTION(ICitySampleInteractorInterface::execIsInteracting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInteracting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICitySampleInteractorInterface::execIsInteractingWith)
	{
		P_GET_OBJECT(UCitySampleInteractionComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInteractingWith(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICitySampleInteractorInterface::execTryToInteract)
	{
		P_GET_OBJECT(UCitySampleInteractionComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryToInteract(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICitySampleInteractorInterface::execGetInteractingPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetInteractingPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICitySampleInteractorInterface::execAbortInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AbortInteraction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICitySampleInteractorInterface::execFinishInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishInteraction();
		P_NATIVE_END;
	}
	void UCitySampleInteractorInterface::StaticRegisterNativesUCitySampleInteractorInterface()
	{
		UClass* Class = UCitySampleInteractorInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbortInteraction", &ICitySampleInteractorInterface::execAbortInteraction },
			{ "FinishInteraction", &ICitySampleInteractorInterface::execFinishInteraction },
			{ "GetInteractingPawn", &ICitySampleInteractorInterface::execGetInteractingPawn },
			{ "IsInteracting", &ICitySampleInteractorInterface::execIsInteracting },
			{ "IsInteractingWith", &ICitySampleInteractorInterface::execIsInteractingWith },
			{ "TryToInteract", &ICitySampleInteractorInterface::execTryToInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCitySampleInteractorInterface_AbortInteraction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleInteractorInterface_AbortInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/CitySampleInteractorInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleInteractorInterface_AbortInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleInteractorInterface, nullptr, "AbortInteraction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractorInterface_AbortInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleInteractorInterface_AbortInteraction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCitySampleInteractorInterface_AbortInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleInteractorInterface_AbortInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleInteractorInterface_FinishInteraction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleInteractorInterface_FinishInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/CitySampleInteractorInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleInteractorInterface_FinishInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleInteractorInterface, nullptr, "FinishInteraction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractorInterface_FinishInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleInteractorInterface_FinishInteraction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCitySampleInteractorInterface_FinishInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleInteractorInterface_FinishInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleInteractorInterface_GetInteractingPawn_Statics
	{
		struct CitySampleInteractorInterface_eventGetInteractingPawn_Parms
		{
			APawn* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleInteractorInterface_GetInteractingPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleInteractorInterface_eventGetInteractingPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleInteractorInterface_GetInteractingPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleInteractorInterface_GetInteractingPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleInteractorInterface_GetInteractingPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/CitySampleInteractorInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleInteractorInterface_GetInteractingPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleInteractorInterface, nullptr, "GetInteractingPawn", nullptr, nullptr, Z_Construct_UFunction_UCitySampleInteractorInterface_GetInteractingPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractorInterface_GetInteractingPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleInteractorInterface_GetInteractingPawn_Statics::CitySampleInteractorInterface_eventGetInteractingPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractorInterface_GetInteractingPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleInteractorInterface_GetInteractingPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractorInterface_GetInteractingPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleInteractorInterface_GetInteractingPawn_Statics::CitySampleInteractorInterface_eventGetInteractingPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleInteractorInterface_GetInteractingPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleInteractorInterface_GetInteractingPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteracting_Statics
	{
		struct CitySampleInteractorInterface_eventIsInteracting_Parms
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
	void Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteracting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleInteractorInterface_eventIsInteracting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteracting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleInteractorInterface_eventIsInteracting_Parms), &Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteracting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteracting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteracting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteracting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/CitySampleInteractorInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteracting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleInteractorInterface, nullptr, "IsInteracting", nullptr, nullptr, Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteracting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteracting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteracting_Statics::CitySampleInteractorInterface_eventIsInteracting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteracting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteracting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteracting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteracting_Statics::CitySampleInteractorInterface_eventIsInteracting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteracting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteracting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteractingWith_Statics
	{
		struct CitySampleInteractorInterface_eventIsInteractingWith_Parms
		{
			UCitySampleInteractionComponent* Component;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteractingWith_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteractingWith_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleInteractorInterface_eventIsInteractingWith_Parms, Component), Z_Construct_UClass_UCitySampleInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteractingWith_Statics::NewProp_Component_MetaData), Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteractingWith_Statics::NewProp_Component_MetaData) };
	void Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteractingWith_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleInteractorInterface_eventIsInteractingWith_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteractingWith_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleInteractorInterface_eventIsInteractingWith_Parms), &Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteractingWith_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteractingWith_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteractingWith_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteractingWith_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteractingWith_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/CitySampleInteractorInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteractingWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleInteractorInterface, nullptr, "IsInteractingWith", nullptr, nullptr, Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteractingWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteractingWith_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteractingWith_Statics::CitySampleInteractorInterface_eventIsInteractingWith_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteractingWith_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteractingWith_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteractingWith_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteractingWith_Statics::CitySampleInteractorInterface_eventIsInteractingWith_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteractingWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteractingWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleInteractorInterface_TryToInteract_Statics
	{
		struct CitySampleInteractorInterface_eventTryToInteract_Parms
		{
			UCitySampleInteractionComponent* Component;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleInteractorInterface_TryToInteract_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleInteractorInterface_TryToInteract_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleInteractorInterface_eventTryToInteract_Parms, Component), Z_Construct_UClass_UCitySampleInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractorInterface_TryToInteract_Statics::NewProp_Component_MetaData), Z_Construct_UFunction_UCitySampleInteractorInterface_TryToInteract_Statics::NewProp_Component_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleInteractorInterface_TryToInteract_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleInteractorInterface_TryToInteract_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleInteractorInterface_TryToInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/CitySampleInteractorInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleInteractorInterface_TryToInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleInteractorInterface, nullptr, "TryToInteract", nullptr, nullptr, Z_Construct_UFunction_UCitySampleInteractorInterface_TryToInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractorInterface_TryToInteract_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleInteractorInterface_TryToInteract_Statics::CitySampleInteractorInterface_eventTryToInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractorInterface_TryToInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleInteractorInterface_TryToInteract_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInteractorInterface_TryToInteract_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleInteractorInterface_TryToInteract_Statics::CitySampleInteractorInterface_eventTryToInteract_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleInteractorInterface_TryToInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleInteractorInterface_TryToInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleInteractorInterface);
	UClass* Z_Construct_UClass_UCitySampleInteractorInterface_NoRegister()
	{
		return UCitySampleInteractorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleInteractorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleInteractorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleInteractorInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySampleInteractorInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleInteractorInterface_AbortInteraction, "AbortInteraction" }, // 2600060709
		{ &Z_Construct_UFunction_UCitySampleInteractorInterface_FinishInteraction, "FinishInteraction" }, // 2236769010
		{ &Z_Construct_UFunction_UCitySampleInteractorInterface_GetInteractingPawn, "GetInteractingPawn" }, // 3996460949
		{ &Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteracting, "IsInteracting" }, // 3775523576
		{ &Z_Construct_UFunction_UCitySampleInteractorInterface_IsInteractingWith, "IsInteractingWith" }, // 3544609937
		{ &Z_Construct_UFunction_UCitySampleInteractorInterface_TryToInteract, "TryToInteract" }, // 3846404779
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleInteractorInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleInteractorInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "true" },
		{ "ModuleRelativePath", "Public/Game/CitySampleInteractorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleInteractorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICitySampleInteractorInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleInteractorInterface_Statics::ClassParams = {
		&UCitySampleInteractorInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleInteractorInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleInteractorInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCitySampleInteractorInterface()
	{
		if (!Z_Registration_Info_UClass_UCitySampleInteractorInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleInteractorInterface.OuterSingleton, Z_Construct_UClass_UCitySampleInteractorInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleInteractorInterface.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleInteractorInterface>()
	{
		return UCitySampleInteractorInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleInteractorInterface);
	UCitySampleInteractorInterface::~UCitySampleInteractorInterface() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractorInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractorInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleInteractorInterface, UCitySampleInteractorInterface::StaticClass, TEXT("UCitySampleInteractorInterface"), &Z_Registration_Info_UClass_UCitySampleInteractorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleInteractorInterface), 2090101731U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractorInterface_h_567644279(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractorInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractorInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
