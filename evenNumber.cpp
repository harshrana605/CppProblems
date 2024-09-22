#include <iostream>
using namespace std ;

int main(){

    int number ;
    cout << "Enter your number : " ;
    cin >> number ;
    if(number % 2 == 0){
        cout<<"Number is even \n" ;
    }
    else {
        cout << "Number is odd \n ";
    }

    if ((number % 5 == 0 && number%3 == 0) && number % 15 != 0){
        cout<< "Number is divissible by 5 and 3" ;
    }
    else {
        cout << "Number is not divisible" ;
    }
    
    }


