// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"

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

	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f); //Rotacion general de las naves

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{

		//Creacion de 5 NavesEnemigasCaza y posicionarlos uno a lado de otro en una ubicacion determinada
		for (int i = 0; i < 5; i++) {
			ANaveEnemigaCaza* NaveEnemigaCazaActual = World->SpawnActor<ANaveEnemigaCaza>(ubicacionActualNaveEnemiga, rotacionNave);
			ubicacionActualNaveEnemiga.Y = ubicacionActualNaveEnemiga.Y + 300.0f;
		}

	}
	
}











