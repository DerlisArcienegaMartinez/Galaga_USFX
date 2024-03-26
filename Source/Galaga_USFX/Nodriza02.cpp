// Fill out your copyright notice in the Description page of Project Settings.


#include "Nodriza02.h"

// Called when the game starts or when spawned
void ANodriza02::BeginPlay()
{
	Super::BeginPlay();

	tiempo = 0.0f;
	velocidad = -10.0f;
	ancho = 20.0f;
	MovementSpeed = -30.0f;
}

ANodriza02::ANodriza02()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
}

void ANodriza02::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANodriza02::Mover(float DeltaTime)
{
	FVector NewLocation = GetActorLocation();
	float DeltaHeight = FMath::Sin(tiempo);
	NewLocation.Y += DeltaHeight * ancho;
	NewLocation.X += DeltaTime * MovementSpeed;
	tiempo += DeltaTime * velocidad;
	SetActorLocation(NewLocation);
}