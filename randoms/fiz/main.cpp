#include <iostream>

using namespace std; 
/* fizzbuzz. print 1-100 one per line 
 * % 3 print fizz 
 * % 5 print buzz
 * %3 && %5 print fizzbuzz
 * */

int main(){
int i = 0; 

    while(i < 100){
        i++; 
        if (i % 15 == 0){
            cout << "FizzBuzz" << "\n";
        }else if(i % 5 ==0){
            cout << "Buzz" << "\n" ;
        }
        else if (i % 3 == 0 ){
            cout << "Fizz" << "\n"; 
        } 
        else {
            cout << i << "\n";
        } 


    }


}


