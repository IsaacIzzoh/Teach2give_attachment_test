/*
Question 2: Fibonacci Sequence
Write a program to generate the Fibonacci sequence up to 100.
  */
#include <iostream>
using namespace std;

int main() {
  //declare a variable called a
    int a = 0, b = 1, c;
    //print output
    cout << a << " " << b << " ";
    //use while loop for looping until you reach 100
    while (a + b <= 100) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    
    return 0;
}
