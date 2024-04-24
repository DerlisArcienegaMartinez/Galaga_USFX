// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaFactory.h"
#include "Engine/World.h"

ANaveEnemiga* UNaveEnemigaFactory::CrearNaveEnemiga(TSubclassOf<ANaveEnemiga> ClaseNave, const FVector& Posicion, const FRotator& Rotacion, UObject* WorldContextObject)
{
	if (ClaseNave && WorldContextObject) {
		UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject);
		if (World) {
			FActorSpawnParameters SpawnParams;
			SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			return World->SpawnActor<ANaveEnemiga>(ClaseNave, Posicion, Rotacion, SpawnParams);

		}
	}
	return nullptr;
}
