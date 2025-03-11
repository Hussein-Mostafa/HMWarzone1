
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HMWTile.generated.h"

UCLASS()
class HMWARZONE1_API AHMWTile : public AActor
{
    GENERATED_BODY()

public:
    AHMWTile();

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tile")
    bool bIsObstacle;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tile")
    bool bIsOccupied;

    void SetTileProperties(bool IsObstacle, bool IsOccupied);
};
