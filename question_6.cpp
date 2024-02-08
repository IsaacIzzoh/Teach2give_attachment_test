/*
Question 6: Count Vowels
Write a program that counts the number of vowels in a sentence.
eg " Hello World " => returns 2
 */

#include <iostream> 
#include <string> 

using namespace std; 

int main() { 
    int count = 0; 
    string sentence; 

    cout << "Enter a sentence: "; 
    getline(cin, sentence); 

    for (char c : sentence) { 
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
            
            count++;
        }
    }

    cout << "Number of vowels in the sentence: " << count << endl; 

    return 0; 
}
