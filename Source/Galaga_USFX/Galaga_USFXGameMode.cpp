// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaFactory.h"

AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;	
}
void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();

	//Set the game state to playing

	FVector ubicacionInicialNavesEnemigas = FVector(600.0f, -500.0f, 214.72f); //Ubicacion general de las naves
	FVector ubicacionActualNaveEnemiga = ubicacionInicialNavesEnemigas;

	FRotator rotacionNave = FRotator(0.0f, 90.0f, 0.0f); //Rotacion general de las naves

	
		UNaveEnemigaFactory::CrearNaveEnemiga(ANaveEnemigaCaza::StaticClass(), ubicacionActualNaveEnemiga, rotacionNave, this);
		UNaveEnemigaFactory::CrearNaveEnemiga(ANaveEnemigaTransporte::StaticClass(), ubicacionActualNaveEnemiga, rotacionNave, this);
		UNaveEnemigaFactory::CrearNaveEnemiga(ANaveEnemigaNodriza::StaticClass(), ubicacionActualNaveEnemiga, rotacionNave, this);
	  


}


// FTimerHandle SpawnNodriza;
//			GetWorld()->GetTimerManager().SetTimer(SpawnNodriza, this, &AGalaga_USFXGameMode::SpawnNavesNodrizas, 5.0f, true);
//		
//
//void AGalaga_USFXGameMode::SpawnNavesNodrizas()
//{
//	//Ubicacion y rotacion que tendran las naves spawneadas
//	FVector SpawnUbicacionNodriza = FVector(600.0f, 200.0f, 214.72f); // Set your desired spawn location
//	FRotator SpawnRotacionNodriza = FRotator(0.0f, 0.0f, 0.0f); // Set your desired spawn rotation
//	FActorSpawnParameters SpawnParams;
//	GetWorld()->SpawnActor<ANaveEnemigaNodriza>(ANaveEnemigaNodriza::StaticClass(), SpawnUbicacionNodriza, SpawnRotacionNodriza, SpawnParams);
//}



