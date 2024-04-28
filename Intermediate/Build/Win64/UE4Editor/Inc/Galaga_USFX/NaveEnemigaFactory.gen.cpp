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
	GALAGA_USFX_API UEnum* Z_Construct_UEnum_Galaga_USFX_ETipoNavesEnemigas();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UNaveEnemigaFactory_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UNaveEnemigaFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemiga_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* ETipoNavesEnemigas_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Galaga_USFX_ETipoNavesEnemigas, Z_Construct_UPackage__Script_Galaga_USFX(), TEXT("ETipoNavesEnemigas"));
		}
		return Singleton;
	}
	template<> GALAGA_USFX_API UEnum* StaticEnum<ETipoNavesEnemigas>()
	{
		return ETipoNavesEnemigas_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETipoNavesEnemigas(ETipoNavesEnemigas_StaticEnum, TEXT("/Script/Galaga_USFX"), TEXT("ETipoNavesEnemigas"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Galaga_USFX_ETipoNavesEnemigas_Hash() { return 3593447711U; }
	UEnum* Z_Construct_UEnum_Galaga_USFX_ETipoNavesEnemigas()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Galaga_USFX();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETipoNavesEnemigas"), 0, Get_Z_Construct_UEnum_Galaga_USFX_ETipoNavesEnemigas_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETipoNavesEnemigas::Caza", (int64)ETipoNavesEnemigas::Caza },
				{ "ETipoNavesEnemigas::Transporte", (int64)ETipoNavesEnemigas::Transporte },
				{ "ETipoNavesEnemigas::Nodriza", (int64)ETipoNavesEnemigas::Nodriza },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Caza.Comment", "/**\n * \n */" },
				{ "Caza.Name", "ETipoNavesEnemigas::Caza" },
				{ "Comment", "/**\n * \n */" },
				{ "ModuleRelativePath", "NaveEnemigaFactory.h" },
				{ "Nodriza.Comment", "/**\n * \n */" },
				{ "Nodriza.Name", "ETipoNavesEnemigas::Nodriza" },
				{ "Transporte.Comment", "/**\n * \n */" },
				{ "Transporte.Name", "ETipoNavesEnemigas::Transporte" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Galaga_USFX,
				nullptr,
				"ETipoNavesEnemigas",
				"ETipoNavesEnemigas",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UNaveEnemigaFactory::execCrearNaveEnemiga)
	{
		P_GET_ENUM(ETipoNavesEnemigas,Z_Param_TipoNave);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Posicion);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotacion);
		P_GET_OBJECT(UObject,Z_Param_WorldReal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ANaveEnemiga**)Z_Param__Result=UNaveEnemigaFactory::CrearNaveEnemiga(ETipoNavesEnemigas(Z_Param_TipoNave),Z_Param_Out_Posicion,Z_Param_Out_Rotacion,Z_Param_WorldReal);
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
			ETipoNavesEnemigas TipoNave;
			FVector Posicion;
			FRotator Rotacion;
			UObject* WorldReal;
			ANaveEnemiga* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldReal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotacion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotacion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Posicion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Posicion;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TipoNave;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TipoNave_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveEnemigaFactory_eventCrearNaveEnemiga_Parms, ReturnValue), Z_Construct_UClass_ANaveEnemiga_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_WorldReal = { "WorldReal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveEnemigaFactory_eventCrearNaveEnemiga_Parms, WorldReal), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_TipoNave = { "TipoNave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveEnemigaFactory_eventCrearNaveEnemiga_Parms, TipoNave), Z_Construct_UEnum_Galaga_USFX_ETipoNavesEnemigas, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_TipoNave_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_WorldReal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_Rotacion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_Posicion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_TipoNave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_TipoNave_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nave Enemiga FABRICA" },
		{ "Comment", "//Crea nuevas instancias de NaveEnemiga con nombre especifico, posicion y rotacion.\n" },
		{ "ModuleRelativePath", "NaveEnemigaFactory.h" },
		{ "ToolTip", "Crea nuevas instancias de NaveEnemiga con nombre especifico, posicion y rotacion." },
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
		{ &Z_Construct_UFunction_UNaveEnemigaFactory_CrearNaveEnemiga, "CrearNaveEnemiga" }, // 1156127874
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNaveEnemigaFactory_Statics::Class_MetaDataParams[] = {
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
	IMPLEMENT_CLASS(UNaveEnemigaFactory, 728924052);
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
