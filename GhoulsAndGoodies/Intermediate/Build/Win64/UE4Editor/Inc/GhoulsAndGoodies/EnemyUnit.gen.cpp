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
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_AEnemyUnit_Despawn();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_AEnemyUnit_UpdateLifeBar();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
// End Cross Module References
	void AEnemyUnit::StaticRegisterNativesAEnemyUnit()
	{
		UClass* Class = AEnemyUnit::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Despawn", &AEnemyUnit::execDespawn },
			{ "UpdateLifeBar", &AEnemyUnit::execUpdateLifeBar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyUnit_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyUnit_Despawn, "Despawn" }, // 2741057594
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_detectionSphere_MetaData[] = {
		{ "Category", "EnemyUnit" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite)\n//\x09USkeletalMeshComponent* m_mesh;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyUnit.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite)\n       USkeletalMeshComponent* m_mesh;" },
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
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyUnit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_detectionSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_lifeBarComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyUnit_Statics::NewProp_m_lifeBarColour,
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
	IMPLEMENT_CLASS(AEnemyUnit, 2230639320);
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
