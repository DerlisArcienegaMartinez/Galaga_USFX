// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/Invisibilidad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInvisibilidad() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_UInvisibilidad_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UInvisibilidad();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void UInvisibilidad::StaticRegisterNativesUInvisibilidad()
	{
	}
	UClass* Z_Construct_UClass_UInvisibilidad_NoRegister()
	{
		return UInvisibilidad::StaticClass();
	}
	struct Z_Construct_UClass_UInvisibilidad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInvisibilidad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInvisibilidad_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Invisibilidad.h" },
		{ "ModuleRelativePath", "Invisibilidad.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInvisibilidad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInvisibilidad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInvisibilidad_Statics::ClassParams = {
		&UInvisibilidad::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInvisibilidad_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInvisibilidad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInvisibilidad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInvisibilidad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInvisibilidad, 2664604134);
	template<> GALAGA_USFX_API UClass* StaticClass<UInvisibilidad>()
	{
		return UInvisibilidad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInvisibilidad(Z_Construct_UClass_UInvisibilidad, &UInvisibilidad::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("UInvisibilidad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInvisibilidad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
