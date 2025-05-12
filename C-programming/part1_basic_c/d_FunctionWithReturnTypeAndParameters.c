// (d) Function With Return Type and Parameters
#include <stdio.h>

// This program demonstrates a function with a return type and parameters.
// It takes two integers as parameters and returns their sum.
// Function Declaration (Prototype)
int add(int a, int b); // Function prototype

// Function Definition
int add(int a, int b) { // Function definition
    return a + b; // Return the sum of a and b
}

// Main Function
int main() {
    // Function Call
    int result = add(10, 10); // Call the function with parameters and store the result
    printf("The sum is: %d\n", result); // Print the result
    return 0;
}
// Output:
// The sum is: 15
// In this program, the function `add` has a return type of `int` and takes two parameters, `a` and `b`.
// It returns the sum of the two integers passed as arguments. The main function calls `add` with the values 5 and 10, and prints the result.
// This demonstrates how to create a function that takes parameters and returns a value.
// The function `add` is declared before its definition, and it is called in the `main` function.
// This is a simple example of how to use functions in C programming.
// The program is structured to show the function declaration, definition, and how to call it.
// The output of the program will be:
// The sum is: 15
