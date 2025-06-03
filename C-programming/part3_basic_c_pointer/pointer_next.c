#include <stdio.h>

int main()
{
    // 1. Pointer Arithmetic
    // Pointers can be incremented, decremented, and compared :
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // ptr now points to the first element of arr

    printf("Value of first element: %d\n", *ptr);  // 10
    printf("Address of first element: %p\n", ptr); // Address of the first element

    ptr++;                                          // Move the pointer to the next element
    printf("Value of second element: %d\n", *ptr);  // 20
    printf("Address of second element: %p\n", ptr); // Address of the second element

    // 2. Pointers and Arrays
    // Arrays and pointers are closely related :
    int arr[3] = {1, 2, 3};
    printf("%d", *(arr + 1)); // Outputs 2 (same as arr[1])

    return 0;
}