#include <stdint.h> // for int8_t, int16_t, int32_t, int64_t
#include <stdio.h>  // for printf and scanf functions, and NULL, EOF
// #include <stdbool.h> // for bool, true, false
// #include <string.h> // for string functions, such as strlen, strcpy, strcat, strcmp, etc.
// #include <ctype.h> // for character functions, such as isalpha, isdigit, isalnum, etc.
// #include <math.h> // for math functions, such as sqrt, pow, sin, cos, tan, etc.
// #include <time.h> // for time functions, such as time, clock, etc.
// #include <stdlib.h> // for general purpose functions, such as malloc, free, etc.
#include <sys/types.h> // for size_t, ssize_t
#include <inttypes.h>  // for int8_t, int16_t, int32_t, int64_t

// variables in C
void variables()
{
    int a = 10;                           // Integer variable
    short b = 20;                         // Short integer variable
    long c = 30;                          // Long integer variable
    long long d = 40;                     // Long long integer variable
    float e = 3.14;                       // Floating-point variable
    double f = 3.14159;                   // Double-precision floating-point variable
    char g = 'A';                         // Character variable
    char h[] = "Hello";                   // String variable
    unsigned int i = 50;                  // Unsigned integer variable
    unsigned short j = 60;                // Unsigned short integer variable
    unsigned long k = 70;                 // Unsigned long integer variable
    unsigned long long l = 80;            // Unsigned long long integer variable
    signed int m = -90;                   // Signed integer variable
    signed short n = -100;                // Signed short integer variable
    signed long o = -110;                 // Signed long integer variable
    signed long long p = -120;            // Signed long long integer variable
    int8_t q = 127;                       // 8-bit signed integer variable
    int16_t r = 32767;                    // 16-bit signed integer variable
    int32_t s = 2147483647;               // 32-bit signed integer variable
    int64_t t = 9223372036854775807;      // 64-bit signed integer variable
    uint8_t u = 255;                      // 8-bit unsigned integer variable
    uint16_t v = 65535;                   // 16-bit unsigned integer variable
    uint32_t w = 4294967295;              // 32-bit unsigned integer variable
    uint64_t x = 18446744073709551615ULL; // 64-bit unsigned integer variable
    size_t y = sizeof(int);               // Size of integer variable
    ssize_t z = -1;                       // Signed size variable

    printf("Integer: %d\n", a);
    printf("Short: %d\n", b);
    printf("Long: %ld\n", c);
    printf("Long Long: %lld\n", d);
    printf("Float: %.2f\n", e);
    printf("Double: %.5f\n", f);
    printf("Character: %c\n", g);
    printf("String: %s\n", h);
    printf("Unsigned Integer: %u\n", i);
    printf("Unsigned Short: %u\n", j);
    printf("Unsigned Long: %lu\n", k);
    printf("Unsigned Long Long: %llu\n", l);
    printf("Signed Integer: %d\n", m);
    printf("Signed Short: %d\n", n);
    printf("Signed Long: %ld\n", o);
    printf("Signed Long Long: %lld\n", p);
    printf("8-bit Signed Integer: %d\n", q);
    printf("16-bit Signed Integer: %d\n", r);
    printf("32-bit Signed Integer: %d\n", s);
    printf("64-bit Signed Integer: %" PRId64 "\n", t); // Use PRId64 for 64-bit signed integer
    // Note: The format specifiers for printf are:
    // %d for int, %ld for long, %lld for long long, %.2f for float with 2 decimal places,
    printf("8-bit Unsigned Integer: %u\n", u);
    printf("16-bit Unsigned Integer: %u\n", v);
    printf("32-bit Unsigned Integer: %u\n", w);
    printf("64-bit Unsigned Integer: %" PRIu64 "\n", x); // Use PRIu64 for 64-bit unsigned integer
    // Note: The format specifiers for printf are:
    // %d for int, %ld for long, %lld for long long, %.2f for float with 2 decimal places,
    printf("Size of Integer: %zu\n", y);
    printf("Signed Size: %zd\n", z);
    // Note: The format specifiers for printf are:
    // %d for int, %ld for long, %lld for long long, %.2f for float with 2 decimal places,
    // %.5f for double with 5 decimal places, %c for char, %s for string,
    // %u for unsigned int, %lu for unsigned long, %llu for unsigned long long,
    // %zu for size_t, and %zd for ssize_t.
    // The format specifiers for scanf are:
    // %d for int, %ld for long, %lld for long long, %f for float,
    // %lf for double, %c for char, %s for string,
}

#include <stdlib.h> // for malloc and free functions
char* getString()
{
    int length = 20; // Length of the string
    char* str = (char*)malloc(length * sizeof(char)); // Allocate memory for the string
    if (str == NULL)
    {
        printf("Memory allocation failed\n");
        return NULL; // Return NULL if memory allocation fails
    }
    // Initialize the string
    for (int i = 0; i < length - 1; i++)
    {
        str[i] = 'A' + (i % 26); // Fill the string with characters A-Z
    }
    str[length - 1] = '\0'; // Null-terminate the string
    // Return the string
    // Note: In C, strings are represented as arrays of characters
    // and are null-terminated, so we need to allocate memory for the string
    // and return a pointer to the first character of the string.
    // The caller is responsible for freeing the allocated memory.
    // The caller should free the memory allocated for the string
    // when it is no longer needed to avoid memory leaks.
    // The caller should also check if the returned pointer is NULL
    // before using it to avoid dereferencing a NULL pointer.

    // This function returns a string
    // Note: In C, strings are represented as arrays of characters
    return str; // Return the pointer to the string
}

