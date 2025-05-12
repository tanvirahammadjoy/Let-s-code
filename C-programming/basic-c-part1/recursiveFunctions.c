// C++ standard library version: This project uses the C++17 standard library version
#include <stdarg.h>
#include <stdio.h>

// C standard library version: This project uses the C17 standard library version.
// Function prototypes
int factorial(int n);
int fibonacci(int n);
int sum(int count, ...);

int main()
{
    printf("Factorial of 5 = %d\n", factorial(5));
    printf("Fibonacci of 10 = %d\n", fibonacci(10));
    printf("Sum of 10 = %d\n", sum(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10));
    return 0;
}

int sum(int count, ...)
{
    va_list args;
    va_start(args, count);
    int total = 0;
    for (int i = 0; i < count; i++)
        total += va_arg(args, int);
    va_end(args);
    return total;
}

int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
// This code demonstrates the use of recursive functions in C.
// The `factorial` function calculates the factorial of a number using recursion.
// The `fibonacci` function calculates the nth Fibonacci number using recursion.
// The `sum` function calculates the sum of a variable number of arguments using the `stdarg.h` library.
// The `main` function calls these functions and prints the results.
// The `va_list`, `va_start`, `va_arg`, and `va_end` macros are used to handle variable-length argument lists.
// The `va_list` type is used to declare a variable that will hold the variable arguments.
// The `va_start` macro initializes the `va_list` variable with the last known fixed argument.
// The `va_arg` macro retrieves the next argument from the list, and the `va_end` macro cleans up the `va_list` variable.
// The `fibonacci` function uses recursion to calculate the nth Fibonacci number.
// The `factorial` function uses recursion to calculate the factorial of a number.
