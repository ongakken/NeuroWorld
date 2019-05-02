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
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh"); //declaring a new component (subobject) for the current actor
}

void AAIpawn_character::decrementNeeds()
{
		food = food - 0.1f;
		energy = energy - 0.2f;
		hydration = hydration - 0.5f;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("zmenil som hodnotu")));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "%f", food);
		//std::this_thread::sleep_for(std::chrono::milliseconds{ 60000 });
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("preslo 60 sekund")));
}

// Called when the game starts or when spawned
void AAIpawn_character::BeginPlay()
{
	Super::BeginPlay();
	//std::this_thread::sleep_for(std::chrono::milliseconds{60000}); //this command stops the whole fucking runtime for amount of x!
	decrementNeeds();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("mainThread")));

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