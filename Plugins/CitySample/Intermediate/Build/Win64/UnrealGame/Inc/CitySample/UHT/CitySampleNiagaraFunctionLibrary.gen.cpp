// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/FX/CitySampleNiagaraFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleNiagaraFunctionLibrary() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleNiagaraFunctionLibrary();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleNiagaraFunctionLibrary_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	DEFINE_FUNCTION(UCitySampleNiagaraFunctionLibrary::execSetSkeletalMeshDataInterfaceWholeMeshLOD)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FStrProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_WholeMeshLOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleNiagaraFunctionLibrary::SetSkeletalMeshDataInterfaceWholeMeshLOD(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_WholeMeshLOD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleNiagaraFunctionLibrary::execPinNiagaraSkelMeshUvMapping)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_UvSetIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleNiagaraFunctionLibrary::PinNiagaraSkelMeshUvMapping(Z_Param_WorldContextObject,Z_Param_SkeletalMesh,Z_Param_LodIndex,Z_Param_UvSetIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleNiagaraFunctionLibrary::execPinNiagaraSkelMeshConnectivity)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleNiagaraFunctionLibrary::PinNiagaraSkelMeshConnectivity(Z_Param_WorldContextObject,Z_Param_SkeletalMesh,Z_Param_LodIndex);
		P_NATIVE_END;
	}
	void UCitySampleNiagaraFunctionLibrary::StaticRegisterNativesUCitySampleNiagaraFunctionLibrary()
	{
		UClass* Class = UCitySampleNiagaraFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PinNiagaraSkelMeshConnectivity", &UCitySampleNiagaraFunctionLibrary::execPinNiagaraSkelMeshConnectivity },
			{ "PinNiagaraSkelMeshUvMapping", &UCitySampleNiagaraFunctionLibrary::execPinNiagaraSkelMeshUvMapping },
			{ "SetSkeletalMeshDataInterfaceWholeMeshLOD", &UCitySampleNiagaraFunctionLibrary::execSetSkeletalMeshDataInterfaceWholeMeshLOD },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshConnectivity_Statics
	{
		struct CitySampleNiagaraFunctionLibrary_eventPinNiagaraSkelMeshConnectivity_Parms
		{
			const UObject* WorldContextObject;
			USkeletalMesh* SkeletalMesh;
			int32 LodIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshConnectivity_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshConnectivity_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleNiagaraFunctionLibrary_eventPinNiagaraSkelMeshConnectivity_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshConnectivity_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshConnectivity_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshConnectivity_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleNiagaraFunctionLibrary_eventPinNiagaraSkelMeshConnectivity_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshConnectivity_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleNiagaraFunctionLibrary_eventPinNiagaraSkelMeshConnectivity_Parms, LodIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshConnectivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshConnectivity_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshConnectivity_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshConnectivity_Statics::NewProp_LodIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshConnectivity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Pins connectivity information for the specified skeletal mesh to the lifetime of the provided world.\n\x09*/" },
#endif
		{ "Keywords", "CitySample Niagara System" },
		{ "ModuleRelativePath", "Public/FX/CitySampleNiagaraFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pins connectivity information for the specified skeletal mesh to the lifetime of the provided world." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshConnectivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleNiagaraFunctionLibrary, nullptr, "PinNiagaraSkelMeshConnectivity", nullptr, nullptr, Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshConnectivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshConnectivity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshConnectivity_Statics::CitySampleNiagaraFunctionLibrary_eventPinNiagaraSkelMeshConnectivity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshConnectivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshConnectivity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshConnectivity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshConnectivity_Statics::CitySampleNiagaraFunctionLibrary_eventPinNiagaraSkelMeshConnectivity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshConnectivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshConnectivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshUvMapping_Statics
	{
		struct CitySampleNiagaraFunctionLibrary_eventPinNiagaraSkelMeshUvMapping_Parms
		{
			const UObject* WorldContextObject;
			USkeletalMesh* SkeletalMesh;
			int32 LodIndex;
			int32 UvSetIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UvSetIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshUvMapping_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshUvMapping_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleNiagaraFunctionLibrary_eventPinNiagaraSkelMeshUvMapping_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshUvMapping_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshUvMapping_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshUvMapping_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleNiagaraFunctionLibrary_eventPinNiagaraSkelMeshUvMapping_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshUvMapping_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleNiagaraFunctionLibrary_eventPinNiagaraSkelMeshUvMapping_Parms, LodIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshUvMapping_Statics::NewProp_UvSetIndex = { "UvSetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleNiagaraFunctionLibrary_eventPinNiagaraSkelMeshUvMapping_Parms, UvSetIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshUvMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshUvMapping_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshUvMapping_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshUvMapping_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshUvMapping_Statics::NewProp_UvSetIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshUvMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Pins UV mapping information for the specified skeletal mesh to the lifetime of the provided world.\n\x09*/" },
#endif
		{ "Keywords", "CitySample Niagara System" },
		{ "ModuleRelativePath", "Public/FX/CitySampleNiagaraFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pins UV mapping information for the specified skeletal mesh to the lifetime of the provided world." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshUvMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleNiagaraFunctionLibrary, nullptr, "PinNiagaraSkelMeshUvMapping", nullptr, nullptr, Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshUvMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshUvMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshUvMapping_Statics::CitySampleNiagaraFunctionLibrary_eventPinNiagaraSkelMeshUvMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshUvMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshUvMapping_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshUvMapping_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshUvMapping_Statics::CitySampleNiagaraFunctionLibrary_eventPinNiagaraSkelMeshUvMapping_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshUvMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshUvMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD_Statics
	{
		struct CitySampleNiagaraFunctionLibrary_eventSetSkeletalMeshDataInterfaceWholeMeshLOD_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FString OverrideName;
			int32 WholeMeshLOD;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_WholeMeshLOD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleNiagaraFunctionLibrary_eventSetSkeletalMeshDataInterfaceWholeMeshLOD_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD_Statics::NewProp_NiagaraSystem_MetaData), Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD_Statics::NewProp_NiagaraSystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD_Statics::NewProp_OverrideName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleNiagaraFunctionLibrary_eventSetSkeletalMeshDataInterfaceWholeMeshLOD_Parms, OverrideName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD_Statics::NewProp_OverrideName_MetaData), Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD_Statics::NewProp_OverrideName_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD_Statics::NewProp_WholeMeshLOD = { "WholeMeshLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleNiagaraFunctionLibrary_eventSetSkeletalMeshDataInterfaceWholeMeshLOD_Parms, WholeMeshLOD), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD_Statics::NewProp_WholeMeshLOD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the desired LOD level to sample from. */" },
#endif
		{ "ModuleRelativePath", "Public/FX/CitySampleNiagaraFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the desired LOD level to sample from." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleNiagaraFunctionLibrary, nullptr, "SetSkeletalMeshDataInterfaceWholeMeshLOD", nullptr, nullptr, Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD_Statics::CitySampleNiagaraFunctionLibrary_eventSetSkeletalMeshDataInterfaceWholeMeshLOD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD_Statics::CitySampleNiagaraFunctionLibrary_eventSetSkeletalMeshDataInterfaceWholeMeshLOD_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleNiagaraFunctionLibrary);
	UClass* Z_Construct_UClass_UCitySampleNiagaraFunctionLibrary_NoRegister()
	{
		return UCitySampleNiagaraFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleNiagaraFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleNiagaraFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleNiagaraFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySampleNiagaraFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshConnectivity, "PinNiagaraSkelMeshConnectivity" }, // 2124675458
		{ &Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_PinNiagaraSkelMeshUvMapping, "PinNiagaraSkelMeshUvMapping" }, // 1808905512
		{ &Z_Construct_UFunction_UCitySampleNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceWholeMeshLOD, "SetSkeletalMeshDataInterfaceWholeMeshLOD" }, // 2787323264
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleNiagaraFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleNiagaraFunctionLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A C++ and Blueprint accessible library of utility functions for accessing Niagara simulations\n*/" },
#endif
		{ "IncludePath", "FX/CitySampleNiagaraFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/FX/CitySampleNiagaraFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A C++ and Blueprint accessible library of utility functions for accessing Niagara simulations" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleNiagaraFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleNiagaraFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleNiagaraFunctionLibrary_Statics::ClassParams = {
		&UCitySampleNiagaraFunctionLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleNiagaraFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleNiagaraFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCitySampleNiagaraFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UCitySampleNiagaraFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleNiagaraFunctionLibrary.OuterSingleton, Z_Construct_UClass_UCitySampleNiagaraFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleNiagaraFunctionLibrary.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleNiagaraFunctionLibrary>()
	{
		return UCitySampleNiagaraFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleNiagaraFunctionLibrary);
	UCitySampleNiagaraFunctionLibrary::~UCitySampleNiagaraFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_FX_CitySampleNiagaraFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_FX_CitySampleNiagaraFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleNiagaraFunctionLibrary, UCitySampleNiagaraFunctionLibrary::StaticClass, TEXT("UCitySampleNiagaraFunctionLibrary"), &Z_Registration_Info_UClass_UCitySampleNiagaraFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleNiagaraFunctionLibrary), 2069146204U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_FX_CitySampleNiagaraFunctionLibrary_h_851513808(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_FX_CitySampleNiagaraFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_FX_CitySampleNiagaraFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
