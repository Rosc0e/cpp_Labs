#include <iostream>
using namespace std; 

int main() 
{ 
	cout << boolalpha;
    string usr_name; 
    string usr_name2; 
	bool major; 
	char punc;
	int int1; 
	int int2; 

	cout << "Hi whats your name!" << right << endl; 
	cin >> usr_name >> usr_name2;  
	cout << "hi " << usr_name  <<  " " << usr_name2 << endl; 
	cout << "Are you a CS major?" << endl; 
	cin >>  major; 
	cout << "CS Major: " << major << endl;
	cout << "Whats your favorite punctuation mark?" << endl; 
	cin >> punc; 
	cout << "your favorite punctuation mark is: " << punc << endl; 
	cout << "give me two numbers" << endl; 
	cin >> int1 >> int2; 
	cout << "here they are divided!" << endl; 
	cout << int1/int2 << "R" << int1%int2 << endl; 
	cout << (double)int1/(double)int2 << endl;
 






	return 0;
}
