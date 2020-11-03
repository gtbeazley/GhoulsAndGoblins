// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/EnemySpawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySpawn() {}
// Cross Module References
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AEnemySpawn_NoRegister();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AEnemySpawn();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
<<<<<<< HEAD
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_AEnemySpawn_QueueSpawn();
	GHOULSANDGOODIES_API UEnum* Z_Construct_UEnum_GhoulsAndGoodies_EEnemyUnitType();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_AEnemySpawn_Spawn();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_AEnemySpawn_TurnLightOn();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
=======
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_AEnemySpawn_Spawn();
	GHOULSANDGOODIES_API UEnum* Z_Construct_UEnum_GhoulsAndGoodies_EEnemyUnitType();
>>>>>>> 2a301e53636fc4fec29cdfc6e430c3781bb3c352
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AEnemySpawn::StaticRegisterNativesAEnemySpawn()
	{
		UClass* Class = AEnemySpawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
<<<<<<< HEAD
			{ "QueueSpawn", &AEnemySpawn::execQueueSpawn },
			{ "Spawn", &AEnemySpawn::execSpawn },
			{ "TurnLightOn", &AEnemySpawn::execTurnLightOn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemySpawn_QueueSpawn_Statics
	{
		struct EnemySpawn_eventQueueSpawn_Parms
		{
			TEnumAsByte<EEnemyUnitType> a_enemyType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_a_enemyType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AEnemySpawn_QueueSpawn_Statics::NewProp_a_enemyType = { "a_enemyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemySpawn_eventQueueSpawn_Parms, a_enemyType), Z_Construct_UEnum_GhoulsAndGoodies_EEnemyUnitType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemySpawn_QueueSpawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemySpawn_QueueSpawn_Statics::NewProp_a_enemyType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemySpawn_QueueSpawn_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Queues an enemy to be spawned\n" },
		{ "ModuleRelativePath", "EnemySpawn.h" },
		{ "ToolTip", "Queues an enemy to be spawned" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemySpawn_QueueSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemySpawn, nullptr, "QueueSpawn", nullptr, nullptr, sizeof(EnemySpawn_eventQueueSpawn_Parms), Z_Construct_UFunction_AEnemySpawn_QueueSpawn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemySpawn_QueueSpawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemySpawn_QueueSpawn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemySpawn_QueueSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemySpawn_QueueSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemySpawn_QueueSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
=======
			{ "Spawn", &AEnemySpawn::execSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
>>>>>>> 2a301e53636fc4fec29cdfc6e430c3781bb3c352
	struct Z_Construct_UFunction_AEnemySpawn_Spawn_Statics
	{
		struct EnemySpawn_eventSpawn_Parms
		{
			TEnumAsByte<EEnemyUnitType> a_enemyType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_a_enemyType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AEnemySpawn_Spawn_Statics::NewProp_a_enemyType = { "a_enemyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemySpawn_eventSpawn_Parms, a_enemyType), Z_Construct_UEnum_GhoulsAndGoodies_EEnemyUnitType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemySpawn_Spawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemySpawn_Spawn_Statics::NewProp_a_enemyType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemySpawn_Spawn_Statics::Function_MetaDataParams[] = {
<<<<<<< HEAD
		{ "Comment", "//Called when to spawn an enemy unit\n//The type that is spawned will be determined by a_enemyType\n" },
		{ "ModuleRelativePath", "EnemySpawn.h" },
		{ "ToolTip", "Called when to spawn an enemy unit\nThe type that is spawned will be determined by a_enemyType" },
=======
		{ "ModuleRelativePath", "EnemySpawn.h" },
>>>>>>> 2a301e53636fc4fec29cdfc6e430c3781bb3c352
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemySpawn_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemySpawn, nullptr, "Spawn", nullptr, nullptr, sizeof(EnemySpawn_eventSpawn_Parms), Z_Construct_UFunction_AEnemySpawn_Spawn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemySpawn_Spawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemySpawn_Spawn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemySpawn_Spawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemySpawn_Spawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemySpawn_Spawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
<<<<<<< HEAD
	struct Z_Construct_UFunction_AEnemySpawn_TurnLightOn_Statics
	{
		struct EnemySpawn_eventTurnLightOn_Parms
		{
			bool a_turnOn;
		};
		static void NewProp_a_turnOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_a_turnOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AEnemySpawn_TurnLightOn_Statics::NewProp_a_turnOn_SetBit(void* Obj)
	{
		((EnemySpawn_eventTurnLightOn_Parms*)Obj)->a_turnOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemySpawn_TurnLightOn_Statics::NewProp_a_turnOn = { "a_turnOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EnemySpawn_eventTurnLightOn_Parms), &Z_Construct_UFunction_AEnemySpawn_TurnLightOn_Statics::NewProp_a_turnOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemySpawn_TurnLightOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemySpawn_TurnLightOn_Statics::NewProp_a_turnOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemySpawn_TurnLightOn_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called when needed to change the lighting \n//a_turnOn determines whether to turn it on or not\n" },
		{ "ModuleRelativePath", "EnemySpawn.h" },
		{ "ToolTip", "Called when needed to change the lighting\na_turnOn determines whether to turn it on or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemySpawn_TurnLightOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemySpawn, nullptr, "TurnLightOn", nullptr, nullptr, sizeof(EnemySpawn_eventTurnLightOn_Parms), Z_Construct_UFunction_AEnemySpawn_TurnLightOn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemySpawn_TurnLightOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemySpawn_TurnLightOn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemySpawn_TurnLightOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemySpawn_TurnLightOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemySpawn_TurnLightOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
=======
>>>>>>> 2a301e53636fc4fec29cdfc6e430c3781bb3c352
	UClass* Z_Construct_UClass_AEnemySpawn_NoRegister()
	{
		return AEnemySpawn::StaticClass();
	}
	struct Z_Construct_UClass_AEnemySpawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
<<<<<<< HEAD
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_spawnQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_spawnQueue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_spawnQueue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_spawnInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_spawnInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_spawnTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_spawnTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_offColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_offColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_onColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_onColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_lightColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_lightColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_spotLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_spotLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pumpkinStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pumpkinStaticMesh;
#if WITH_METADATA
=======
>>>>>>> 2a301e53636fc4fec29cdfc6e430c3781bb3c352
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_spawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_spawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemySpawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemySpawn_Statics::FuncInfo[] = {
<<<<<<< HEAD
		{ &Z_Construct_UFunction_AEnemySpawn_QueueSpawn, "QueueSpawn" }, // 2937354425
		{ &Z_Construct_UFunction_AEnemySpawn_Spawn, "Spawn" }, // 1538119500
		{ &Z_Construct_UFunction_AEnemySpawn_TurnLightOn, "TurnLightOn" }, // 3026469038
=======
		{ &Z_Construct_UFunction_AEnemySpawn_Spawn, "Spawn" }, // 2912581346
>>>>>>> 2a301e53636fc4fec29cdfc6e430c3781bb3c352
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawn_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemySpawn.h" },
		{ "ModuleRelativePath", "EnemySpawn.h" },
	};
#endif
#if WITH_METADATA
<<<<<<< HEAD
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawnQueue_MetaData[] = {
		{ "Category", "EnemySpawn" },
		{ "ModuleRelativePath", "EnemySpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawnQueue = { "m_spawnQueue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemySpawn, m_spawnQueue), METADATA_PARAMS(Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawnQueue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawnQueue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawnQueue_Inner = { "m_spawnQueue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_GhoulsAndGoodies_EEnemyUnitType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawnInterval_MetaData[] = {
		{ "Category", "EnemySpawn" },
		{ "ModuleRelativePath", "EnemySpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawnInterval = { "m_spawnInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemySpawn, m_spawnInterval), METADATA_PARAMS(Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawnInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawnInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawnTimer_MetaData[] = {
		{ "Category", "EnemySpawn" },
		{ "ModuleRelativePath", "EnemySpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawnTimer = { "m_spawnTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemySpawn, m_spawnTimer), METADATA_PARAMS(Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawnTimer_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawnTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_offColor_MetaData[] = {
		{ "Category", "EnemySpawn" },
		{ "ModuleRelativePath", "EnemySpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_offColor = { "m_offColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemySpawn, m_offColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_offColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_offColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_onColor_MetaData[] = {
		{ "Category", "EnemySpawn" },
		{ "ModuleRelativePath", "EnemySpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_onColor = { "m_onColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemySpawn, m_onColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_onColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_onColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_lightColor_MetaData[] = {
		{ "Category", "EnemySpawn" },
		{ "ModuleRelativePath", "EnemySpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_lightColor = { "m_lightColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemySpawn, m_lightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_lightColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_lightColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spotLight_MetaData[] = {
		{ "Category", "EnemySpawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemySpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spotLight = { "m_spotLight", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemySpawn, m_spotLight), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spotLight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spotLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_pumpkinStaticMesh_MetaData[] = {
		{ "Category", "EnemySpawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemySpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_pumpkinStaticMesh = { "m_pumpkinStaticMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemySpawn, m_pumpkinStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_pumpkinStaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_pumpkinStaticMesh_MetaData)) };
#if WITH_METADATA
=======
>>>>>>> 2a301e53636fc4fec29cdfc6e430c3781bb3c352
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawn_MetaData[] = {
		{ "Category", "EnemySpawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemySpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawn = { "m_spawn", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemySpawn, m_spawn), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemySpawn_Statics::PropPointers[] = {
<<<<<<< HEAD
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawnQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawnQueue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawnInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawnTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_offColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_onColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_lightColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spotLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_pumpkinStaticMesh,
=======
>>>>>>> 2a301e53636fc4fec29cdfc6e430c3781bb3c352
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemySpawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemySpawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemySpawn_Statics::ClassParams = {
		&AEnemySpawn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemySpawn_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AEnemySpawn_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemySpawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEnemySpawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemySpawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemySpawn_Statics::ClassParams);
		}
		return OuterClass;
	}
<<<<<<< HEAD
	IMPLEMENT_CLASS(AEnemySpawn, 1619640579);
=======
	IMPLEMENT_CLASS(AEnemySpawn, 1355769776);
>>>>>>> 2a301e53636fc4fec29cdfc6e430c3781bb3c352
	template<> GHOULSANDGOODIES_API UClass* StaticClass<AEnemySpawn>()
	{
		return AEnemySpawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemySpawn(Z_Construct_UClass_AEnemySpawn, &AEnemySpawn::StaticClass, TEXT("/Script/GhoulsAndGoodies"), TEXT("AEnemySpawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemySpawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
