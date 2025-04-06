// Simplified player movement and building
void APlayerCharacter::BeginPlay() {
    Super::BeginPlay();
    Health = 100;
    Materials = 500;
}

void APlayerCharacter::BuildStructure(FStructureType Structure) {
    if(Materials >= Structure.Cost) {
        SpawnStructure(Structure);
        Materials -= Structure.Cost;
    }
}
