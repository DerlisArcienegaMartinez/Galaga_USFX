// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/NaveEnemigaEspia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaEspia() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemigaEspia_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemigaEspia();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ANaveEnemigaEspia::StaticRegisterNativesANaveEnemigaEspia()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaEspia_NoRegister()
	{
		return ANaveEnemigaEspia::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaEspia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_direccionMovimiento_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_direccionMovimiento;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_velocidadMovimiento_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_velocidadMovimiento;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaEspia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaEspia_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaEspia.h" },
		{ "ModuleRelativePath", "NaveEnemigaEspia.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaEspia_Statics::NewProp_direccionMovimiento_MetaData[] = {
		{ "ModuleRelativePath", "NaveEnemigaEspia.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANaveEnemigaEspia_Statics::NewProp_direccionMovimiento = { "direccionMovimiento", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemigaEspia, direccionMovimiento), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaEspia_Statics::NewProp_direccionMovimiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaEspia_Statics::NewProp_direccionMovimiento_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaEspia_Statics::NewProp_velocidadMovimiento_MetaData[] = {
		{ "ModuleRelativePath", "NaveEnemigaEspia.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveEnemigaEspia_Statics::NewProp_velocidadMovimiento = { "velocidadMovimiento", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemigaEspia, velocidadMovimiento), METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaEspia_Statics::NewProp_velocidadMovimiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaEspia_Statics::NewProp_velocidadMovimiento_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveEnemigaEspia_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigaEspia_Statics::NewProp_direccionMovimiento,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigaEspia_Statics::NewProp_velocidadMovimiento,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaEspia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaEspia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaEspia_Statics::ClassParams = {
		&ANaveEnemigaEspia::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveEnemigaEspia_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaEspia_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaEspia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaEspia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaEspia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaEspia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaEspia, 2598218364);
	template<> GALAGA_USFX_API UClass* StaticClass<ANaveEnemigaEspia>()
	{
		return ANaveEnemigaEspia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaEspia(Z_Construct_UClass_ANaveEnemigaEspia, &ANaveEnemigaEspia::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ANaveEnemigaEspia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaEspia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
