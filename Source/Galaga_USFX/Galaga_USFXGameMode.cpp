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

	FVector ubicacionInicialNavesEnemigas = FVector(0.0f, -500.0f, 250.0f);
	FVector ubicacionActualNaveEnemiga = ubicacionInicialNavesEnemigas;
	
    FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{

		//NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNave01, rotacionNave);
		//NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNave02, rotacionNave);

		for (int i = 0; i < 5; i++) {
			ANaveEnemigaCaza* NaveEnemigaCazaActual = World->SpawnActor<ANaveEnemigaCaza>(ubicacionActualNaveEnemiga, rotacionNave);
			NaveEnemigaCazaActual->SetNombre("nave enemiga caza " + FString::FromInt(i));
			TANavesEnemigas.Add(NaveEnemigaCazaActual);
			TMPosicionesNavesEnemigas.Add(NaveEnemigaCazaActual, ubicacionActualNaveEnemiga);

			ubicacionActualNaveEnemiga.Y = ubicacionActualNaveEnemiga.Y + 150.0f;
		}

		ubicacionActualNaveEnemiga.X = ubicacionActualNaveEnemiga.X - 150.0f;
		ubicacionActualNaveEnemiga.Y = ubicacionInicialNavesEnemigas.Y;
		for (int j = 0; j < 5; j++) {

			ANaveEnemigaTransporte* NaveEnemigaTransporteActual = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionActualNaveEnemiga, rotacionNave);
			NaveEnemigaTransporteActual->SetNombre("nave enemiga transporte" + FString::FromInt(j));
			TANavesEnemigas.Add(NaveEnemigaTransporteActual);
			TMPosicionesNavesEnemigas.Add(NaveEnemigaTransporteActual, ubicacionActualNaveEnemiga);

			ubicacionActualNaveEnemiga.Y = ubicacionActualNaveEnemiga.Y + 150.0f;
		}

		ubicacionActualNaveEnemiga.X = ubicacionActualNaveEnemiga.X - 100.0f;
		ubicacionActualNaveEnemiga.Y = ubicacionInicialNavesEnemigas.Y;
		for (int k = 0; k < 5; k++) {

			ANaveEnemigaEspia* NaveEnemigaEspiaActual = World->SpawnActor<ANaveEnemigaEspia>(ubicacionActualNaveEnemiga, rotacionNave);
			NaveEnemigaEspiaActual->SetNombre("nave enemiga espia" + FString::FromInt(k));
			TANavesEnemigas.Add(NaveEnemigaEspiaActual);
			TMPosicionesNavesEnemigas.Add(NaveEnemigaEspiaActual, ubicacionActualNaveEnemiga);

			ubicacionActualNaveEnemiga.Y = ubicacionActualNaveEnemiga.Y + 150.0f;
		}

		
		ubicacionActualNaveEnemiga.X = ubicacionActualNaveEnemiga.X - 250.0f;
		ubicacionActualNaveEnemiga.Y = ubicacionInicialNavesEnemigas.Y;
		for (int l = 0; l < 5; l++) {

			ANaveEnemigaNodriza* NaveEnemigaNodrizaActual = World->SpawnActor<ANaveEnemigaNodriza>(ubicacionActualNaveEnemiga, rotacionNave);
			NaveEnemigaNodrizaActual->SetNombre("nave enemiga nodriza" + FString::FromInt(l));
			TANavesEnemigas.Add(NaveEnemigaNodrizaActual);
			TMPosicionesNavesEnemigas.Add(NaveEnemigaNodrizaActual, ubicacionActualNaveEnemiga);

			ubicacionActualNaveEnemiga.Y = ubicacionActualNaveEnemiga.Y + 150.0f;
		}

		ubicacionActualNaveEnemiga.X = ubicacionActualNaveEnemiga.X + 150.0f;
		ubicacionActualNaveEnemiga.Y = ubicacionInicialNavesEnemigas.Y;
		for (int m = 0; m < 5; m++) {

			ANaveEnemigaReabastecimiento* NaveEnemigaReabastecimientoActual = World->SpawnActor<ANaveEnemigaReabastecimiento>(ubicacionActualNaveEnemiga, rotacionNave);
			NaveEnemigaReabastecimientoActual->SetNombre("nave enemiga reabastecimiento" + FString::FromInt(m));
			TANavesEnemigas.Add(NaveEnemigaReabastecimientoActual);
			TMPosicionesNavesEnemigas.Add(NaveEnemigaReabastecimientoActual, ubicacionActualNaveEnemiga);

			ubicacionActualNaveEnemiga.Y = ubicacionActualNaveEnemiga.Y + 150.0f;
		}


		/*FTimerHandle FTHVisualizacionPosicionesNavesEnemigas;

		GetWorldTimerManager().SetTimer(FTHVisualizacionPosicionesNavesEnemigas, this, &AGalaga_USFXGameMode::MostrarPosicionesNavesEnemigas, 1.0f, true);*/

	}



}

//void AGalaga_USFXGameMode::MostrarPosicionesNavesEnemigas()
//{
//
//	for (auto ElementoActual : TMPosicionesNavesEnemigas) {
//		ANaveEnemiga* naveEnemigaActual = ElementoActual.Key;
//		FVector posicionActualNaveEnemiga = ElementoActual.Value;
//		FString mensaje = "La nave " + naveEnemigaActual->GetNombre() + " esta en la posicion> " + posicionActualNaveEnemiga.ToString();
//
//		if (GEngine)
//		{
//			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, mensaje);
//
//			/*FString mensaje = "Nombre NaveEnemiga: " + Clave->GetNombre() + " Posicion NaveEnemiga: " + Valor.ToString();
//			GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, mensaje);*/
//
//		}
//
//		TMPosicionesNavesEnemigas[naveEnemigaActual] = naveEnemigaActual->GetActorLocation();
//	}
//
//}


