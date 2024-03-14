// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/Espia01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEspia01() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AEspia01_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AEspia01();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemigaEspia();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void AEspia01::StaticRegisterNativesAEspia01()
	{
	}
	UClass* Z_Construct_UClass_AEspia01_NoRegister()
	{
		return AEspia01::StaticClass();
	}
	struct Z_Construct_UClass_AEspia01_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEspia01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaEspia,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEspia01_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Espia01.h" },
		{ "ModuleRelativePath", "Espia01.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEspia01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEspia01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEspia01_Statics::ClassParams = {
		&AEspia01::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEspia01_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEspia01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEspia01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEspia01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEspia01, 1215753789);
	template<> GALAGA_USFX_API UClass* StaticClass<AEspia01>()
	{
		return AEspia01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEspia01(Z_Construct_UClass_AEspia01, &AEspia01::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AEspia01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEspia01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
