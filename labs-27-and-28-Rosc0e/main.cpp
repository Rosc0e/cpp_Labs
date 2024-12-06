#include "CatRecord.h"
#include "DogRecord.h"
#include "BirdRecord.h"
#include <iostream>
#include "PetRecord.h"
using namespace std;

int main()
{
  PetRecord test("Fluffy",3,21.4);
  DogRecord dog("Buddy", 3, 15.0, false);
  BirdRecord bird("Tweety", 1, 0.5, 10);
  CatRecord cat("Whiskers", 5, 10.2, true);

    cout << "Cat:" << endl;
    cout << "Name: " << cat.getName() << endl;
    cout << "Age: " << cat.getAge() << endl;
    cout << "Weight: " << cat.getWeight() << endl;
    cout << "Has Long Hair: " << (cat.getHasLongHair() ? "Yes" : "No") << endl;
    cat.print();
    cout << endl;

    cout << "Dog:" << endl;
    cout << "Name: " << dog.getName() << endl;
    cout << "Age: " << dog.getAge() << endl;
    cout << "Weight: " << dog.getWeight() << endl;
    cout << "Has Long Hair: " << (dog.getHasLongHair() ? "Yes" : "No") << endl;
    dog.print();
    cout << endl;

    cout << "Bird:" << endl;
    cout << "Name: " << bird.getName() << endl;
    cout << "Age: " << bird.getAge() << endl;
    cout << "Weight: " << bird.getWeight() << endl;
    cout << "Wingspan: " << bird.getWingspan() << endl;
    bird.print();
    cout << endl;

    return 0;
  test.print();

  return 0;
}