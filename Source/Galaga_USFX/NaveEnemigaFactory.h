// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaFactory.generated.h"

/**
 * 
 */
 /*Tipo enumerado(uint8) para representar 
 diferentes tipos de NavesEnemigas*/
UENUM(BlueprintType)
enum class ETipoNavesEnemigas : uint8
{
	Caza,
	Transporte,
	Nodriza
};

UCLASS()
class GALAGA_USFX_API UNaveEnemigaFactory : public UObject
{
	GENERATED_BODY()

public:
	//Crea nuevas instancias de NaveEnemiga con nombre especifico, posicion y rotacion.
	UFUNCTION(BlueprintCallable, Category = "Nave Enemiga FABRICA")
		static ANaveEnemiga* CrearNaveEnemiga(ETipoNavesEnemigas TipoNave, const FVector& Posicion, const FRotator& Rotacion, UObject* WorldReal);
};
