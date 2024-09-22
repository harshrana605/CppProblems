#include <iostream>
using namespace std ;

int main(){
     int number , factorial = 1;
     cout << "Enter your number : " ;
     cin >> number ;

     if(number > 1){
     for(int i = 1 ; i <=number ; i++){
        factorial = factorial * i ;
     }
     cout << factorial ;
     }
     else {
        cout << "factorial is 1" ;
     }






}