#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    char name[10];
};

int main()
{
    struct Student s1 = {101, "Tanvir"};
    struct Student *sp = &s1;

    printf("ID: %d\n", sp->id);
    printf("Name: %s\n", sp->name);
    printf("Address of s1: %p\n", (void *)&s1);
    printf("Address of sp->id: %p\n", (void *)&sp->id);
    printf("Address of sp->name: %p\n", (void *)&sp->name);
}
