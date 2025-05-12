#include <stdio.h>
#include "io.h"

void showMenu() {
    printf("=== Calculator Menu ===\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("=======================\n");
}

void printResult(float result) {
    printf("Result: %.2f\n", result);
}
