#include <stdio.h>

int main()
{
    int num = 4;
    int *p = &num; // p now contains the address of num

    printf("Value of num: %d\n", num);      // 5
    printf("Address of num: %p\n", &num);   // Memory address
    printf("Value of p: %p\n", p);          // Same address as above
    printf("Value pointed by p: %d\n", *p); // 5 (dereferencing)

    *p = 10;                               // Change value of num through pointer
    printf("New value of num: %d\n", num); // Now 10

    return 0;
}