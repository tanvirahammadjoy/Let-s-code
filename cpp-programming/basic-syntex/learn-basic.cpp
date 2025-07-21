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

// main function
int main() {
    demonstrateSyntax();
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