#include "HMWGrid.h"
#include "Engine/World.h"

AHMWGrid::AHMWGrid()
{
    PrimaryActorTick.bCanEverTick = false;
    GridSize = 25;
}

void AHMWGrid::GenerateGrid()
{
    if (!TileClass) return;

    for (int X = 0; X < GridSize; X++)
    {
        for (int Y = 0; Y < GridSize; Y++)
        {
            FVector Location = FVector(X * 110.0f, Y * 110.0f, 0.0f); 
            AHMWTile* NewTile = GetWorld()->SpawnActor<AHMWTile>(TileClass, Location, FRotator::ZeroRotator);
        }
    }
}


