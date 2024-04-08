// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Game/ICitySampleTraversalInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeICitySampleTraversalInterface() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleTraversalInterface();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleTraversalInterface_NoRegister();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_EPlayerTraversalState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	DEFINE_FUNCTION(ICitySampleTraversalInterface::execGetTraversalState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPlayerTraversalState*)Z_Param__Result=P_THIS->GetTraversalState_Implementation();
		P_NATIVE_END;
	}
	struct CitySampleTraversalInterface_eventGetTraversalState_Parms
	{
		EPlayerTraversalState ReturnValue;

		/** Constructor, initializes return property only **/
		CitySampleTraversalInterface_eventGetTraversalState_Parms()
			: ReturnValue((EPlayerTraversalState)0)
		{
		}
	};
	EPlayerTraversalState ICitySampleTraversalInterface::GetTraversalState() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTraversalState instead.");
		CitySampleTraversalInterface_eventGetTraversalState_Parms Parms;
		return Parms.ReturnValue;
	}
	void UCitySampleTraversalInterface::StaticRegisterNativesUCitySampleTraversalInterface()
	{
		UClass* Class = UCitySampleTraversalInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTraversalState", &ICitySampleTraversalInterface::execGetTraversalState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCitySampleTraversalInterface_GetTraversalState_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySampleTraversalInterface_GetTraversalState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCitySampleTraversalInterface_GetTraversalState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleTraversalInterface_eventGetTraversalState_Parms, ReturnValue), Z_Construct_UEnum_CitySample_EPlayerTraversalState, METADATA_PARAMS(0, nullptr) }; // 556888820
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleTraversalInterface_GetTraversalState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleTraversalInterface_GetTraversalState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleTraversalInterface_GetTraversalState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleTraversalInterface_GetTraversalState_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called to determine the type of traversal mode this instance provides. */" },
#endif
		{ "ModuleRelativePath", "Public/Game/ICitySampleTraversalInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to determine the type of traversal mode this instance provides." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleTraversalInterface_GetTraversalState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleTraversalInterface, nullptr, "GetTraversalState", nullptr, nullptr, Z_Construct_UFunction_UCitySampleTraversalInterface_GetTraversalState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleTraversalInterface_GetTraversalState_Statics::PropPointers), sizeof(CitySampleTraversalInterface_eventGetTraversalState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleTraversalInterface_GetTraversalState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleTraversalInterface_GetTraversalState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleTraversalInterface_GetTraversalState_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySampleTraversalInterface_eventGetTraversalState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleTraversalInterface_GetTraversalState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleTraversalInterface_GetTraversalState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleTraversalInterface);
	UClass* Z_Construct_UClass_UCitySampleTraversalInterface_NoRegister()
	{
		return UCitySampleTraversalInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleTraversalInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleTraversalInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleTraversalInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySampleTraversalInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleTraversalInterface_GetTraversalState, "GetTraversalState" }, // 2922280601
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleTraversalInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleTraversalInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Game/ICitySampleTraversalInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleTraversalInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICitySampleTraversalInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleTraversalInterface_Statics::ClassParams = {
		&UCitySampleTraversalInterface::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleTraversalInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleTraversalInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCitySampleTraversalInterface()
	{
		if (!Z_Registration_Info_UClass_UCitySampleTraversalInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleTraversalInterface.OuterSingleton, Z_Construct_UClass_UCitySampleTraversalInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleTraversalInterface.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleTraversalInterface>()
	{
		return UCitySampleTraversalInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleTraversalInterface);
	UCitySampleTraversalInterface::~UCitySampleTraversalInterface() {}
	static FName NAME_UCitySampleTraversalInterface_GetTraversalState = FName(TEXT("GetTraversalState"));
	EPlayerTraversalState ICitySampleTraversalInterface::Execute_GetTraversalState(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCitySampleTraversalInterface::StaticClass()));
		CitySampleTraversalInterface_eventGetTraversalState_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCitySampleTraversalInterface_GetTraversalState);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ICitySampleTraversalInterface*)(O->GetNativeInterfaceAddress(UCitySampleTraversalInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetTraversalState_Implementation();
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleTraversalInterface, UCitySampleTraversalInterface::StaticClass, TEXT("UCitySampleTraversalInterface"), &Z_Registration_Info_UClass_UCitySampleTraversalInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleTraversalInterface), 4006226774U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_1918547624(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_ICitySampleTraversalInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
