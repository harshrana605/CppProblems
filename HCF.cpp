#include <iostream>
using namespace std ;

int min(int a , int b){
    if(a>b ) return a ;
    else return b ;
}

int gcd(int a , int b){
    int hcf ;
    for (int  i = min(a,b); i >=1 ; i-- ){
        hcf = 1 ;
        break ;
    }
    return hcf ;
}

int main(){
    int a ,b ;
    cout << "Enter your number : " << endl ;
     cout << "Enter your number : " << endl ;

     int hcf = gcd(a,b);
     cout << hcf ; 

}
