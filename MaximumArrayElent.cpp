#include <iostream>
using namespace std ;

int main(){
    int arr[7] = { 1, 2 , 3 , 4 , 5 , 6 , 7};
    int max = arr[0];    // basically we will comapre all the elements with the first element of array

    for( int i = 1 ; i <=6 ; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << max ; 

    // odd even array 

    for(int i = 0 ; i <= 6 ; i++){
        if(i%2 != 0 ){ 
            arr[i] = arr[i] * 2 ;
        }
        else arr[i] = arr[i] + 10 ;
    }
    for( int i = 0 ; i <= 6 ; i++){
        cout << arr[i] ;
    }


       // difference of sum of array elements prewsent at even indices and sum of array elements at odd indices 
    int arr[5] = {1 , 2 , 3 , 4 ,5} ;
    int sumEven = 0 , sumOdd = 0 ;
    
    for (int i = 0 ; i < 5 ; i++){
        if(i % 2 == 0){
            sumEven = sumEven + arr[i];
        }
        else sumOdd = sumOdd + arr[i];
    }
     cout << sumEven - sumOdd <<endl ;



     // second maximum element




    return 0 ;

}