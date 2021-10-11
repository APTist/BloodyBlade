// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEnemy.h"

// Sets default values
ABaseEnemy::ABaseEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MaxHealth = 100;
	Health = MaxHealth;
	isDead = false;
	Damage = 10.0f;

}

//Calculate Health func
void ABaseEnemy::CalculateHealth(float Delta)
{
	Health += Delta;
	if(Health > MaxHealth)
		Health = MaxHealth;
}


//Check Dead
void ABaseEnemy::CalculateDead()
{
	if (Health <= 0)
		isDead = true;
	else
		isDead = false;
}


// Called when the game starts or when spawned
void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

