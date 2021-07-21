// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTGIT_TestGitCharacter_generated_h
#error "TestGitCharacter.generated.h already included, missing '#pragma once' in TestGitCharacter.h"
#endif
#define TESTGIT_TestGitCharacter_generated_h

#define TestGit_Source_TestGit_TestGitCharacter_h_12_SPARSE_DATA
#define TestGit_Source_TestGit_TestGitCharacter_h_12_RPC_WRAPPERS
#define TestGit_Source_TestGit_TestGitCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TestGit_Source_TestGit_TestGitCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestGitCharacter(); \
	friend struct Z_Construct_UClass_ATestGitCharacter_Statics; \
public: \
	DECLARE_CLASS(ATestGitCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestGit"), NO_API) \
	DECLARE_SERIALIZER(ATestGitCharacter)


#define TestGit_Source_TestGit_TestGitCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATestGitCharacter(); \
	friend struct Z_Construct_UClass_ATestGitCharacter_Statics; \
public: \
	DECLARE_CLASS(ATestGitCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestGit"), NO_API) \
	DECLARE_SERIALIZER(ATestGitCharacter)


#define TestGit_Source_TestGit_TestGitCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestGitCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestGitCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestGitCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestGitCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestGitCharacter(ATestGitCharacter&&); \
	NO_API ATestGitCharacter(const ATestGitCharacter&); \
public:


#define TestGit_Source_TestGit_TestGitCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestGitCharacter(ATestGitCharacter&&); \
	NO_API ATestGitCharacter(const ATestGitCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestGitCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestGitCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestGitCharacter)


#define TestGit_Source_TestGit_TestGitCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATestGitCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ATestGitCharacter, FollowCamera); }


#define TestGit_Source_TestGit_TestGitCharacter_h_9_PROLOG
#define TestGit_Source_TestGit_TestGitCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestGit_Source_TestGit_TestGitCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TestGit_Source_TestGit_TestGitCharacter_h_12_SPARSE_DATA \
	TestGit_Source_TestGit_TestGitCharacter_h_12_RPC_WRAPPERS \
	TestGit_Source_TestGit_TestGitCharacter_h_12_INCLASS \
	TestGit_Source_TestGit_TestGitCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestGit_Source_TestGit_TestGitCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestGit_Source_TestGit_TestGitCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TestGit_Source_TestGit_TestGitCharacter_h_12_SPARSE_DATA \
	TestGit_Source_TestGit_TestGitCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TestGit_Source_TestGit_TestGitCharacter_h_12_INCLASS_NO_PURE_DECLS \
	TestGit_Source_TestGit_TestGitCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTGIT_API UClass* StaticClass<class ATestGitCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestGit_Source_TestGit_TestGitCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
