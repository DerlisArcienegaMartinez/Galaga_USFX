// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFXGameMode.generated.h"

class ANaveEnemiga;
class ANaveEnemigaCaza;
//class ANaveEnemigaTransporte;

UCLASS(MinimalAPI)
class AGalaga_USFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFXGameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
    ANaveEnemiga* NaveEnemiga01;
	ANaveEnemigaCaza* NaveEnemigaCaza01;
	//ANaveEnemigaTransporte* NaveEnemigaTransporte02;


public:
	TArray<ANaveEnemiga*> TANavesEnemigas; //Almaceno direcciones de memoria para encontrar naveenemiga
	TArray<ANaveEnemigaCaza*> TANavesEnemigasCaza;
	/*TArray<ANaveEnemigaTransporte*> TANavesEnemigasTransporte;
	TArray<ANaveEnemigaEspia*> TANavesEnemigasEspia;
	TArray<ANaveEnemigaNodriza*> TANavesEnemigasNodriza;
	TArray<ANaveEnemigaReabastecimiento*> TANavesEnemigasReabastecimiento;*/
	UPROPERTY()
	TMap<ANaveEnemiga*, FVector> TMPosicionesNavesEnemigas;

public:
	void spawnNavesCazas();
	//void MostrarPosicionesNavesEnemigas();
};


