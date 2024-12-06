#include <iostream>
using namespace std;

class Circle {
public:
    double radius;
    
    double calcArea() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle circle1;
    Circle circle2;
    
    cout << "Enter radius for first circle: ";
    cin >> circle1.radius;
    
    cout << "Enter radius for second circle: ";
    cin >> circle2.radius;
    
    cout << "\nFirst Circle:" << endl;
    cout << "Radius: " << circle1.radius << endl;
    cout << "Area: " << circle1.calcArea() << endl;
    
    cout << "\nSecond Circle:" << endl; 
    cout << "Radius: " << circle2.radius << endl;
    cout << "Area: " << circle2.calcArea() << endl;
    
    return 0;
}