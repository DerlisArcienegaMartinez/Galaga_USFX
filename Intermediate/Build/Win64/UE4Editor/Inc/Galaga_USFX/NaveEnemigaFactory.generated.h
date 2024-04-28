// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETipoNavesEnemigas : uint8;
struct FVector;
struct FRotator;
class UObject;
class ANaveEnemiga;
#ifdef GALAGA_USFX_NaveEnemigaFactory_generated_h
#error "NaveEnemigaFactory.generated.h already included, missing '#pragma once' in NaveEnemigaFactory.h"
#endif
#define GALAGA_USFX_NaveEnemigaFactory_generated_h

#define Galaga_USFX_Source_Galaga_USFX_NaveEnemigaFactory_h_25_SPARSE_DATA
#define Galaga_USFX_Source_Galaga_USFX_NaveEnemigaFactory_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCrearNaveEnemiga);


#define Galaga_USFX_Source_Galaga_USFX_NaveEnemigaFactory_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCrearNaveEnemiga);


#define Galaga_USFX_Source_Galaga_USFX_NaveEnemigaFactory_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNaveEnemigaFactory(); \
	friend struct Z_Construct_UClass_UNaveEnemigaFactory_Statics; \
public: \
	DECLARE_CLASS(UNaveEnemigaFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Galaga_USFX"), NO_API) \
	DECLARE_SERIALIZER(UNaveEnemigaFactory)


#define Galaga_USFX_Source_Galaga_USFX_NaveEnemigaFactory_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUNaveEnemigaFactory(); \
	friend struct Z_Construct_UClass_UNaveEnemigaFactory_Statics; \
public: \
	DECLARE_CLASS(UNaveEnemigaFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Galaga_USFX"), NO_API) \
	DECLARE_SERIALIZER(UNaveEnemigaFactory)


#define Galaga_USFX_Source_Galaga_USFX_NaveEnemigaFactory_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNaveEnemigaFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNaveEnemigaFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNaveEnemigaFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNaveEnemigaFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNaveEnemigaFactory(UNaveEnemigaFactory&&); \
	NO_API UNaveEnemigaFactory(const UNaveEnemigaFactory&); \
public:


#define Galaga_USFX_Source_Galaga_USFX_NaveEnemigaFactory_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNaveEnemigaFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNaveEnemigaFactory(UNaveEnemigaFactory&&); \
	NO_API UNaveEnemigaFactory(const UNaveEnemigaFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNaveEnemigaFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNaveEnemigaFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNaveEnemigaFactory)


#define Galaga_USFX_Source_Galaga_USFX_NaveEnemigaFactory_h_25_PRIVATE_PROPERTY_OFFSET
#define Galaga_USFX_Source_Galaga_USFX_NaveEnemigaFactory_h_22_PROLOG
#define Galaga_USFX_Source_Galaga_USFX_NaveEnemigaFactory_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_Source_Galaga_USFX_NaveEnemigaFactory_h_25_PRIVATE_PROPERTY_OFFSET \
	Galaga_USFX_Source_Galaga_USFX_NaveEnemigaFactory_h_25_SPARSE_DATA \
	Galaga_USFX_Source_Galaga_USFX_NaveEnemigaFactory_h_25_RPC_WRAPPERS \
	Galaga_USFX_Source_Galaga_USFX_NaveEnemigaFactory_h_25_INCLASS \
	Galaga_USFX_Source_Galaga_USFX_NaveEnemigaFactory_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_Source_Galaga_USFX_NaveEnemigaFactory_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_Source_Galaga_USFX_NaveEnemigaFactory_h_25_PRIVATE_PROPERTY_OFFSET \
	Galaga_USFX_Source_Galaga_USFX_NaveEnemigaFactory_h_25_SPARSE_DATA \
	Galaga_USFX_Source_Galaga_USFX_NaveEnemigaFactory_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaga_USFX_Source_Galaga_USFX_NaveEnemigaFactory_h_25_INCLASS_NO_PURE_DECLS \
	Galaga_USFX_Source_Galaga_USFX_NaveEnemigaFactory_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_USFX_API UClass* StaticClass<class UNaveEnemigaFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaga_USFX_Source_Galaga_USFX_NaveEnemigaFactory_h


#define FOREACH_ENUM_ETIPONAVESENEMIGAS(op) \
	op(ETipoNavesEnemigas::Caza) \
	op(ETipoNavesEnemigas::Transporte) \
	op(ETipoNavesEnemigas::Nodriza) 

enum class ETipoNavesEnemigas : uint8;
template<> GALAGA_USFX_API UEnum* StaticEnum<ETipoNavesEnemigas>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
