#include <stdio.h>
#include <stdlib.h>

int global_init = 10;
int global_uninit;

void func()
{
    int local_var = 20;
    int *heap_ptr = malloc(100);

    printf("Address of code   : %p\n", (void *)func);
    printf("Address of global : %p\n", (void *)&global_init);
    printf("Address of bss    : %p\n", (void *)&global_uninit);
    printf("Address of local  : %p\n", (void *)&local_var);
    printf("Address of heap   : %p\n", (void *)heap_ptr);
    free(heap_ptr);
}

int main()
{
    func();
    return 0;
}
