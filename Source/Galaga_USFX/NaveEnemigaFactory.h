// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaFactory.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API UNaveEnemigaFactory : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Nave Enemiga FABRICA")
		static ANaveEnemiga* CrearNaveEnemiga(const FString& NombreNave, const FVector& Posicion, const FRotator& Rotacion, UObject* WorldReal);
};
