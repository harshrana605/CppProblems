#include <iostream>
using namespace std ;

int main(){
    
    // for(int i = 0 ; i <= 100 ; i++){
    //     if(i % 2 == 0){
    //     cout << i << "\n" ; 
    // } }


    // program to print 19 table 

    int number ; 
    cin >> number ; 

    // for( int i = 1 ; i <= 10 ; i++){
    //     cout << number << " x " << i << " = " << number*i << " \n " ;
    // }


    // for(int i = 2 ; i <=number ; i++){
    //     if(number % i == 0){
    //         cout << "given number is composite";
    //         break;
    //     }
    // else {cout << "given number is prime";
    //     }
        
    // }

    for(int i = 2 ; i <=number ; i++){
        if(i  % 2 == 0){
            // cout << "given number is even" << "\n" << i ;
            continue;
        }
        cout << i << "loop is running " << i  << "\n";  // this whole round will be skip 
    
        
    }



}