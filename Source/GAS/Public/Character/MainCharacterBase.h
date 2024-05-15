// Copyright BlueDragonGames

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainCharacterBase.generated.h"

UCLASS(ABSTRACT)
class GAS_API AMainCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AMainCharacterBase();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;

};
