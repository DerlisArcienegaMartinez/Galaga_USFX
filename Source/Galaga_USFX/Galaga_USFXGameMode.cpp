// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaNodriza.h"

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

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{

		//Creacion de 5 NavesEnemigasCaza y posicionarlos uno a lado de otro en una ubicacion determinada
		for (int i = 0; i < 5; i++) {
			ANaveEnemigaCaza* NaveEnemigaCazaActual = World->SpawnActor<ANaveEnemigaCaza>(ubicacionActualNaveEnemiga, rotacionNave);
			ubicacionActualNaveEnemiga.Y = ubicacionActualNaveEnemiga.Y + 300.0f;
		}

		////Creacion de 5 NavesEnemigasCaza y posicionarlos uno a lado de otro en una ubicacion determinada
		//for (int j = 0; j < 4; j++) {
		//	ANaveEnemigaNodriza* NaveEnemigaNodrizaActual = World->SpawnActor<ANaveEnemigaNodriza>(ubicacionActualNaveEnemiga, rotacionNave);
		//	ubicacionActualNaveEnemiga.Y += 600.0f;
		//}
		//ubicacionActualNaveEnemiga.X = ubicacionActualNaveEnemiga.X - 150.0f;
		//ubicacionActualNaveEnemiga.Y = ubicacionInicialNavesEnemigas.Y;

			FTimerHandle SpawnNodriza;
			GetWorld()->GetTimerManager().SetTimer(SpawnNodriza, this, &AGalaga_USFXGameMode::SpawnNavesNodrizas, 5.0f, true);
		
	}
	
}

void AGalaga_USFXGameMode::SpawnNavesNodrizas()
{
	//Ubicacion y rotacion que tendran las naves spawneadas
	FVector SpawnUbicacionNodriza = FVector(600.0f, 200.0f, 214.72f); // Set your desired spawn location
	FRotator SpawnRotacionNodriza = FRotator(0.0f, 0.0f, 0.0f); // Set your desired spawn rotation
	FActorSpawnParameters SpawnParams;
	GetWorld()->SpawnActor<ANaveEnemigaNodriza>(ANaveEnemigaNodriza::StaticClass(), SpawnUbicacionNodriza, SpawnRotacionNodriza, SpawnParams);
}








//void AGalaga_USFXGameMode::spawnNavesCazas()
//{
//	//Ubicacion y rotacion que tendran las naves spawneadas
//		FVector SpawnNavesCazasLocation = FVector(600.0f, 200.0f, 214.72f); // Set your desired spawn location
//		FRotator SpawnNavesCazasRotation = FRotator(0.0f, 0.0f, 0.0f); // Set your desired spawn rotation
//		FActorSpawnParameters SpawnParams;
//		GetWorld()->SpawnActor<ANaveEnemigaCaza>(ANaveEnemigaCaza::StaticClass(), SpawnNavesCazasLocation, SpawnNavesCazasRotation, SpawnParams);
//}
