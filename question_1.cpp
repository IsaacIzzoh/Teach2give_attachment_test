/*  
Question 1: FizzBuzz
Write a program that prints the obers from 1 to 100. For multiples of 3, print "Fizz"; for
multiples of 5, print "Buzz"; and for obers that are multiples of both 3 and 5, print
"FizzBuzz".
*/

#include <iostream>
using namespace std;

int main() {
	//am using the for loop to generate the output.
    for (int o = 1; o <= 100; o++) {
        //am using an if statement to check if the current number is a multiple of 3 and 5
        if (o % 3 == 0 && o % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } 
        // Check if the current number is a multiple of 3 but not 5
        else if (o % 3 == 0) {
            cout << "Fizz" << endl; // If true, print "Fizz"
        } 
        // Check if the current number is a multiple of 5 but not 3
        else if (o % 5 == 0) {
            cout << "Buzz" << endl; // If true, print "Buzz"
        } 
        // If none of the above conditions are met
        else {
            cout << o << endl; // Print the current number
        }
    }
    return 0;
}
