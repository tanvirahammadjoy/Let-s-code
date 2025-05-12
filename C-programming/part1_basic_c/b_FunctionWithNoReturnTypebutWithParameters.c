// (b) Function with No Return Type but With Parameters
#include <stdio.h>

// This program demonstrates a function with no return type but with parameters.
// It takes two integers as parameters and prints their sum.
// Function Declaration (Prototype)
void add(int a, int b); // Function prototype

// Function Definition
void add(int a, int b) { // Function definition
    printf("The sum of %d and %d is: %d\n", a, b, a + b);
}

// Main Function
int main() {
    // Function Call
    add(5, 10); // Call the function with parameters
    return 0;
}
// Output:
// The sum of 5 and 10 is: 15
