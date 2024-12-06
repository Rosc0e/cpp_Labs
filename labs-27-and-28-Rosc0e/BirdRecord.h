#ifndef BIRDRECORD_H
#define BIRDRECORD_H

#include "PetRecord.h"

class BirdRecord : public PetRecord
{
private:
    int wingspan;

public:
    BirdRecord(string initialName, int initialAge, double initialWeight, int wingspanInitial);
    void set(string newName, int newAge, double newWeight, int wingspanNew);
    void setWingspan(int wingspanNew);
    int getWingspan();
};
#endif
