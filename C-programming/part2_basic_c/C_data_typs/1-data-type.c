// basic data types in C
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <assert.h>
#include <stddef.h>

// let's practice the basic data types in C with some examples

// 1. Integer Type
//    - int: Integer type, used for whole numbers.
int a() {
    int x = 10; // Integer variable
    printf("Integer: %d\n", x);
    return 0;
}
// 2. Floating-Point Type
//    - float: Floating-point type, used for decimal numbers.
float b() {
    float y = 3.14; // Floating-point variable
    printf("Float: %.2f\n", y);
    return 0;
}
// 3. Double-Precision Floating-Point Type
//    - double: Double-precision floating-point type, used for larger decimal numbers.
double c() {
    double z = 3.141592653589793; // Double-precision variable
    printf("Double: %.15f\n", z);
    return 0;
}
// 4. Character Type
//    - char: Character type, used for single characters.
char d() {
    char ch = 'A'; // Character variable
    printf("Character: %c\n", ch);
    return 0;
}
// 5. Boolean Type
//    - bool: Boolean type, used for true/false values (requires <stdbool.h>).
bool e() {
    bool isTrue = true; // Boolean variable
    printf("Boolean: %d\n", isTrue);
    return 0;
}
// 6. String Type
//    - string: Not a built-in type in C, but can be represented as an array of characters (char array).
char f() {
    char str[] = "Hello, World!"; // String variable
    printf("String: %s\n", str);
    return 0;
}
// 7. Wide Character Type
//    - wchar_t: Wide character type, used for representing larger character sets (e.g., Unicode).
wchar_t g() {
    wchar_t wch = L'あ'; // Wide character variable
    printf("Wide Character: %lc\n", wch);
    return 0;
}
// 8. Complex Number Type
//    - complex: Complex number type, used for representing complex numbers (requires <complex.h>).
#include <complex.h>
complex double h() {
    complex double comp = 1.0 + 2.0 * I; // Complex number variable
    printf("Complex Number: %.2f + %.2fi\n", creal(comp), cimag(comp));
    return 0;
}
// 9. Enumeration Type
//    - enum: Enumeration type, used for defining a variable that can hold a set of predefined constants.
enum Color { RED, GREEN, BLUE };
enum Color i() {
    enum Color color = GREEN; // Enumeration variable
    printf("Enumeration: %d\n", color);
    return 0;
}
// 10. Structure Type
//     - struct: Structure type, used for grouping different data types together.
struct Person {
    char name[50];
    int age;
};
struct Person j() {
    struct Person person;
    strcpy(person.name, "John Doe");
    person.age = 30;
    printf("Structure: Name: %s, Age: %d\n", person.name, person.age);
    return 0;
}
// 11. Union Type
//     - union: Union type, used for defining a variable that can hold different types but only one at a time.
union Data {
    int i;
    float f;
    char str[20];
};
union Data k() {
    union Data data;
    data.i = 10; // Assigning integer value
    printf("Union: %d\n", data.i);
    data.f = 3.14; // Assigning float value
    printf("Union: %.2f\n", data.f);
    strcpy(data.str, "Hello"); // Assigning string value
    printf("Union: %s\n", data.str);
    return 0;
}
// 12. Typedef
//     - typedef: Used to create an alias for a data type.
typedef int Integer;
typedef float Float;
typedef char Character;
Integer l() {
    Integer num = 100; // Using typedef for int
    printf("Typedef Integer: %d\n", num);
    return 0;
}
Float m() {
    Float num = 3.14; // Using typedef for float
    printf("Typedef Float: %.2f\n", num);
    return 0;
}
Character n() {
    Character ch = 'A'; // Using typedef for char
    printf("Typedef Character: %c\n", ch);
    return 0;
}
// 13. Size_t
//     - size_t: Unsigned integer type used for representing the size of objects in bytes.
size_t o() {
    size_t size = sizeof(int); // Using size_t to get the size of int
    printf("Size of int: %zu bytes\n", size);
    return 0;
}
// 14. ssize_t
//     - ssize_t: Signed integer type used for representing the size of objects in bytes.
ssize_t p() {
    ssize_t ssize = -1; // Using ssize_t for signed size
    printf("ssize_t: %zd\n", ssize);
    return 0;
}
// 15. ptrdiff_t
//     - ptrdiff_t: Signed integer type used for pointer arithmetic.
ptrdiff_t q() {
    int arr[5] = {1, 2, 3, 4, 5};
    ptrdiff_t diff = &arr[4] - &arr[0]; // Using ptrdiff_t for pointer difference
    printf("Pointer difference: %td\n", diff);
    return 0;
}
// 16. uintptr_t
//     - uintptr_t: Unsigned integer type used for representing pointer values.
uintptr_t r() {
    int x = 10;
    uintptr_t ptr = (uintptr_t)&x; // Using uintptr_t for pointer value
    printf("Pointer value: %zu\n", ptr);
    return 0;
}
// 17. intmax_t
//     - intmax_t: Signed integer type used for representing the largest integer value.
intmax_t s() {
    intmax_t max = INTMAX_MAX; // Using intmax_t for maximum integer value
    printf("Maximum integer value: %jd\n", max);
    return 0;
}
// 18. uintmax_t
//     - uintmax_t: Unsigned integer type used for representing the largest unsigned integer value.
uintmax_t t() {
    uintmax_t max = UINTMAX_MAX; // Using uintmax_t for maximum unsigned integer value
    printf("Maximum unsigned integer value: %ju\n", max);
    return 0;
}
// 19. int8_t
//     - int8_t: Signed 8-bit integer type.
int8_t u() {
    int8_t num = -128; // Using int8_t for signed 8-bit integer
    printf("int8_t: %d\n", num);
    return 0;
}
// 20. uint8_t
//     - uint8_t: Unsigned 8-bit integer type.
uint8_t v() {
    uint8_t num = 255; // Using uint8_t for unsigned 8-bit integer
    printf("uint8_t: %u\n", num);
    return 0;
}
// 21. int16_t
//     - int16_t: Signed 16-bit integer type.
int16_t w() {
    int16_t num = -32768; // Using int16_t for signed 16-bit integer
    printf("int16_t: %d\n", num);
    return 0;
}
// 22. uint16_t
//     - uint16_t: Unsigned 16-bit integer type.
uint16_t x() {
    uint16_t num = 65535; // Using uint16_t for unsigned 16-bit integer
    printf("uint16_t: %u\n", num);
    return 0;
}
// 23. int32_t
//     - int32_t: Signed 32-bit integer type.
int32_t y() {
    int32_t num = -2147483648; // Using int32_t for signed 32-bit integer
    printf("int32_t: %d\n", num);
    return 0;
}
// 24. uint32_t
//     - uint32_t: Unsigned 32-bit integer type.
uint32_t z() {
    uint32_t num = 4294967295; // Using uint32_t for unsigned 32-bit integer
    printf("uint32_t: %u\n", num);
    return 0;
}
// 25. int64_t
//     - int64_t: Signed 64-bit integer type.
int64_t aa() {
    int64_t num = -9223372036854775807; // Using int64_t for signed 64-bit integer
    printf("int64_t: %lld\n", num);
    return 0;
}
// 26. uint64_t
//     - uint64_t: Unsigned 64-bit integer type.
uint64_t ab() {
    uint64_t num = 18446744073709551615; // Using uint64_t for unsigned 64-bit integer
    printf("uint64_t: %llu\n", num);
    return 0;
}
// 27. int_least8_t
//     - int_least8_t: Smallest signed integer type with at least 8 bits.
int_least8_t ac() {
    int_least8_t num = -128; // Using int_least8_t for smallest signed integer with at least 8 bits
    printf("int_least8_t: %d\n", num);
    return 0;
}
// 28. uint_least8_t
//     - uint_least8_t: Smallest unsigned integer type with at least 8 bits.
uint_least8_t ad() {
    uint_least8_t num = 255; // Using uint_least8_t for smallest unsigned integer with at least 8 bits
    printf("uint_least8_t: %u\n", num);
    return 0;
}
// 29. int_least16_t
//     - int_least16_t: Smallest signed integer type with at least 16 bits.
int_least16_t ae() {
    int_least16_t num = -32768; // Using int_least16_t for smallest signed integer with at least 16 bits
    printf("int_least16_t: %d\n", num);
    return 0;
}
// 30. uint_least16_t
//     - uint_least16_t: Smallest unsigned integer type with at least 16 bits.
uint_least16_t af() {
    uint_least16_t num = 65535; // Using uint_least16_t for smallest unsigned integer with at least 16 bits
    printf("uint_least16_t: %u\n", num);
    return 0;
}

// write a function to test the above functions
void test_data_types() {
    a();
    b();
    c();
    d();
    e();
    f();
    g();
    h();
    i();
    j();
    k();
    l();
    m();
    n();
    o();
    p();
    q();
    r();
    s();
    t();
    u();
    v();
    w();
    x();
    y();
    z();
    aa();
    ab();
    ac();
    ad();
    ae();
    af();
    ag();
}
// main function
int main() {
    test_data_types();
    return 0;
}
// end of the code
// end of the file
// end of the project
// end of the program
// end of the function
// end of the class
// end of the module
// end of the library
// end of the package
// end of the framework
// end of the system
// end of the application
// end of the code snippet
// end of the code example
// end of the code sample
// end of the code demo
// end of the code walkthrough
// end of the code tutorial
// end of the code exercise
// end of the code challenge
// end of the code project
// end of the code library
// end of the code framework
// end of the code tool