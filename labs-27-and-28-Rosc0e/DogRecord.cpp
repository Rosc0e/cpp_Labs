#include "DogRecord.h"

DogRecord::DogRecord(string initialName, int initialAge, double initialWeight, bool hasLongHairInitial)
    : PetRecord(initialName, initialAge, initialWeight)
{
    hasLongHair = hasLongHairInitial;
}

void DogRecord::set(string newName, int newAge, double newWeight, bool hasLongHairNew)
{
    PetRecord::set(newName, newAge, newWeight);
    hasLongHair = hasLongHairNew;
}

void DogRecord::setHasLongHair(bool hasLongHairNew)
{
    hasLongHair = hasLongHairNew;
}

bool DogRecord::getHasLongHair()
{
    return hasLongHair;
}
