#include <iostream>
using namespace std;

int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int x;
    cin >> x;
    int totalPair = 0;

    cout << "Pairs that sum up to " << x << " are: " << endl;
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (arr[i] + arr[j] == x) {
                totalPair++;
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }

    cout << "Total Pairs: " << totalPair << endl;
    return 0;
}
