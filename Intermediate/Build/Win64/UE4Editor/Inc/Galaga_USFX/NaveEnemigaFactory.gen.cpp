// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/NaveEnemigaFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaFactory() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_UNaveEnemigaFactory_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UNaveEnemigaFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemiga_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UNaveEnemigaFactory::execCrearNaveEnemiga)
	{
		P_GET_OBJECT(UClass,Z_Param_ClaseNave);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Posicion);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotacion);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ANaveEnemiga**)Z_Param__Result=UNaveEnemigaFactory::CrearNaveEnemiga(Z_Param_ClaseNave,Z_Param_Out_Posicion,Z_Param_Out_Rotacion,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UNaveEnemigaFactory::StaticRegisterNativesUNaveEnemigaFactory()
	{
		UClass* Class = UNaveEnemigaFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CrearNaveEnemiga", &UNaveEnemigaFactory::execCrearNaveEnemiga },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics
	{
		struct NaveEnemigaFactory_eventCrearNaveEnemiga_Parms
		{
			TSubclassOf<ANaveEnemiga>  ClaseNave;
			FVector Posicion;
			FRotator Rotacion;
			UObject* WorldContextObject;
			ANaveEnemiga* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotacion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotacion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Posicion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Posicion;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClaseNave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveEnemigaFactory_eventCrearNaveEnemiga_Parms, ReturnValue), Z_Construct_UClass_ANaveEnemiga_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveEnemigaFactory_eventCrearNaveEnemiga_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_Rotacion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_Rotacion = { "Rotacion", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveEnemigaFactory_eventCrearNaveEnemiga_Parms, Rotacion), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_Rotacion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_Rotacion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_Posicion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveEnemigaFactory_eventCrearNaveEnemiga_Parms, Posicion), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_Posicion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_Posicion_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_ClaseNave = { "ClaseNave", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveEnemigaFactory_eventCrearNaveEnemiga_Parms, ClaseNave), Z_Construct_UClass_ANaveEnemiga_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_Rotacion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_Posicion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_ClaseNave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nave Enemiga FABRICA" },
		{ "ModuleRelativePath", "NaveEnemigaFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNaveEnemigaFactory, nullptr, "CrearNaveEnemiga", nullptr, nullptr, sizeof(NaveEnemigaFactory_eventCrearNaveEnemiga_Parms), Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNaveEnemigaFactory_NoRegister()
	{
		return UNaveEnemigaFactory::StaticClass();
	}
	struct Z_Construct_UClass_UNaveEnemigaFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNaveEnemigaFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNaveEnemigaFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga, "CrearNaveEnemiga" }, // 3206016259
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNaveEnemigaFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaFactory.h" },
		{ "ModuleRelativePath", "NaveEnemigaFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNaveEnemigaFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNaveEnemigaFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNaveEnemigaFactory_Statics::ClassParams = {
		&UNaveEnemigaFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNaveEnemigaFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNaveEnemigaFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNaveEnemigaFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNaveEnemigaFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNaveEnemigaFactory, 3176714178);
	template<> GALAGA_USFX_API UClass* StaticClass<UNaveEnemigaFactory>()
	{
		return UNaveEnemigaFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNaveEnemigaFactory(Z_Construct_UClass_UNaveEnemigaFactory, &UNaveEnemigaFactory::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("UNaveEnemigaFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNaveEnemigaFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
