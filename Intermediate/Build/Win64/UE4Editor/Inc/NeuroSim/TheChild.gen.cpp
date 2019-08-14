// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuroSim/Public/TheChild.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheChild() {}
// Cross Module References
	NEUROSIM_API UClass* Z_Construct_UClass_ATheChild_NoRegister();
	NEUROSIM_API UClass* Z_Construct_UClass_ATheChild();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_NeuroSim();
// End Cross Module References
	void ATheChild::StaticRegisterNativesATheChild()
	{
	}
	UClass* Z_Construct_UClass_ATheChild_NoRegister()
	{
		return ATheChild::StaticClass();
	}
	struct Z_Construct_UClass_ATheChild_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATheChild_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuroSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheChild_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TheChild.h" },
		{ "ModuleRelativePath", "Public/TheChild.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATheChild_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheChild>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATheChild_Statics::ClassParams = {
		&ATheChild::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATheChild_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATheChild_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATheChild()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATheChild_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATheChild, 566818895);
	template<> NEUROSIM_API UClass* StaticClass<ATheChild>()
	{
		return ATheChild::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATheChild(Z_Construct_UClass_ATheChild, &ATheChild::StaticClass, TEXT("/Script/NeuroSim"), TEXT("ATheChild"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATheChild);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
