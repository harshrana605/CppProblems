#include <iostream>
#include <string>
using namespace std;

class StringManipulator {
public:
    int lengthOfLongestWord(string sentence) {
        int maxLength = 0, currentLength = 0;
        
        for (char ch : sentence) {
            if (ch == ' ') {
                if (currentLength > maxLength) {
                    maxLength = currentLength;
                }
                currentLength = 0; // Reset length for the next word only when a space is found 
            } else {
                currentLength++;
            }
        }

        // Check the last word because there is no space found after lasst word 
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }

        return maxLength;
    }
};

int main() {
    StringManipulator sm;
    string sentence;
    
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    
    int longestWordLength = sm.lengthOfLongestWord(sentence);
    cout << "Length of the longest word: " << longestWordLength << endl;
    
    return 0;
}
