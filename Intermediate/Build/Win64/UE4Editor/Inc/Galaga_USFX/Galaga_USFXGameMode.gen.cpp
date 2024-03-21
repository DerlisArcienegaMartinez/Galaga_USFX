// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/Galaga_USFXGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGalaga_USFXGameMode() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AGalaga_USFXGameMode_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AGalaga_USFXGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemiga_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AGalaga_USFXGameMode::StaticRegisterNativesAGalaga_USFXGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGalaga_USFXGameMode_NoRegister()
	{
		return AGalaga_USFXGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGalaga_USFXGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TMPosicionesNavesEnemigas_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TMPosicionesNavesEnemigas;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TMPosicionesNavesEnemigas_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TMPosicionesNavesEnemigas_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGalaga_USFXGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_USFXGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Galaga_USFXGameMode.h" },
		{ "ModuleRelativePath", "Galaga_USFXGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_USFXGameMode_Statics::NewProp_TMPosicionesNavesEnemigas_MetaData[] = {
		{ "ModuleRelativePath", "Galaga_USFXGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGalaga_USFXGameMode_Statics::NewProp_TMPosicionesNavesEnemigas = { "TMPosicionesNavesEnemigas", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGalaga_USFXGameMode, TMPosicionesNavesEnemigas), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGalaga_USFXGameMode_Statics::NewProp_TMPosicionesNavesEnemigas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFXGameMode_Statics::NewProp_TMPosicionesNavesEnemigas_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGalaga_USFXGameMode_Statics::NewProp_TMPosicionesNavesEnemigas_Key_KeyProp = { "TMPosicionesNavesEnemigas_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ANaveEnemiga_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGalaga_USFXGameMode_Statics::NewProp_TMPosicionesNavesEnemigas_ValueProp = { "TMPosicionesNavesEnemigas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGalaga_USFXGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGalaga_USFXGameMode_Statics::NewProp_TMPosicionesNavesEnemigas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGalaga_USFXGameMode_Statics::NewProp_TMPosicionesNavesEnemigas_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGalaga_USFXGameMode_Statics::NewProp_TMPosicionesNavesEnemigas_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGalaga_USFXGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGalaga_USFXGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGalaga_USFXGameMode_Statics::ClassParams = {
		&AGalaga_USFXGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGalaga_USFXGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFXGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGalaga_USFXGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFXGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGalaga_USFXGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGalaga_USFXGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGalaga_USFXGameMode, 1429120768);
	template<> GALAGA_USFX_API UClass* StaticClass<AGalaga_USFXGameMode>()
	{
		return AGalaga_USFXGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGalaga_USFXGameMode(Z_Construct_UClass_AGalaga_USFXGameMode, &AGalaga_USFXGameMode::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AGalaga_USFXGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGalaga_USFXGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
