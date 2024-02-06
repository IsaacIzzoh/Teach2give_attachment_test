/*  Question one     */

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
