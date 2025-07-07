#include <stdio.h>
#include <stdlib.h>

void bar(int y)
{
    int b = y + 1;
    printf("Address of local variable b: %p\n", (void *)&b);
    printf("Address of parameter y: %p\n", (void *)&y);
    printf("Address of function bar: %p\n", (void *)bar);
    // The stack frame for function bar is created here.
    // The local variable 'b' and parameter 'y' are stored in this stack frame
    // along with the return address to the caller function.
    printf("Function bar is called with y = %d\n", y);
    printf("Address of stack frame for bar: %p\n", (void *)&b);
}

void foo(int x)
{
    int a = x + 2;
    printf("Address of local variable a: %p\n", (void *)&a);
    printf("Address of parameter x: %p\n", (void *)&x);
    printf("Address of function foo: %p\n", (void *)foo);
    // The stack frame for function foo is created here.
    bar(a);
}

int main()
{
    foo(10);
    // The addresses of the local variables and function calls are not printed,
    // but you can visualize the stack frame structure.
    // The stack grows downwards, and each function call creates a new stack frame.
    printf("Function calls and local variables are managed on the stack.\n");
    printf("Each function call creates a new stack frame with its own local variables.\n");
    return 0;
}
