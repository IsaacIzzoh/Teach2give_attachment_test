/*
Question 2: Fibonacci Sequence
Write a program to generate the Fibonacci sequence up to 100.
  */
#include <iostream>
using namespace std;

int main() {
  //declare a variable called a
    int n = 0, o = 1, p;
    //print output
    cout << n << " " << o << " ";
    //use while loop for looping until you reach 100
    while (n + o <= 100) {
        p = n + o;
        cout << p << " ";
        n = o;
        o = p;
    }
    
    return 0;
}
