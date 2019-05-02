// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AIpawn_character.generated.h"
#include <iostream>
#include <string>
#include "UObject/ObjectMacros.h"

UCLASS()
class NEUROSIM_API AAIpawn_character : public APawn
{
	GENERATED_BODY()


public:
	// Sets default values for this pawn's properties
	AAIpawn_character();

protected:
	// Called when the game starts or when spawned 
	virtual void BeginPlay() override;
 
	void emotionCat(int emotionQuotient);

	FString dominantEmotion; //var that holds the most intensive emotion in a character instance
	int emotionQuotient; //emotion categorization var (the value of this var will range from <-1; 1>, where minus are the negative emotions and plus are the positive ones; zero is a neutral)
	// 0 = neutral; happiness = <1; 5>; fear =




	//std::string dominantEmotion;
	//FString dominantEmotion[6] = { "fear", "shock", "happiness", "love", "sadness", "neutral" };
	//UEnum dominantEmotion;
	/*UENUM()
		enum dominantEmotion
	{
		fear,
		shock,
		happiness,
		love,
		sadness,
		neutral
	};
	*/


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

