#include <stdio.h>
#include <stdint.h>
int main()
{

    int x = 5;
    // Getting the memory address:
    printf("Address of x: %p\n", (void *)&x);
    // size_t is an unsigned integer type used for representing the size of objects in bytes
    printf("Size of x: %lu bytes\n", sizeof(x));

    // Direct memory access:
    // int *ptr = &x;
    // *ptr = 10; // Changes x's value through its address

    int num = 12345678;
    printf("Variable lives at: %p\n", (void *)&num);

    unsigned char *byte_ptr = (unsigned char *)&num;
    for (int i = 0; i < sizeof(num); i++)
    {
        printf("Address: %p | Value: 0x%02x\n",
               (void *)(byte_ptr + i),
               byte_ptr[i]);
    }

    int y = 0x12345678;
    int z = y + 1;
    printf("y: %x, z: %x\n", y, z);
    // address bus of y and z are the same
    printf("Address of y: %p, Address of z: %p\n", (void *)&y, (void *)&z);
    // The address of y and z are the same, but their values are different.
    printf("Value of y: %x, Value of z: %x\n", y, z);
    // The value of y and z are different, but their addresses are the same.
    printf("Value of y: %d, Value of z: %d\n", y, z);
    // the varable size of y and z are the same, but their values are different.
    printf("Size of y: %lu, Size of z: %lu\n", sizeof(y), sizeof(z));

    double a = 3.14;
    printf("Address of a: %p\n", (void *)&a);
    printf("Size of a: %lu bytes\n", sizeof(a));

    // int arr[] = {1, 2, 3, 4, 5, 3.14, "hello", 0x12345678};
    typedef struct
    {
        enum
        {
            INT,
            DOUBLE,
            STRING
        } type;
        union
        {
            int i;
            double d;
            char *s;
        } value;
    } Variant;

    Variant arr[] = {
        {.type = INT, .value.i = 1},
        {.type = INT, .value.i = 2},
        {.type = DOUBLE, .value.d = 3.14},
        {.type = STRING, .value.s = "hello"}};

    printf("Address of arr: %p\n", (void *)&arr);
    printf("Size of arr: %lu bytes\n", sizeof(arr));

    return 0;
}