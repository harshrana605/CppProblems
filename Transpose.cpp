#include <iostream>
using namespace std ;

int main(){

    int r , c ;
    cin >> r >> c ;
    int arr[r][c] ;
    int brr[c][c];

    for (int i = 0 ; i < r ; i++){
        for(int j = 0 ; j <c ; j++){
            cin >> arr[i][j];
        }
    }

    for (int i = 0 ; i < c ; i++){
        for(int j = 0 ; j < r ; j++){
            brr[i][j] = arr[j][i];
        }
        cout << endl ; 
    }
    for (int i = 0 ; i < c ; i++){
        for(int j = 0 ; j < r ; j++){
           cout << brr[i][j] ;
        }
        cout << endl ; 
    }

    








}



