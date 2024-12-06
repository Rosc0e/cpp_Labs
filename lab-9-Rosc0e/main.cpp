#include <iostream>
using namespace std;

int main() {
    int number;
    char choice;
    int oddNum = 0;
    int evenNum = 0;
    
    cout << "Enter an integer: ";
    cin >> number;
    
    if(number % 2 == 0) {
        cout << number << " is even." << endl;
        evenNum++;
    } else {
        cout << number << " is odd." << endl;
        oddNum++;
    }
    
    do {
        cout << "Do you have another integer to enter (Y/N)?: ";
        cin >> choice;
        
        if(choice == 'Y' || choice == 'y') {
            cout << "Enter an integer: ";
            cin >> number;
            
            if(number % 2 == 0) {
                cout << number << " is even." << endl;
                evenNum++;
            } else {
                cout << number << " is odd." << endl;
                oddNum++;
            }
        }
        
    } while(choice == 'Y' || choice == 'y');
    
    cout << "Odd numbers: " << oddNum << endl;
    cout << "Even numbers: " << evenNum << endl;
    
    return 0;
}