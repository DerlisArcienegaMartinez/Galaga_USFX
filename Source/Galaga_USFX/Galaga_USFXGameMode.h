// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFXGameMode.generated.h"

class ANaveEnemiga;
class ANaveEnemigaCaza;
class ANaveEnemigaTransporte;
class ANaveEnemigaEspia;
class ANaveEnemigaNodriza;
class ANaveEnemigaReabastecimiento;

class ACaza01;
class ACaza02;
class ATransporte01;
class ATransporte02;
class AEspia01;
class AEspia02;
class ANodriza01;
class ANodriza02;
class AReabastecimiento01;
class AReabastecimiento02;


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
	ANaveEnemigaTransporte* NaveEnemigaTransporte02;
	ANaveEnemigaEspia* NaveEnemigaEspia01;
	ANaveEnemigaNodriza* NaveEnemigaNodriza01;
	

	ANaveEnemigaReabastecimiento* NaveEnemigaReabastecimiento01;

	ACaza01* Caza001;
	ACaza02* Caza002;


	ATransporte01* Transporte001;
	ATransporte02* Transporte002;

	AEspia01* Espia001;
	AEspia02* Espia002;

	ANodriza01* Nodriza001;
	ANodriza02* Nodriza002;

	AReabastecimiento01* Reabastecimiento001;
	AReabastecimiento02* Reabastecimiento002;

public:
	TArray<ANaveEnemiga*> TANavesEnemigas; //Almaceno direcciones de memoria para encontrar naveenemiga
	TArray<ANaveEnemigaCaza*> TANavesEnemigasCaza;
	TArray<ANaveEnemigaTransporte*> TANavesEnemigasTransporte;
	TArray<ANaveEnemigaEspia*> TANavesEnemigasEspia;
	TArray<ANaveEnemigaNodriza*> TANavesEnemigasNodriza;
	TArray<ANaveEnemigaReabastecimiento*> TANavesEnemigasReabastecimiento;

	UPROPERTY()
	TMap<ANaveEnemiga*, FVector> TMPosicionesNavesEnemigas;

	//void MostrarPosicionesNavesEnemigas();
};



