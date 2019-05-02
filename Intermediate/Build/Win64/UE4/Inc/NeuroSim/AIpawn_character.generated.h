// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEUROSIM_AIpawn_character_generated_h
#error "AIpawn_character.generated.h already included, missing '#pragma once' in AIpawn_character.h"
#endif
#define NEUROSIM_AIpawn_character_generated_h

#define NeuroSim_Source_NeuroSim_AIpawn_character_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execdecrementNeeds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->decrementNeeds(); \
		P_NATIVE_END; \
	}


#define NeuroSim_Source_NeuroSim_AIpawn_character_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execdecrementNeeds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->decrementNeeds(); \
		P_NATIVE_END; \
	}


#define NeuroSim_Source_NeuroSim_AIpawn_character_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIpawn_character(); \
	friend struct Z_Construct_UClass_AAIpawn_character_Statics; \
public: \
	DECLARE_CLASS(AAIpawn_character, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NeuroSim"), NO_API) \
	DECLARE_SERIALIZER(AAIpawn_character)


#define NeuroSim_Source_NeuroSim_AIpawn_character_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAAIpawn_character(); \
	friend struct Z_Construct_UClass_AAIpawn_character_Statics; \
public: \
	DECLARE_CLASS(AAIpawn_character, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NeuroSim"), NO_API) \
	DECLARE_SERIALIZER(AAIpawn_character)


#define NeuroSim_Source_NeuroSim_AIpawn_character_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIpawn_character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIpawn_character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIpawn_character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIpawn_character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIpawn_character(AAIpawn_character&&); \
	NO_API AAIpawn_character(const AAIpawn_character&); \
public:


#define NeuroSim_Source_NeuroSim_AIpawn_character_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIpawn_character(AAIpawn_character&&); \
	NO_API AAIpawn_character(const AAIpawn_character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIpawn_character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIpawn_character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIpawn_character)


#define NeuroSim_Source_NeuroSim_AIpawn_character_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AAIpawn_character, Mesh); }


#define NeuroSim_Source_NeuroSim_AIpawn_character_h_13_PROLOG
#define NeuroSim_Source_NeuroSim_AIpawn_character_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NeuroSim_Source_NeuroSim_AIpawn_character_h_16_PRIVATE_PROPERTY_OFFSET \
	NeuroSim_Source_NeuroSim_AIpawn_character_h_16_RPC_WRAPPERS \
	NeuroSim_Source_NeuroSim_AIpawn_character_h_16_INCLASS \
	NeuroSim_Source_NeuroSim_AIpawn_character_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NeuroSim_Source_NeuroSim_AIpawn_character_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NeuroSim_Source_NeuroSim_AIpawn_character_h_16_PRIVATE_PROPERTY_OFFSET \
	NeuroSim_Source_NeuroSim_AIpawn_character_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	NeuroSim_Source_NeuroSim_AIpawn_character_h_16_INCLASS_NO_PURE_DECLS \
	NeuroSim_Source_NeuroSim_AIpawn_character_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEUROSIM_API UClass* StaticClass<class AAIpawn_character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NeuroSim_Source_NeuroSim_AIpawn_character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
