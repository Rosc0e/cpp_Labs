#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	string food , major , city; 
	cout << "enter your favorite food" << endl; 
	getline(cin, food);
	cout << "enter your major" << endl; 
	getline(cin, major);
	cout << "enter your city" << endl; 
	getline(cin, city);
	cout << "your favorite food is " << food << endl; 
	cout << "your major is " << major << endl; 
	cout << "your city is " << city << endl; 
	return 0;
}
