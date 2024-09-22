#include <iostream>
#include <string>
using namespace std;

class StringManipulator {
    
public:
    int countVowels(string str) {
        int count = 0;
        for (char ch : str) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                count++;
            }
        }
        return count;
    }
};

int main() {
    StringManipulator sm;
    string input;
    
    cout << "Enter a string: ";
    cin >> input;
    
    int vowelCount = sm.countVowels(input);
    cout << "Number of vowels in " << input << ": " << vowelCount << endl;
    
    return 0;
}
