// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuroSim/Public/higherEmotions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodehigherEmotions() {}
// Cross Module References
	NEUROSIM_API UClass* Z_Construct_UClass_UhigherEmotions_NoRegister();
	NEUROSIM_API UClass* Z_Construct_UClass_UhigherEmotions();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_NeuroSim();
// End Cross Module References
	void UhigherEmotions::StaticRegisterNativesUhigherEmotions()
	{
	}
	UClass* Z_Construct_UClass_UhigherEmotions_NoRegister()
	{
		return UhigherEmotions::StaticClass();
	}
	struct Z_Construct_UClass_UhigherEmotions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UhigherEmotions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuroSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UhigherEmotions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "higherEmotions.h" },
		{ "ModuleRelativePath", "Public/higherEmotions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UhigherEmotions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UhigherEmotions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UhigherEmotions_Statics::ClassParams = {
		&UhigherEmotions::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UhigherEmotions_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UhigherEmotions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UhigherEmotions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UhigherEmotions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UhigherEmotions, 168338173);
	template<> NEUROSIM_API UClass* StaticClass<UhigherEmotions>()
	{
		return UhigherEmotions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UhigherEmotions(Z_Construct_UClass_UhigherEmotions, &UhigherEmotions::StaticClass, TEXT("/Script/NeuroSim"), TEXT("UhigherEmotions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UhigherEmotions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
