// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaReabastecimiento.h"

void ANaveEnemigaReabastecimiento::BeginPlay()
{
	Super::BeginPlay();
}

ANaveEnemigaReabastecimiento::ANaveEnemigaReabastecimiento()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
}

void ANaveEnemigaReabastecimiento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaReabastecimiento::Mover(float DeltaTime)
{
}

void ANaveEnemigaReabastecimiento::Destruirse(float DeltaTime)
{
}

void ANaveEnemigaReabastecimiento::Escapar(float DeltaTIme)
{
}

void ANaveEnemigaReabastecimiento::Atacar(float DeltaTime)
{
}

void ANaveEnemigaReabastecimiento::ReabastecimientoVuelo(bool DeltaTime)
{
}
