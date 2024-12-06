#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    ofstream outFile("vending_output.txt");
    double price, money;
    char another;
    
    do {
        cout << "Enter price of item: $";
        cin >> price;
        cout << "Enter amount of money inserted: $";
        cin >> money;
        
        if (money < price) {
            cout << "Error: Not enough money inserted." << endl;
        } else {
            outFile << "Price: $ " << fixed << setprecision(2) << price << endl;
            outFile << "Money inserted: $ " << money << endl;
            
            int change = (int)((money - price) * 100 + 0.5);
            
            if (change == 0) {
                cout << "No Change" << endl;
                outFile << "No Change" << endl;
            } else {
                int quarters = change / 25;
                change %= 25;
                
                int dimes = change / 10;
                change %= 10;
                
                int nickels = change / 5;
                change %= 5;
                
                int pennies = change;
                
                cout << "Change:" << endl;
                cout << "Quarters: " << quarters << endl;
                cout << "Dimes: " << dimes << endl;
                cout << "Nickels: " << nickels << endl;
                cout << "Pennies: " << pennies << endl;
                
                outFile << "Change:" << endl;
                outFile << "Quarters: " << quarters << endl;
                outFile << "Dimes: " << dimes << endl;
                outFile << "Nickels: " << nickels << endl;
                outFile << "Pennies: " << pennies << endl;
            }
        }
        
        if (money >= price) {
            outFile << "********************" << endl;
        }
        
        cout << "Do you have another entry?: ";
        cin >> another;
        
    } while (another == 'Y' || another == 'y');
    
    outFile.close();
    return 0;
}