// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomba.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
ABomba::ABomba()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	 // Crear y configurar la malla visual de la bomba
    BombaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BombaMesh"));
    RootComponent = BombaMesh;

    // Cargar una malla estática para la bomba (debes asignar una malla en el editor)
    static ConstructorHelpers::FObjectFinder<UStaticMesh> BombaMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Bomb.Bomb'"));
    if (BombaMeshAsset.Succeeded())
    {
        BombaMesh->SetStaticMesh(BombaMeshAsset.Object);
    }


	VelocidadBomba = 100.0f; // Velocidad inicial de caída
}

// Called when the game starts or when spawned
void ABomba::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle BombaDestruida;
	GetWorld()->GetTimerManager().SetTimer(BombaDestruida, this, &ABomba::DestruirBomba, 5.0f, true);

}

// Called every frame
void ABomba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Mover la bomba hacia abajo en el eje Z
	FVector NewLocation = GetActorLocation();
	NewLocation += FVector(-VelocidadBomba * DeltaTime, 0.0f, 0.0f); // Mover hacia abajo
	SetActorLocation(NewLocation);
	
}


void ABomba::DestruirBomba()
{
	Destroy();
}

