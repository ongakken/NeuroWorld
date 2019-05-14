// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuroSim/Public/primitiveEmotions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeprimitiveEmotions() {}
// Cross Module References
	NEUROSIM_API UClass* Z_Construct_UClass_UprimitiveEmotions_NoRegister();
	NEUROSIM_API UClass* Z_Construct_UClass_UprimitiveEmotions();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_NeuroSim();
// End Cross Module References
	void UprimitiveEmotions::StaticRegisterNativesUprimitiveEmotions()
	{
	}
	UClass* Z_Construct_UClass_UprimitiveEmotions_NoRegister()
	{
		return UprimitiveEmotions::StaticClass();
	}
	struct Z_Construct_UClass_UprimitiveEmotions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UprimitiveEmotions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuroSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UprimitiveEmotions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "primitiveEmotions.h" },
		{ "ModuleRelativePath", "Public/primitiveEmotions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UprimitiveEmotions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UprimitiveEmotions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UprimitiveEmotions_Statics::ClassParams = {
		&UprimitiveEmotions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UprimitiveEmotions_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UprimitiveEmotions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UprimitiveEmotions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UprimitiveEmotions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UprimitiveEmotions, 2040690608);
	template<> NEUROSIM_API UClass* StaticClass<UprimitiveEmotions>()
	{
		return UprimitiveEmotions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UprimitiveEmotions(Z_Construct_UClass_UprimitiveEmotions, &UprimitiveEmotions::StaticClass, TEXT("/Script/NeuroSim"), TEXT("UprimitiveEmotions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UprimitiveEmotions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
