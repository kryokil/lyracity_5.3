// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficFunctionLibrary.h"
#include "MassTraffic/Public/MassTrafficVehicleVisualizationProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	MASSSPAWNER_API UClass* Z_Construct_UClass_AMassSpawner_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFunctionLibrary();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFunctionLibrary_NoRegister();
	MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPackedVehicleInstanceCustomData();
	MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	DEFINE_FUNCTION(UMassTrafficFunctionLibrary::execDespawnNonPlayerDrivenParkedVehicles)
	{
		P_GET_OBJECT(AMassSpawner,Z_Param_ParkedVehiclesMassSpawner);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMassTrafficFunctionLibrary::DespawnNonPlayerDrivenParkedVehicles(Z_Param_ParkedVehiclesMassSpawner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMassTrafficFunctionLibrary::execRemoveVehiclesOverlappingPlayers)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMassTrafficFunctionLibrary::RemoveVehiclesOverlappingPlayers(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMassTrafficFunctionLibrary::execGetPackedTrafficVehicleInstanceCustomData)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PrimitiveComponent);
		P_GET_STRUCT_REF(FMassTrafficPackedVehicleInstanceCustomData,Z_Param_Out_OutPackedCustomData);
		P_GET_PROPERTY(FIntProperty,Z_Param_DataIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMassTrafficFunctionLibrary::GetPackedTrafficVehicleInstanceCustomData(Z_Param_PrimitiveComponent,Z_Param_Out_OutPackedCustomData,Z_Param_DataIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMassTrafficFunctionLibrary::execUnpackTrafficVehicleInstanceCustomData)
	{
		P_GET_STRUCT_REF(FMassTrafficPackedVehicleInstanceCustomData,Z_Param_Out_PackedCustomData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMassTrafficVehicleInstanceCustomData*)Z_Param__Result=UMassTrafficFunctionLibrary::UnpackTrafficVehicleInstanceCustomData(Z_Param_Out_PackedCustomData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMassTrafficFunctionLibrary::execPackTrafficVehicleInstanceCustomData)
	{
		P_GET_STRUCT_REF(FMassTrafficVehicleInstanceCustomData,Z_Param_Out_CustomData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMassTrafficPackedVehicleInstanceCustomData*)Z_Param__Result=UMassTrafficFunctionLibrary::PackTrafficVehicleInstanceCustomData(Z_Param_Out_CustomData);
		P_NATIVE_END;
	}
	void UMassTrafficFunctionLibrary::StaticRegisterNativesUMassTrafficFunctionLibrary()
	{
		UClass* Class = UMassTrafficFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DespawnNonPlayerDrivenParkedVehicles", &UMassTrafficFunctionLibrary::execDespawnNonPlayerDrivenParkedVehicles },
			{ "GetPackedTrafficVehicleInstanceCustomData", &UMassTrafficFunctionLibrary::execGetPackedTrafficVehicleInstanceCustomData },
			{ "PackTrafficVehicleInstanceCustomData", &UMassTrafficFunctionLibrary::execPackTrafficVehicleInstanceCustomData },
			{ "RemoveVehiclesOverlappingPlayers", &UMassTrafficFunctionLibrary::execRemoveVehiclesOverlappingPlayers },
			{ "UnpackTrafficVehicleInstanceCustomData", &UMassTrafficFunctionLibrary::execUnpackTrafficVehicleInstanceCustomData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMassTrafficFunctionLibrary_DespawnNonPlayerDrivenParkedVehicles_Statics
	{
		struct MassTrafficFunctionLibrary_eventDespawnNonPlayerDrivenParkedVehicles_Parms
		{
			AMassSpawner* ParkedVehiclesMassSpawner;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParkedVehiclesMassSpawner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMassTrafficFunctionLibrary_DespawnNonPlayerDrivenParkedVehicles_Statics::NewProp_ParkedVehiclesMassSpawner = { "ParkedVehiclesMassSpawner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficFunctionLibrary_eventDespawnNonPlayerDrivenParkedVehicles_Parms, ParkedVehiclesMassSpawner), Z_Construct_UClass_AMassSpawner_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassTrafficFunctionLibrary_DespawnNonPlayerDrivenParkedVehicles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficFunctionLibrary_DespawnNonPlayerDrivenParkedVehicles_Statics::NewProp_ParkedVehiclesMassSpawner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassTrafficFunctionLibrary_DespawnNonPlayerDrivenParkedVehicles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Parked Vehicles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Calls DoDespawning on ParkedVehiclesMassSpawner, passing in the current player vehicles list as entities to\n\x09 * ignore.\n\x09 *\n\x09 * Note: Player vehicles are any parked vehicle tagged with FMassTrafficPlayerVehicleTag. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calls DoDespawning on ParkedVehiclesMassSpawner, passing in the current player vehicles list as entities to\nignore.\n\nNote: Player vehicles are any parked vehicle tagged with FMassTrafficPlayerVehicleTag." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficFunctionLibrary_DespawnNonPlayerDrivenParkedVehicles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassTrafficFunctionLibrary, nullptr, "DespawnNonPlayerDrivenParkedVehicles", nullptr, nullptr, Z_Construct_UFunction_UMassTrafficFunctionLibrary_DespawnNonPlayerDrivenParkedVehicles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficFunctionLibrary_DespawnNonPlayerDrivenParkedVehicles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMassTrafficFunctionLibrary_DespawnNonPlayerDrivenParkedVehicles_Statics::MassTrafficFunctionLibrary_eventDespawnNonPlayerDrivenParkedVehicles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficFunctionLibrary_DespawnNonPlayerDrivenParkedVehicles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficFunctionLibrary_DespawnNonPlayerDrivenParkedVehicles_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficFunctionLibrary_DespawnNonPlayerDrivenParkedVehicles_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMassTrafficFunctionLibrary_DespawnNonPlayerDrivenParkedVehicles_Statics::MassTrafficFunctionLibrary_eventDespawnNonPlayerDrivenParkedVehicles_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMassTrafficFunctionLibrary_DespawnNonPlayerDrivenParkedVehicles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficFunctionLibrary_DespawnNonPlayerDrivenParkedVehicles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData_Statics
	{
		struct MassTrafficFunctionLibrary_eventGetPackedTrafficVehicleInstanceCustomData_Parms
		{
			const UPrimitiveComponent* PrimitiveComponent;
			FMassTrafficPackedVehicleInstanceCustomData OutPackedCustomData;
			int32 DataIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimitiveComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPackedCustomData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData_Statics::NewProp_PrimitiveComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData_Statics::NewProp_PrimitiveComponent = { "PrimitiveComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficFunctionLibrary_eventGetPackedTrafficVehicleInstanceCustomData_Parms, PrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData_Statics::NewProp_PrimitiveComponent_MetaData), Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData_Statics::NewProp_PrimitiveComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData_Statics::NewProp_OutPackedCustomData = { "OutPackedCustomData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficFunctionLibrary_eventGetPackedTrafficVehicleInstanceCustomData_Parms, OutPackedCustomData), Z_Construct_UScriptStruct_FMassTrafficPackedVehicleInstanceCustomData, METADATA_PARAMS(0, nullptr) }; // 3085517142
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData_Statics::NewProp_DataIndex = { "DataIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficFunctionLibrary_eventGetPackedTrafficVehicleInstanceCustomData_Parms, DataIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MassTrafficFunctionLibrary_eventGetPackedTrafficVehicleInstanceCustomData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficFunctionLibrary_eventGetPackedTrafficVehicleInstanceCustomData_Parms), &Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData_Statics::NewProp_PrimitiveComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData_Statics::NewProp_OutPackedCustomData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData_Statics::NewProp_DataIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Instance Custom Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Unpack vehicle visualization flags and random fraction from packed floats back out to discrete fields\n\x09 * @param\x09PrimitiveComponent\x09The primitive component to read the custom primitive data from\n\x09 * @param\x09""DataIndex\x09\x09\x09The custom primitive data index to read from. 1 is the default Index that\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09MassTraffic uses to set custom data on vehicle primitives\n\x09 * @param\x09OutPackedCustomData\x09Packed custom data if there was custom primitive data at DataIndex, otherwise returns a default constructed FMassTrafficPackedVehicleInstanceCustomData  \x09\x09\x09\x09\x09\x09\x09\x09\n\x09 * @return\x09true if there was custom primitive data at DataIndex, false otherwise.\n\x09 */" },
#endif
		{ "CPP_Default_DataIndex", "1" },
		{ "ModuleRelativePath", "Public/MassTrafficFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unpack vehicle visualization flags and random fraction from packed floats back out to discrete fields\n@param       PrimitiveComponent      The primitive component to read the custom primitive data from\n@param       DataIndex                       The custom primitive data index to read from. 1 is the default Index that\n                                                             MassTraffic uses to set custom data on vehicle primitives\n@param       OutPackedCustomData     Packed custom data if there was custom primitive data at DataIndex, otherwise returns a default constructed FMassTrafficPackedVehicleInstanceCustomData\n@return      true if there was custom primitive data at DataIndex, false otherwise." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassTrafficFunctionLibrary, nullptr, "GetPackedTrafficVehicleInstanceCustomData", nullptr, nullptr, Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData_Statics::MassTrafficFunctionLibrary_eventGetPackedTrafficVehicleInstanceCustomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData_Statics::MassTrafficFunctionLibrary_eventGetPackedTrafficVehicleInstanceCustomData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMassTrafficFunctionLibrary_PackTrafficVehicleInstanceCustomData_Statics
	{
		struct MassTrafficFunctionLibrary_eventPackTrafficVehicleInstanceCustomData_Parms
		{
			FMassTrafficVehicleInstanceCustomData CustomData;
			FMassTrafficPackedVehicleInstanceCustomData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassTrafficFunctionLibrary_PackTrafficVehicleInstanceCustomData_Statics::NewProp_CustomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMassTrafficFunctionLibrary_PackTrafficVehicleInstanceCustomData_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficFunctionLibrary_eventPackTrafficVehicleInstanceCustomData_Parms, CustomData), Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficFunctionLibrary_PackTrafficVehicleInstanceCustomData_Statics::NewProp_CustomData_MetaData), Z_Construct_UFunction_UMassTrafficFunctionLibrary_PackTrafficVehicleInstanceCustomData_Statics::NewProp_CustomData_MetaData) }; // 1005043982
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMassTrafficFunctionLibrary_PackTrafficVehicleInstanceCustomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficFunctionLibrary_eventPackTrafficVehicleInstanceCustomData_Parms, ReturnValue), Z_Construct_UScriptStruct_FMassTrafficPackedVehicleInstanceCustomData, METADATA_PARAMS(0, nullptr) }; // 3085517142
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassTrafficFunctionLibrary_PackTrafficVehicleInstanceCustomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficFunctionLibrary_PackTrafficVehicleInstanceCustomData_Statics::NewProp_CustomData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficFunctionLibrary_PackTrafficVehicleInstanceCustomData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassTrafficFunctionLibrary_PackTrafficVehicleInstanceCustomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Instance Custom Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Pack vehicle visualization flags and random fraction into packed floats for use in Per Instance Custom Data or\n\x09 * Custom Primitive Data\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pack vehicle visualization flags and random fraction into packed floats for use in Per Instance Custom Data or\nCustom Primitive Data" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficFunctionLibrary_PackTrafficVehicleInstanceCustomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassTrafficFunctionLibrary, nullptr, "PackTrafficVehicleInstanceCustomData", nullptr, nullptr, Z_Construct_UFunction_UMassTrafficFunctionLibrary_PackTrafficVehicleInstanceCustomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficFunctionLibrary_PackTrafficVehicleInstanceCustomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMassTrafficFunctionLibrary_PackTrafficVehicleInstanceCustomData_Statics::MassTrafficFunctionLibrary_eventPackTrafficVehicleInstanceCustomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficFunctionLibrary_PackTrafficVehicleInstanceCustomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficFunctionLibrary_PackTrafficVehicleInstanceCustomData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficFunctionLibrary_PackTrafficVehicleInstanceCustomData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMassTrafficFunctionLibrary_PackTrafficVehicleInstanceCustomData_Statics::MassTrafficFunctionLibrary_eventPackTrafficVehicleInstanceCustomData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMassTrafficFunctionLibrary_PackTrafficVehicleInstanceCustomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficFunctionLibrary_PackTrafficVehicleInstanceCustomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMassTrafficFunctionLibrary_RemoveVehiclesOverlappingPlayers_Statics
	{
		struct MassTrafficFunctionLibrary_eventRemoveVehiclesOverlappingPlayers_Parms
		{
			UObject* WorldContextObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMassTrafficFunctionLibrary_RemoveVehiclesOverlappingPlayers_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficFunctionLibrary_eventRemoveVehiclesOverlappingPlayers_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassTrafficFunctionLibrary_RemoveVehiclesOverlappingPlayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficFunctionLibrary_RemoveVehiclesOverlappingPlayers_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassTrafficFunctionLibrary_RemoveVehiclesOverlappingPlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Runs UMassTrafficRecycleVehiclesOverlappingPlayersProcessor to recycle all vehicles within 2 * radius of the\n\x09 * current player location.\n\x09 * @see UMassTrafficRecycleVehiclesOverlappingPlayersProcessor\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runs UMassTrafficRecycleVehiclesOverlappingPlayersProcessor to recycle all vehicles within 2 * radius of the\ncurrent player location.\n@see UMassTrafficRecycleVehiclesOverlappingPlayersProcessor" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficFunctionLibrary_RemoveVehiclesOverlappingPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassTrafficFunctionLibrary, nullptr, "RemoveVehiclesOverlappingPlayers", nullptr, nullptr, Z_Construct_UFunction_UMassTrafficFunctionLibrary_RemoveVehiclesOverlappingPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficFunctionLibrary_RemoveVehiclesOverlappingPlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMassTrafficFunctionLibrary_RemoveVehiclesOverlappingPlayers_Statics::MassTrafficFunctionLibrary_eventRemoveVehiclesOverlappingPlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficFunctionLibrary_RemoveVehiclesOverlappingPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficFunctionLibrary_RemoveVehiclesOverlappingPlayers_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficFunctionLibrary_RemoveVehiclesOverlappingPlayers_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMassTrafficFunctionLibrary_RemoveVehiclesOverlappingPlayers_Statics::MassTrafficFunctionLibrary_eventRemoveVehiclesOverlappingPlayers_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMassTrafficFunctionLibrary_RemoveVehiclesOverlappingPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficFunctionLibrary_RemoveVehiclesOverlappingPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMassTrafficFunctionLibrary_UnpackTrafficVehicleInstanceCustomData_Statics
	{
		struct MassTrafficFunctionLibrary_eventUnpackTrafficVehicleInstanceCustomData_Parms
		{
			FMassTrafficPackedVehicleInstanceCustomData PackedCustomData;
			FMassTrafficVehicleInstanceCustomData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackedCustomData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PackedCustomData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassTrafficFunctionLibrary_UnpackTrafficVehicleInstanceCustomData_Statics::NewProp_PackedCustomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMassTrafficFunctionLibrary_UnpackTrafficVehicleInstanceCustomData_Statics::NewProp_PackedCustomData = { "PackedCustomData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficFunctionLibrary_eventUnpackTrafficVehicleInstanceCustomData_Parms, PackedCustomData), Z_Construct_UScriptStruct_FMassTrafficPackedVehicleInstanceCustomData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficFunctionLibrary_UnpackTrafficVehicleInstanceCustomData_Statics::NewProp_PackedCustomData_MetaData), Z_Construct_UFunction_UMassTrafficFunctionLibrary_UnpackTrafficVehicleInstanceCustomData_Statics::NewProp_PackedCustomData_MetaData) }; // 3085517142
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMassTrafficFunctionLibrary_UnpackTrafficVehicleInstanceCustomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficFunctionLibrary_eventUnpackTrafficVehicleInstanceCustomData_Parms, ReturnValue), Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData, METADATA_PARAMS(0, nullptr) }; // 1005043982
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassTrafficFunctionLibrary_UnpackTrafficVehicleInstanceCustomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficFunctionLibrary_UnpackTrafficVehicleInstanceCustomData_Statics::NewProp_PackedCustomData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficFunctionLibrary_UnpackTrafficVehicleInstanceCustomData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassTrafficFunctionLibrary_UnpackTrafficVehicleInstanceCustomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Instance Custom Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Unpack vehicle visualization flags and random fraction from packed floats back out to discrete fields\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unpack vehicle visualization flags and random fraction from packed floats back out to discrete fields" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficFunctionLibrary_UnpackTrafficVehicleInstanceCustomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassTrafficFunctionLibrary, nullptr, "UnpackTrafficVehicleInstanceCustomData", nullptr, nullptr, Z_Construct_UFunction_UMassTrafficFunctionLibrary_UnpackTrafficVehicleInstanceCustomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficFunctionLibrary_UnpackTrafficVehicleInstanceCustomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMassTrafficFunctionLibrary_UnpackTrafficVehicleInstanceCustomData_Statics::MassTrafficFunctionLibrary_eventUnpackTrafficVehicleInstanceCustomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficFunctionLibrary_UnpackTrafficVehicleInstanceCustomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficFunctionLibrary_UnpackTrafficVehicleInstanceCustomData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficFunctionLibrary_UnpackTrafficVehicleInstanceCustomData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMassTrafficFunctionLibrary_UnpackTrafficVehicleInstanceCustomData_Statics::MassTrafficFunctionLibrary_eventUnpackTrafficVehicleInstanceCustomData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMassTrafficFunctionLibrary_UnpackTrafficVehicleInstanceCustomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficFunctionLibrary_UnpackTrafficVehicleInstanceCustomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficFunctionLibrary);
	UClass* Z_Construct_UClass_UMassTrafficFunctionLibrary_NoRegister()
	{
		return UMassTrafficFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMassTrafficFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMassTrafficFunctionLibrary_DespawnNonPlayerDrivenParkedVehicles, "DespawnNonPlayerDrivenParkedVehicles" }, // 1369327653
		{ &Z_Construct_UFunction_UMassTrafficFunctionLibrary_GetPackedTrafficVehicleInstanceCustomData, "GetPackedTrafficVehicleInstanceCustomData" }, // 2528667996
		{ &Z_Construct_UFunction_UMassTrafficFunctionLibrary_PackTrafficVehicleInstanceCustomData, "PackTrafficVehicleInstanceCustomData" }, // 4259242298
		{ &Z_Construct_UFunction_UMassTrafficFunctionLibrary_RemoveVehiclesOverlappingPlayers, "RemoveVehiclesOverlappingPlayers" }, // 3240246884
		{ &Z_Construct_UFunction_UMassTrafficFunctionLibrary_UnpackTrafficVehicleInstanceCustomData, "UnpackTrafficVehicleInstanceCustomData" }, // 3826373873
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MassTrafficFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficFunctionLibrary_Statics::ClassParams = {
		&UMassTrafficFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassTrafficFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficFunctionLibrary.OuterSingleton, Z_Construct_UClass_UMassTrafficFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficFunctionLibrary.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficFunctionLibrary>()
	{
		return UMassTrafficFunctionLibrary::StaticClass();
	}
	UMassTrafficFunctionLibrary::UMassTrafficFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficFunctionLibrary);
	UMassTrafficFunctionLibrary::~UMassTrafficFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficFunctionLibrary, UMassTrafficFunctionLibrary::StaticClass, TEXT("UMassTrafficFunctionLibrary"), &Z_Registration_Info_UClass_UMassTrafficFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficFunctionLibrary), 813956353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFunctionLibrary_h_3278775299(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
