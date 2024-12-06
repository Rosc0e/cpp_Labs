#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int iceCream[3][7];
    string days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    string flavors[] = {"Vanilla", "Strawberry", "Chocolate"};
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 7; j++) {
            cout << "Enter " << flavors[i] << " cones sold on " << days[j] << ": ";
            cin >> iceCream[i][j];
        }
    }
    
    cout << "\n Sales\n\n";
    cout << setw(12) << " ";
    
    for (int i = 0; i < 7; i++) {
        cout << setw(8) << days[i];
    }
    cout << setw(8) << "Total" << endl;
    
    int flavorTotals[3] = {0};
    for (int i = 0; i < 3; i++) {
        cout << setw(12) << flavors[i];
        
        for (int j = 0; j < 7; j++) {
            cout << setw(8) << iceCream[i][j];
            flavorTotals[i] += iceCream[i][j];
        }
        cout << setw(8) << flavorTotals[i] << endl;
    }
    
    cout << setw(12) << "Daily Total";
    int grandTotal = 0;
    
    for (int j = 0; j < 7; j++) {
        int dailyTotal = 0;
        for (int i = 0; i < 3; i++) {
            dailyTotal += iceCream[i][j];
        }
        cout << setw(8) << dailyTotal;
        grandTotal += dailyTotal;
    }
    
    cout << setw(8) << grandTotal << endl;
    
    return 0;
}
