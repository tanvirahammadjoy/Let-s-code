#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};

int main()
{
    struct Employee *e = malloc(sizeof(struct Employee));
    e->id = 1001;
    strcpy(e->name, "Tanvir");
    e->salary = 5000.0;

    printf("ID: %d\n", e->id);
    printf("Name: %s\n", e->name);
    printf("Salary: %.2f\n", e->salary);

    free(e);
    return 0;
}
