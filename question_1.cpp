/*  
Question 1: FizzBuzz
Write a program that prints the numbers from 1 to 100. For multiples of 3, print "Fizz"; for
multiples of 5, print "Buzz"; and for numbers that are multiples of both 3 and 5, print
"FizzBuzz".
*/

#include <iostream>
using namespace std;

int main() {
	//am using the for loop to generate the output.
    for (int num = 1; num <= 100; num++) {
        if (num % 3 == 0 && num % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } else if (num % 3 == 0) {
            cout << "Fizz" << endl;
        } else if (num % 5 == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << num << endl;
        }
    }
    return 0;
}
