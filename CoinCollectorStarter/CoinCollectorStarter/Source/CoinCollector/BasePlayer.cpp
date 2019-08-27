// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePlayer.h"

// Sets default values
ABasePlayer::ABasePlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Initialize Components
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");

	//Set heirarchy of components
	RootComponent = Mesh;
	SpringArm-> SetupAttachment(Mesh);
	Camera-> SetupAttachment(SpringArm);

	//Enabling physics
	Mesh->SetSimulatePhysics(true);
	MovementForce = 100000;
}

// Called when the game starts or when spawned
void ABasePlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABasePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//bind axis mappings to movement functions
	InputComponent->BindAxis("MoveUp", this, &ABasePlayer::MoveUp);
	InputComponent->BindAxis("MoveRight", this, &ABasePlayer::MoveRight);
}

//movement functions
void ABasePlayer::MoveUp(float Value) {
	FVector ForceToAdd = FVector(1, 0, 0) * MovementForce * Value;
	Mesh->AddForce(ForceToAdd);
}

void ABasePlayer::MoveRight(float Value) {
	FVector ForceToAdd = FVector(0, 1, 0) * MovementForce * Value;
	Mesh->AddForce(ForceToAdd);
}

