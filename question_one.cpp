/*  
Question 1: FizzBuzz
Write a program that prints the numbers from 1 to 100. For multiples of 3, print "Fizz"; for
multiples of 5, print "Buzz"; and for numbers that are multiples of both 3 and 5, print
"FizzBuzz".
*/

#include <iostream>

int main() {
	//am using the for loop to generate the output.
    for (int num = 1; num <= 100; num++) {
        if (num % 3 == 0 && num % 5 == 0) {
            std::cout << "FizzBuzz" << std::endl;
        } else if (num % 3 == 0) {
            std::cout << "Fizz" << std::endl;
        } else if (num % 5 == 0) {
            std::cout << "Buzz" << std::endl;
        } else {
            std::cout << num << std::endl;
        }
    }
    return 0;
}
