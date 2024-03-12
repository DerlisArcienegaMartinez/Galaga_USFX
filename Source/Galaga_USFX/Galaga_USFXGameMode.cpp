// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaEspia.h"

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

	FVector ubicacionNaveCaza01 = FVector(-50.0f, 350.0f, 250.0f);
	FVector ubicacionNaveCaza02 = FVector(-500.0f, 500.0f, 250.0f);
	FVector ubicacionNaveTransporte01 = FVector(-200.0f, -500.0f, 300.0f);
	FVector ubicacionNaveTransporte02 = FVector(-300.0f, -500.0f, 350.0f);
    FVector ubicacionNaveEspia01 = FVector(-250.0f, 300.0f, 300.0f);

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
	}
	NaveEnemigaCaza01->SetPosicion(FVector(-50.0f, 350.0f, 250.0f));
	NaveEnemigaCaza02->SetPosicion(FVector(-80.0f, 350.0f, 250.0f));
	NaveEnemigaTransporte01->SetPosicion(FVector(-400.0f, 300.0f, 300.0f));
	NaveEnemigaTransporte02->SetPosicion(FVector(-300.0f, 300.0f, 300.0f));
	NaveEnemigaEspia01->SetPosicion(FVector(-500.0f, 300.0f, 200.0f));

}
