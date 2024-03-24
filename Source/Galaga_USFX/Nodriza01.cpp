// Fill out your copyright notice in the Description page of Project Settings.


#include "Nodriza01.h"

// Called when the game starts or when spawned
void ANodriza01::BeginPlay()
{
	Super::BeginPlay();

	tiempo = 0.0f;
	velocidad = -10.0f;
	ancho = 20.0f;
	MovementSpeed = -30.0f;

}

ANodriza01::ANodriza01()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
}

void ANodriza01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANodriza01::Mover(float DeltaTime)
{
	/*tiempo = 0.0f;
	velocidad = -10.0f;
	ancho = 20.0f;
	MovementSpeed = -30.0f;

	FVector NewLocation = GetActorLocation();
	float DeltaHeight =  FMath::Sin(tiempo);
	NewLocation.Y += DeltaHeight * ancho;
	NewLocation.X += DeltaTime * MovementSpeed;
	tiempo += DeltaTime * velocidad;
	SetActorLocation(NewLocation);*/
}