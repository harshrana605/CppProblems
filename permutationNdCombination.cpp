#include <iostream>
using namespace std;


int factorial(int x){
    int fact = 1 ;
    for(int i = 1 ; i <=x ; i++ ){
        fact = fact * i ;
    }
    return fact ;

}
int  combination(int n , int r){
     return factorial(n) / factorial(r) * factorial(n-r);
}

int main (){
    int n  , r;
    cin >> n >> r ;
    
    int ncr = combination(n,r);
    cout << ncr ;

    // pascal triangle 
    for(int i = 0 ; i <=n ; i++ ){

           // ---------------------------- j will go till i in column form
           //  |
           //  |
           //  |
           //  i wil go till n  in row form

        for(int j = 0 ; j <= i ; j++){
        int icj = combination(i,j);
        cout << icj ; 
        }
    }



}