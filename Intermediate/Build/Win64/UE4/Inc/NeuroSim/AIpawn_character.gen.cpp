// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuroSim/AIpawn_character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIpawn_character() {}
// Cross Module References
	NEUROSIM_API UClass* Z_Construct_UClass_AAIpawn_character_NoRegister();
	NEUROSIM_API UClass* Z_Construct_UClass_AAIpawn_character();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_NeuroSim();
// End Cross Module References
	void AAIpawn_character::StaticRegisterNativesAAIpawn_character()
	{
	}
	UClass* Z_Construct_UClass_AAIpawn_character_NoRegister()
	{
		return AAIpawn_character::StaticClass();
	}
	struct Z_Construct_UClass_AAIpawn_character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIpawn_character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuroSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIpawn_character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AIpawn_character.h" },
		{ "ModuleRelativePath", "AIpawn_character.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIpawn_character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIpawn_character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIpawn_character_Statics::ClassParams = {
		&AAIpawn_character::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAIpawn_character_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAIpawn_character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIpawn_character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIpawn_character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIpawn_character, 3305136656);
	template<> NEUROSIM_API UClass* StaticClass<AAIpawn_character>()
	{
		return AAIpawn_character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIpawn_character(Z_Construct_UClass_AAIpawn_character, &AAIpawn_character::StaticClass, TEXT("/Script/NeuroSim"), TEXT("AAIpawn_character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIpawn_character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
