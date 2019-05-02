// Fill out your copyright notice in the Description page of Project Settings.


#include "AIpawn_character.h"
#include <chrono>
#include <thread>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <Engine.h>
#include "Classes/Components/StaticMeshComponent.h"
#include <TimerManager.h>

using namespace std;



// Sets default values
AAIpawn_character::AAIpawn_character()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh"); //declaring a new component (subobject) for the current actor
}

void AAIpawn_character::decrementNeeds()
{

	//std::this_thread::get_id();
	this->decrementNeeds = &t1;
	int start = clock();
	double diff;
	do
	{
		// do stuff
		diff = (clock() - start) / (double)(CLOCKS_PER_SEC);
		food = food - 0.1f;
		energy = energy - 0.2f;
		hydration = hydration - 0.5f;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("zmenil som hodnotu")));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "%f", food);

	} while (diff < 60.0); 
}

// Called when the game starts or when spawned
void AAIpawn_character::BeginPlay()
{
	Super::BeginPlay();
	//std::this_thread::sleep_for(std::chrono::milliseconds{60000}); //this command stops the whole fucking runtime for amount of x!
	//_sleep(60); //this stops the current actor's runtime

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("COKOLVEK")));
	//std::async(decrementNeeds);
	std::thread t1(&&decrementNeeds);
	//thread thread_1 = thread(decrementNeeds);


	Mesh->SetWorldScale3D(FMath::VRand());
	//GetWorldTimerManager().SetTimer(MemberTimerHandle, this, &AAIpawn_character::decrementNeeds, 1.0f, true, 2.0f);

}

// Called every frame
void AAIpawn_character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	CurrentActorLocation = GetActorLocation();
	Mesh->SetWorldScale3D(FMath::VRand());

}

// Called to bind functionality to input
void AAIpawn_character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}