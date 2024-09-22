#include <iostream>
using namespace std ;

int main(){
     int n  ;
    cin >> n;
    int arr[n][n] ;
    

    for (int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> arr[i][j];
        }
    }

    // transpose using swapping
    for(int i = 0 ; i < n ; i++){
        for(int j = i ; j < n; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp ;
        }
    }
     for(int i = 0 ; i <n ; i++){
        for(int j = 0 ; j <n ; j++){
            cout << arr[i][j] ;
        }
    }

    // rotate the array 

    for(int i =0 ; i < n ; i++){
        int j = 0 ;
        int k = n - 1 ; 

        while(j<k){
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp ; 
            j++ ;
            k-- ;
        }
    }






}
