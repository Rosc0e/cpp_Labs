#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename;
    int number;
    int total = 0;
    
    cout << "Enter filename: ";
    cin >> filename;
    
    ifstream inFile(filename);
    
    if (!inFile.is_open()) {
        cout << "Failed to open file." << endl;
        return 0;
    }
    
    while (inFile >> number) {
        cout << "Read " << number << " from file." << endl;
        total += number;
    }
    
    cout << "Total is " << total << "." << endl;
    
    inFile.close();
    return 0;
}