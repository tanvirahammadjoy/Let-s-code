#include <stdio.h>
#include <stdlib.h>

int globalVar = 42;

int main()
{
    int localVar = 99;
    int *heapVar = malloc(sizeof(int));
    *heapVar = 123;

    printf("Addresses:\n");
    printf("  main()     : %p\n", main);
    printf("  globalVar  : %p\n", &globalVar);
    printf("  localVar   : %p\n", &localVar);
    printf("  heapVar    : %p\n", heapVar);

    getchar(); // Pause so we can inspect the memory

    free(heapVar);
    return 0;
}
