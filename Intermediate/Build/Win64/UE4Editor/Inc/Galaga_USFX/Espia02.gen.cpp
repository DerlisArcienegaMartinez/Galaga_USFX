// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/Espia02.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEspia02() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AEspia02_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AEspia02();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemigaEspia();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void AEspia02::StaticRegisterNativesAEspia02()
	{
	}
	UClass* Z_Construct_UClass_AEspia02_NoRegister()
	{
		return AEspia02::StaticClass();
	}
	struct Z_Construct_UClass_AEspia02_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEspia02_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaEspia,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEspia02_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Espia02.h" },
		{ "ModuleRelativePath", "Espia02.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEspia02_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEspia02>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEspia02_Statics::ClassParams = {
		&AEspia02::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEspia02_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEspia02_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEspia02()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEspia02_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEspia02, 2097782188);
	template<> GALAGA_USFX_API UClass* StaticClass<AEspia02>()
	{
		return AEspia02::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEspia02(Z_Construct_UClass_AEspia02, &AEspia02::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AEspia02"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEspia02);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
