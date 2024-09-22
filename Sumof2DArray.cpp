#include <iostream>
using namespace std ;
#include <limits.h>

int main(){
    int r , c ;
    cin >> r >> c ;
    int arr[r][c];

    for(int i = 0 ; i < r ; i++){
        for(int j =0 ; j<c ; j++){
            cin >> arr[i][j];

        }
    }
      for(int i = 0 ; i < r ; i++){
        for(int j =0 ; j<c ; j++){
            cout << arr[i][j];

        }
        cout << endl ; 
    }

    int sum = 0 ;
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            sum += arr[i][j];
        }
    }
    cout << sum ;


   // maximum sum of row 
    const int rows = 3;
    const int cols = 3;

    int matrix[rows][cols] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int maxSum = INT_MIN;
    int maxRow = -1;

    for (int i = 0; i < rows; ++i) {
        int currentSum = 0;
        for (int j = 0; j < cols; ++j) {
            currentSum += matrix[i][j];
        }
        if (currentSum > maxSum) {
            maxSum = currentSum;
            maxRow = i;
        }
    }

    cout << "Row number with the maximum sum is: " << maxRow << endl;









}