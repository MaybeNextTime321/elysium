// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeelysium_init() {}
	ELYSIUM_API UFunction* Z_Construct_UDelegateFunction_elysium_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_elysium;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_elysium()
	{
		if (!Z_Registration_Info_UPackage__Script_elysium.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_elysium_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/elysium",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x2B36E37F,
				0xA3923CED,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_elysium.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_elysium.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_elysium(Z_Construct_UPackage__Script_elysium, TEXT("/Script/elysium"), Z_Registration_Info_UPackage__Script_elysium, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2B36E37F, 0xA3923CED));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
