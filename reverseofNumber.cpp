#include <iostream>
using namespace std ;


int main(){
     int number ,r = 0 ;
     cout << "Enter your number : " ;
     cin >> number ;

     while(number!= 0){
        int lastDigit =  number%10 ;
         r = r + lastDigit ;
         r = r * 10 ;
         number = number / 10 ;
     }
     cout << r ;
     return 0 ;




     




}