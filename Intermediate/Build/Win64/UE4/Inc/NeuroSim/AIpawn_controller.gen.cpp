// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuroSim/AIpawn_controller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIpawn_controller() {}
// Cross Module References
	NEUROSIM_API UClass* Z_Construct_UClass_AAIpawn_controller_NoRegister();
	NEUROSIM_API UClass* Z_Construct_UClass_AAIpawn_controller();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_NeuroSim();
// End Cross Module References
	void AAIpawn_controller::StaticRegisterNativesAAIpawn_controller()
	{
	}
	UClass* Z_Construct_UClass_AAIpawn_controller_NoRegister()
	{
		return AAIpawn_controller::StaticClass();
	}
	struct Z_Construct_UClass_AAIpawn_controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIpawn_controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuroSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIpawn_controller_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AIpawn_controller.h" },
		{ "ModuleRelativePath", "AIpawn_controller.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIpawn_controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIpawn_controller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIpawn_controller_Statics::ClassParams = {
		&AAIpawn_controller::StaticClass,
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
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAIpawn_controller_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAIpawn_controller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIpawn_controller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIpawn_controller_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIpawn_controller, 1596838044);
	template<> NEUROSIM_API UClass* StaticClass<AAIpawn_controller>()
	{
		return AAIpawn_controller::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIpawn_controller(Z_Construct_UClass_AAIpawn_controller, &AAIpawn_controller::StaticClass, TEXT("/Script/NeuroSim"), TEXT("AAIpawn_controller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIpawn_controller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
