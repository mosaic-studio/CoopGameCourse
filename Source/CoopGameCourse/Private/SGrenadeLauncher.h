// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SWeapon.h"
#include "SGrenadeLauncher.generated.h"

class USkeletalMeshComponent;
class UDamageType;
class UParticleSystem;
/**
 * 
 */
UCLASS()
class ASGrenadeLauncher : public ASWeapon
{
	GENERATED_BODY()
	

public:
	ASGrenadeLauncher();

protected:
	virtual void Fire() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
