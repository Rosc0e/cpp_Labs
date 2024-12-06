#include <iostream>
#include <string>
using namespace std;

struct Student {
    int studentID;
    double gpa;
    string fullName;
    int units;
};

int main() {
    Student student1, student2;
    
    for(int i = 1; i <= 2; i++) {
        cout << "\nEnter information for student " << i << ":\n";
        
        do {
            cout << "Enter 4-digit Student ID: ";
            cin >> (i == 1 ? student1.studentID : student2.studentID);
        } while ((i == 1 ? student1.studentID : student2.studentID) < 1000 || 
                 (i == 1 ? student1.studentID : student2.studentID) > 9999);
        
        do {
            cout << "Enter GPA (0-4): ";
            cin >> (i == 1 ? student1.gpa : student2.gpa);
        } while ((i == 1 ? student1.gpa : student2.gpa) < 0 || 
                 (i == 1 ? student1.gpa : student2.gpa) > 4);
        
        cin.ignore();
        cout << "Enter full name: ";
        getline(cin, (i == 1 ? student1.fullName : student2.fullName));
        
        do {
            cout << "Enter units (must be positive): ";
            cin >> (i == 1 ? student1.units : student2.units);
        } while ((i == 1 ? student1.units : student2.units) <= 0);
    }
    
    cout << "\nStudent 1 Information:";
    cout << "\nStudent ID: " << student1.studentID;
    cout << "\nGPA: " << student1.gpa;
    cout << "\nFull Name: " << student1.fullName;
    cout << "\nUnits: " << student1.units;
    
    cout << "\n\nStudent 2 Information:";
    cout << "\nStudent ID: " << student2.studentID;
    cout << "\nGPA: " << student2.gpa;
    cout << "\nFull Name: " << student2.fullName;
    cout << "\nUnits: " << student2.units << endl;
    
    return 0;
}