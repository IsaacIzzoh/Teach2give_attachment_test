/*
Question 3: Power of Two
Write a program that takes an integer as input and returns true if the input is a power of two.

Examples:
8=> returns true
6=> returns false

*/

#include <iostream>
using namespace std;

bool isPowerOfTwo(int num) {
    return (num > 0) && ((num & (num - 1)) == 0);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isPowerOfTwo(num)) {
        cout << "True" << std::endl;
    } else {
        cout << "False" << std::endl;
    }
    
    return 0;
}
