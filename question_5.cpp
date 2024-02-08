/*
Question 5: Reverse Integer
Write a program that takes an integer as input and returns an integer with reversed digit 
ordering.
Examples:
For input 500, the program should return 5.
For input -56, the program should return -65.
For input -90, the program should return -9.
For input 91, the program should return 19.
*/
#include <iostream>
using namespace std;

//I am defining a function named reverseInteger that takes an integer l as input
int reverseInteger(int l) {
    int reversed = 0;
    while (l != 0) {
        int digit = l % 10;
        reversed = reversed * 10 + digit;
        l /= 10;
    }
    return reversed;
}

int main() {
    int input;
    cout << "Enter an integer: ";
    cin >> input;

    int reversed = reverseInteger(input);
    cout << "Reversed integer: " << reversed << endl;

    return 0;
}
