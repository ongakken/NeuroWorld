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
	NEUROSIM_API UFunction* Z_Construct_UFunction_AAIpawn_character_decrementNeeds();
	NEUROSIM_API UFunction* Z_Construct_UFunction_AAIpawn_character_refillNeeds();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AAIpawn_character::StaticRegisterNativesAAIpawn_character()
	{
		UClass* Class = AAIpawn_character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "decrementNeeds", &AAIpawn_character::execdecrementNeeds },
			{ "refillNeeds", &AAIpawn_character::execrefillNeeds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAIpawn_character_decrementNeeds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIpawn_character_decrementNeeds_Statics::Function_MetaDataParams[] = {
		{ "Category", "'Needs' manipulation" },
		{ "ModuleRelativePath", "AIpawn_character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIpawn_character_decrementNeeds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIpawn_character, nullptr, "decrementNeeds", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIpawn_character_decrementNeeds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIpawn_character_decrementNeeds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIpawn_character_decrementNeeds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIpawn_character_decrementNeeds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIpawn_character_refillNeeds_Statics
	{
		struct AIpawn_character_eventrefillNeeds_Parms
		{
			FString needsToManipulate;
			float amount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_needsToManipulate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAIpawn_character_refillNeeds_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIpawn_character_eventrefillNeeds_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAIpawn_character_refillNeeds_Statics::NewProp_needsToManipulate = { "needsToManipulate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIpawn_character_eventrefillNeeds_Parms, needsToManipulate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIpawn_character_refillNeeds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIpawn_character_refillNeeds_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIpawn_character_refillNeeds_Statics::NewProp_needsToManipulate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIpawn_character_refillNeeds_Statics::Function_MetaDataParams[] = {
		{ "Category", "'Needs' manipulation" },
		{ "ModuleRelativePath", "AIpawn_character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIpawn_character_refillNeeds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIpawn_character, nullptr, "refillNeeds", sizeof(AIpawn_character_eventrefillNeeds_Parms), Z_Construct_UFunction_AAIpawn_character_refillNeeds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIpawn_character_refillNeeds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIpawn_character_refillNeeds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIpawn_character_refillNeeds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIpawn_character_refillNeeds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIpawn_character_refillNeeds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAIpawn_character_NoRegister()
	{
		return AAIpawn_character::StaticClass();
	}
	struct Z_Construct_UClass_AAIpawn_character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_emotionQuotient_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_emotionQuotient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dominantEmotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dominantEmotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_energyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_energyLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hydrationLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_hydrationLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_foodLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_foodLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIpawn_character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuroSim,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAIpawn_character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIpawn_character_decrementNeeds, "decrementNeeds" }, // 146514287
		{ &Z_Construct_UFunction_AAIpawn_character_refillNeeds, "refillNeeds" }, // 3989659662
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIpawn_character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AIpawn_character.h" },
		{ "ModuleRelativePath", "AIpawn_character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIpawn_character_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AIpawn_character.h" },
		{ "ToolTip", "static mesh component pointer\nthis sets values for different UE4-native properties (description, category, etc.)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIpawn_character_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIpawn_character, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIpawn_character_Statics::NewProp_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIpawn_character_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIpawn_character_Statics::NewProp_emotionQuotient_MetaData[] = {
		{ "Category", "Emotions" },
		{ "ModuleRelativePath", "AIpawn_character.h" },
		{ "ToolTip", "var that holds the most intensive emotion in a character instance" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAIpawn_character_Statics::NewProp_emotionQuotient = { "emotionQuotient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIpawn_character, emotionQuotient), METADATA_PARAMS(Z_Construct_UClass_AAIpawn_character_Statics::NewProp_emotionQuotient_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIpawn_character_Statics::NewProp_emotionQuotient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIpawn_character_Statics::NewProp_dominantEmotion_MetaData[] = {
		{ "Category", "Emotions" },
		{ "ModuleRelativePath", "AIpawn_character.h" },
		{ "ToolTip", "this func will be modifying individual needs based on certain events defined in BPs" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AAIpawn_character_Statics::NewProp_dominantEmotion = { "dominantEmotion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIpawn_character, dominantEmotion), METADATA_PARAMS(Z_Construct_UClass_AAIpawn_character_Statics::NewProp_dominantEmotion_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIpawn_character_Statics::NewProp_dominantEmotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIpawn_character_Statics::NewProp_energyLevel_MetaData[] = {
		{ "Category", "Needs" },
		{ "ModuleRelativePath", "AIpawn_character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIpawn_character_Statics::NewProp_energyLevel = { "energyLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIpawn_character, energyLevel), METADATA_PARAMS(Z_Construct_UClass_AAIpawn_character_Statics::NewProp_energyLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIpawn_character_Statics::NewProp_energyLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIpawn_character_Statics::NewProp_hydrationLevel_MetaData[] = {
		{ "Category", "Needs" },
		{ "ModuleRelativePath", "AIpawn_character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIpawn_character_Statics::NewProp_hydrationLevel = { "hydrationLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIpawn_character, hydrationLevel), METADATA_PARAMS(Z_Construct_UClass_AAIpawn_character_Statics::NewProp_hydrationLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIpawn_character_Statics::NewProp_hydrationLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIpawn_character_Statics::NewProp_foodLevel_MetaData[] = {
		{ "Category", "Needs" },
		{ "ModuleRelativePath", "AIpawn_character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIpawn_character_Statics::NewProp_foodLevel = { "foodLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIpawn_character, foodLevel), METADATA_PARAMS(Z_Construct_UClass_AAIpawn_character_Statics::NewProp_foodLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIpawn_character_Statics::NewProp_foodLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIpawn_character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIpawn_character_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIpawn_character_Statics::NewProp_emotionQuotient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIpawn_character_Statics::NewProp_dominantEmotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIpawn_character_Statics::NewProp_energyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIpawn_character_Statics::NewProp_hydrationLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIpawn_character_Statics::NewProp_foodLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIpawn_character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIpawn_character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIpawn_character_Statics::ClassParams = {
		&AAIpawn_character::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAIpawn_character_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AAIpawn_character_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AAIpawn_character, 2624984873);
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
