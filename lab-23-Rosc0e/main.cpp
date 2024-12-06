#include <iostream>
using namespace std;

const double PI = 3.14159;

class Circle {
private:
    double radius;
    
public:
    Circle() {
        radius = 0;
    }
    
    Circle(double r) {
        if(r < 0) {
            radius = 0;
        } else {
            radius = r;
        }
    }
    
    void setRadius(double r) {
        if(r < 0) {
            radius = 0;
        } else {
            radius = r;
        }
    }
    
    double getRadius() {
        return radius;
    }
    
    double calcArea() {
        return PI * radius * radius;
    }
};

int main() {
    Circle c1;
    Circle c2(5);
    Circle c3(-3);
    
    cout << "Default constructor (c1):" << endl;
    cout << "Radius: " << c1.getRadius() << endl;
    cout << "Area: " << c1.calcArea() << endl;
    
    cout << "\nconstructor with 5 (c2):" << endl;
    cout << "Radius: " << c2.getRadius() << endl;
    cout << "Area: " << c2.calcArea() << endl;
    
    cout << "\nconstructor with -3 (c3):" << endl;
    cout << "Radius: " << c3.getRadius() << endl;
    cout << "Area: " << c3.calcArea() << endl;
    
    cout << "\nTesting setter with + value:" << endl;
    c1.setRadius(3);
    cout << "New radius: " << c1.getRadius() << endl;
    cout << "New area: " << c1.calcArea() << endl;
    
    cout << "\nTesting setter with - value:" << endl;
    c2.setRadius(-10);
    cout << "New radius: " << c2.getRadius() << endl;
    cout << "New area: " << c2.calcArea() << endl;
    
    return 0;
}