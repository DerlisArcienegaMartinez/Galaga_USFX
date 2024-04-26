// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaFactory.h"
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"

ANaveEnemiga* UNaveEnemigaFactory::CrearNaveEnemiga(const FString& NombreNave, const FVector& Posicion, const FRotator& Rotacion, UObject* WorldReal)
{
    UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldReal);


    if (!World) {
        UE_LOG(LogTemp, Error, TEXT("Mundo no encontrado."));
        return nullptr;
    }
    FActorSpawnParameters SpawnParams;

    // Intentar encontrar la clase por su nombre
    UClass* ClaseNave = FindObject<UClass>(ANY_PACKAGE, *NombreNave, true);
    if (!ClaseNave)
    {
        UE_LOG(LogTemp, Error, TEXT("Clase de nave no encontrada."), *NombreNave);
        return nullptr;
    }

    // Verificar si la clase es una subclase de ANaveEnemiga
    if (!ClaseNave->IsChildOf(ANaveEnemiga::StaticClass()))
    {
        UE_LOG(LogTemp, Error, TEXT("La clase proporcionada no es una subclase valida de NaveEnemiga."), *NombreNave);
        return nullptr;
    }
    
    // Crear la instancia de la nave enemiga
    ANaveEnemiga* NaveEnemiga = World->SpawnActor<ANaveEnemiga>(ClaseNave, Posicion, Rotacion, SpawnParams);
    return NaveEnemiga;
}
