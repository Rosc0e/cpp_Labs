#include <iostream>
using namespace std;

void calculateStats(double n1, double n2, double n3, double n4, double &min, double &max, double &avg) {
    min = n1;
    if(n2 < min) min = n2;
    if(n3 < min) min = n3; 
    if(n4 < min) min = n4;

    max = n1;
    if(n2 > max) max = n2;
    if(n3 > max) max = n3;
    if(n4 > max) max = n4;

    avg = (n1 + n2 + n3 + n4) / 4.0;
}

int main() {
    double num1, num2, num3, num4;
    double minimum, maximum, average;

    cout << "Please enter four numbers:" << endl;
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    cout << "Number 3: ";
    cin >> num3;
    cout << "Number 4: ";
    cin >> num4;

    calculateStats(num1, num2, num3, num4, minimum, maximum, average);

    cout << "Minimum is " << minimum << endl;
    cout << "Maximum is " << maximum << endl; 
    cout << "Average is " << average << endl;

    return 0;
}