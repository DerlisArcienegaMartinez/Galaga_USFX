// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaNodriza.h"
#include "Transporte01.h"

AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
	//NaveEnemiga01 = nullptr;

	}
void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing

	FVector ubicacionNaveCaza01 = FVector(1600.0f, 120.0f, 250.0f);
	FVector ubicacionNaveCaza02 = FVector(1600.0f, 0.0f, 250.0f);
	FVector ubicacionNaveTransporte01 = FVector(1600.0f, 240.0f, 250.0f);
	FVector ubicacionNaveTransporte02 = FVector(1600.0f, 360.0f, 250.0f);
    FVector ubicacionNaveEspia01 = FVector(-1000.0f, -150.00f, 250.0f);
	FVector ubicacionNaveNodriza01 = FVector(-1000.0f, -7.00f, 250.0f);
	FVector ubicacionNaveEspia02 = FVector(-1000.0f, -350.00f, 250.0f);
	FVector ubicacionNaveNodriza02 = FVector(-1000.0f, 100.00f, 250.0f);
	FVector ubicacionTransporte01 = FVector(-1000.0f, -550.00f, 250.0f);

	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNaveCaza01, rotacionNave);
		NaveEnemigaCaza02 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNaveCaza02, rotacionNave);
		NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNaveTransporte01, rotacionNave);
		NaveEnemigaTransporte02 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNaveTransporte02, rotacionNave);
		NaveEnemigaEspia01 = World->SpawnActor<ANaveEnemigaEspia>(ubicacionNaveEspia01, rotacionNave);
		NaveEnemigaEspia02 = World->SpawnActor<ANaveEnemigaEspia>(ubicacionNaveEspia02, rotacionNave);
		NaveEnemigaNodriza01 = World->SpawnActor<ANaveEnemigaNodriza>(ubicacionNaveNodriza01, rotacionNave);
		NaveEnemigaNodriza02 = World->SpawnActor<ANaveEnemigaNodriza>(ubicacionNaveNodriza02, rotacionNave);
		Transporte01 = World->SpawnActor<ATransporte01>(ubicacionTransporte01, rotacionNave);
	}
	NaveEnemigaCaza01->SetPosicion(FVector(1600.0f, 120.0f, 250.0f));
	NaveEnemigaCaza02->SetPosicion(FVector(1600.0f, 0.0f, 250.0f));
	NaveEnemigaTransporte01->SetPosicion(FVector(1600.0f, 240.0f, 250.0f));
	NaveEnemigaTransporte02->SetPosicion(FVector(1600.0f, 360.0f, 250.0f));
	NaveEnemigaEspia01->SetPosicion(FVector(-1000.0f, -150.00f, 250.0f));
	NaveEnemigaNodriza01->SetPosicion(FVector(-1000.0f, -7.00f, 250.0f));
	NaveEnemigaEspia02->SetPosicion(FVector(-1000.0f, -350.00f, 250.0f));
	NaveEnemigaNodriza02->SetPosicion(FVector(-1000.0f, 100.00f, 250.0f));
	Transporte01->SetPosicion(FVector(-1000.0f, -550.0f, 250.0f));

	
}
