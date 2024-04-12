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
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACaza02_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaza02>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACaza02_Statics::ClassParams = {
		&ACaza02::StaticClass,
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
	IMPLEMENT_CLASS(ACaza02, 2746268925);
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
