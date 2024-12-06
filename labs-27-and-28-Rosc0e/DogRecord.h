#ifndef DOGRECORD_H
#define DOGRECORD_H

#include "PetRecord.h"

class DogRecord : public PetRecord
{
private:
    bool hasLongHair;

public:
    DogRecord(string initialName, int initialAge, double initialWeight, bool hasLongHairInitial);
    void set(string newName, int newAge, double newWeight, bool hasLongHairNew);
    void setHasLongHair(bool hasLongHairNew);
    bool getHasLongHair();
};
#endif
