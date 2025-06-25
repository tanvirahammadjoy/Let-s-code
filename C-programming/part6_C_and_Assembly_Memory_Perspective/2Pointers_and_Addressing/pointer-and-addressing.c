#include <stdio.h>

int main()
{
    int a = 5;
    int *p = &a;
    int **pp = &p;

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value of p: %p\n", p);
    printf("Value at p: %d\n", *p);
    printf("Value of pp: %p\n", pp);
    printf("Value at pp: %p\n", *pp);
    printf("Value at *pp: %d\n", **pp);
    return 0;
}
