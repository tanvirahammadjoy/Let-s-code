// ✅ 1. Function Declaration (Prototype)
// This tells the compiler about the function before it is used function prototype/declaration.
// It includes the function name, return type, and parameters.
// Example:
int add(int a, int b);

// 💡 Why?
// C reads code top to bottom. If you call a function before it’s defined, you must declare it first so the compiler knows how to call it.

// ✅ 2. Function Definition/Define the function body
int add(int a, int b) {
    return a + b;
}

// ✅ 3. Function Call
// int result = add(3, 5);  // Call
// int main() {
//     int a = 5, b = 10;
//     int result = add(a, b); // Call the function and store the result
//     printf("The sum is: %d\n", result); // Print the result
//     return 0;
// }

// Output:
// The sum is: 15
// In this program, the function `add` has a return type of `int` and takes two parameters, `a` and `b`.
// It returns the sum of the two integers passed as arguments. The main function calls `add` with the values 5 and 10, and prints the result.