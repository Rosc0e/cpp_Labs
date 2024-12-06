#include "BirdRecord.h"

BirdRecord::BirdRecord(string initialName, int initialAge, double initialWeight, int wingspanInitial)
    : PetRecord(initialName, initialAge, initialWeight)
{
    wingspan = wingspanInitial;
}

void BirdRecord::set(string newName, int newAge, double newWeight, int wingspanNew)
{
    PetRecord::set(newName, newAge, newWeight);
    wingspan = wingspanNew;
}

void BirdRecord::setWingspan(int wingspanNew)
{
    wingspan = wingspanNew;
}

int BirdRecord::getWingspan()
{
    return wingspan;
}
