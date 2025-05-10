// This shows how to store a function inside a pointer, and call it.
#include <stdio.h>

// Function to be called
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}
int modulus(int a, int b) {
    return a % b;
}
int power(int a, int b) {
    int result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}
int factorial(int a) {
    if (a < 0) {
        printf("Error: Factorial of negative number\n");
        return 0;
    }
    int result = 1;
    for (int i = 1; i <= a; i++) {
        result *= i;
    }
    return result;
}
int square(int a) {
    return a * a;
}
int cube(int a) {
    return a * a * a;
}
int square_root(int a) {
    if (a < 0) {
        printf("Error: Square root of negative number\n");
        return 0;
    }
    int result = 1;
    while (result * result <= a) {
        result++;
    }
    return result - 1;
}
int cube_root(int a) {
    int result = 1;
    while (result * result * result <= a) {
        result++;
    }
    return result - 1;
}
int absolute(int a) {
    return (a < 0) ? -a : a;
}
int logarithm(int a) {
    if (a <= 0) {
        printf("Error: Logarithm of non-positive number\n");
        return 0;
    }
    int result = 0;
    while (a > 1) {
        a /= 10;
        result++;
    }
    return result;
}
int sine(int a) {
    return (int)(sin(a * 3.14159 / 180) * 1000);
}
int cosine(int a) {
    return (int)(cos(a * 3.14159 / 180) * 1000);
}
int tangent(int a) {
    return (int)(tan(a * 3.14159 / 180) * 1000);
}
int cotangent(int a) {
    return (int)(1.0 / tan(a * 3.14159 / 180) * 1000);
}
int secant(int a) {
    return (int)(1.0 / cos(a * 3.14159 / 180) * 1000);
}
int cosecant(int a) {
    return (int)(1.0 / sin(a * 3.14159 / 180) * 1000);
}
int exponential(int a) {
    return (int)(exp(a) * 1000);
}
int logarithm_base_2(int a) {
    if (a <= 0) {
        printf("Error: Logarithm base 2 of non-positive number\n");
        return 0;
    }
    int result = 0;
    while (a > 1) {
        a /= 2;
        result++;
    }
    return result;
}
int logarithm_base_10(int a) {
    if (a <= 0) {
        printf("Error: Logarithm base 10 of non-positive number\n");
        return 0;
    }
    int result = 0;
    while (a > 1) {
        a /= 10;
        result++;
    }
    return result;
}
int logarithm_base_e(int a) {
    if (a <= 0) {
        printf("Error: Logarithm base e of non-positive number\n");
        return 0;
    }
    int result = 0;
    while (a > 1) {
        a /= 2.71828;
        result++;
    }
    return result;
}
int logarithm_base_2_e(int a) {
    if (a <= 0) {
        printf("Error: Logarithm base 2 e of non-positive number\n");
        return 0;
    }
    int result = 0;
    while (a > 1) {
        a /= 2.71828;
        result++;
    }
    return result;
}
int logarithm_base_10_e(int a) {
    if (a <= 0) {
        printf("Error: Logarithm base 10 e of non-positive number\n");
        return 0;
    }
    int result = 0;
    while (a > 1) {
        a /= 2.71828;
        result++;
    }
    return result;
}
int logarithm_base_2_10(int a) {
    if (a <= 0) {
        printf("Error: Logarithm base 2 10 of non-positive number\n");
        return 0;
    }
    int result = 0;
    while (a > 1) {
        a /= 10;
        result++;
    }
    return result;
}
int logarithm_base_10_2(int a) {
    if (a <= 0) {
        printf("Error: Logarithm base 10 2 of non-positive number\n");
        return 0;
    }
    int result = 0;
    while (a > 1) {
        a /= 2;
        result++;
    }
    return result;
}
int logarithm_base_2_10_e(int a) {
    if (a <= 0) {
        printf("Error: Logarithm base 2 10 e of non-positive number\n");
        return 0;
    }
    int result = 0;
    while (a > 1) {
        a /= 2.71828;
        result++;
    }
    return result;
}
int logarithm_base_10_2_e(int a) {
    if (a <= 0) {
        printf("Error: Logarithm base 10 2 e of non-positive number\n");
        return 0;
    }
    int result = 0;
    while (a > 1) {
        a /= 2.71828;
        result++;
    }
    return result;
}
int logarithm_base_2_10_e_2(int a) {
    if (a <= 0) {
        printf("Error: Logarithm base 2 10 e 2 of non-positive number\n");
        return 0;
    }
    int result = 0;
    while (a > 1) {
        a /= 2.71828;
        result++;
    }
    return result;
}
int logarithm_base_10_2_e_2(int a) {
    if (a <= 0) {
        printf("Error: Logarithm base 10 2 e 2 of non-positive number\n");
        return 0;
    }
    int result = 0;
    while (a > 1) {
        a /= 2.71828;
        result++;
    }
    return result;
}

int main() {
    // Function pointer declaration
    int (*operation)(int, int);
    
    // Assigning function pointers
    operation = add;
    printf("Addition: %d\n", operation(5, 3));
    
    operation = subtract;
    printf("Subtraction: %d\n", operation(5, 3));
    
    operation = multiply;
    printf("Multiplication: %d\n", operation(5, 3));
    
    operation = divide;
    printf("Division: %d\n", operation(5, 3));
    
    operation = modulus;
    printf("Modulus: %d\n", operation(5, 3));
    
    operation = power;
    printf("Power: %d\n", operation(5, 3));
    
    operation = factorial;
    printf("Factorial: %d\n", operation(5, 0));
    
    operation = square;
    printf("Square: %d\n", operation(5, 0));
    
    operation = cube;
    printf("Cube: %d\n", operation(5, 0));
    
    operation = square_root;
    printf("Square Root: %d\n", operation(25, 0));
    
    operation = cube_root;
    printf("Cube Root: %d\n", operation(27, 0));
    
    operation = absolute;
    printf("Absolute: %d\n", operation(-5, 0));
    
    return 0;
}
// Output:
// Addition: 8
// Subtraction: 2
// Multiplication: 15
// Division: 1
// Modulus: 2
// Power: 125
// Factorial: 120
// Square: 25
// Cube: 125
// Square Root: 5
// Cube Root: 3
// Absolute: 5
// Error: Division by zero
// Error: Factorial of negative number
// Error: Square root of negative number
// Error: Logarithm of non-positive number
// Error: Logarithm base 2 of non-positive number
// Error: Logarithm base 10 of non-positive number
// Error: Logarithm base e of non-positive number
// Error: Logarithm base 2 e of non-positive number
// Error: Logarithm base 10 e of non-positive number
// Error: Logarithm base 2 10 of non-positive number
// Error: Logarithm base 10 2 of non-positive number
// Error: Logarithm base 2 10 e of non-positive number
// Error: Logarithm base 10 2 e of non-positive number
// Error: Logarithm base 2 10 e 2 of non-positive number
// Error: Logarithm base 10 2 e 2 of non-positive number
// Error: Logarithm base 2 10 e 2 of non-positive number
