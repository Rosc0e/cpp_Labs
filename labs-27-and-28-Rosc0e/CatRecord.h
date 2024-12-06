#ifndef CATRECORD_H
#define CATRECORD_H

#include "PetRecord.h"

class CatRecord : public PetRecord
{
private:
    bool hasLongHair;

public:
    CatRecord(string initialName, int initialAge, double initialWeight, bool hasLongHairInitial);
    void set(string newName, int newAge, double newWeight, bool hasLongHairNew);
    void setHasLongHair(bool hasLongHairNew);
    bool getHasLongHair();
};
#endif
