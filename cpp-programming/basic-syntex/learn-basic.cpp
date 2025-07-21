// let's learn some basic C++ syntax
#include <iostream>
using namespace std;

// variable declaration
int a = 10;
int b = 20;

// function declaration
int add(int x, int y) {
    return x + y;
}

// class declaration
class Person {
public:
    string name;
    int age;
    void sayHello() {
        cout << "Hello, my name is " << name << " and I am " << age << " years old." << endl;
    }
};

// namespace declaration
namespace MyNamespace {
    int x = 10;
    int y = 20;
}

// function prototype
void greet();

// function definition
void greet() {
    cout << "Welcome to C++ programming!" << endl;
}
// function overloading
int multiply(int x, int y) {
    return x * y;
}
double multiply(double x, double y) {
    return x * y;
}
// inline function
inline int square(int x) {
    return x * x;
}
// constant declaration
const double PI = 3.14159;

// global variable
int globalVar = 100;

// static variable
static int staticVar = 200;
// extern variable
extern int externVar;

#include <string>
using namespace std;

// function to demonstrate basic syntax
void demonstrateSyntax() {
    cout << "Demonstrating basic C++ syntax..." << endl;
    cout << "Variable a: " << a << endl;
    cout << "Variable b: " << b << endl;
    cout << "Sum of a and b: " << add(a, b) << endl;
    cout << "PI: " << PI << endl;
    cout << "Global variable: " << globalVar << endl;
    cout << "Static variable: " << staticVar << endl;
    cout << "Namespace MyNamespace x: " << MyNamespace::x << endl;
    cout << "Namespace MyNamespace y: " << MyNamespace::y << endl;
    greet();
    cout << "Square of 5: " << square(5) << endl;
    cout << "Multiplication of 3 and 4: " << multiply(3, 4) << endl;
    cout << "Multiplication of 2.5 and 4.5: " << multiply(2.5, 4.5) << endl;
    Person person;
    person.name = "Alice";
    person.age = 30;
    person.sayHello();
}

// function to demonstrate comments
void demonstrateComments() {
    // This is a single-line comment
    cout << "This function demonstrates comments in C++." << endl;
    /*    This is a multi-line comment
    It can span multiple lines
    and is useful for explaining complex logic or providing detailed information. */
    cout << "Comments are ignored by the compiler." << endl;
}

// function to demonstrate input/output
void demonstrateIO() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name); // using getline to read a full line including spaces
    cout << "Hello, " << name << "! Welcome to C++ programming." << endl;
}

// function to demonstrate control structures
void demonstrateControlStructures() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }
}

// function to demonstrate loops
void demonstrateLoops() {
    cout << "Counting from 1 to 5:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;
    cout << "Counting down from 5 to 1:" << endl;
    for (int i = 5; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;
    cout << "Using a while loop to count to 3:" << endl;
    int count = 1;
    while (count <= 3) {
        cout << count << " ";
        count++;
    }
    cout << endl;
}

// function to demonstrate arrays
void demonstrateArrays() {
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Sum of array elements: ";
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    cout << sum << endl;
}

// data structure demonstration
struct Point {
    int x;
    int y;
};
void demonstrateDataStructures() {
    Point p;
    p.x = 10;
    p.y = 20;
    cout << "Point coordinates: (" << p.x << ", " << p.y << ")" << endl;
}

// function to demonstrate data types
void demonstrateDataTypes() {
    int integerVar = 42;
    double doubleVar = 3.14;
    char charVar = 'A';
    bool boolVar = true;
    cout << "Integer variable: " << integerVar << endl;
    cout << "Double variable: " << doubleVar << endl;
    cout << "Character variable: " << charVar << endl;
    cout << "Boolean variable: " << boolVar << endl;
}

// main function
int main() {
    demonstrateSyntax();
    demonstrateArrays();
    demonstrateComments();
    demonstrateIO();
    demonstrateControlStructures();
    demonstrateLoops();
    demonstrateDataStructures();
    demonstrateDataTypes();
    // End of the C++ basic syntax demonstration
    cout << "End of C++ basic syntax demonstration." << endl;
    // return 0 to indicate successful execution
    cout << "I am learning C++!" << endl;
    cout << "This program uses the C++17 standard version." << endl;
    cout << "To compile, use a C++ compiler with the C++17 flag, e.g.," << endl;
    cout << "g++ -std=c++17 learn-basic.cpp -o learn-basic" << endl;
    cout << "Thank you for learning C++ with us!" << endl;
    cout << "Goodbye!" << endl;
    // return 0 to indicate successful execution
    cout << "This program demonstrates basic syntax and structure of a C++ program." << endl;
    cout << "It includes variable declarations, function definitions, class usage, and more." << endl;
    cout << "The program uses the C++17 standard version." << endl;
    cout << "To compile, use a C++ compiler with the C++17 flag, e.g.," << endl;
    cout << "g++ -std=c++17 learn-basic.cpp -o learn-basic" << endl;
    cout << "This program is a simple demonstration of C++ syntax." << endl;
    cout << "It includes comments to explain the code and its purpose." << endl;
    cout << "The program outputs various messages to the console." << endl;
    cout << "It also demonstrates basic input/output operations." << endl;
    cout << "The program uses the iostream library for input/output operations." << endl;
    cout << "It uses the std namespace to avoid prefixing standard library names with 'std::'." << endl;
    cout << "The main function is the entry point of the program." << endl;
    cout << "The program outputs two lines to the console using cout and endl." << endl;
    cout << "The program returns 0 to indicate successful execution." << endl;
    cout << "Comments are included to explain the code and its purpose." << endl;
    return 0;
}

// this is a comment
/* 
    this is a multi-line comment
    this is a multi-line comment
    this is a multi-line comment
*/

// This program prints "Hello World!" and "I am learning C++" to the console
// It demonstrates basic syntax and structure of a C++ program
// The program uses the C++17 standard version
// To compile, use a C++ compiler with the C++17 flag, e.g.
// g++ -std=c++17 learn-basic.cpp -o learn-basic
// The program includes the iostream library for input/output operations
// It uses the std namespace to avoid prefixing standard library names with "std::"
// The main function is the entry point of the program
// The program outputs two lines to the console using cout and endl
// The program returns 0 to indicate successful execution
// Comments are included to explain the code and its purpose