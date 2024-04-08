// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/UI/CitySampleControlsOverlayInterface.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleControlsOverlayInterface() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleControlsOverlayInterface();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleControlsOverlayInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	DEFINE_FUNCTION(ICitySampleControlsOverlayInterface::execGetInputKeyDescriptionOverrides)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FKey,FText>*)Z_Param__Result=P_THIS->GetInputKeyDescriptionOverrides_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICitySampleControlsOverlayInterface::execGetInputActionDescriptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<UInputAction*,FText>*)Z_Param__Result=P_THIS->GetInputActionDescriptions_Implementation();
		P_NATIVE_END;
	}
	struct CitySampleControlsOverlayInterface_eventGetInputActionDescriptions_Parms
	{
		TMap<UInputAction*,FText> ReturnValue;
	};
	struct CitySampleControlsOverlayInterface_eventGetInputKeyDescriptionOverrides_Parms
	{
		TMap<FKey,FText> ReturnValue;
	};
	TMap<UInputAction*,FText> ICitySampleControlsOverlayInterface::GetInputActionDescriptions() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInputActionDescriptions instead.");
		CitySampleControlsOverlayInterface_eventGetInputActionDescriptions_Parms Parms;
		return Parms.ReturnValue;
	}
	TMap<FKey,FText> ICitySampleControlsOverlayInterface::GetInputKeyDescriptionOverrides() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInputKeyDescriptionOverrides instead.");
		CitySampleControlsOverlayInterface_eventGetInputKeyDescriptionOverrides_Parms Parms;
		return Parms.ReturnValue;
	}
	void UCitySampleControlsOverlayInterface::StaticRegisterNativesUCitySampleControlsOverlayInterface()
	{
		UClass* Class = UCitySampleControlsOverlayInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInputActionDescriptions", &ICitySampleControlsOverlayInterface::execGetInputActionDescriptions },
			{ "GetInputKeyDescriptionOverrides", &ICitySampleControlsOverlayInterface::execGetInputKeyDescriptionOverrides },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputActionDescriptions_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputActionDescriptions_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputActionDescriptions_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputActionDescriptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleControlsOverlayInterface_eventGetInputActionDescriptions_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputActionDescriptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputActionDescriptions_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputActionDescriptions_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputActionDescriptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputActionDescriptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Controls Overlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 *\x09Hook for derived classes to provide a description of the action \n\x09 *\x09that should be associated with a given input action.\n\x09 *\n\x09 *\x09@returns InputAction-String mappings that represent a control description.\n\x09 * \n\x09 *\x09@note\x09The CitySampleUI component should default empty descriptions to the \n\x09 *\x09\x09\x09name of the input action when updating the controls overlay.\n\x09 *\n\x09 *\x09@see UCitySampleUIComponent::UpdateControlsOverlay, UCitySampleControlsOverlay\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlayInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hook for derived classes to provide a description of the action\nthat should be associated with a given input action.\n\n@returns InputAction-String mappings that represent a control description.\n\n@note   The CitySampleUI component should default empty descriptions to the\n                name of the input action when updating the controls overlay.\n\n@see UCitySampleUIComponent::UpdateControlsOverlay, UCitySampleControlsOverlay" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputActionDescriptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleControlsOverlayInterface, nullptr, "GetInputActionDescriptions", nullptr, nullptr, Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputActionDescriptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputActionDescriptions_Statics::PropPointers), sizeof(CitySampleControlsOverlayInterface_eventGetInputActionDescriptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputActionDescriptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputActionDescriptions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputActionDescriptions_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySampleControlsOverlayInterface_eventGetInputActionDescriptions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputActionDescriptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputActionDescriptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputKeyDescriptionOverrides_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputKeyDescriptionOverrides_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputKeyDescriptionOverrides_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputKeyDescriptionOverrides_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleControlsOverlayInterface_eventGetInputKeyDescriptionOverrides_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputKeyDescriptionOverrides_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputKeyDescriptionOverrides_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputKeyDescriptionOverrides_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputKeyDescriptionOverrides_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputKeyDescriptionOverrides_Statics::Function_MetaDataParams[] = {
		{ "Category", "Controls Overlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 *\x09Hook for derived classes to provide a description of the action \n\x09 *\x09that should be associated with a given input key.\n\x09 *\n\x09 *\x09@returns Key-String mappings that represent a control description.\n\x09 * \n\x09 *\x09@note\x09Key description overrides take priority over input action descriptions.\n\x09 *\n\x09 *\x09@see UCitySampleUIComponent::UpdateControlsOverlay, UCitySampleControlsOverlay\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlayInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hook for derived classes to provide a description of the action\nthat should be associated with a given input key.\n\n@returns Key-String mappings that represent a control description.\n\n@note   Key description overrides take priority over input action descriptions.\n\n@see UCitySampleUIComponent::UpdateControlsOverlay, UCitySampleControlsOverlay" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputKeyDescriptionOverrides_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleControlsOverlayInterface, nullptr, "GetInputKeyDescriptionOverrides", nullptr, nullptr, Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputKeyDescriptionOverrides_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputKeyDescriptionOverrides_Statics::PropPointers), sizeof(CitySampleControlsOverlayInterface_eventGetInputKeyDescriptionOverrides_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputKeyDescriptionOverrides_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputKeyDescriptionOverrides_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputKeyDescriptionOverrides_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySampleControlsOverlayInterface_eventGetInputKeyDescriptionOverrides_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputKeyDescriptionOverrides()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputKeyDescriptionOverrides_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleControlsOverlayInterface);
	UClass* Z_Construct_UClass_UCitySampleControlsOverlayInterface_NoRegister()
	{
		return UCitySampleControlsOverlayInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleControlsOverlayInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleControlsOverlayInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleControlsOverlayInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySampleControlsOverlayInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputActionDescriptions, "GetInputActionDescriptions" }, // 3237039039
		{ &Z_Construct_UFunction_UCitySampleControlsOverlayInterface_GetInputKeyDescriptionOverrides, "GetInputKeyDescriptionOverrides" }, // 1996354359
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleControlsOverlayInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleControlsOverlayInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleControlsOverlayInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleControlsOverlayInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICitySampleControlsOverlayInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleControlsOverlayInterface_Statics::ClassParams = {
		&UCitySampleControlsOverlayInterface::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleControlsOverlayInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleControlsOverlayInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCitySampleControlsOverlayInterface()
	{
		if (!Z_Registration_Info_UClass_UCitySampleControlsOverlayInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleControlsOverlayInterface.OuterSingleton, Z_Construct_UClass_UCitySampleControlsOverlayInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleControlsOverlayInterface.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleControlsOverlayInterface>()
	{
		return UCitySampleControlsOverlayInterface::StaticClass();
	}
	UCitySampleControlsOverlayInterface::UCitySampleControlsOverlayInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleControlsOverlayInterface);
	UCitySampleControlsOverlayInterface::~UCitySampleControlsOverlayInterface() {}
	static FName NAME_UCitySampleControlsOverlayInterface_GetInputActionDescriptions = FName(TEXT("GetInputActionDescriptions"));
	TMap<UInputAction*,FText> ICitySampleControlsOverlayInterface::Execute_GetInputActionDescriptions(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCitySampleControlsOverlayInterface::StaticClass()));
		CitySampleControlsOverlayInterface_eventGetInputActionDescriptions_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCitySampleControlsOverlayInterface_GetInputActionDescriptions);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ICitySampleControlsOverlayInterface*)(O->GetNativeInterfaceAddress(UCitySampleControlsOverlayInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetInputActionDescriptions_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCitySampleControlsOverlayInterface_GetInputKeyDescriptionOverrides = FName(TEXT("GetInputKeyDescriptionOverrides"));
	TMap<FKey,FText> ICitySampleControlsOverlayInterface::Execute_GetInputKeyDescriptionOverrides(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCitySampleControlsOverlayInterface::StaticClass()));
		CitySampleControlsOverlayInterface_eventGetInputKeyDescriptionOverrides_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCitySampleControlsOverlayInterface_GetInputKeyDescriptionOverrides);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ICitySampleControlsOverlayInterface*)(O->GetNativeInterfaceAddress(UCitySampleControlsOverlayInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetInputKeyDescriptionOverrides_Implementation();
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleControlsOverlayInterface, UCitySampleControlsOverlayInterface::StaticClass, TEXT("UCitySampleControlsOverlayInterface"), &Z_Registration_Info_UClass_UCitySampleControlsOverlayInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleControlsOverlayInterface), 598373316U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_1837358998(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
