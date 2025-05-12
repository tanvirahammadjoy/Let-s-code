
// C++ standard library version: This project uses the C++17 standard library version.
// C++ standard library version: This project uses the C++17 standard library version.
#include <stdio.h>
// C standard library version: This project uses the C17 standard library version.

void outer()
{
    void inner()
    {
        printf("Hello!\n");
        // inner() is a nested function
    }
    // inner() is defined inside outer()
    // and can be called from here
    // This is a non-standard feature and is not supported by all C compilers.
    // The code is not portable and should be avoided in favor of standard C practices.
    // The inner function is not visible outside of outer()
    // and cannot be called from main();
    inner();
}
int main()
{
    outer();
    // inner(); // Error: inner() is not visible here
    return 0;
}
// This code demonstrates the concept of nested functions in C.
// The function `inner()` is defined inside the function `outer()`, and it can be called from within `outer()`.
// However, `inner()` is not visible outside of `outer()`, so trying to call it in `main()` results in an error.
// This is a non-standard feature and is not supported by all C compilers.
// The code is not portable and should be avoided in favor of standard C practices.
