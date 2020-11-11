// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/DefendingUnit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefendingUnit() {}
// Cross Module References
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_ADefendingUnit_NoRegister();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_ADefendingUnit();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_ADefendingUnit_Attack();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_ADefendingUnit_DealDamage();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_ADefendingUnit_Despawn();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_ADefendingUnit_GetMesh();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_ADefendingUnit_PlayDespawnAnim();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_ADefendingUnit_PlaySpawnAnim();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AEnemyUnit_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void ADefendingUnit::StaticRegisterNativesADefendingUnit()
	{
		UClass* Class = ADefendingUnit::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attack", &ADefendingUnit::execAttack },
			{ "DealDamage", &ADefendingUnit::execDealDamage },
			{ "Despawn", &ADefendingUnit::execDespawn },
			{ "GetMesh", &ADefendingUnit::execGetMesh },
			{ "OnDetectionSphereOverlapBegin", &ADefendingUnit::execOnDetectionSphereOverlapBegin },
			{ "OnDetectionSphereOverlapEnd", &ADefendingUnit::execOnDetectionSphereOverlapEnd },
			{ "PlayDespawnAnim", &ADefendingUnit::execPlayDespawnAnim },
			{ "PlaySpawnAnim", &ADefendingUnit::execPlaySpawnAnim },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADefendingUnit_Attack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefendingUnit_Attack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefendingUnit_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefendingUnit, nullptr, "Attack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefendingUnit_Attack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADefendingUnit_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefendingUnit_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefendingUnit_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefendingUnit_DealDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefendingUnit_DealDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefendingUnit_DealDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefendingUnit, nullptr, "DealDamage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefendingUnit_DealDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADefendingUnit_DealDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefendingUnit_DealDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefendingUnit_DealDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefendingUnit_Despawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefendingUnit_Despawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefendingUnit_Despawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefendingUnit, nullptr, "Despawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefendingUnit_Despawn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADefendingUnit_Despawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefendingUnit_Despawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefendingUnit_Despawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics
	{
		struct DefendingUnit_eventGetMesh_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefendingUnit_eventGetMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefendingUnit, nullptr, "GetMesh", nullptr, nullptr, sizeof(DefendingUnit_eventGetMesh_Parms), Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefendingUnit_GetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics
	{
		struct DefendingUnit_eventOnDetectionSphereOverlapBegin_Parms
		{
			UPrimitiveComponent* a_overlappedComp;
			AActor* a_otherActor;
			UPrimitiveComponent* a_otherComp;
			int32 a_otherBodyIndex;
			bool a_fromSweep;
			FHitResult a_sweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_a_sweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_a_sweepResult;
		static void NewProp_a_fromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_a_fromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_a_otherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_a_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_a_otherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_a_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_a_overlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_a_overlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_sweepResult = { "a_sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefendingUnit_eventOnDetectionSphereOverlapBegin_Parms, a_sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_sweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_sweepResult_MetaData)) };
	void Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_fromSweep_SetBit(void* Obj)
	{
		((DefendingUnit_eventOnDetectionSphereOverlapBegin_Parms*)Obj)->a_fromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_fromSweep = { "a_fromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DefendingUnit_eventOnDetectionSphereOverlapBegin_Parms), &Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_fromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherBodyIndex = { "a_otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefendingUnit_eventOnDetectionSphereOverlapBegin_Parms, a_otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherComp = { "a_otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefendingUnit_eventOnDetectionSphereOverlapBegin_Parms, a_otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherActor = { "a_otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefendingUnit_eventOnDetectionSphereOverlapBegin_Parms, a_otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_overlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_overlappedComp = { "a_overlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefendingUnit_eventOnDetectionSphereOverlapBegin_Parms, a_overlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_overlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_overlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_sweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_fromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_overlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefendingUnit, nullptr, "OnDetectionSphereOverlapBegin", nullptr, nullptr, sizeof(DefendingUnit_eventOnDetectionSphereOverlapBegin_Parms), Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd_Statics
	{
		struct DefendingUnit_eventOnDetectionSphereOverlapEnd_Parms
		{
			UPrimitiveComponent* a_overlappedComp;
			AActor* a_otherActor;
			UPrimitiveComponent* a_otherComp;
			int32 a_otherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_a_otherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_a_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_a_otherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_a_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_a_overlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_a_overlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherBodyIndex = { "a_otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefendingUnit_eventOnDetectionSphereOverlapEnd_Parms, a_otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherComp = { "a_otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefendingUnit_eventOnDetectionSphereOverlapEnd_Parms, a_otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherActor = { "a_otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefendingUnit_eventOnDetectionSphereOverlapEnd_Parms, a_otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_overlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_overlappedComp = { "a_overlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefendingUnit_eventOnDetectionSphereOverlapEnd_Parms, a_overlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_overlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_overlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_overlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefendingUnit, nullptr, "OnDetectionSphereOverlapEnd", nullptr, nullptr, sizeof(DefendingUnit_eventOnDetectionSphereOverlapEnd_Parms), Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefendingUnit_PlayDespawnAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefendingUnit_PlayDespawnAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefendingUnit_PlayDespawnAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefendingUnit, nullptr, "PlayDespawnAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefendingUnit_PlayDespawnAnim_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADefendingUnit_PlayDespawnAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefendingUnit_PlayDespawnAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefendingUnit_PlayDespawnAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefendingUnit_PlaySpawnAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefendingUnit_PlaySpawnAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefendingUnit_PlaySpawnAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefendingUnit, nullptr, "PlaySpawnAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefendingUnit_PlaySpawnAnim_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADefendingUnit_PlaySpawnAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefendingUnit_PlaySpawnAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefendingUnit_PlaySpawnAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADefendingUnit_NoRegister()
	{
		return ADefendingUnit::StaticClass();
	}
	struct Z_Construct_UClass_ADefendingUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_facingTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_facingTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_attackTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_attackTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_attackInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_attackInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_attackDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_attackDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_detectedEnemies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_detectedEnemies;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_detectedEnemies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_despawnQueued_MetaData[];
#endif
		static void NewProp_m_despawnQueued_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_despawnQueued;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_despawnAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_despawnAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_spawnAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_spawnAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_curHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_curHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_fullHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_fullHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_capsuleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_capsuleComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_lifeBarComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_lifeBarComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_lifeBarColour_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_lifeBarColour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_detectionSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_detectionSphere;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefendingUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADefendingUnit_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADefendingUnit_Attack, "Attack" }, // 1382109093
		{ &Z_Construct_UFunction_ADefendingUnit_DealDamage, "DealDamage" }, // 2724591250
		{ &Z_Construct_UFunction_ADefendingUnit_Despawn, "Despawn" }, // 1268386680
		{ &Z_Construct_UFunction_ADefendingUnit_GetMesh, "GetMesh" }, // 2538256725
		{ &Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapBegin, "OnDetectionSphereOverlapBegin" }, // 315467558
		{ &Z_Construct_UFunction_ADefendingUnit_OnDetectionSphereOverlapEnd, "OnDetectionSphereOverlapEnd" }, // 4078899677
		{ &Z_Construct_UFunction_ADefendingUnit_PlayDespawnAnim, "PlayDespawnAnim" }, // 2071711920
		{ &Z_Construct_UFunction_ADefendingUnit_PlaySpawnAnim, "PlaySpawnAnim" }, // 442055048
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefendingUnit_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DefendingUnit.h" },
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_facingTarget_MetaData[] = {
		{ "Category", "DefendingUnit" },
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_facingTarget = { "m_facingTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefendingUnit, m_facingTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_facingTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_facingTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_attackTimer_MetaData[] = {
		{ "Category", "DefendingUnit" },
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_attackTimer = { "m_attackTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefendingUnit, m_attackTimer), METADATA_PARAMS(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_attackTimer_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_attackTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_attackInterval_MetaData[] = {
		{ "Category", "DefendingUnit" },
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_attackInterval = { "m_attackInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefendingUnit, m_attackInterval), METADATA_PARAMS(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_attackInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_attackInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_attackDamage_MetaData[] = {
		{ "Category", "DefendingUnit" },
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_attackDamage = { "m_attackDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefendingUnit, m_attackDamage), METADATA_PARAMS(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_attackDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_attackDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_detectedEnemies_MetaData[] = {
		{ "Category", "DefendingUnit" },
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_detectedEnemies = { "m_detectedEnemies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefendingUnit, m_detectedEnemies), METADATA_PARAMS(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_detectedEnemies_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_detectedEnemies_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_detectedEnemies_Inner = { "m_detectedEnemies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AEnemyUnit_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_despawnQueued_MetaData[] = {
		{ "Category", "DefendingUnit" },
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	void Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_despawnQueued_SetBit(void* Obj)
	{
		((ADefendingUnit*)Obj)->m_despawnQueued = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_despawnQueued = { "m_despawnQueued", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADefendingUnit), &Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_despawnQueued_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_despawnQueued_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_despawnQueued_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_despawnAnim_MetaData[] = {
		{ "Category", "DefendingUnit" },
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_despawnAnim = { "m_despawnAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefendingUnit, m_despawnAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_despawnAnim_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_despawnAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_spawnAnim_MetaData[] = {
		{ "Category", "DefendingUnit" },
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_spawnAnim = { "m_spawnAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefendingUnit, m_spawnAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_spawnAnim_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_spawnAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_curHealth_MetaData[] = {
		{ "Category", "DefendingUnit" },
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_curHealth = { "m_curHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefendingUnit, m_curHealth), METADATA_PARAMS(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_curHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_curHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_fullHealth_MetaData[] = {
		{ "Category", "DefendingUnit" },
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_fullHealth = { "m_fullHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefendingUnit, m_fullHealth), METADATA_PARAMS(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_fullHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_fullHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_capsuleComponent_MetaData[] = {
		{ "Category", "DefendingUnit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_capsuleComponent = { "m_capsuleComponent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefendingUnit, m_capsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_capsuleComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_capsuleComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_mesh_MetaData[] = {
		{ "Category", "DefendingUnit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_mesh = { "m_mesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefendingUnit, m_mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_lifeBarComponent_MetaData[] = {
		{ "Category", "DefendingUnit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_lifeBarComponent = { "m_lifeBarComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefendingUnit, m_lifeBarComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_lifeBarComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_lifeBarComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_lifeBarColour_MetaData[] = {
		{ "Category", "DefendingUnit" },
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_lifeBarColour = { "m_lifeBarColour", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefendingUnit, m_lifeBarColour), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_lifeBarColour_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_lifeBarColour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_detectionSphere_MetaData[] = {
		{ "Category", "DefendingUnit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_detectionSphere = { "m_detectionSphere", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefendingUnit, m_detectionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_detectionSphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_detectionSphere_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefendingUnit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_facingTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_attackTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_attackInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_attackDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_detectedEnemies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_detectedEnemies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_despawnQueued,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_despawnAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_spawnAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_curHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_fullHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_capsuleComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_lifeBarComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_lifeBarColour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_detectionSphere,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefendingUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefendingUnit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADefendingUnit_Statics::ClassParams = {
		&ADefendingUnit::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADefendingUnit_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ADefendingUnit_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADefendingUnit_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADefendingUnit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefendingUnit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADefendingUnit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADefendingUnit, 2370772654);
	template<> GHOULSANDGOODIES_API UClass* StaticClass<ADefendingUnit>()
	{
		return ADefendingUnit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADefendingUnit(Z_Construct_UClass_ADefendingUnit, &ADefendingUnit::StaticClass, TEXT("/Script/GhoulsAndGoodies"), TEXT("ADefendingUnit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefendingUnit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
