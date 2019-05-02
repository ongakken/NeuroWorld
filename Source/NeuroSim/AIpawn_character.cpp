// Fill out your copyright notice in the Description page of Project Settings.


#include "AIpawn_character.h"
#include <iostream>

// Sets default values
AAIpawn_character::AAIpawn_character()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AAIpawn_character::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAIpawn_character::emotionCat(int emotionQuotient)
{
	/*if (emotionQuotient == 1 )
	{

	} 
	*/
}

// Called every frame
void AAIpawn_character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAIpawn_character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

