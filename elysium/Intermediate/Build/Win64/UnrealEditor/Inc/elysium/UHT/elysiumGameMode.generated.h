// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "elysiumGameMode.h"

#ifdef ELYSIUM_elysiumGameMode_generated_h
#error "elysiumGameMode.generated.h already included, missing '#pragma once' in elysiumGameMode.h"
#endif
#define ELYSIUM_elysiumGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AelysiumGameMode *********************************************************
ELYSIUM_API UClass* Z_Construct_UClass_AelysiumGameMode_NoRegister();

#define FID_projects_elysium_elysium_Source_elysium_elysiumGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAelysiumGameMode(); \
	friend struct Z_Construct_UClass_AelysiumGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ELYSIUM_API UClass* Z_Construct_UClass_AelysiumGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AelysiumGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/elysium"), Z_Construct_UClass_AelysiumGameMode_NoRegister) \
	DECLARE_SERIALIZER(AelysiumGameMode)


#define FID_projects_elysium_elysium_Source_elysium_elysiumGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AelysiumGameMode(AelysiumGameMode&&) = delete; \
	AelysiumGameMode(const AelysiumGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AelysiumGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AelysiumGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AelysiumGameMode) \
	NO_API virtual ~AelysiumGameMode();


#define FID_projects_elysium_elysium_Source_elysium_elysiumGameMode_h_12_PROLOG
#define FID_projects_elysium_elysium_Source_elysium_elysiumGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_elysium_elysium_Source_elysium_elysiumGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_projects_elysium_elysium_Source_elysium_elysiumGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AelysiumGameMode;

// ********** End Class AelysiumGameMode ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_elysium_elysium_Source_elysium_elysiumGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
