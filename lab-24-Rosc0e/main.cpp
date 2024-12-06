#include <iostream>
#include "circle.h"
using namespace std;

int main() {
    Circle c1;
    Circle c2(5);
    Circle c3(-3);
    
    cout << "Default constructor (c1):" << endl;
    cout << "Radius: " << c1.getRadius() << endl;
    cout << "Area: " << c1.calcArea() << endl;
    
    cout << "\nParameterized constructor with 5 (c2):" << endl;
    cout << "Radius: " << c2.getRadius() << endl;
    cout << "Area: " << c2.calcArea() << endl;
    
    cout << "\nParameterized constructor with -3 (c3):" << endl;
    cout << "Radius: " << c3.getRadius() << endl;
    cout << "Area: " << c3.calcArea() << endl;
    
    cout << "\nTesting setter with positive value:" << endl;
    c1.setRadius(3);
    cout << "New radius: " << c1.getRadius() << endl;
    cout << "New area: " << c1.calcArea() << endl;
    
    cout << "\nTesting setter with negative value:" << endl;
    c2.setRadius(-10);
    cout << "New radius: " << c2.getRadius() << endl;
    cout << "New area: " << c2.calcArea() << endl;
    
    return 0;
}
