// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/TileDefenceType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileDefenceType() {}
// Cross Module References
	GHOULSANDGOODIES_API UEnum* Z_Construct_UEnum_GhoulsAndGoodies_ETileDefenceType();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
// End Cross Module References
	static UEnum* ETileDefenceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GhoulsAndGoodies_ETileDefenceType, Z_Construct_UPackage__Script_GhoulsAndGoodies(), TEXT("ETileDefenceType"));
		}
		return Singleton;
	}
	template<> GHOULSANDGOODIES_API UEnum* StaticEnum<ETileDefenceType>()
	{
		return ETileDefenceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETileDefenceType(ETileDefenceType_StaticEnum, TEXT("/Script/GhoulsAndGoodies"), TEXT("ETileDefenceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GhoulsAndGoodies_ETileDefenceType_Hash() { return 244501827U; }
	UEnum* Z_Construct_UEnum_GhoulsAndGoodies_ETileDefenceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GhoulsAndGoodies();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETileDefenceType"), 0, Get_Z_Construct_UEnum_GhoulsAndGoodies_ETileDefenceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DEF_None", (int64)DEF_None },
				{ "DEF_Base", (int64)DEF_Base },
				{ "DEF_Tiffany", (int64)DEF_Tiffany },
				{ "DEF_Jimmy", (int64)DEF_Jimmy },
				{ "DEF_Garry", (int64)DEF_Garry },
				{ "DEF_Smidge", (int64)DEF_Smidge },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DEF_Base.DisplayName", "Base" },
				{ "DEF_Base.Name", "DEF_Base" },
				{ "DEF_Garry.DisplayName", "Garry" },
				{ "DEF_Garry.Name", "DEF_Garry" },
				{ "DEF_Jimmy.DisplayName", "Jimmy" },
				{ "DEF_Jimmy.Name", "DEF_Jimmy" },
				{ "DEF_None.DisplayName", "None" },
				{ "DEF_None.Name", "DEF_None" },
				{ "DEF_Smidge.DisplayName", "Smidge" },
				{ "DEF_Smidge.Name", "DEF_Smidge" },
				{ "DEF_Tiffany.DisplayName", "Tiffany" },
				{ "DEF_Tiffany.Name", "DEF_Tiffany" },
				{ "ModuleRelativePath", "TileDefenceType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
				nullptr,
				"ETileDefenceType",
				"ETileDefenceType",
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
