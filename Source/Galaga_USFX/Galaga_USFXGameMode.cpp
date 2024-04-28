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

	
	//Define la ubicacion inicial de las naves enemigas en general
	FVector ubicacionInicialNavesEnemigas = FVector(600.0f, -500.0f, 214.72f); //Ubicacion general de las naves
	FVector ubicacionActualNaveEnemiga = ubicacionInicialNavesEnemigas;

	//Define la rotacion de las naves enemigas en general
	FRotator rotacionNave = FRotator(0.0f, 90.0f, 0.0f); //Rotacion general de las naves

	// Genera naves enemigas usando la clase fábrica
	for (int a = 0; a < 5; a++)
	{
		UNaveEnemigaFactory::CrearNaveEnemiga(ETipoNavesEnemigas::Caza, ubicacionInicialNavesEnemigas, rotacionNave, this);
		ubicacionInicialNavesEnemigas.Y += 300;
	}
	ubicacionActualNaveEnemiga.X += 150;

	for (int b = 0; b < 6; b++)
	{
		UNaveEnemigaFactory::CrearNaveEnemiga(ETipoNavesEnemigas::Transporte, ubicacionActualNaveEnemiga, rotacionNave, this);
		ubicacionActualNaveEnemiga.Y += 300;
	}
	ubicacionActualNaveEnemiga.X += 800;
	ubicacionActualNaveEnemiga.Y -= 1900;

	for (int c = 0; c < 5; c++)
	{
		UNaveEnemigaFactory::CrearNaveEnemiga(ETipoNavesEnemigas::Nodriza, ubicacionActualNaveEnemiga, rotacionNave, this);
		ubicacionActualNaveEnemiga.Y += 450;
	}
	
	
}
	 