char character()
{
    char ch = 'A'; // Character variable
    // char str1 = "ab"; // it will give a warning in the output: character constant too long for its type
    char str[] = "Hello"; // String variable
    char* ptr = &ch;
    printf("Character1: %c\n", ch);
    // printf("Character2: %d\n", str1);
    printf("String: %s\n", str);
    printf("Pointer: %p\n", ptr);
    return ch;     // Return the character
}

int main()
{
    // Call the variables function
    variables();
    // Call the getString function
    char* str = getString();
    printf("String from function: %s\n", str);
    // Free the allocated memory for the string
    free(str);
    // Call the character function
    char ch = character();
    printf("Character from function: %c\n", ch);
    // Example usage of different data types
    // Integer, float, char, double, string, and boolean variables
    // Note: C does not have a built-in boolean type, but we can use int (0 for false, non-zero for true)
    // Example variables
    int age = 25;             // Integer variable
    float pi = 3.14159;       // Floating-point variable
    char initial = 'A';       // Character variable
    double salary = 50000.50; // Double-precision variable
    char name[] = "John Doe"; // String variable
    int isEmployed = 1;       // Boolean variable (1 for true, 0 for false)
    printf("Age: %d\n", age);
    printf("Pi: %.5f\n", pi);
    printf("Initial: %c\n", initial);
    printf("Salary: %.2f\n", salary);
    printf("Name: %s\n", name);
    printf("Is Employed: %d\n", isEmployed);
    return 0;
}

// 🧩 How to Choose the Return Type ? Ask yourself :
// Question What to Return
// Do I want to give back a value(number, character, etc.)?    =>   Use the correct type: int, float, char, etc.
// Do I just want to print or update something, and don't need to return anything?  => 	Use void 
// Do I want to return a true / false result ? Use bool from<stdbool.h> Do I want to return an array or string?  =>  Use pointer types like char*
// Do I want to return a structure?  =>  Use struct type

// Do I want to return a pointer?  =>  Use the correct pointer type: int*, float*, char*, etc.
// Do I want to return a function pointer?  =>  Use the correct function pointer type: int (*)(int, int), etc.
// Do I want to return a complex number?  =>  Use complex type from<complex.h>
// Do I want to return a variable-length argument list?  =>  Use va_list type from<stdarg.h>
// Do I want to return a file pointer?  =>  Use FILE* type from<stdio.h>
// Do I want to return a signal handler?  =>  Use signal handler type from<signal.h>
// Do I want to return a thread ID?  =>  Use pthread_t type from<pthread.h>
// Do I want to return a mutex?  =>  Use pthread_mutex_t type from<pthread.h>
// Do I want to return a condition variable?  =>  Use pthread_cond_t type from<pthread.h>
// Do I want to return a semaphore?  =>  Use sem_t type from<semaphore.h>
// Do I want to return a timer?  =>  Use timer_t type from<time.h>
// Do I want to return a file descriptor?  =>  Use int type
// Do I want to return a socket descriptor?  =>  Use int type
// Do I want to return a signal set?  =>  Use sigset_t type from<signal.h>
// Do I want to return a file offset?  =>  Use off_t type from<sys/types.h>
// Do I want to return a file size?  =>  Use size_t type from<sys/types.h>
// Do I want to return a pointer to a function?  =>  Use the correct function pointer type: int (*)(int, int), etc.
// Do I want to return a pointer to a structure?  =>  Use the correct struct pointer type: struct mystruct*, etc.
// Do I want to return a pointer to a union?  =>  Use the correct union pointer type: union myunion*, etc.
// Do I want to return a pointer to a class?  =>  Use the correct class pointer type: class myclass*, etc.
// Do I want to return a pointer to an object?  =>  Use the correct object pointer type: object myobject*, etc.
// Do I want to return a pointer to a template?  =>  Use the correct template pointer type: template mytemplate*, etc.
// Do I want to return a pointer to a type?  =>  Use the correct type pointer type: type mytype*, etc.
// Do I want to return a pointer to a trait?  =>  Use the correct trait pointer type: trait mytrait*, etc.
// Do I want to return a pointer to an attribute?  =>  Use the correct attribute pointer type: attribute myattribute*, etc.
// Do I want to return a pointer to a property?  =>  Use the correct property pointer type: property myproperty*, etc.
// Do I want to return a pointer to an annotation?  =>  Use the correct annotation pointer type: annotation myannotation*, etc.
// Do I want to return a pointer to a modifier?  =>  Use the correct modifier pointer type: modifier mymodifier*, etc.
// Do I want to return a pointer to a qualifier?  =>  Use the correct qualifier pointer type: qualifier myqualifier*, etc.
// Do I want to return a pointer to a specifier?  =>  Use the correct specifier pointer type: specifier myspecifier*, etc.
// Do I want to return a pointer to a decorator?  =>  Use the correct decorator pointer type: decorator mydecorator*, etc.
// Do I want to return a pointer to a macro?  =>  Use the correct macro pointer type: macro mymacro*, etc.
// Do I want to return a pointer to a constant?  =>  Use the correct constant pointer type: constant myconstant*, etc.
// Do I want to return a pointer to a variable?  =>  Use the correct variable pointer type: variable myvariable*, etc.
// Do I want to return a pointer to a function object?  =>  Use the correct function object pointer type: functionobject myfunctionobject*, etc.
// Do I want to return a pointer to a function trait?  =>  Use the correct function trait pointer type: functiontrait myfunctiontrait*, etc.
