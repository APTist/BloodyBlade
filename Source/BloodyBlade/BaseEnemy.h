// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseEnemy.generated.h"

UCLASS()
class BLOODYBLADE_API ABaseEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseEnemy();

	//Max Health Variable
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = Character)
	float MaxHealth;
	
	//Health
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Character)
	float Health;

	//isDead bool
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Character)
	bool isDead;

	//CurrentWeapon
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Character)
	AActor* CurrentWeapon;
	
	//Damage
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Character)
	float Damage;

	/*
	FUNCTIONS
	*/

	//Dead check func
	UFUNCTION(BlueprintCallable, Category = Character)
	virtual void CalculateDead();

	//Health Change Func
	UFUNCTION(BlueprintCallable, Category = Character)
	virtual void CalculateHealth(float Delta);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
