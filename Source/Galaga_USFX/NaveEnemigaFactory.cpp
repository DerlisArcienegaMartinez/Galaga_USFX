// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaFactory.h"
#include "Engine/World.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaNodriza.h"

//crea una nave enemiga con el nombre, la posición y la rotación especificados en el mundo determinado.
ANaveEnemiga* UNaveEnemigaFactory::CrearNaveEnemiga(ETipoNavesEnemigas TipoNave, const FVector& Posicion, const FRotator& Rotacion, UObject* WorldReal)
{
    // Obtiene el objeto UWorld del contexto UObject dado.
    UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldReal);

    // Comprueba si el mundo es válido. De lo contrario, registre un error y devuelva nullptr.
    if (!World) {
        UE_LOG(LogTemp, Error, TEXT("Mundo no encontrado."));
        return nullptr;
    }
    // Crea un objeto FActorSpawnParameters para especificar los parámetros de generación.
    FActorSpawnParameters SpawnParams;

    // Inicializa un puntero a un objeto de NaveEnemiga, establecido inicialmente en nullptr.
    ANaveEnemiga* NaveEnemiga = nullptr;
    // Inicializa un puntero a un objeto UClass, establecido inicialmente en nullptr.
    UClass* ClaseNave = nullptr;

    // Declaración de cambio para determinar qué tipo de NaveEnemiga generar según el parámetro TipoNave.
    switch (TipoNave)
    {
    case ETipoNavesEnemigas::Caza:
        // Si TipoNave es Caza, establece ClaseNave en la UClass de ANaveEnemigaCaza.
        ClaseNave = ANaveEnemigaCaza::StaticClass();
        break;
    case ETipoNavesEnemigas::Transporte:
        // Si TipoNave es Transporte, establece ClaseNave en la UClass de ANaveEnemigaTransporte.
        ClaseNave = ANaveEnemigaTransporte::StaticClass();
        break;
    case ETipoNavesEnemigas::Nodriza:
        // Si TipoNave es Nodriza, establece ClaseNave en la UClass de ANaveEnemigaNodriza.
        ClaseNave = ANaveEnemigaNodriza::StaticClass();
        break;
    default:
        // Si no se reconoce TipoNave, registra un mensaje de error y devuelve nullptr.
        UE_LOG(LogTemp, Error, TEXT("Tipo de nave enemiga no reconocido."));
        return nullptr;
    }
    // Compruebe si ClaseNave es válida
    if (!ClaseNave)
    {
        // Si no se encuentra ClaseNave, registra un mensaje de error
        UE_LOG(LogTemp, Error, TEXT("Clase de nave no encontrada."));
        return nullptr;
    }
    /* Genera una nueva instancia de ANaveEnemiga(NaveEnemiga) usando la clase ClaseNave en la 
    posición y rotación especificadas, con los parámetros de generación dados*/
    NaveEnemiga = World->SpawnActor<ANaveEnemiga>(ClaseNave, Posicion, Rotacion, SpawnParams);

    // Comprueba si el spawn de NaveEnemiga fue exitoso
    if (!NaveEnemiga)
    {
        // Si falla el spawn, registra un mensaje de error
        UE_LOG(LogTemp, Error, TEXT("Fallo al spawnear la nave enemiga."));
        return nullptr;
    }
    // Si el spawn fue exitoso, devuelve la NaveEnemiga generada
    return NaveEnemiga;
}





