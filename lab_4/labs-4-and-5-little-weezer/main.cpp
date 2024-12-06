#include <iostream>

using namespace std;

int main()
{
  int num = 0;
  cout << "Please enter an integer ";
  cin >> num;
  if(num % 2 == 0){
    if(num % 3 == 0 && num % 5 == 0){
        cout << "Is divisible by 5 and 3" << endl;
    }
    else {
      cout << "Isn't divisible by 5 and 3" << endl;
    }
  }
  else{
    if(num <= -1){
      cout << "Is negativo" << endl;
    }
    else{
      cout << "Is not negativo" << endl;
    }
  }


  if(num >= -100 && num <= 100){
    cout << "Is in range" << endl;
  }
  else{
    cout << "Is not in range" << endl;
  }
  return 0;
}
