// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEUROSIM_AIpawn_characterDefault_generated_h
#error "AIpawn_characterDefault.generated.h already included, missing '#pragma once' in AIpawn_characterDefault.h"
#endif
#define NEUROSIM_AIpawn_characterDefault_generated_h

#define NeuroSim_Source_NeuroSim_AIpawn_characterDefault_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execrefillNeeds) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_needsToManipulate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->refillNeeds(Z_Param_needsToManipulate,Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execdecrementNeeds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->decrementNeeds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execlocationDecision) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_colliderInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->locationDecision(Z_Param_colliderInstance); \
		P_NATIVE_END; \
	}


#define NeuroSim_Source_NeuroSim_AIpawn_characterDefault_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execrefillNeeds) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_needsToManipulate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->refillNeeds(Z_Param_needsToManipulate,Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execdecrementNeeds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->decrementNeeds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execlocationDecision) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_colliderInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->locationDecision(Z_Param_colliderInstance); \
		P_NATIVE_END; \
	}


#define NeuroSim_Source_NeuroSim_AIpawn_characterDefault_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIpawn_characterDefault(); \
	friend struct Z_Construct_UClass_AAIpawn_characterDefault_Statics; \
public: \
	DECLARE_CLASS(AAIpawn_characterDefault, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NeuroSim"), NO_API) \
	DECLARE_SERIALIZER(AAIpawn_characterDefault)


#define NeuroSim_Source_NeuroSim_AIpawn_characterDefault_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAAIpawn_characterDefault(); \
	friend struct Z_Construct_UClass_AAIpawn_characterDefault_Statics; \
public: \
	DECLARE_CLASS(AAIpawn_characterDefault, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NeuroSim"), NO_API) \
	DECLARE_SERIALIZER(AAIpawn_characterDefault)


#define NeuroSim_Source_NeuroSim_AIpawn_characterDefault_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIpawn_characterDefault(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIpawn_characterDefault) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIpawn_characterDefault); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIpawn_characterDefault); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIpawn_characterDefault(AAIpawn_characterDefault&&); \
	NO_API AAIpawn_characterDefault(const AAIpawn_characterDefault&); \
public:


#define NeuroSim_Source_NeuroSim_AIpawn_characterDefault_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIpawn_characterDefault(AAIpawn_characterDefault&&); \
	NO_API AAIpawn_characterDefault(const AAIpawn_characterDefault&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIpawn_characterDefault); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIpawn_characterDefault); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIpawn_characterDefault)


#define NeuroSim_Source_NeuroSim_AIpawn_characterDefault_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__body() { return STRUCT_OFFSET(AAIpawn_characterDefault, body); }


#define NeuroSim_Source_NeuroSim_AIpawn_characterDefault_h_11_PROLOG
#define NeuroSim_Source_NeuroSim_AIpawn_characterDefault_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NeuroSim_Source_NeuroSim_AIpawn_characterDefault_h_14_PRIVATE_PROPERTY_OFFSET \
	NeuroSim_Source_NeuroSim_AIpawn_characterDefault_h_14_RPC_WRAPPERS \
	NeuroSim_Source_NeuroSim_AIpawn_characterDefault_h_14_INCLASS \
	NeuroSim_Source_NeuroSim_AIpawn_characterDefault_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NeuroSim_Source_NeuroSim_AIpawn_characterDefault_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NeuroSim_Source_NeuroSim_AIpawn_characterDefault_h_14_PRIVATE_PROPERTY_OFFSET \
	NeuroSim_Source_NeuroSim_AIpawn_characterDefault_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	NeuroSim_Source_NeuroSim_AIpawn_characterDefault_h_14_INCLASS_NO_PURE_DECLS \
	NeuroSim_Source_NeuroSim_AIpawn_characterDefault_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEUROSIM_API UClass* StaticClass<class AAIpawn_characterDefault>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NeuroSim_Source_NeuroSim_AIpawn_characterDefault_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
