#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int W1L = word1.length();
        int W2L = word2.length();
        int i = 0, j = 0;
        string result = "";
        
        while (i < W1L || j < W2L) {
            if (i < W1L) {
                result += word1[i];
                i++;
            }
            if (j < W2L) {
                result += word2[j];
                j++;
            }
        }

        return result;
    }
};

int main() {
    // Create an instance of the Solution class
    Solution solution;

    // Test cases
    string word1, word2;

    // Example 1
    word1 = "abc";
    word2 = "pqr";
    cout << "Merged Alternately: " << solution.mergeAlternately(word1, word2) << endl;

    // Example 2
    word1 = "ab";
    word2 = "pqrs";
    cout << "Merged Alternately: " << solution.mergeAlternately(word1, word2) << endl;

    // Example 3
    word1 = "abcd";
    word2 = "pq";
    cout << "Merged Alternately: " << solution.mergeAlternately(word1, word2) << endl;

    // Custom input
    cout << "\nEnter two strings to merge alternately:\n";
    cin >> word1 >> word2;
    cout << "Merged Alternately: " << solution.mergeAlternately(word1, word2) << endl;

    return 0;
}

