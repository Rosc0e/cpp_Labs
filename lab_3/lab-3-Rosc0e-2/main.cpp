#include <iostream> 
#include <iomanip>

using namespace std; 
int main() 
{
    string item1, item2, item3; 
    double price1, price2, price3;
    double tax_rate;
    double tax_calc;
    double subtotal;
    double total;
    
    cout << "welcome to the store where we only let you buy three items!!! " << endl; 
    cout << "What are the three items you bought and their prices \n" << "enter item one \n"; 
    getline(cin,item1);
    cout << "and its price" << endl; 
    cin >> price1; 
    cout << "item 2" << endl; 
    cin.ignore();
    getline(cin, item2);
    cout << "and its price" << endl; 
    cin >> price2; 
    cout << "item 3" << endl;
    cin.ignore();
    getline(cin,item3); 
    cout << "and its price" << endl; 
    cin >> price3; 
    cout << "sweet what is the tax rate \n"; 
    cin >> tax_rate; 

    subtotal = price1 + price2 + price3;
    tax_calc = subtotal * tax_rate;
    total = subtotal * tax_rate + subtotal; 
    cout << endl;
    cout << endl;

    //output
    cout << "******************************\n";
    cout << setw(20) << left << item1 << right << "$" << setw(9) << setprecision(2) << fixed << price1 << endl;
    cout << setw(20) << left << item2 << right << "$" << setw(9) << setprecision(2) << fixed << price2 << endl;
    cout << setw(20) << left << item3 << right << "$" << setw(9) << setprecision(2) << fixed << price3 << endl;
      
    cout << endl; 

    cout << setw(20) << left <<  "subtotal" <<  right << "$" << setw(9) << setprecision(2) << fixed << subtotal << endl; 
    cout << setw(20) << left << "tax" << right << "$" << setw(9) << setprecision(2) << fixed << tax_calc << endl;
    cout << setw(20)<< left << "total" <<  right << "$" << setw(9) << setprecision(2) << fixed << total << endl;
    cout << "******************************\n";
    cout << "Thank you for shopping with us \n";
    cout << "******************************\n";


    return 0; 
}
