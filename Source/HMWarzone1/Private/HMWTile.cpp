
#include "HMWTile.h"

AHMWTile::AHMWTile()
{
    PrimaryActorTick.bCanEverTick = false;
    bIsObstacle = false;
    bIsOccupied = false;
}

void AHMWTile::SetTileProperties(bool IsObstacle, bool IsOccupied)
{
    bIsObstacle = IsObstacle;
    bIsOccupied = IsOccupied;
}

