#include <iostream>
using namespace std;

const int ARRAY_SIZE = 1000;

int main() {
    double numbers[ARRAY_SIZE];
    
    for(int i = 0; i < ARRAY_SIZE; i++) {
        numbers[i] = i * 7.5;
    }
    
    int slot;
    cout << "Enter an array slot number: ";
    cin >> slot;
    
    if(slot >= 0 && slot < ARRAY_SIZE) {
        cout << "The value in array slot " << slot << " is " << numbers[slot] << endl;
    }
    else {
        cout << "Value out of range." << endl;
    }
    
    return 0;
}