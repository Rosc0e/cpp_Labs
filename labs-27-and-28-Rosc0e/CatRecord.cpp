#include "CatRecord.h"

CatRecord::CatRecord(string initialName, int initialAge, double initialWeight, bool hasLongHairInitial)
    : PetRecord(initialName, initialAge, initialWeight)
{
    hasLongHair = hasLongHairInitial;
}

void CatRecord::set(string newName, int newAge, double newWeight, bool hasLongHairNew)
{
    PetRecord::set(newName, newAge, newWeight);
    hasLongHair = hasLongHairNew;
}

void CatRecord::setHasLongHair(bool hasLongHairNew)
{
    hasLongHair = hasLongHairNew;
}

bool CatRecord::getHasLongHair()
{
    return hasLongHair;
}
