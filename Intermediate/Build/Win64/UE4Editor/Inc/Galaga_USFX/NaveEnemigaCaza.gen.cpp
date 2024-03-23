// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/NaveEnemigaCaza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaCaza() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemigaCaza_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemigaCaza();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ANaveEnemigaCaza::StaticRegisterNativesANaveEnemigaCaza()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaCaza_NoRegister()
	{
		return ANaveEnemigaCaza::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaCaza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimiteSuperior_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimiteSuperior;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimiteInferior_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimiteInferior;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimiteDerecho_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimiteDerecho;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimiteIzquierdo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimiteIzquierdo;
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
	UObject* (*const Z_Construct_UClass_ANaveEnemigaCaza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaCaza_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaCaza.h" },
		{ "ModuleRelativePath", "NaveEnemigaCaza.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_LimiteSuperior_MetaData[] = {
		{ "ModuleRelativePath", "NaveEnemigaCaza.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_LimiteSuperior = { "LimiteSuperior", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemigaCaza, LimiteSuperior), METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_LimiteSuperior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_LimiteSuperior_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_LimiteInferior_MetaData[] = {
		{ "ModuleRelativePath", "NaveEnemigaCaza.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_LimiteInferior = { "LimiteInferior", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemigaCaza, LimiteInferior), METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_LimiteInferior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_LimiteInferior_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_LimiteDerecho_MetaData[] = {
		{ "ModuleRelativePath", "NaveEnemigaCaza.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_LimiteDerecho = { "LimiteDerecho", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemigaCaza, LimiteDerecho), METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_LimiteDerecho_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_LimiteDerecho_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_LimiteIzquierdo_MetaData[] = {
		{ "ModuleRelativePath", "NaveEnemigaCaza.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_LimiteIzquierdo = { "LimiteIzquierdo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemigaCaza, LimiteIzquierdo), METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_LimiteIzquierdo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_LimiteIzquierdo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_DireccionMovimiento_MetaData[] = {
		{ "ModuleRelativePath", "NaveEnemigaCaza.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_DireccionMovimiento = { "DireccionMovimiento", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemigaCaza, DireccionMovimiento), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_DireccionMovimiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_DireccionMovimiento_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_VelocidadMovimiento_MetaData[] = {
		{ "ModuleRelativePath", "NaveEnemigaCaza.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_VelocidadMovimiento = { "VelocidadMovimiento", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemigaCaza, VelocidadMovimiento), METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_VelocidadMovimiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_VelocidadMovimiento_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveEnemigaCaza_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_LimiteSuperior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_LimiteInferior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_LimiteDerecho,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_LimiteIzquierdo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_DireccionMovimiento,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_VelocidadMovimiento,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaCaza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaCaza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaCaza_Statics::ClassParams = {
		&ANaveEnemigaCaza::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveEnemigaCaza_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaCaza_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaCaza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaCaza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaCaza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaCaza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaCaza, 685465458);
	template<> GALAGA_USFX_API UClass* StaticClass<ANaveEnemigaCaza>()
	{
		return ANaveEnemigaCaza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaCaza(Z_Construct_UClass_ANaveEnemigaCaza, &ANaveEnemigaCaza::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ANaveEnemigaCaza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaCaza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
