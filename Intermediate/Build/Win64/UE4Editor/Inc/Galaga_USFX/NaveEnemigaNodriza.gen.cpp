// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/NaveEnemigaNodriza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaNodriza() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemigaNodriza_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemigaNodriza();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ANaveEnemigaNodriza::StaticRegisterNativesANaveEnemigaNodriza()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaNodriza_NoRegister()
	{
		return ANaveEnemigaNodriza::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaNodriza_Statics
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
	UObject* (*const Z_Construct_UClass_ANaveEnemigaNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaNodriza_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaNodriza.h" },
		{ "ModuleRelativePath", "NaveEnemigaNodriza.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaNodriza_Statics::NewProp_DireccionMovimiento_MetaData[] = {
		{ "ModuleRelativePath", "NaveEnemigaNodriza.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANaveEnemigaNodriza_Statics::NewProp_DireccionMovimiento = { "DireccionMovimiento", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemigaNodriza, DireccionMovimiento), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaNodriza_Statics::NewProp_DireccionMovimiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaNodriza_Statics::NewProp_DireccionMovimiento_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaNodriza_Statics::NewProp_VelocidadMovimiento_MetaData[] = {
		{ "ModuleRelativePath", "NaveEnemigaNodriza.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveEnemigaNodriza_Statics::NewProp_VelocidadMovimiento = { "VelocidadMovimiento", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemigaNodriza, VelocidadMovimiento), METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaNodriza_Statics::NewProp_VelocidadMovimiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaNodriza_Statics::NewProp_VelocidadMovimiento_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveEnemigaNodriza_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigaNodriza_Statics::NewProp_DireccionMovimiento,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigaNodriza_Statics::NewProp_VelocidadMovimiento,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaNodriza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaNodriza_Statics::ClassParams = {
		&ANaveEnemigaNodriza::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveEnemigaNodriza_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaNodriza_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaNodriza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaNodriza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaNodriza, 629895706);
	template<> GALAGA_USFX_API UClass* StaticClass<ANaveEnemigaNodriza>()
	{
		return ANaveEnemigaNodriza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaNodriza(Z_Construct_UClass_ANaveEnemigaNodriza, &ANaveEnemigaNodriza::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ANaveEnemigaNodriza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaNodriza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
