// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "elysiumPlayerController.h"

#ifdef ELYSIUM_elysiumPlayerController_generated_h
#error "elysiumPlayerController.generated.h already included, missing '#pragma once' in elysiumPlayerController.h"
#endif
#define ELYSIUM_elysiumPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AelysiumPlayerController *************************************************
ELYSIUM_API UClass* Z_Construct_UClass_AelysiumPlayerController_NoRegister();

#define FID_projects_elysium_elysium_Source_elysium_elysiumPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAelysiumPlayerController(); \
	friend struct Z_Construct_UClass_AelysiumPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ELYSIUM_API UClass* Z_Construct_UClass_AelysiumPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AelysiumPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/elysium"), Z_Construct_UClass_AelysiumPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AelysiumPlayerController)


#define FID_projects_elysium_elysium_Source_elysium_elysiumPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AelysiumPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AelysiumPlayerController(AelysiumPlayerController&&) = delete; \
	AelysiumPlayerController(const AelysiumPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AelysiumPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AelysiumPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AelysiumPlayerController) \
	NO_API virtual ~AelysiumPlayerController();


#define FID_projects_elysium_elysium_Source_elysium_elysiumPlayerController_h_16_PROLOG
#define FID_projects_elysium_elysium_Source_elysium_elysiumPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_elysium_elysium_Source_elysium_elysiumPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_projects_elysium_elysium_Source_elysium_elysiumPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AelysiumPlayerController;

// ********** End Class AelysiumPlayerController ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_elysium_elysium_Source_elysium_elysiumPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
