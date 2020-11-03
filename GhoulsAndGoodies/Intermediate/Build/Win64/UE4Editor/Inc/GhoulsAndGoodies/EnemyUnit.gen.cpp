// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/EnemyUnit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyUnit() {}
// Cross Module References
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AEnemyUnit_NoRegister();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AEnemyUnit();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_AEnemyUnit_Attack();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_AEnemyUnit_DealDamage();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_AEnemyUnit_Despawn();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_AEnemyUnit_PlayDespawnAnimation();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_AEnemyUnit_UpdateLifeBar();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_ADefendingUnit_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
	void AEnemyUnit::StaticRegisterNativesAEnemyUnit()
	{
		UClass* Class = AEnemyUnit::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attack", &AEnemyUnit::execAttack },
			{ "DealDamage", &AEnemyUnit::execDealDamage },
			{ "Despawn", &AEnemyUnit::execDespawn },
			{ "OnDetectionSphereOverlapBegin", &AEnemyUnit::execOnDetectionSphereOverlapBegin },
			{ "OnDetectionSphereOverlapEnd", &AEnemyUnit::execOnDetectionSphereOverlapEnd },
			{ "PlayDespawnAnimation", &AEnemyUnit::execPlayDespawnAnimation },
			{ "UpdateLifeBar", &AEnemyUnit::execUpdateLifeBar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyUnit_Attack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyUnit_Attack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyUnit_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyUnit, nullptr, "Attack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyUnit_Attack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemyUnit_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyUnit_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyUnit_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyUnit_DealDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyUnit_DealDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyUnit_DealDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyUnit, nullptr, "DealDamage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyUnit_DealDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemyUnit_DealDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyUnit_DealDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyUnit_DealDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyUnit_Despawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyUnit_Despawn_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Used for when the enemy unit is despawned\n" },
		{ "ModuleRelativePath", "EnemyUnit.h" },
		{ "ToolTip", "Used for when the enemy unit is despawned" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyUnit_Despawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyUnit, nullptr, "Despawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyUnit_Despawn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemyUnit_Despawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyUnit_Despawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyUnit_Despawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics
	{
		struct EnemyUnit_eventOnDetectionSphereOverlapBegin_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_sweepResult = { "a_sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyUnit_eventOnDetectionSphereOverlapBegin_Parms, a_sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_sweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_sweepResult_MetaData)) };
	void Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_fromSweep_SetBit(void* Obj)
	{
		((EnemyUnit_eventOnDetectionSphereOverlapBegin_Parms*)Obj)->a_fromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_fromSweep = { "a_fromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EnemyUnit_eventOnDetectionSphereOverlapBegin_Parms), &Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_fromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherBodyIndex = { "a_otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyUnit_eventOnDetectionSphereOverlapBegin_Parms, a_otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherComp = { "a_otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyUnit_eventOnDetectionSphereOverlapBegin_Parms, a_otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherActor = { "a_otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyUnit_eventOnDetectionSphereOverlapBegin_Parms, a_otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_overlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_overlappedComp = { "a_overlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyUnit_eventOnDetectionSphereOverlapBegin_Parms, a_overlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_overlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_overlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_sweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_fromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::NewProp_a_overlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyUnit, nullptr, "OnDetectionSphereOverlapBegin", nullptr, nullptr, sizeof(EnemyUnit_eventOnDetectionSphereOverlapBegin_Parms), Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd_Statics
	{
		struct EnemyUnit_eventOnDetectionSphereOverlapEnd_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherBodyIndex = { "a_otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyUnit_eventOnDetectionSphereOverlapEnd_Parms, a_otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherComp = { "a_otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyUnit_eventOnDetectionSphereOverlapEnd_Parms, a_otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherActor = { "a_otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyUnit_eventOnDetectionSphereOverlapEnd_Parms, a_otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_overlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_overlappedComp = { "a_overlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyUnit_eventOnDetectionSphereOverlapEnd_Parms, a_overlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_overlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_overlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd_Statics::NewProp_a_overlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyUnit, nullptr, "OnDetectionSphereOverlapEnd", nullptr, nullptr, sizeof(EnemyUnit_eventOnDetectionSphereOverlapEnd_Parms), Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyUnit_PlayDespawnAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyUnit_PlayDespawnAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyUnit_PlayDespawnAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyUnit, nullptr, "PlayDespawnAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyUnit_PlayDespawnAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemyUnit_PlayDespawnAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyUnit_PlayDespawnAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyUnit_PlayDespawnAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyUnit_UpdateLifeBar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyUnit_UpdateLifeBar_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Updates the life bars values\n" },
		{ "ModuleRelativePath", "EnemyUnit.h" },
		{ "ToolTip", "Updates the life bars values" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyUnit_UpdateLifeBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyUnit, nullptr, "UpdateLifeBar", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyUnit_UpdateLifeBar_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemyUnit_UpdateLifeBar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyUnit_UpdateLifeBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyUnit_UpdateLifeBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemyUnit_NoRegister()
	{
		return AEnemyUnit::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_targetList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_targetList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_targetList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_detectionSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_detectionSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_lifeBarComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_lifeBarComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_lifeBarColour_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_lifeBarColour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_despawnAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_despawnAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_attackAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_attackAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_despawnQueued_MetaData[];
#endif
		static void NewProp_m_despawnQueued_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_despawnQueued;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyUnit_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyUnit_Attack, "Attack" }, // 2372822233
		{ &Z_Construct_UFunction_AEnemyUnit_DealDamage, "DealDamage" }, // 842072679
		{ &Z_Construct_UFunction_AEnemyUnit_Despawn, "Despawn" }, // 2741057594
		{ &Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapBegin, "OnDetectionSphereOverlapBegin" }, // 2245266770
		{ &Z_Construct_UFunction_AEnemyUnit_OnDetectionSphereOverlapEnd, "OnDetectionSphereOverlapEnd" }, // 1073253531
		{ &Z_Construct_UFunction_AEnemyUnit_PlayDespawnAnimation, "PlayDespawnAnimation" }, // 2683360998
		{ &Z_Construct_UFunction_AEnemyUnit_UpdateLifeBar, "UpdateLifeBar" }, // 3986220939
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyUnit_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyUnit.h" },
		{ "ModuleRelativePath", "EnemyUnit.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_targetList_MetaData[] = {
		{ "Category", "EnemyUnit" },
		{ "ModuleRelativePath", "EnemyUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_targetList = { "m_targetList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyUnit, m_targetList), METADATA_PARAMS(Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_targetList_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_targetList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_targetList_Inner = { "m_targetList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADefendingUnit_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_detectionSphere_MetaData[] = {
		{ "Category", "EnemyUnit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_detectionSphere = { "m_detectionSphere", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyUnit, m_detectionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_detectionSphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_detectionSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_lifeBarComponent_MetaData[] = {
		{ "Category", "EnemyUnit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_lifeBarComponent = { "m_lifeBarComponent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyUnit, m_lifeBarComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_lifeBarComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_lifeBarComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_lifeBarColour_MetaData[] = {
		{ "Category", "EnemyUnit" },
		{ "ModuleRelativePath", "EnemyUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_lifeBarColour = { "m_lifeBarColour", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyUnit, m_lifeBarColour), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_lifeBarColour_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_lifeBarColour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_despawnAnim_MetaData[] = {
		{ "Category", "EnemyUnit" },
		{ "ModuleRelativePath", "EnemyUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_despawnAnim = { "m_despawnAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyUnit, m_despawnAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_despawnAnim_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_despawnAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_attackAnim_MetaData[] = {
		{ "Category", "EnemyUnit" },
		{ "ModuleRelativePath", "EnemyUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_attackAnim = { "m_attackAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyUnit, m_attackAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_attackAnim_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_attackAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_despawnQueued_MetaData[] = {
		{ "Category", "EnemyUnit" },
		{ "ModuleRelativePath", "EnemyUnit.h" },
	};
#endif
	void Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_despawnQueued_SetBit(void* Obj)
	{
		((AEnemyUnit*)Obj)->m_despawnQueued = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_despawnQueued = { "m_despawnQueued", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemyUnit), &Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_despawnQueued_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_despawnQueued_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_despawnQueued_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyUnit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_targetList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_targetList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_detectionSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_lifeBarComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_lifeBarColour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_despawnAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_attackAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_despawnQueued,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyUnit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyUnit_Statics::ClassParams = {
		&AEnemyUnit::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyUnit_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AEnemyUnit_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyUnit_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEnemyUnit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyUnit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyUnit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyUnit, 246281317);
	template<> GHOULSANDGOODIES_API UClass* StaticClass<AEnemyUnit>()
	{
		return AEnemyUnit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyUnit(Z_Construct_UClass_AEnemyUnit, &AEnemyUnit::StaticClass, TEXT("/Script/GhoulsAndGoodies"), TEXT("AEnemyUnit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyUnit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
