#include <stdint.h> // for int8_t, int16_t, int32_t, int64_t
#include <stdio.h> // for printf and scanf functions, and NULL, EOF
// #include <stdbool.h> // for bool, true, false
// #include <string.h> // for string functions, such as strlen, strcpy, strcat, strcmp, etc.
// #include <ctype.h> // for character functions, such as isalpha, isdigit, isalnum, etc.
// #include <math.h> // for math functions, such as sqrt, pow, sin, cos, tan, etc.
// #include <time.h> // for time functions, such as time, clock, etc.

int main(){
    int age = 25; // Integer variable
    float pi = 3.14159; // Floating-point variable
    char initial = 'A'; // Character variable
    double salary = 50000.50; // Double-precision variable
    char name[] = "John Doe"; // String variable
    int isEmployed = 1; // Boolean variable (1 for true, 0 for false)
    printf("Age: %d\n", age);
    printf("Pi: %.5f\n", pi);
    printf("Initial: %c\n", initial);
    printf("Salary: %.2f\n", salary);
    printf("Name: %s\n", name);
    printf("Is Employed: %d\n", isEmployed);
    return 0;
}