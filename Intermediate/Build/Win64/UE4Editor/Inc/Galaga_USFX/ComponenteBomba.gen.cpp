// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/ComponenteBomba.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponenteBomba() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_UComponenteBomba_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UComponenteBomba();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void UComponenteBomba::StaticRegisterNativesUComponenteBomba()
	{
	}
	UClass* Z_Construct_UClass_UComponenteBomba_NoRegister()
	{
		return UComponenteBomba::StaticClass();
	}
	struct Z_Construct_UClass_UComponenteBomba_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponenteBomba_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteBomba_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ComponenteBomba.h" },
		{ "ModuleRelativePath", "ComponenteBomba.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponenteBomba_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponenteBomba>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComponenteBomba_Statics::ClassParams = {
		&UComponenteBomba::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComponenteBomba_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteBomba_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponenteBomba()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComponenteBomba_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComponenteBomba, 2290076521);
	template<> GALAGA_USFX_API UClass* StaticClass<UComponenteBomba>()
	{
		return UComponenteBomba::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComponenteBomba(Z_Construct_UClass_UComponenteBomba, &UComponenteBomba::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("UComponenteBomba"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponenteBomba);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
