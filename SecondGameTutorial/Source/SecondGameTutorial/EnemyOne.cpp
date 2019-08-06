// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyOne.h"

// Sets default values
AEnemyOne::AEnemyOne()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemyOne::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyOne::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemyOne::takeHit()
{
	//TODO: health reduction logic
	onTakeHit();
}

