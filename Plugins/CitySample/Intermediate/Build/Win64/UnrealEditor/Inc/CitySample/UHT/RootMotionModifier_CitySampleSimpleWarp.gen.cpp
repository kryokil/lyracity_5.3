// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Anim/RootMotionModifier_CitySampleSimpleWarp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootMotionModifier_CitySampleSimpleWarp() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp();
	CITYSAMPLE_API UClass* Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent_NoRegister();
	MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_Warp();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	DEFINE_FUNCTION(URootMotionModifier_CitySampleSimpleWarp::execBP_AddOrUpdateWarpTarget)
	{
		P_GET_OBJECT(UMotionWarpingComponent,Z_Param_MotionWarpingComp);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		URootMotionModifier_CitySampleSimpleWarp::BP_AddOrUpdateWarpTarget(Z_Param_MotionWarpingComp,Z_Param_Name,Z_Param_Location,Z_Param_Rotation);
		P_NATIVE_END;
	}
	void URootMotionModifier_CitySampleSimpleWarp::StaticRegisterNativesURootMotionModifier_CitySampleSimpleWarp()
	{
		UClass* Class = URootMotionModifier_CitySampleSimpleWarp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_AddOrUpdateWarpTarget", &URootMotionModifier_CitySampleSimpleWarp::execBP_AddOrUpdateWarpTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URootMotionModifier_CitySampleSimpleWarp_BP_AddOrUpdateWarpTarget_Statics
	{
		struct RootMotionModifier_CitySampleSimpleWarp_eventBP_AddOrUpdateWarpTarget_Parms
		{
			UMotionWarpingComponent* MotionWarpingComp;
			FName Name;
			FVector Location;
			FRotator Rotation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_CitySampleSimpleWarp_BP_AddOrUpdateWarpTarget_Statics::NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URootMotionModifier_CitySampleSimpleWarp_BP_AddOrUpdateWarpTarget_Statics::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_CitySampleSimpleWarp_eventBP_AddOrUpdateWarpTarget_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_CitySampleSimpleWarp_BP_AddOrUpdateWarpTarget_Statics::NewProp_MotionWarpingComp_MetaData), Z_Construct_UFunction_URootMotionModifier_CitySampleSimpleWarp_BP_AddOrUpdateWarpTarget_Statics::NewProp_MotionWarpingComp_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URootMotionModifier_CitySampleSimpleWarp_BP_AddOrUpdateWarpTarget_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_CitySampleSimpleWarp_eventBP_AddOrUpdateWarpTarget_Parms, Name), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URootMotionModifier_CitySampleSimpleWarp_BP_AddOrUpdateWarpTarget_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_CitySampleSimpleWarp_eventBP_AddOrUpdateWarpTarget_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URootMotionModifier_CitySampleSimpleWarp_BP_AddOrUpdateWarpTarget_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_CitySampleSimpleWarp_eventBP_AddOrUpdateWarpTarget_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URootMotionModifier_CitySampleSimpleWarp_BP_AddOrUpdateWarpTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_CitySampleSimpleWarp_BP_AddOrUpdateWarpTarget_Statics::NewProp_MotionWarpingComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_CitySampleSimpleWarp_BP_AddOrUpdateWarpTarget_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_CitySampleSimpleWarp_BP_AddOrUpdateWarpTarget_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_CitySampleSimpleWarp_BP_AddOrUpdateWarpTarget_Statics::NewProp_Rotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_CitySampleSimpleWarp_BP_AddOrUpdateWarpTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Warping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wrapper function to add warping targets to reduce friction during merges while using the old motion warping API */" },
#endif
		{ "DisplayName", "Add Or Update Warp Target" },
		{ "ModuleRelativePath", "Public/Anim/RootMotionModifier_CitySampleSimpleWarp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wrapper function to add warping targets to reduce friction during merges while using the old motion warping API" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URootMotionModifier_CitySampleSimpleWarp_BP_AddOrUpdateWarpTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp, nullptr, "BP_AddOrUpdateWarpTarget", nullptr, nullptr, Z_Construct_UFunction_URootMotionModifier_CitySampleSimpleWarp_BP_AddOrUpdateWarpTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_CitySampleSimpleWarp_BP_AddOrUpdateWarpTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_URootMotionModifier_CitySampleSimpleWarp_BP_AddOrUpdateWarpTarget_Statics::RootMotionModifier_CitySampleSimpleWarp_eventBP_AddOrUpdateWarpTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_CitySampleSimpleWarp_BP_AddOrUpdateWarpTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_URootMotionModifier_CitySampleSimpleWarp_BP_AddOrUpdateWarpTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_CitySampleSimpleWarp_BP_AddOrUpdateWarpTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URootMotionModifier_CitySampleSimpleWarp_BP_AddOrUpdateWarpTarget_Statics::RootMotionModifier_CitySampleSimpleWarp_eventBP_AddOrUpdateWarpTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URootMotionModifier_CitySampleSimpleWarp_BP_AddOrUpdateWarpTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URootMotionModifier_CitySampleSimpleWarp_BP_AddOrUpdateWarpTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URootMotionModifier_CitySampleSimpleWarp);
	UClass* Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_NoRegister()
	{
		return URootMotionModifier_CitySampleSimpleWarp::StaticClass();
	}
	struct Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreXYAxes_MetaData[];
#endif
		static void NewProp_bIgnoreXYAxes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreXYAxes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpZTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarpZTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLerpTranslation_MetaData[];
#endif
		static void NewProp_bLerpTranslation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLerpTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreYaw_MetaData[];
#endif
		static void NewProp_bIgnoreYaw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedRootMotion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedRootMotion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URootMotionModifier_Warp,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URootMotionModifier_CitySampleSimpleWarp_BP_AddOrUpdateWarpTarget, "BP_AddOrUpdateWarpTarget" }, // 2219677710
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n * Custom version of the built-in Simple Warp with a few new options\n * Eventually we will update the built-in but we need to find a better way to expose these options\n*/" },
#endif
		{ "DisplayName", "CitySample Simple Warp" },
		{ "IncludePath", "Anim/RootMotionModifier_CitySampleSimpleWarp.h" },
		{ "ModuleRelativePath", "Public/Anim/RootMotionModifier_CitySampleSimpleWarp.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom version of the built-in Simple Warp with a few new options\nEventually we will update the built-in but we need to find a better way to expose these options" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_bIgnoreXYAxes_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When true, translation on the horizontal plane will remain intact */" },
#endif
		{ "DisplayAfter", "bWarpTranslation" },
		{ "EditCondition", "bWarpTranslation" },
		{ "ModuleRelativePath", "Public/Anim/RootMotionModifier_CitySampleSimpleWarp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, translation on the horizontal plane will remain intact" },
#endif
	};
