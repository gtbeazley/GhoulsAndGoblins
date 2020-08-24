// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/GNGGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGNGGameState() {}
// Cross Module References
	GHOULSANDGOODIES_API UEnum* Z_Construct_UEnum_GhoulsAndGoodies_EGNGGameState();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
// End Cross Module References
	static UEnum* EGNGGameState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GhoulsAndGoodies_EGNGGameState, Z_Construct_UPackage__Script_GhoulsAndGoodies(), TEXT("EGNGGameState"));
		}
		return Singleton;
	}
	template<> GHOULSANDGOODIES_API UEnum* StaticEnum<EGNGGameState>()
	{
		return EGNGGameState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGNGGameState(EGNGGameState_StaticEnum, TEXT("/Script/GhoulsAndGoodies"), TEXT("EGNGGameState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GhoulsAndGoodies_EGNGGameState_Hash() { return 3518695470U; }
	UEnum* Z_Construct_UEnum_GhoulsAndGoodies_EGNGGameState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GhoulsAndGoodies();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGNGGameState"), 0, Get_Z_Construct_UEnum_GhoulsAndGoodies_EGNGGameState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "STATE_Plan", (int64)STATE_Plan },
				{ "STATE_Defend", (int64)STATE_Defend },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */" },
				{ "ModuleRelativePath", "GNGGameState.h" },
				{ "STATE_Defend.Comment", "/**\n * \n */" },
				{ "STATE_Defend.DisplayName", "Defend" },
				{ "STATE_Defend.Name", "STATE_Defend" },
				{ "STATE_Plan.Comment", "/**\n * \n */" },
				{ "STATE_Plan.DisplayName", "Plan" },
				{ "STATE_Plan.Name", "STATE_Plan" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
				nullptr,
				"EGNGGameState",
				"EGNGGameState",
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
