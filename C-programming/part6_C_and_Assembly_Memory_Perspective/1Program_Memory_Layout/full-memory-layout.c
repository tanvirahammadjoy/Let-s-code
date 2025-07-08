#include <stdio.h>
#include <stdlib.h>

int global_var = 5;

int main()
{
    int local_var = 10;        // Stored on Stack
    int *heap_var = malloc(4); // Allocated on Heap

    printf("Address of global_var: %p\n", &global_var); // Global area
    printf("Address of local_var: %p\n", &local_var);   // Stack
    printf("Address of heap_var: %p\n", heap_var);      // Heap (value is pointer to heap)
}
// Note: The code above demonstrates the memory layout of a simple C program.
// The addresses printed will vary each time you run the program due to ASLR (Address Space Layout Randomization).
// The global variable is stored in the data segment, the local variable is on the stack, and the heap variable is allocated on the heap.
// The addresses of these variables will be different each time you run the program due to the nature of memory allocation and the operating system's memory management.
// To see the actual memory layout, compile and run this code on your system.
// Compile with: gcc -o full_memory_layout full-memory-layout.c
// Run with: ./full_memory_layout
// You can also use tools like `gdb` to inspect the memory layout in more detail.
// For example, you can run `gdb ./full_memory_layout`, then use the command `run` to execute the program, and `info locals` to see the local variables and their addresses.
// This will give you a better understanding of how the memory is organized for this program.