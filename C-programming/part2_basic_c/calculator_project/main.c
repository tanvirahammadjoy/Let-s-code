#include <stdio.h>
#include "calculator.h"
#include "io.h"

int main() {
    int choice, a, b;
    float result;

    showMenu();
    printf("Enter choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (choice) {
        case 1:
            result = add(a, b);
            break;
        case 2:
            result = subtract(a, b);
            break;
        case 3:
            result = multiply(a, b);
            break;
        case 4:
            result = divide(a, b);
            break;
        default:
            printf("Invalid choice.\n");
            return 1;
    }

    printResult(result);
    return 0;
}
