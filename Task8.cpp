#include <iostream>
#include <string>

using namespace std;

int findSubstring(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();

    // empty pattern
    if (m == 0) return 0;

    
    for (int i = 0; i <= n - m; ++i) {
        int j = 0;
        // Comparing characters one by one
        while (j < m && text[i + j] == pattern[j]) {
            ++j;
        }
        // matched the entire pattern
        if (j == m) {
            return i;
        }
    }

    // Pattern not found
    return -1;
}

int main() {
    // Pattern at the beginning
    cout << "Test 1: " << findSubstring("hello world", "hello") << endl; 

    // Pattern at the end
    cout << "Test 2: " << findSubstring("say hello", "hello") << endl;  

    // Pattern not present
    cout << "Test 3: " << findSubstring("openai rocks", "gpt") << endl;  

    // Empty pattern
    cout << "Test 4: " << findSubstring("abcde", "") << endl;    
    
    // Additonal cases for second commit

    cout << "Test 5: " << findSubstring("Hello how you be", "yo") << endl;  
    cout << "Test 6: " << findSubstring("I am very fine", "very") << endl;  
    cout << "Test 7: " << findSubstring("you look bodacious", "lo") << endl;  
    cout << "Test 8: " << findSubstring("I see very well thank you", "s") << endl;  

    // Additonal cases for second commit end


    return 0;
}
