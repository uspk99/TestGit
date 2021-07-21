// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestGit/TestGitGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestGitGameMode() {}
// Cross Module References
	TESTGIT_API UClass* Z_Construct_UClass_ATestGitGameMode_NoRegister();
	TESTGIT_API UClass* Z_Construct_UClass_ATestGitGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TestGit();
// End Cross Module References
	void ATestGitGameMode::StaticRegisterNativesATestGitGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATestGitGameMode_NoRegister()
	{
		return ATestGitGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATestGitGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestGitGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TestGit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGitGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TestGitGameMode.h" },
		{ "ModuleRelativePath", "TestGitGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestGitGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestGitGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestGitGameMode_Statics::ClassParams = {
		&ATestGitGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATestGitGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGitGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestGitGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestGitGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestGitGameMode, 1201422767);
	template<> TESTGIT_API UClass* StaticClass<ATestGitGameMode>()
	{
		return ATestGitGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestGitGameMode(Z_Construct_UClass_ATestGitGameMode, &ATestGitGameMode::StaticClass, TEXT("/Script/TestGit"), TEXT("ATestGitGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestGitGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
