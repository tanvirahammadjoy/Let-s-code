// ✅ 1. Function Declaration (Prototype)
// This tells the compiler about the function before it is used.
int add(int a, int b);

// 💡 Why?
// C reads code top to bottom. If you call a function before it’s defined, you must declare it first so the compiler knows how to call it.

// ✅ 2. Function Definition
int add(int a, int b) {
    return a + b;
}

// ✅ 3. Function Call
// int main() {
//     int result = add(2, 3);
//     return 0;
// }

// int result = add(3, 5);  // Call

