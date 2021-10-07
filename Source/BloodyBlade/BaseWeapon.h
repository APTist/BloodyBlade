// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

UCLASS()
class BLOODYBLADE_API ABaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseWeapon();

	//Socket name for attach melee weapon
	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = Weapon)
	FName CatanaAttachSocketName;

	//Socket name for deattach melee weapon
	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = Weapon)
	FName CatanaDeattachSocketName;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	

};
