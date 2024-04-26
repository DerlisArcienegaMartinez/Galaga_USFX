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

	//Spawn Naves Enemigas
		UNaveEnemigaFactory::CrearNaveEnemiga(TEXT("NaveEnemigaCaza"), ubicacionInicialNavesEnemigas, rotacionNave, this);
		UNaveEnemigaFactory::CrearNaveEnemiga(TEXT("NaveEnemigaTransporte"), ubicacionActualNaveEnemiga, rotacionNave, this);
		UNaveEnemigaFactory::CrearNaveEnemiga(TEXT("NaveEnemigaNodriza"), ubicacionActualNaveEnemiga, rotacionNave, this);
		
}
	 



