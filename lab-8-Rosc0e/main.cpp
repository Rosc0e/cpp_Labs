#include <iostream>
using namespace std;

int main() {
    int number;
    int oddNum = 0;
    int evenNum = 0;
    
    while (true) {
        cout << "Enter an integer (-1 to quit): ";
        cin >> number;
        
        if (number == -1) {
            break;
        }
        
        if (number % 2 == 0) {
            cout << number << " is even." << endl;
            evenNum++;
        }
        else {
            cout << number << " is odd." << endl; 
            oddNum++;
        }
    }
    
    if (oddNum == 0 && evenNum == 0) {
        cout << "No numbers were entered." << endl;
    }
    else {
        cout << "Odd numbers " << oddNum << endl;
        cout << "Even numbers " << evenNum << endl;
    }
    
    return 0;
}
