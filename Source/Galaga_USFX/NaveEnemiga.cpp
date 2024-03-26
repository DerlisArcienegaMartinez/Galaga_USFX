// Fill out your copyright notice in the Description page of Project Settings.

#include "NaveEnemiga.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"

// Constructor
ANaveEnemiga::ANaveEnemiga()
{
	//Configure este actor para que llame a Tick() en cada cuadro. Puede desactivar esto para mejorar el rendimiento si no lo necesita.
	PrimaryActorTick.bCanEverTick = true;
	
	mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh")); //Crear el componente de malla
	mallaNaveEnemiga->SetupAttachment(RootComponent); // configurando el componente mallaNaveEnemiga como un subcomponente 
	RootComponent = mallaNaveEnemiga; // estableciendo el componente mallaNaveEnemiga como el componente raíz del actor.
}

// Se llama cuando comienza el juego o cuando se genera.
void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
}

// LLama a cada fragmento
void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

