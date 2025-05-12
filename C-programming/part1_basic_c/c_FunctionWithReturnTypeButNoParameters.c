// (c) Function With Return Type but No Parameters
#include <stdio.h>

// This program demonstrates a function with a return type but no parameters.
// It returns the sum of two predefined integers.
// Function Declaration (Prototype)
int add(); // Function prototype

// Function Definition
int add() { // Function definition
    int a = 5; // Predefined integer
    int b = 10; // Predefined integer
    return a + b; // Return the sum of a and b
}

// Main Function
int main() {
    // Function Call
    int result = add(); // Call the function and store the result
    printf("The sum is: %d\n", result); // Print the result
    return 0;
}

// Output:
// The sum is: 15
// In this program, the function `add` has a return type of `int` and does not take any parameters.
// It returns the sum of two predefined integers, `a` and `b`. The main function calls `add` and prints the result.
// This demonstrates how to create a function that returns a value without taking any input parameters.
// The function `add` is declared before its definition, and it is called in the `main` function.
// This is a simple example of how to use functions in C programming.
// The program is structured to show the function declaration, definition, and how to call it.
// The output of the program will be:
// The sum is: 15
