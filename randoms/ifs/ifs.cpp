#include <iostream> 

using namespace std;

int main()
{
	int int1 = 4;
	int int2 = 10;

	if(int1 < 5){
		cout << "its less then five"<< endl;
	}

	if(int1 > 5){
		cout << "its greater then 5" << endl;
	}
	else{
		cout << "its still not greater then five stop asking\n"; 
	}

	if(int1 + int2 == 14){
		cout << "the answer is 14" << endl;
	}
}
