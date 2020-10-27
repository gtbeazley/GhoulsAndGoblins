// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/GNGGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGNGGameInstance() {}
// Cross Module References
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_UGNGGameInstance_NoRegister();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_UGNGGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
// End Cross Module References
	void UGNGGameInstance::StaticRegisterNativesUGNGGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UGNGGameInstance_NoRegister()
	{
		return UGNGGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UGNGGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_loadGame_MetaData[];
#endif
		static void NewProp_m_loadGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_loadGame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGNGGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGNGGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GNGGameInstance.h" },
		{ "ModuleRelativePath", "GNGGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGNGGameInstance_Statics::NewProp_m_loadGame_MetaData[] = {
		{ "Category", "GNGGameInstance" },
		{ "ModuleRelativePath", "GNGGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UGNGGameInstance_Statics::NewProp_m_loadGame_SetBit(void* Obj)
	{
		((UGNGGameInstance*)Obj)->m_loadGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGNGGameInstance_Statics::NewProp_m_loadGame = { "m_loadGame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGNGGameInstance), &Z_Construct_UClass_UGNGGameInstance_Statics::NewProp_m_loadGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGNGGameInstance_Statics::NewProp_m_loadGame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGNGGameInstance_Statics::NewProp_m_loadGame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGNGGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGNGGameInstance_Statics::NewProp_m_loadGame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGNGGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGNGGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGNGGameInstance_Statics::ClassParams = {
		&UGNGGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGNGGameInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGNGGameInstance_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGNGGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGNGGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGNGGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGNGGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGNGGameInstance, 313232511);
	template<> GHOULSANDGOODIES_API UClass* StaticClass<UGNGGameInstance>()
	{
		return UGNGGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGNGGameInstance(Z_Construct_UClass_UGNGGameInstance, &UGNGGameInstance::StaticClass, TEXT("/Script/GhoulsAndGoodies"), TEXT("UGNGGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGNGGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif