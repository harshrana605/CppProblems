#include <iostream>
using namespace std ;

int factorial(int n ){
    int fact ;
    if(n == 1) return fact = 1 ;
    else {
      fact = n * factorial(n-1);
    }
    return fact ;
}

void decreasing(int n ){
    if(n == 0){
        return ;
    }
    else {
       cout << n ;  // this will print in decreasing order
       decreasing(n - 1); 
       cout << n ; // this will print in increasing ordeer
       return ;
    }
}

int main(){
    int n ; 
    cin >> n ;
    
    cout << factorial(n) << endl  ;
    decreasing(n) ;



   return 0 ;

}