#endif
	void Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_bIgnoreXYAxes_SetBit(void* Obj)
	{
		((URootMotionModifier_CitySampleSimpleWarp*)Obj)->bIgnoreXYAxes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_bIgnoreXYAxes = { "bIgnoreXYAxes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URootMotionModifier_CitySampleSimpleWarp), &Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_bIgnoreXYAxes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_bIgnoreXYAxes_MetaData), Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_bIgnoreXYAxes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_WarpZTolerance_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When total translation on the Z axis is below this value we will linearly interpolate it to reach the target. Only relevant when bIgnoreZAxis is false */" },
#endif
		{ "DisplayAfter", "WarpRotationTimeMultiplier" },
		{ "EditCondition", "bAllowAdditiveTranslationZAxis" },
		{ "ModuleRelativePath", "Public/Anim/RootMotionModifier_CitySampleSimpleWarp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When total translation on the Z axis is below this value we will linearly interpolate it to reach the target. Only relevant when bIgnoreZAxis is false" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_WarpZTolerance = { "WarpZTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_CitySampleSimpleWarp, WarpZTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_WarpZTolerance_MetaData), Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_WarpZTolerance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_bLerpTranslation_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When true, translation will we linearly interpolated instead of warped */" },
#endif
		{ "ModuleRelativePath", "Public/Anim/RootMotionModifier_CitySampleSimpleWarp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, translation will we linearly interpolated instead of warped" },
#endif
	};
#endif
	void Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_bLerpTranslation_SetBit(void* Obj)
	{
		((URootMotionModifier_CitySampleSimpleWarp*)Obj)->bLerpTranslation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_bLerpTranslation = { "bLerpTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URootMotionModifier_CitySampleSimpleWarp), &Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_bLerpTranslation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_bLerpTranslation_MetaData), Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_bLerpTranslation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_bIgnoreYaw_MetaData[] = {
		{ "Category", "Config" },
		{ "DisplayAfter", "bWarpRotation" },
		{ "EditCondition", "bWarpRotation" },
		{ "ModuleRelativePath", "Public/Anim/RootMotionModifier_CitySampleSimpleWarp.h" },
	};
#endif
	void Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_bIgnoreYaw_SetBit(void* Obj)
	{
		((URootMotionModifier_CitySampleSimpleWarp*)Obj)->bIgnoreYaw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_bIgnoreYaw = { "bIgnoreYaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URootMotionModifier_CitySampleSimpleWarp), &Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_bIgnoreYaw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_bIgnoreYaw_MetaData), Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_bIgnoreYaw_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_CachedRootMotion_MetaData[] = {
		{ "ModuleRelativePath", "Public/Anim/RootMotionModifier_CitySampleSimpleWarp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_CachedRootMotion = { "CachedRootMotion", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_CitySampleSimpleWarp, CachedRootMotion), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_CachedRootMotion_MetaData), Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_CachedRootMotion_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_bIgnoreXYAxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_WarpZTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_bLerpTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_bIgnoreYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::NewProp_CachedRootMotion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootMotionModifier_CitySampleSimpleWarp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::ClassParams = {
		&URootMotionModifier_CitySampleSimpleWarp::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::Class_MetaDataParams), Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp()
	{
		if (!Z_Registration_Info_UClass_URootMotionModifier_CitySampleSimpleWarp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URootMotionModifier_CitySampleSimpleWarp.OuterSingleton, Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URootMotionModifier_CitySampleSimpleWarp.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<URootMotionModifier_CitySampleSimpleWarp>()
	{
		return URootMotionModifier_CitySampleSimpleWarp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URootMotionModifier_CitySampleSimpleWarp);
	URootMotionModifier_CitySampleSimpleWarp::~URootMotionModifier_CitySampleSimpleWarp() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_RootMotionModifier_CitySampleSimpleWarp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_RootMotionModifier_CitySampleSimpleWarp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URootMotionModifier_CitySampleSimpleWarp, URootMotionModifier_CitySampleSimpleWarp::StaticClass, TEXT("URootMotionModifier_CitySampleSimpleWarp"), &Z_Registration_Info_UClass_URootMotionModifier_CitySampleSimpleWarp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URootMotionModifier_CitySampleSimpleWarp), 1549659457U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_RootMotionModifier_CitySampleSimpleWarp_h_2767875126(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_RootMotionModifier_CitySampleSimpleWarp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_RootMotionModifier_CitySampleSimpleWarp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
