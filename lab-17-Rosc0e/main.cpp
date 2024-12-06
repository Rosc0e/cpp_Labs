#include <iostream>
using namespace std;

double dist(double num1, double num2) {
    if (num1 > num2) {
        return num1 - num2;
    } else {
        return num2 - num1;
    }
}

int main() {
    double firstNum, secondNum;
    
    cout << "Input a number: ";
    cin >> firstNum;
    
    cout << "Input another number: ";
    cin >> secondNum;
    
    double result = dist(firstNum, secondNum);
    
    cout << "The distance between " << firstNum << " and " 
         << secondNum << " is " << result << endl;
    
    return 0;
}