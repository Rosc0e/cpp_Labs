#include <iostream> 
using namespace std;

int main()

{ 
	int int1; 
	int int2;
	
	cout << "type your first favorite interger \n"; 
	cin >> int1 ;
	cout << "type your second favorite interger \n"; 
	cin >> int2; 

	cout << int1 << endl << int2 << endl;
	cout << "Heres some calculations with these numbers \n"; 
	cout << int1 << "+" << int2 << "=" << int1 + int2 << endl; 
	cout << int1 << "-" << int2 << "=" << int1 - int2 << endl; 
	cout << int1 << "x" << int2 << "=" << int1 * int2 << endl;
	cout << int1 << "/" << int2 << "=" << int1/int2 << "R" << int1 % int2 << endl;



	return 0; 
}

