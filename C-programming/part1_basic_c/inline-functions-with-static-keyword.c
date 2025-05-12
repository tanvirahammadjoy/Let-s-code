#include <stdio.h>
#include "function.h"

// Inline function with static keyword
static inline int sub(int a, int b)
{
    return a - b;
};

int main()
{

    //  Inline Functions (with static keyword)
    // C doesn't have true inline functions like C++, but small static functions may be inlined by the compiler as an optimization.
    // Example usage of inline function
    int c = 55, d = 10;
    int result1 = sub(c, d);                    // Call the function and store the result
    printf("The difference is: %d\n", result1); // Print the result

    // 📌 Why ? To suggest the compiler to optimize and avoid function call overhead.

    // Example usage of inline function
    // with static keyword
    // The static keyword restricts the visibility of the function to this translation unit
    // This means that the function cannot be called from other files, making it private to this file.
    // This is useful for functions that are only used within a single file and do not need to be exposed to other files.
    // The inline keyword suggests to the compiler to replace the function call with the function code itself,
    // Example usage of inline function with static keyword
    int a = 55,
        b = 10;
    int result2 = add(a, b);             // Call the function and store the result
    printf("The sum is: %d\n", result2); // Print the result

    return 0;
};
