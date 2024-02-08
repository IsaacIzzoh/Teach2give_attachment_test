/*
Question 4: Capitalize Words
Write a program that accepts a string as input, capitalizes the first letter of each word in the 
string, and then returns the result string.
Examples: 
"hi"=> returns "Hi"
"i love programming"=> returns "I Love Programming"
*/
#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

// this is a function to capitalize the first letter of each word in a string
string capitalizeWords(const string& str) {
    string result;
    bool capitalizeNext = true; // I am using a flag to determine if the next character should be capitalized

    for (char c : str) {
        if (isspace(c)) {
            // If the character is a space, retain it in the result
            result += c;
            capitalizeNext = true; // Reset flag to capitalize next character of the next word
        } else {
            // If the flag is set or it's the first character of the string, capitalize the current character
            if (capitalizeNext || result.empty()) {
                result += toupper(c);
                capitalizeNext = false;
            } else {
                result += tolower(c);
            }
        }
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string result = capitalizeWords(input);
    cout << "Capitalized string: " << result << endl;

    return 0;
}
