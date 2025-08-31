// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "elysiumCharacter.h"

#ifdef ELYSIUM_elysiumCharacter_generated_h
#error "elysiumCharacter.generated.h already included, missing '#pragma once' in elysiumCharacter.h"
#endif
#define ELYSIUM_elysiumCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AelysiumCharacter ********************************************************
#define FID_projects_elysium_elysium_Source_elysium_elysiumCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


ELYSIUM_API UClass* Z_Construct_UClass_AelysiumCharacter_NoRegister();

#define FID_projects_elysium_elysium_Source_elysium_elysiumCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAelysiumCharacter(); \
	friend struct Z_Construct_UClass_AelysiumCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ELYSIUM_API UClass* Z_Construct_UClass_AelysiumCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AelysiumCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/elysium"), Z_Construct_UClass_AelysiumCharacter_NoRegister) \
	DECLARE_SERIALIZER(AelysiumCharacter)


#define FID_projects_elysium_elysium_Source_elysium_elysiumCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AelysiumCharacter(AelysiumCharacter&&) = delete; \
	AelysiumCharacter(const AelysiumCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AelysiumCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AelysiumCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AelysiumCharacter) \
	NO_API virtual ~AelysiumCharacter();


#define FID_projects_elysium_elysium_Source_elysium_elysiumCharacter_h_21_PROLOG
#define FID_projects_elysium_elysium_Source_elysium_elysiumCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_elysium_elysium_Source_elysium_elysiumCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_elysium_elysium_Source_elysium_elysiumCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_projects_elysium_elysium_Source_elysium_elysiumCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AelysiumCharacter;

// ********** End Class AelysiumCharacter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_elysium_elysium_Source_elysium_elysiumCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
