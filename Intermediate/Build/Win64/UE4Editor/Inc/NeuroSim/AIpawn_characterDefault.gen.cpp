// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuroSim/AIpawn_characterDefault.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIpawn_characterDefault() {}
// Cross Module References
	NEUROSIM_API UClass* Z_Construct_UClass_AAIpawn_characterDefault_NoRegister();
	NEUROSIM_API UClass* Z_Construct_UClass_AAIpawn_characterDefault();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_NeuroSim();
	NEUROSIM_API UFunction* Z_Construct_UFunction_AAIpawn_characterDefault_AIsenseDecision();
	NEUROSIM_API UFunction* Z_Construct_UFunction_AAIpawn_characterDefault_decrementNeeds();
	NEUROSIM_API UFunction* Z_Construct_UFunction_AAIpawn_characterDefault_locationDecision();
	NEUROSIM_API UFunction* Z_Construct_UFunction_AAIpawn_characterDefault_refillNeeds();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AAIpawn_characterDefault::StaticRegisterNativesAAIpawn_characterDefault()
	{
		UClass* Class = AAIpawn_characterDefault::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AIsenseDecision", &AAIpawn_characterDefault::execAIsenseDecision },
			{ "decrementNeeds", &AAIpawn_characterDefault::execdecrementNeeds },
			{ "locationDecision", &AAIpawn_characterDefault::execlocationDecision },
			{ "refillNeeds", &AAIpawn_characterDefault::execrefillNeeds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAIpawn_characterDefault_AIsenseDecision_Statics
	{
		struct AIpawn_characterDefault_eventAIsenseDecision_Parms
		{
			int32 sense;
			FString detectedColliderClass;
			FString detectedColliderInstance;
			FString detectedCharacterClass;
			FString detectedCharacterInstance;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_detectedCharacterInstance;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_detectedCharacterClass;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_detectedColliderInstance;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_detectedColliderClass;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_sense;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAIpawn_characterDefault_AIsenseDecision_Statics::NewProp_detectedCharacterInstance = { "detectedCharacterInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIpawn_characterDefault_eventAIsenseDecision_Parms, detectedCharacterInstance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAIpawn_characterDefault_AIsenseDecision_Statics::NewProp_detectedCharacterClass = { "detectedCharacterClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIpawn_characterDefault_eventAIsenseDecision_Parms, detectedCharacterClass), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAIpawn_characterDefault_AIsenseDecision_Statics::NewProp_detectedColliderInstance = { "detectedColliderInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIpawn_characterDefault_eventAIsenseDecision_Parms, detectedColliderInstance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAIpawn_characterDefault_AIsenseDecision_Statics::NewProp_detectedColliderClass = { "detectedColliderClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIpawn_characterDefault_eventAIsenseDecision_Parms, detectedColliderClass), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AAIpawn_characterDefault_AIsenseDecision_Statics::NewProp_sense = { "sense", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIpawn_characterDefault_eventAIsenseDecision_Parms, sense), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIpawn_characterDefault_AIsenseDecision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIpawn_characterDefault_AIsenseDecision_Statics::NewProp_detectedCharacterInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIpawn_characterDefault_AIsenseDecision_Statics::NewProp_detectedCharacterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIpawn_characterDefault_AIsenseDecision_Statics::NewProp_detectedColliderInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIpawn_characterDefault_AIsenseDecision_Statics::NewProp_detectedColliderClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIpawn_characterDefault_AIsenseDecision_Statics::NewProp_sense,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIpawn_characterDefault_AIsenseDecision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Core AI logic" },
		{ "ModuleRelativePath", "AIpawn_characterDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIpawn_characterDefault_AIsenseDecision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIpawn_characterDefault, nullptr, "AIsenseDecision", sizeof(AIpawn_characterDefault_eventAIsenseDecision_Parms), Z_Construct_UFunction_AAIpawn_characterDefault_AIsenseDecision_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIpawn_characterDefault_AIsenseDecision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIpawn_characterDefault_AIsenseDecision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIpawn_characterDefault_AIsenseDecision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIpawn_characterDefault_AIsenseDecision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIpawn_characterDefault_AIsenseDecision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIpawn_characterDefault_decrementNeeds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIpawn_characterDefault_decrementNeeds_Statics::Function_MetaDataParams[] = {
		{ "Category", "'Needs' manipulation" },
		{ "ModuleRelativePath", "AIpawn_characterDefault.h" },
		{ "ToolTip", "this func will decide whether to return to a certain place and how probable that is based on the emotion(s) experienced there" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIpawn_characterDefault_decrementNeeds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIpawn_characterDefault, nullptr, "decrementNeeds", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIpawn_characterDefault_decrementNeeds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIpawn_characterDefault_decrementNeeds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIpawn_characterDefault_decrementNeeds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIpawn_characterDefault_decrementNeeds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIpawn_characterDefault_locationDecision_Statics
	{
		struct AIpawn_characterDefault_eventlocationDecision_Parms
		{
			FString detectedColliderClass;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_detectedColliderClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAIpawn_characterDefault_locationDecision_Statics::NewProp_detectedColliderClass = { "detectedColliderClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIpawn_characterDefault_eventlocationDecision_Parms, detectedColliderClass), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIpawn_characterDefault_locationDecision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIpawn_characterDefault_locationDecision_Statics::NewProp_detectedColliderClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIpawn_characterDefault_locationDecision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Core AI logic" },
		{ "ModuleRelativePath", "AIpawn_characterDefault.h" },
		{ "ToolTip", "to be finished, gotta figure out how to reference individual class instances in the world and get their identifiers to here" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIpawn_characterDefault_locationDecision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIpawn_characterDefault, nullptr, "locationDecision", sizeof(AIpawn_characterDefault_eventlocationDecision_Parms), Z_Construct_UFunction_AAIpawn_characterDefault_locationDecision_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIpawn_characterDefault_locationDecision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIpawn_characterDefault_locationDecision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIpawn_characterDefault_locationDecision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIpawn_characterDefault_locationDecision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIpawn_characterDefault_locationDecision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIpawn_characterDefault_refillNeeds_Statics
	{
		struct AIpawn_characterDefault_eventrefillNeeds_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAIpawn_characterDefault_refillNeeds_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIpawn_characterDefault_eventrefillNeeds_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAIpawn_characterDefault_refillNeeds_Statics::NewProp_needsToManipulate = { "needsToManipulate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIpawn_characterDefault_eventrefillNeeds_Parms, needsToManipulate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIpawn_characterDefault_refillNeeds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIpawn_characterDefault_refillNeeds_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIpawn_characterDefault_refillNeeds_Statics::NewProp_needsToManipulate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIpawn_characterDefault_refillNeeds_Statics::Function_MetaDataParams[] = {
		{ "Category", "'Needs' manipulation" },
		{ "ModuleRelativePath", "AIpawn_characterDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIpawn_characterDefault_refillNeeds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIpawn_characterDefault, nullptr, "refillNeeds", sizeof(AIpawn_characterDefault_eventrefillNeeds_Parms), Z_Construct_UFunction_AAIpawn_characterDefault_refillNeeds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIpawn_characterDefault_refillNeeds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIpawn_characterDefault_refillNeeds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIpawn_characterDefault_refillNeeds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIpawn_characterDefault_refillNeeds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIpawn_characterDefault_refillNeeds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAIpawn_characterDefault_NoRegister()
	{
		return AAIpawn_characterDefault::StaticClass();
	}
	struct Z_Construct_UClass_AAIpawn_characterDefault_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_emotionQuotient_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_emotionQuotient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dominantEmotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dominantEmotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthOutput_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mouthOutput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_body_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_body;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_auxInt_neg_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_auxInt_neg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_auxInt_pos_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_auxInt_pos;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_negativeLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_negativeLocations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_positiveLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_positiveLocations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIpawn_characterDefault_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuroSim,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAIpawn_characterDefault_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIpawn_characterDefault_AIsenseDecision, "AIsenseDecision" }, // 3145801229
		{ &Z_Construct_UFunction_AAIpawn_characterDefault_decrementNeeds, "decrementNeeds" }, // 1252941774
		{ &Z_Construct_UFunction_AAIpawn_characterDefault_locationDecision, "locationDecision" }, // 949431680
		{ &Z_Construct_UFunction_AAIpawn_characterDefault_refillNeeds, "refillNeeds" }, // 224846587
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIpawn_characterDefault_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AIpawn_characterDefault.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AIpawn_characterDefault.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_emotionQuotient_MetaData[] = {
		{ "Category", "Emotions" },
		{ "ModuleRelativePath", "AIpawn_characterDefault.h" },
		{ "ToolTip", "var that holds the most intensive emotion in a character instance" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_emotionQuotient = { "emotionQuotient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIpawn_characterDefault, emotionQuotient), METADATA_PARAMS(Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_emotionQuotient_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_emotionQuotient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_dominantEmotion_MetaData[] = {
		{ "Category", "Emotions" },
		{ "ModuleRelativePath", "AIpawn_characterDefault.h" },
		{ "ToolTip", "this func will be modifying individual needs based on certain events defined in BPs" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_dominantEmotion = { "dominantEmotion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIpawn_characterDefault, dominantEmotion), METADATA_PARAMS(Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_dominantEmotion_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_dominantEmotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_mouthOutput_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AIpawn_characterDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_mouthOutput = { "mouthOutput", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIpawn_characterDefault, mouthOutput), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_mouthOutput_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_mouthOutput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AIpawn_characterDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIpawn_characterDefault, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_Camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_body_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AIpawn_characterDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_body = { "body", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIpawn_characterDefault, body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_body_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_body_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_auxInt_neg_MetaData[] = {
		{ "Category", "Aux" },
		{ "ModuleRelativePath", "AIpawn_characterDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_auxInt_neg = { "auxInt_neg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIpawn_characterDefault, auxInt_neg), METADATA_PARAMS(Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_auxInt_neg_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_auxInt_neg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_auxInt_pos_MetaData[] = {
		{ "Category", "Aux" },
		{ "ModuleRelativePath", "AIpawn_characterDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_auxInt_pos = { "auxInt_pos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIpawn_characterDefault, auxInt_pos), METADATA_PARAMS(Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_auxInt_pos_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_auxInt_pos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_energyLevel_MetaData[] = {
		{ "Category", "Needs" },
		{ "ModuleRelativePath", "AIpawn_characterDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_energyLevel = { "energyLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIpawn_characterDefault, energyLevel), METADATA_PARAMS(Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_energyLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_energyLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_hydrationLevel_MetaData[] = {
		{ "Category", "Needs" },
		{ "ModuleRelativePath", "AIpawn_characterDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_hydrationLevel = { "hydrationLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIpawn_characterDefault, hydrationLevel), METADATA_PARAMS(Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_hydrationLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_hydrationLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_foodLevel_MetaData[] = {
		{ "Category", "Needs" },
		{ "ModuleRelativePath", "AIpawn_characterDefault.h" },
		{ "ToolTip", "a garbage collecting method should be implemented [forgetting things]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_foodLevel = { "foodLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIpawn_characterDefault, foodLevel), METADATA_PARAMS(Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_foodLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_foodLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_negativeLocations_MetaData[] = {
		{ "Category", "Core AI logic" },
		{ "ModuleRelativePath", "AIpawn_characterDefault.h" },
		{ "ToolTip", "a garbage collecting method should be implemented [forgetting things]" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_negativeLocations = { "negativeLocations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(negativeLocations, AAIpawn_characterDefault), STRUCT_OFFSET(AAIpawn_characterDefault, negativeLocations), METADATA_PARAMS(Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_negativeLocations_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_negativeLocations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_positiveLocations_MetaData[] = {
		{ "Category", "Core AI logic" },
		{ "ModuleRelativePath", "AIpawn_characterDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_positiveLocations = { "positiveLocations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(positiveLocations, AAIpawn_characterDefault), STRUCT_OFFSET(AAIpawn_characterDefault, positiveLocations), METADATA_PARAMS(Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_positiveLocations_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_positiveLocations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIpawn_characterDefault_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_emotionQuotient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_dominantEmotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_mouthOutput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_auxInt_neg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_auxInt_pos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_energyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_hydrationLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_foodLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_negativeLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIpawn_characterDefault_Statics::NewProp_positiveLocations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIpawn_characterDefault_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIpawn_characterDefault>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIpawn_characterDefault_Statics::ClassParams = {
		&AAIpawn_characterDefault::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAIpawn_characterDefault_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AAIpawn_characterDefault_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAIpawn_characterDefault_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAIpawn_characterDefault_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIpawn_characterDefault()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIpawn_characterDefault_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIpawn_characterDefault, 3154371047);
	template<> NEUROSIM_API UClass* StaticClass<AAIpawn_characterDefault>()
	{
		return AAIpawn_characterDefault::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIpawn_characterDefault(Z_Construct_UClass_AAIpawn_characterDefault, &AAIpawn_characterDefault::StaticClass, TEXT("/Script/NeuroSim"), TEXT("AAIpawn_characterDefault"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIpawn_characterDefault);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
