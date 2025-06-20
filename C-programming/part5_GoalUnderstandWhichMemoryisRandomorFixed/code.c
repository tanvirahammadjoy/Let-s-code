#include <stdio.h>
#include <stdlib.h>

int globalVar = 100; // Goes to .data (fixed address)

int main()
{
    int localVar = 200;                 // Goes to stack (predictable)
    int *heapVar = malloc(sizeof(int)); // Goes to heap (dynamic)
    *heapVar = 300;

    printf("Address of globalVar: %p\n", &globalVar);
    printf("Address of localVar: %p\n", &localVar);
    printf("Address of heapVar : %p\n", heapVar);

    free(heapVar);
    return 0;
}
