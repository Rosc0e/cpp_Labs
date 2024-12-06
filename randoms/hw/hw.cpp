#include <iostream>

using namespace std;

int main() {
    char is_taking_class , grade;

    cout << "Are you taking a class? (y/n): ";
    cin >> is_taking_class;

    if (is_taking_class == 'n' || is_taking_class == 'N') {
        cout << "Thanks for using the system!\n";
    } else if (is_taking_class == 'y' || is_taking_class == 'Y') {

        cout << "whats your grade in that class? \n";
        cin >> grade ; 
        grade = toupper(grade); 

        switch (grade)
        {
        case 'A':  
            cout << "good job! \n";
            break;
        case 'B': 
            cout << "goodjob! \n";
            break;
        case 'C': 
            cout << "your doing alright \n";
            break; 
        case 'D': 
            cout << "you can improve \n"; 
            break; 
        case 'F': 
            cout << "you can improve \n";
            break; 
        
        default:
            cout << "Invalid grade \n";
            break;
        }

    } else {
        cout << "Invalid input \n";
    }

    return 0;
}
