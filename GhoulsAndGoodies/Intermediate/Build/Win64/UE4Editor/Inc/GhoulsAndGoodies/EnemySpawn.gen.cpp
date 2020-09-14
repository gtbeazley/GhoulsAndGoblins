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
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_AEnemySpawn_Spawn();
	GHOULSANDGOODIES_API UEnum* Z_Construct_UEnum_GhoulsAndGoodies_EEnemyUnitType();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AEnemySpawn::StaticRegisterNativesAEnemySpawn()
	{
		UClass* Class = AEnemySpawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Spawn", &AEnemySpawn::execSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
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
		{ "ModuleRelativePath", "EnemySpawn.h" },
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
		{ &Z_Construct_UFunction_AEnemySpawn_Spawn, "Spawn" }, // 2912581346
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawn_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemySpawn.h" },
		{ "ModuleRelativePath", "EnemySpawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawn_MetaData[] = {
		{ "Category", "EnemySpawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemySpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawn = { "m_spawn", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemySpawn, m_spawn), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_spawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemySpawn_Statics::PropPointers[] = {
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
	IMPLEMENT_CLASS(AEnemySpawn, 1355769776);
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
