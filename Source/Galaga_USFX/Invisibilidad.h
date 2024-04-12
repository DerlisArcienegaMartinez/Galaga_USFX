// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Invisibilidad.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA_USFX_API UInvisibilidad : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UInvisibilidad();
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	//virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	
};
