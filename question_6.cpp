#include <iostream> 
#include <string> 

using namespace std; 

int main() { 
    int count = 0; // I am declaring an integer variable called count and initialize it to 0
    string sentence; // I am declaring a string variable called sentence to store the user's input

    cout << "Enter a sentence: "; // Output 
    getline(cin, sentence); // Read a line of text from the user and store it in the sentence variable

    for (char c : sentence) { // I am starting a for loop that iterates over each character in the sentence
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
            // If the character is a vowel (either lowercase or uppercase), increment the count
            count++;
        }
    }

    cout << "Number of vowels in the sentence: " << count << endl; // Output the count of vowels along with a message

    return 0; 
}
