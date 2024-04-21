// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "snakegame/INTERACTABLE1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeINTERACTABLE1() {}
// Cross Module References
	SNAKEGAME_API UClass* Z_Construct_UClass_UINTERACTABLE1_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_UINTERACTABLE1();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_snakegame();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IINTERACTABLE1::execInteract)
	{
		P_GET_OBJECT(AActor,Z_Param_IINTERACTABLE1);
		P_GET_UBOOL(Z_Param_bIsHead);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact(Z_Param_IINTERACTABLE1,Z_Param_bIsHead);
		P_NATIVE_END;
	}
	void UINTERACTABLE1::StaticRegisterNativesUINTERACTABLE1()
	{
		UClass* Class = UINTERACTABLE1::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Interact", &IINTERACTABLE1::execInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UINTERACTABLE1_Interact_Statics
	{
		struct INTERACTABLE1_eventInteract_Parms
		{
			AActor* IINTERACTABLE1;
			bool bIsHead;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IINTERACTABLE1;
		static void NewProp_bIsHead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHead;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UINTERACTABLE1_Interact_Statics::NewProp_IINTERACTABLE1 = { "IINTERACTABLE1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(INTERACTABLE1_eventInteract_Parms, IINTERACTABLE1), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UINTERACTABLE1_Interact_Statics::NewProp_bIsHead_SetBit(void* Obj)
	{
		((INTERACTABLE1_eventInteract_Parms*)Obj)->bIsHead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UINTERACTABLE1_Interact_Statics::NewProp_bIsHead = { "bIsHead", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(INTERACTABLE1_eventInteract_Parms), &Z_Construct_UFunction_UINTERACTABLE1_Interact_Statics::NewProp_bIsHead_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UINTERACTABLE1_Interact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UINTERACTABLE1_Interact_Statics::NewProp_IINTERACTABLE1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UINTERACTABLE1_Interact_Statics::NewProp_bIsHead,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UINTERACTABLE1_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "INTERACTABLE1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UINTERACTABLE1_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UINTERACTABLE1, nullptr, "Interact", nullptr, nullptr, sizeof(INTERACTABLE1_eventInteract_Parms), Z_Construct_UFunction_UINTERACTABLE1_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UINTERACTABLE1_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UINTERACTABLE1_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UINTERACTABLE1_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UINTERACTABLE1_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UINTERACTABLE1_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UINTERACTABLE1_NoRegister()
	{
		return UINTERACTABLE1::StaticClass();
	}
	struct Z_Construct_UClass_UINTERACTABLE1_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UINTERACTABLE1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_snakegame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UINTERACTABLE1_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UINTERACTABLE1_Interact, "Interact" }, // 1464826229
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UINTERACTABLE1_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "INTERACTABLE1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UINTERACTABLE1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IINTERACTABLE1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UINTERACTABLE1_Statics::ClassParams = {
		&UINTERACTABLE1::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UINTERACTABLE1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UINTERACTABLE1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UINTERACTABLE1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UINTERACTABLE1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UINTERACTABLE1, 865253525);
	template<> SNAKEGAME_API UClass* StaticClass<UINTERACTABLE1>()
	{
		return UINTERACTABLE1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UINTERACTABLE1(Z_Construct_UClass_UINTERACTABLE1, &UINTERACTABLE1::StaticClass, TEXT("/Script/snakegame"), TEXT("UINTERACTABLE1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UINTERACTABLE1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
