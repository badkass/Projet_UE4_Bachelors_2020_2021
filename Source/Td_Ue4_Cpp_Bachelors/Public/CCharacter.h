// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CCharacter.generated.h"

UCLASS()
class TD_UE4_CPP_BACHELORS_API ACCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "Move")
	void MoveForwarBackward(float flt_scale);

	UFUNCTION(BlueprintCallable, Category = "Move")
	void MoveLeftRight(float flt_scale);

	UFUNCTION(BlueprintCallable, Category = "Move")
	void Turn(float flt_scale);

	UFUNCTION(BlueprintCallable, Category = "Move")
	void LookUp(float flt_scale);

	
	void Jump()override;



};
