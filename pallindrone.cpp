#include <iostream>
#include <string>
using namespace std;

class StringManipulator {
public:
    bool isPalindrome(string str) {
        int left = 0;
        int right = str.length() - 1;
        
        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

int main() {
    StringManipulator sm;
    string input;
    
    cout << "Enter a string: ";
    cin >> input;
    
    if (sm.isPalindrome(input)) {
        cout << input << " is a palindrome." << endl;
    } else {
        cout << input << " is not a palindrome." << endl;
    }
    
    return 0;
}
