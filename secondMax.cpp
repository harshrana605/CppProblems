#include <iostream>
using namespace std ;
#include <limits.h>

void reverse(int arr[]){
    int i = 0 , j =6 ;
     
     while(i<j){   // for(int i = 0 ; j = 6 ; i<j ; i++ ; j--)
     int temp ;
     temp = arr[i];
     arr[i] = arr[j];
     arr[j] = temp ; 
     i++ ;
     j-- ; 
     return ; }
     
}

int main(){
    int arr[7] = { 1, 2 , 3 , 4 , 5 , 6 , 7};
    int max = INT_MIN ;
    int smax = INT_MIN ;

    for(int i =0 ; i<=6 ; i++){
        if(max<arr[i]){
            smax = max ; // smax is now new max
            max = arr[i];    // max is now new max

        }
        else if (smax <arr[i] && max!= arr[i]){
            smax = arr[i] ;
        }
    }

    // reverse array 

    int brr[7] ;
    for (int i = 0 ; i <= 6 ; i++){
        brr[i] = arr[6-i];

    }
    for(int i = 0 ; i <=6 ; i++){
        cout << brr[i ] ;
    }

    // reversing array without creating extra array

    reverse(arr);
    for( int i = 0 ; i <=6 ; i++){
        cout<< arr[i];
    }






    return 0 ;
}