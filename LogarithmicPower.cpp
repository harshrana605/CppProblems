#include <iostream>
using namespace std ;

int powerLog(int n , int pow){
    if(pow == 1) return n ;

    int x = powerLog(n , pow/2) ;
    if(pow % 2 == 0){
        return x*x ;
    }
    else {
        return x * x * n ;
    }

}

int main(){
    int n , power; 
    cout << "Enter your number : " << endl ;
    cin >> n ;
    cout << "Enter your power : " << endl ;
    cin >> power ;


    int p = powerLog(n , power) ;
    cout << "Power of " << n << " is " << p ;





}