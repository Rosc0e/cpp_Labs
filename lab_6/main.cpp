#include <iostream>

using namespace std; 

int selectedMonth;   

int main()
{

	cout << "enter the month as a number (ie, january = 1 Decemeber = 12) \n";	
	cin >> selectedMonth; 

	while (selectedMonth <1 || selectedMonth > 12 ) {
	cout << "not a valid month pls pick 1-12 \n";
	cin >> selectedMonth;

	}


	switch (selectedMonth)
	{
	  case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
            cout << "Month " << selectedMonth << " has 31 days.\n";
            break;
	  case 4:
	  case 6:
	  case 9:
	  case 11:
	  	cout << "Month " << selectedMonth << " has 30 days. \n";
		break;
	  case 2: 
	  		cout << "Month " << selectedMonth << " has 28 days. \n";
			break;

	default:
		break;
	}


}

