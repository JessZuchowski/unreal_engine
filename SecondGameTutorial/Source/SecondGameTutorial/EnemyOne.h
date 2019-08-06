// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyOne.generated.h"

UCLASS()
class SECONDGAMETUTORIAL_API AEnemyOne : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyOne();

	UFUNCTION(BlueprintImplementableEvent, Category = "Attack")
	void onTakeHit();

	UPROPERTY(EditAnywhere, Category = "Attack")
	bool isHittable{true};

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void takeHit();

};
