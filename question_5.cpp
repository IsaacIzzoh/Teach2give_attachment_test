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
