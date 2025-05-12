// Variadic Functions(functions with variable arguments)
// Like printf(),
// you can make functions accept unknown number of arguments using<stdarg.h>.
#include <stdio.h>
#include <stdarg.h>

int sum1(int count, ...)
{
    va_list args;
    va_start(args, count);
    int total = 0;
    for (int i = 0; i < count; i++)
        total += va_arg(args, int);
    va_end(args);
    return total;
}

// 📌 Why ? Use when you don't know how many arguments will be passed (e.g., printf() style).
// 📌 How ? Use va_start(), va_arg(), and va_end().

// sum() can accept any number of integers
int sum2(int count, ...)
{
    va_list args;
    va_start(args, count);

    int total = 0;
    for (int i = 0; i < count; i++)
    {
        total += va_arg(args, int); // Get next argument
    }

    va_end(args);
    return total;
}

int main()
{
    printf("Sum 1: %d\n", sum1(3, 10, 20, 30));    // 60
    printf("Sum 2: %d\n", sum2(5, 1, 2, 3, 4, 5)); // 15
    return 0;
}
// Output:
// Sum 1: 60
// Sum 2: 15

// 📌 Note:
// This code demonstrates the use of variadic functions in C.
// The `sum` function accepts a variable number of integer arguments and calculates their sum.
// The `va_list`, `va_start`, `va_arg`, and `va_end` macros are used to handle variable-length argument lists.
// The `va_list` type is used to declare a variable that will hold the variable arguments.
// The `va_start` macro initializes the `va_list` variable with the last known fixed argument.
// The `va_arg` macro retrieves the next argument from the list, and the `va_end` macro cleans up the `va_list` variable.
// The `main` function calls the `sum` function with different numbers of arguments and prints the results.
// The `sum` function can accept any number of integers, and the results are printed to the console.
// The `printf` function is used to format and print the output.
// The `sum` function is called with different numbers of arguments, demonstrating its flexibility.
