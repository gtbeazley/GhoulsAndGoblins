// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/EnemyUnitType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyUnitType() {}
// Cross Module References
	GHOULSANDGOODIES_API UEnum* Z_Construct_UEnum_GhoulsAndGoodies_EEnemyUnitType();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
// End Cross Module References
	static UEnum* EEnemyUnitType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GhoulsAndGoodies_EEnemyUnitType, Z_Construct_UPackage__Script_GhoulsAndGoodies(), TEXT("EEnemyUnitType"));
		}
		return Singleton;
	}
	template<> GHOULSANDGOODIES_API UEnum* StaticEnum<EEnemyUnitType>()
	{
		return EEnemyUnitType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnemyUnitType(EEnemyUnitType_StaticEnum, TEXT("/Script/GhoulsAndGoodies"), TEXT("EEnemyUnitType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GhoulsAndGoodies_EEnemyUnitType_Hash() { return 3986190319U; }
	UEnum* Z_Construct_UEnum_GhoulsAndGoodies_EEnemyUnitType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GhoulsAndGoodies();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnemyUnitType"), 0, Get_Z_Construct_UEnum_GhoulsAndGoodies_EEnemyUnitType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ATT_Marvin", (int64)ATT_Marvin },
				{ "ATT_Grace", (int64)ATT_Grace },
				{ "ATT_Esqueleto", (int64)ATT_Esqueleto },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ATT_Esqueleto.Comment", "/**\n * \n */" },
				{ "ATT_Esqueleto.DisplayName", "Esqueleto" },
				{ "ATT_Esqueleto.Name", "ATT_Esqueleto" },
				{ "ATT_Grace.Comment", "/**\n * \n */" },
				{ "ATT_Grace.DisplayName", "Grace" },
				{ "ATT_Grace.Name", "ATT_Grace" },
				{ "ATT_Marvin.Comment", "/**\n * \n */" },
				{ "ATT_Marvin.DisplayName", "Marvin" },
				{ "ATT_Marvin.Name", "ATT_Marvin" },
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */" },
				{ "ModuleRelativePath", "EnemyUnitType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
				nullptr,
				"EEnemyUnitType",
				"EEnemyUnitType",
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
