#include <iostream>
using namespace std;

int fibonacci(int n){
    if (n == 1 || n == 0 ) return 1 ;
    else {
        int fibo = fibonacci(n-1) + fibonacci(n-2);
        return fibo ;

    }
}

int main(){
   int n  ;
   cout << " Enter your number : " ;
   cin >> n ; 

   int fibo = fibonacci(n) ;

   cout << fibo ;
   return 0 ;
}