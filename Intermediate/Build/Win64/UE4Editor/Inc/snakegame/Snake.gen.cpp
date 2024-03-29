// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "snakegame/Snake.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnake() {}
// Cross Module References
	SNAKEGAME_API UEnum* Z_Construct_UEnum_snakegame_Movement();
	UPackage* Z_Construct_UPackage__Script_snakegame();
	SNAKEGAME_API UClass* Z_Construct_UClass_ASnake_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_ASnake();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeElementBase_NoRegister();
// End Cross Module References
	static UEnum* Movement_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_snakegame_Movement, Z_Construct_UPackage__Script_snakegame(), TEXT("Movement"));
		}
		return Singleton;
	}
	template<> SNAKEGAME_API UEnum* StaticEnum<Movement>()
	{
		return Movement_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Movement(Movement_StaticEnum, TEXT("/Script/snakegame"), TEXT("Movement"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_snakegame_Movement_Hash() { return 3711879015U; }
	UEnum* Z_Construct_UEnum_snakegame_Movement()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_snakegame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Movement"), 0, Get_Z_Construct_UEnum_snakegame_Movement_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Movement::UP", (int64)Movement::UP },
				{ "Movement::DOWN", (int64)Movement::DOWN },
				{ "Movement::LEFT", (int64)Movement::LEFT },
				{ "Movement::RIGHT", (int64)Movement::RIGHT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DOWN.Name", "Movement::DOWN" },
				{ "LEFT.Name", "Movement::LEFT" },
				{ "ModuleRelativePath", "Snake.h" },
				{ "RIGHT.Name", "Movement::RIGHT" },
				{ "UP.Name", "Movement::UP" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_snakegame,
				nullptr,
				"Movement",
				"Movement",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ASnake::StaticRegisterNativesASnake()
	{
	}
	UClass* Z_Construct_UClass_ASnake_NoRegister()
	{
		return ASnake::StaticClass();
	}
	struct Z_Construct_UClass_ASnake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnakeElementClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SnakeElementClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnakeElements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnakeElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SnakeElements;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElementSize;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LastMoveDirection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastMoveDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LastMoveDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_snakegame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnake_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Snake.h" },
		{ "ModuleRelativePath", "Snake.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnake_Statics::NewProp_SnakeElementClass_MetaData[] = {
		{ "Category", "Snake" },
		{ "ModuleRelativePath", "Snake.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASnake_Statics::NewProp_SnakeElementClass = { "SnakeElementClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnake, SnakeElementClass), Z_Construct_UClass_ASnakeElementBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASnake_Statics::NewProp_SnakeElementClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnake_Statics::NewProp_SnakeElementClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnake_Statics::NewProp_SnakeElements_Inner = { "SnakeElements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASnakeElementBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnake_Statics::NewProp_SnakeElements_MetaData[] = {
		{ "ModuleRelativePath", "Snake.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASnake_Statics::NewProp_SnakeElements = { "SnakeElements", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnake, SnakeElements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASnake_Statics::NewProp_SnakeElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnake_Statics::NewProp_SnakeElements_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnake_Statics::NewProp_ElementSize_MetaData[] = {
		{ "Category", "Snake" },
		{ "ModuleRelativePath", "Snake.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASnake_Statics::NewProp_ElementSize = { "ElementSize", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnake, ElementSize), METADATA_PARAMS(Z_Construct_UClass_ASnake_Statics::NewProp_ElementSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnake_Statics::NewProp_ElementSize_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASnake_Statics::NewProp_LastMoveDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnake_Statics::NewProp_LastMoveDirection_MetaData[] = {
		{ "ModuleRelativePath", "Snake.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASnake_Statics::NewProp_LastMoveDirection = { "LastMoveDirection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnake, LastMoveDirection), Z_Construct_UEnum_snakegame_Movement, METADATA_PARAMS(Z_Construct_UClass_ASnake_Statics::NewProp_LastMoveDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnake_Statics::NewProp_LastMoveDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnake_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "Snake" },
		{ "ModuleRelativePath", "Snake.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASnake_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnake, speed), METADATA_PARAMS(Z_Construct_UClass_ASnake_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnake_Statics::NewProp_speed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnake_Statics::NewProp_SnakeElementClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnake_Statics::NewProp_SnakeElements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnake_Statics::NewProp_SnakeElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnake_Statics::NewProp_ElementSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnake_Statics::NewProp_LastMoveDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnake_Statics::NewProp_LastMoveDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnake_Statics::NewProp_speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnake>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASnake_Statics::ClassParams = {
		&ASnake::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASnake_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASnake_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASnake_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASnake_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnake()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASnake_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASnake, 131958782);
	template<> SNAKEGAME_API UClass* StaticClass<ASnake>()
	{
		return ASnake::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASnake(Z_Construct_UClass_ASnake, &ASnake::StaticClass, TEXT("/Script/snakegame"), TEXT("ASnake"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnake);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
