// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/Public/EnemyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyState() {}
// Cross Module References
	GHOULSANDGOODIES_API UEnum* Z_Construct_UEnum_GhoulsAndGoodies_EEnemyState();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
// End Cross Module References
	static UEnum* EEnemyState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GhoulsAndGoodies_EEnemyState, Z_Construct_UPackage__Script_GhoulsAndGoodies(), TEXT("EEnemyState"));
		}
		return Singleton;
	}
	template<> GHOULSANDGOODIES_API UEnum* StaticEnum<EEnemyState>()
	{
		return EEnemyState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnemyState(EEnemyState_StaticEnum, TEXT("/Script/GhoulsAndGoodies"), TEXT("EEnemyState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GhoulsAndGoodies_EEnemyState_Hash() { return 2043874070U; }
	UEnum* Z_Construct_UEnum_GhoulsAndGoodies_EEnemyState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GhoulsAndGoodies();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnemyState"), 0, Get_Z_Construct_UEnum_GhoulsAndGoodies_EEnemyState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENEMYSTATE_Move", (int64)ENEMYSTATE_Move },
				{ "ENEMYSTATE_Attack", (int64)ENEMYSTATE_Attack },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */" },
				{ "ENEMYSTATE_Attack.Comment", "/**\n * \n */" },
				{ "ENEMYSTATE_Attack.DisplayName", "Attack" },
				{ "ENEMYSTATE_Attack.Name", "ENEMYSTATE_Attack" },
				{ "ENEMYSTATE_Move.Comment", "/**\n * \n */" },
				{ "ENEMYSTATE_Move.DisplayName", "Move" },
				{ "ENEMYSTATE_Move.Name", "ENEMYSTATE_Move" },
				{ "ModuleRelativePath", "Public/EnemyState.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
				nullptr,
				"EEnemyState",
				"EEnemyState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
