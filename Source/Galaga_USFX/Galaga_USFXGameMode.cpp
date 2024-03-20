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
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
	
	//NaveEnemiga01 = nullptr;

	}
void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing

	FVector ubicacionInicioNavesEnemigasCaza = FVector(600.0f, 0.0f, 250.0f);
	FVector ubicacionInicioNavesEnemigasTransporte = FVector(500.0f, 0.0f, 250.0f);
	


	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		
		for (int i = 0; i < 5; i++) {
			FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasCaza.X, ubicacionInicioNavesEnemigasCaza.Y + i * 300, ubicacionInicioNavesEnemigasTransporte.Z);
			ANaveEnemigaCaza* NaveEnemigaCazaTemporal = World->SpawnActor<ANaveEnemigaCaza>(PosicionNaveActual, rotacionNave);

			//TANavesEnemigasCaza.Push(NaveEnemigaCazaTemporal);
			TANavesEnemigas.Push(NaveEnemigaCazaTemporal);
		}

		float nuevaposicionX = ubicacionInicioNavesEnemigasTransporte.X - 300.0f;

		for (int j = 0; j < 5; j++) {
			FVector PosicionNaveActual = FVector(nuevaposicionX, ubicacionInicioNavesEnemigasTransporte.Y + j * 300, ubicacionInicioNavesEnemigasTransporte.Z);
			ANaveEnemigaTransporte* NaveEnemigaTransporteTemporal = World->SpawnActor<ANaveEnemigaTransporte>(PosicionNaveActual, rotacionNave);

			//TANavesEnemigasTransporte.Push(NaveEnemigaTransporteTemporal);
			TANavesEnemigas.Push(NaveEnemigaTransporteTemporal);
		}

		//NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNave01, rotacionNave);
		//NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNave02, rotacionNave);

		tiempoTranscurrido = 0;
	}



}

void AGalaga_USFXGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	tiempoTranscurrido++;

	if (tiempoTranscurrido >= 100)
	{
		int numeroEnemigo = FMath::RandRange(0, 9);
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("me posiciono aqui")));


			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Entero: %d"), numeroEnemigo));

		}
		//TANavesEnemigas[numeroEnemigo]->PrimaryActorTick.bCanEverTick = false;
		TANavesEnemigas[numeroEnemigo]->SetVelocidad(0);
	}

}
