// Fill out your copyright notice in the Description page of Project Settings.


//files to import
#include "FPSCharacter.h"
#include "Engine/World.h"
#include "EnemyOne.h"

// Sets default values
AFPSCharacter::AFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AFPSCharacter::fireWeapon() {
	FHitResult hit = instantShot();

	//pointer to enemy object
	AEnemyOne* hitEnemy = Cast<AEnemyOne>(hit.Actor);
	if (hitEnemy && hitEnemy->isHittable) {
		hitEnemy->takeHit();
	}
}

FHitResult AFPSCharacter::instantShot(){
	//for weapon ray starting point
	FVector rayLocation;
	FRotator rayRotation;
	//for weapon range
	FVector endTrace = FVector::ZeroVector;

	//get player controller
	APlayerController * const playerController = GetWorld()->GetFirstPlayerController();
	if (playerController) {
		//update variables with player view point
		playerController->GetPlayerViewPoint(rayLocation, rayRotation);
		//add distance to direction facing
		endTrace = rayLocation + (rayRotation.Vector() * weaponRange);
	}
	//create ray cast
	//pass in our function, account for collision with complex meshes(true), no friendly fire(instigator)
	FCollisionQueryParams traceParams(SCENE_QUERY_STAT(instantShot), true, Instigator);
	FHitResult hit(ForceInit);
	GetWorld()->LineTraceSingleByChannel(hit, rayLocation, endTrace, ECC_Visibility, traceParams);

	return hit;
}

