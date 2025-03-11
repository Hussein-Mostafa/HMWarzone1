#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HMWTile.h"
#include "HMWGrid.generated.h"

UCLASS()
class HMWARZONE1_API AHMWGrid : public AActor
{
    GENERATED_BODY()

public:
    AHMWGrid();

    UPROPERTY(EditAnywhere, Category = "Grid")
    int GridSize;

    UPROPERTY(EditAnywhere, Category = "Grid")
    TSubclassOf<AHMWTile> TileClass; 

    void GenerateGrid();

private:
    TArray<AHMWTile*> GridTiles;
};
  