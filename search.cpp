#include <iostream>
using namespace std ;

int main() {
    int arr[7] = {12 , 21 , 21, 42, 21, 6 ,7 };
    int x = 29 ;
    int idx = -1 ;   // can put any value  
    bool flag = false ;
    for(int i = 0 ; i <=6 ; i++){
        if(arr[i] == x){
            flag = true ;
            idx = i ;
            break ;
        }
    }
    if(flag == false){
        cout << x <<  "  Element is not present in the array" ;
     }
    else {
        cout << x << "  is present at " << idx ;
     }







}