// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/Caza02.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaza02() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ACaza02_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ACaza02();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemigaCaza();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ACaza02::StaticRegisterNativesACaza02()
	{
	}
	UClass* Z_Construct_UClass_ACaza02_NoRegister()
	{
		return ACaza02::StaticClass();
	}
	struct Z_Construct_UClass_ACaza02_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DireccionMovimiento_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DireccionMovimiento;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadMovimiento_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadMovimiento;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACaza02_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaCaza,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaza02_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Caza02.h" },
		{ "ModuleRelativePath", "Caza02.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaza02_Statics::NewProp_DireccionMovimiento_MetaData[] = {
		{ "ModuleRelativePath", "Caza02.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACaza02_Statics::NewProp_DireccionMovimiento = { "DireccionMovimiento", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaza02, DireccionMovimiento), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACaza02_Statics::NewProp_DireccionMovimiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaza02_Statics::NewProp_DireccionMovimiento_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaza02_Statics::NewProp_VelocidadMovimiento_MetaData[] = {
		{ "ModuleRelativePath", "Caza02.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACaza02_Statics::NewProp_VelocidadMovimiento = { "VelocidadMovimiento", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaza02, VelocidadMovimiento), METADATA_PARAMS(Z_Construct_UClass_ACaza02_Statics::NewProp_VelocidadMovimiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaza02_Statics::NewProp_VelocidadMovimiento_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACaza02_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaza02_Statics::NewProp_DireccionMovimiento,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaza02_Statics::NewProp_VelocidadMovimiento,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACaza02_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaza02>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACaza02_Statics::ClassParams = {
		&ACaza02::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACaza02_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACaza02_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACaza02_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACaza02_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACaza02()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACaza02_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACaza02, 4221591687);
	template<> GALAGA_USFX_API UClass* StaticClass<ACaza02>()
	{
		return ACaza02::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACaza02(Z_Construct_UClass_ACaza02, &ACaza02::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ACaza02"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACaza02);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
