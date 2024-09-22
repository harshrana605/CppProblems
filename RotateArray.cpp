#include <iostream>
using namespace std ;
void reverse(int arr[], int si , int ei){
     for(int i = si, j =ei ; i <j ; i++ , j--){
        int temp = arr[i] ;
        arr[i] = arr[j];
        arr[j] = temp ;
     }
     return ;
}

int main(){
    int k = 3 , n = 7 ;

    int arr[7] = {1 ,2,3,4,5,6,7};
    // steps
    k = k%n ; 
    reverse(arr, 0 , n-1);
    reverse(arr , 0 , k-1);
    reverse(arr , k , n-1);



    reverse(arr, 0, 6);
    // index 1-4 reverse 
    for(int i = 0 ; i <=6 ; i++){
        cout << arr[i];
    }










    return 0 ;
}