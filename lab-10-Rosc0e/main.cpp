#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    for (int i = 1; i <= 9; i++) {
        cout << setw(4) << i;
    }
    cout << endl;
    
    cout << "-----------------------------------------------------" << endl;
    
    for (int i = 1; i <= 9; i++) {
        cout << i << "|";
        for (int j = 1; j <= 9; j++) {
            cout << setw(4) << i * j;
        }
        cout << endl;
    }
    
    return 0;
}