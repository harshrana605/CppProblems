#include <iostream>
using namespace std ; 

int main(){
     int arr[7] = {2, 5 , 6, 8 ,2 , 9, 10};
     int duplicate = 0 ;
     for(int i = 0 ; i <= 6 ; i++ ){
        // int element = arr[i]; 
        for(int j = i+1 ; j <= 6 ; j++){
            if(arr[i] == arr[j]){
                cout << "duplicate element is : " <<  arr[i] ; 
                break ; 
            }
        }
     }


     // Unique elemeent of array
     for(int i = 0 ; i <=6 ; i++){
        bool flag = false ;
        for(int j = i + 1; j <= 6; j++){
            if(arr[i] == arr[j]){
                flag = true ;
            }
        }
        if(flag == false){
            cout << arr[i] ;
            break ; 
        }
     }
     return 0 ;







}