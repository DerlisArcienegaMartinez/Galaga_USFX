// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaReabastecimiento.h"

#include "Caza01.h"
#include "Caza02.h"
#include "Transporte01.h"
#include "Transporte02.h"
#include "Espia01.h"
#include "Espia02.h"
#include "Nodriza01.h"
#include "Nodriza02.h"
#include "Reabastecimiento01.h"
#include "Reabastecimiento02.h"


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

	FVector ubicacionNaveCaza01 = FVector(1600.0f, -400.0f, 250.0f);
	//FVector ubicacionNaveCaza02 = FVector(1600.0f, 0.0f, 250.0f);
	//FVector ubicacionNaveTransporte01 = FVector(1600.0f, 240.0f, 250.0f);
	FVector ubicacionNaveTransporte02 = FVector(1600.0f, 400.0f, 250.0f);
    FVector ubicacionNaveEspia01 = FVector(1600.0f, -800.0f, 250.0f);
	FVector ubicacionNaveNodriza01 = FVector(1600.0f, 0.0f, 250.0f);
	//FVector ubicacionNaveEspia02 = FVector(1600.0f, -240.0f, 250.0f);
	//FVector ubicacionNaveNodriza02 = FVector(1600.0f, -480.0f, 250.0f);
	FVector ubicacionNaveReabastecimiento01 = FVector(1600.0f, -1200.0f, 250.0f);
	//FVector ubicacionTransporte01 = FVector(-1000.0f, -550.00f, 250.0f);


	FVector ubicacionCaza001 = FVector(1000.0f, -300.0f, 250.0f);
	FVector ubicacionCaza002 = FVector(1000.0f, -500.0f, 250.0f);
	FVector ubicacionTransporte001 = FVector(1000.0f, 300.0f, 250.0f);
	FVector ubicacionTransporte002 = FVector(1000.0f, 500.0f, 250.0f);
	FVector ubicacionEspia001 = FVector(1000.0f, -700.0f, 250.0f);
	FVector ubicacionEspia002 = FVector(1000.0f, -900.0f, 250.0f);
	FVector ubicacionNodriza001 = FVector(1000.0f, 100.0f, 250.0f);
	FVector ubicacionNodriza002 = FVector(1000.0f, -100.0f, 250.0f);
	FVector ubicacionReabastecimiento001 = FVector(1000.0f, -1100.0f, 250.0f);
	FVector ubicacionReabastecimiento002 = FVector(1000.0f, -1300.0f, 250.0f);


	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNaveCaza01, rotacionNave);
		//NaveEnemigaCaza02 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNaveCaza02, rotacionNave);
		//NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNaveTransporte01, rotacionNave);
		NaveEnemigaTransporte02 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNaveTransporte02, rotacionNave);
		NaveEnemigaEspia01 = World->SpawnActor<ANaveEnemigaEspia>(ubicacionNaveEspia01, rotacionNave);
		//NaveEnemigaEspia02 = World->SpawnActor<ANaveEnemigaEspia>(ubicacionNaveEspia02, rotacionNave);
		NaveEnemigaNodriza01 = World->SpawnActor<ANaveEnemigaNodriza>(ubicacionNaveNodriza01, rotacionNave);
		//NaveEnemigaNodriza02 = World->SpawnActor<ANaveEnemigaNodriza>(ubicacionNaveNodriza02, rotacionNave);
		NaveEnemigaReabastecimiento01 = World->SpawnActor<ANaveEnemigaReabastecimiento>(ubicacionNaveReabastecimiento01, rotacionNave);
		//Transporte01 = World->SpawnActor<ATransporte01>(ubicacionTransporte01, rotacionNave);


		Caza001 = World->SpawnActor<ACaza01>(ubicacionCaza001, rotacionNave);
		Caza002 = World->SpawnActor<ACaza02>(ubicacionCaza002, rotacionNave);
		Transporte001 = World->SpawnActor<ATransporte01>(ubicacionTransporte001, rotacionNave);
		Transporte002 = World->SpawnActor<ATransporte02>(ubicacionTransporte002, rotacionNave);
		Espia001 = World->SpawnActor<AEspia01>(ubicacionEspia001, rotacionNave);
		Espia002 = World->SpawnActor<AEspia02>(ubicacionEspia002, rotacionNave);
		Nodriza001 = World->SpawnActor<ANodriza01>(ubicacionNodriza001, rotacionNave);
		Nodriza002 = World->SpawnActor<ANodriza02>(ubicacionNodriza002, rotacionNave);
		Reabastecimiento001 = World->SpawnActor<AReabastecimiento01>(ubicacionReabastecimiento001, rotacionNave);
		Reabastecimiento002 = World->SpawnActor<AReabastecimiento02>(ubicacionReabastecimiento002, rotacionNave);
	
	}

	NaveEnemigaCaza01->SetPosicion(FVector(1600.0f, -400.0f, 250.0f));
	//NaveEnemigaCaza02->SetPosicion(FVector(1600.0f, 0.0f, 250.0f));
	//NaveEnemigaTransporte01->SetPosicion(FVector(1600.0f, 240.0f, 250.0f));
	NaveEnemigaTransporte02->SetPosicion(FVector(1600.0f, 400.0f, 250.0f));
	NaveEnemigaEspia01->SetPosicion(FVector(1600.0f, -800.0f, 250.0f));
	NaveEnemigaNodriza01->SetPosicion(FVector(1600.0f, 0.0f, 250.0f));
	//NaveEnemigaEspia02->SetPosicion(FVector(1600.0f, -240.0f, 250.0f));
	//NaveEnemigaNodriza02->SetPosicion(FVector(1600.0f, -480.0f, 250.0f));
	NaveEnemigaReabastecimiento01->SetPosicion(FVector(1600.0f, -1200.0f, 250.0f));
	//Transporte01->SetPosicion(FVector(-1000.0f, -550.0f, 250.0f));

	Caza001->SetPosicion(FVector(1000.0f, -400.0f, 250.0f));
	Caza002->SetPosicion(FVector(1000.0f, 0.0f, 250.0f));
	Transporte001->SetPosicion(FVector(1000.0f, 240.0f, 250.0f));
	Transporte002->SetPosicion(FVector(1000.0f, 400.0f, 250.0f));
	Espia001->SetPosicion(FVector(1000.0f, -800.0f, 250.0f));
	Espia002->SetPosicion(FVector(1000.0f, -240.0f, 250.0f));
	Nodriza001->SetPosicion(FVector(1000.0f, 0.0f, 250.0f));
	Nodriza002->SetPosicion(FVector(1000.0f, -480.0f, 250.0f));
	Reabastecimiento001->SetPosicion(FVector(1000.0f, -1200.0f, 250.0f));
	Reabastecimiento002->SetPosicion(FVector(1000.0f, -1200.0f, 250.0f));

}
