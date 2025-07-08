// The free space exists to allow the stack and heap to grow toward each other as needed.
// If a program uses a lot of
// recursion(deep function calls) → stack grows.
// If a program does many malloc() allocations → heap grows.
// If they collide, it causes a stack overflow or heap overflow.
#include <stdio.h>
#include <stdlib.h>

int global_var = 100;

int main()
{
    int local_var = 10;        // On Stack
    int *heap_var = malloc(4); // On Heap
    *heap_var = 5;

    printf("&global_var: %p\n", &global_var);
    printf("&local_var: %p\n", &local_var);
    printf(" heap_var: %p\n", heap_var);

    free(heap_var);
}
// Note: The addresses printed will vary each time you run the program due to ASLR (Address Space Layout Randomization).
// The global variable is stored in the data segment, the local variable is on the stack,
// and the heap variable is allocated on the heap.
// The addresses of these variables will be different each time you run the program due to the nature
// of memory allocation and the operating system's memory management.
// To see the actual memory layout, compile and run this code on your system.
// Compile with: gcc -o stack_overflow_or_heap_overflow stack-overflow-or-heap-overflow.c
// Run with: ./stack_overflow_or_heap_overflow