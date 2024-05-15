// Copyright BlueDragonGames


#include "Character/MainCharacterBase.h"

AMainCharacterBase::AMainCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AMainCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}


