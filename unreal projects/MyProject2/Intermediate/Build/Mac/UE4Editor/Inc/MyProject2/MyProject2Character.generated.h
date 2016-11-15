// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT2_MyProject2Character_generated_h
#error "MyProject2Character.generated.h already included, missing '#pragma once' in MyProject2Character.h"
#endif
#define MYPROJECT2_MyProject2Character_generated_h

#define MyProject2_Source_MyProject2_MyProject2Character_h_11_RPC_WRAPPERS
#define MyProject2_Source_MyProject2_MyProject2Character_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject2_Source_MyProject2_MyProject2Character_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAMyProject2Character(); \
	friend MYPROJECT2_API class UClass* Z_Construct_UClass_AMyProject2Character(); \
	public: \
	DECLARE_CLASS(AMyProject2Character, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(AMyProject2Character) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject2_Source_MyProject2_MyProject2Character_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesAMyProject2Character(); \
	friend MYPROJECT2_API class UClass* Z_Construct_UClass_AMyProject2Character(); \
	public: \
	DECLARE_CLASS(AMyProject2Character, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(AMyProject2Character) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject2_Source_MyProject2_MyProject2Character_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProject2Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProject2Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject2Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject2Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject2Character(AMyProject2Character&&); \
	NO_API AMyProject2Character(const AMyProject2Character&); \
public:


#define MyProject2_Source_MyProject2_MyProject2Character_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject2Character(AMyProject2Character&&); \
	NO_API AMyProject2Character(const AMyProject2Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject2Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject2Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProject2Character)


#define MyProject2_Source_MyProject2_MyProject2Character_h_8_PROLOG
#define MyProject2_Source_MyProject2_MyProject2Character_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_MyProject2Character_h_11_RPC_WRAPPERS \
	MyProject2_Source_MyProject2_MyProject2Character_h_11_INCLASS \
	MyProject2_Source_MyProject2_MyProject2Character_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject2_Source_MyProject2_MyProject2Character_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_MyProject2Character_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_MyProject2Character_h_11_INCLASS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_MyProject2Character_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject2_Source_MyProject2_MyProject2Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
