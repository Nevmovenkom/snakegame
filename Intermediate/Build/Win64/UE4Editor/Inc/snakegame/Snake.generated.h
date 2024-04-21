// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASnakeElementBase;
class AActor;
#ifdef SNAKEGAME_Snake_generated_h
#error "Snake.generated.h already included, missing '#pragma once' in Snake.h"
#endif
#define SNAKEGAME_Snake_generated_h

#define snakegame_Source_snakegame_Snake_h_22_SPARSE_DATA
#define snakegame_Source_snakegame_Snake_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSnakeElementOverlap); \
	DECLARE_FUNCTION(execMove); \
	DECLARE_FUNCTION(execAddSnakeElements);


#define snakegame_Source_snakegame_Snake_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSnakeElementOverlap); \
	DECLARE_FUNCTION(execMove); \
	DECLARE_FUNCTION(execAddSnakeElements);


#define snakegame_Source_snakegame_Snake_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnake(); \
	friend struct Z_Construct_UClass_ASnake_Statics; \
public: \
	DECLARE_CLASS(ASnake, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/snakegame"), NO_API) \
	DECLARE_SERIALIZER(ASnake)


#define snakegame_Source_snakegame_Snake_h_22_INCLASS \
private: \
	static void StaticRegisterNativesASnake(); \
	friend struct Z_Construct_UClass_ASnake_Statics; \
public: \
	DECLARE_CLASS(ASnake, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/snakegame"), NO_API) \
	DECLARE_SERIALIZER(ASnake)


#define snakegame_Source_snakegame_Snake_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASnake(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASnake) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnake); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnake); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnake(ASnake&&); \
	NO_API ASnake(const ASnake&); \
public:


#define snakegame_Source_snakegame_Snake_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnake(ASnake&&); \
	NO_API ASnake(const ASnake&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnake); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnake); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnake)


#define snakegame_Source_snakegame_Snake_h_22_PRIVATE_PROPERTY_OFFSET
#define snakegame_Source_snakegame_Snake_h_19_PROLOG
#define snakegame_Source_snakegame_Snake_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	snakegame_Source_snakegame_Snake_h_22_PRIVATE_PROPERTY_OFFSET \
	snakegame_Source_snakegame_Snake_h_22_SPARSE_DATA \
	snakegame_Source_snakegame_Snake_h_22_RPC_WRAPPERS \
	snakegame_Source_snakegame_Snake_h_22_INCLASS \
	snakegame_Source_snakegame_Snake_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define snakegame_Source_snakegame_Snake_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	snakegame_Source_snakegame_Snake_h_22_PRIVATE_PROPERTY_OFFSET \
	snakegame_Source_snakegame_Snake_h_22_SPARSE_DATA \
	snakegame_Source_snakegame_Snake_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	snakegame_Source_snakegame_Snake_h_22_INCLASS_NO_PURE_DECLS \
	snakegame_Source_snakegame_Snake_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class ASnake>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID snakegame_Source_snakegame_Snake_h


#define FOREACH_ENUM_MOVEMENT(op) \
	op(Movement::UP) \
	op(Movement::DOWN) \
	op(Movement::LEFT) \
	op(Movement::RIGHT) 

enum class Movement;
template<> SNAKEGAME_API UEnum* StaticEnum<Movement>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
