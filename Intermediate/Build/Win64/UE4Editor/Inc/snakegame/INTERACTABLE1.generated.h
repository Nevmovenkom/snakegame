// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef SNAKEGAME_INTERACTABLE1_generated_h
#error "INTERACTABLE1.generated.h already included, missing '#pragma once' in INTERACTABLE1.h"
#endif
#define SNAKEGAME_INTERACTABLE1_generated_h

#define snakegame_Source_snakegame_INTERACTABLE1_h_13_SPARSE_DATA
#define snakegame_Source_snakegame_INTERACTABLE1_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInteract);


#define snakegame_Source_snakegame_INTERACTABLE1_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInteract);


#define snakegame_Source_snakegame_INTERACTABLE1_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SNAKEGAME_API UINTERACTABLE1(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UINTERACTABLE1) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SNAKEGAME_API, UINTERACTABLE1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UINTERACTABLE1); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SNAKEGAME_API UINTERACTABLE1(UINTERACTABLE1&&); \
	SNAKEGAME_API UINTERACTABLE1(const UINTERACTABLE1&); \
public:


#define snakegame_Source_snakegame_INTERACTABLE1_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SNAKEGAME_API UINTERACTABLE1(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SNAKEGAME_API UINTERACTABLE1(UINTERACTABLE1&&); \
	SNAKEGAME_API UINTERACTABLE1(const UINTERACTABLE1&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SNAKEGAME_API, UINTERACTABLE1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UINTERACTABLE1); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UINTERACTABLE1)


#define snakegame_Source_snakegame_INTERACTABLE1_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUINTERACTABLE1(); \
	friend struct Z_Construct_UClass_UINTERACTABLE1_Statics; \
public: \
	DECLARE_CLASS(UINTERACTABLE1, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/snakegame"), SNAKEGAME_API) \
	DECLARE_SERIALIZER(UINTERACTABLE1)


#define snakegame_Source_snakegame_INTERACTABLE1_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	snakegame_Source_snakegame_INTERACTABLE1_h_13_GENERATED_UINTERFACE_BODY() \
	snakegame_Source_snakegame_INTERACTABLE1_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define snakegame_Source_snakegame_INTERACTABLE1_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	snakegame_Source_snakegame_INTERACTABLE1_h_13_GENERATED_UINTERFACE_BODY() \
	snakegame_Source_snakegame_INTERACTABLE1_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define snakegame_Source_snakegame_INTERACTABLE1_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IINTERACTABLE1() {} \
public: \
	typedef UINTERACTABLE1 UClassType; \
	typedef IINTERACTABLE1 ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define snakegame_Source_snakegame_INTERACTABLE1_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IINTERACTABLE1() {} \
public: \
	typedef UINTERACTABLE1 UClassType; \
	typedef IINTERACTABLE1 ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define snakegame_Source_snakegame_INTERACTABLE1_h_10_PROLOG
#define snakegame_Source_snakegame_INTERACTABLE1_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	snakegame_Source_snakegame_INTERACTABLE1_h_13_SPARSE_DATA \
	snakegame_Source_snakegame_INTERACTABLE1_h_13_RPC_WRAPPERS \
	snakegame_Source_snakegame_INTERACTABLE1_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define snakegame_Source_snakegame_INTERACTABLE1_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	snakegame_Source_snakegame_INTERACTABLE1_h_13_SPARSE_DATA \
	snakegame_Source_snakegame_INTERACTABLE1_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	snakegame_Source_snakegame_INTERACTABLE1_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class UINTERACTABLE1>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID snakegame_Source_snakegame_INTERACTABLE1_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
