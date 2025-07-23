// basic syntax of javascript
console.log("Hello World");

// This is a single line comment
/* This is a 
   multi-line comment
   that can span multiple lines */
console.log("This is a comment example"); // This will log a message to the console

// Variables
let name = "John"; // Using let to declare a variable
const age = 30; // Using const to declare a constant variable
var isStudent = true; // Using var to declare a variable (not recommended in modern JS)
console.log(name, age, isStudent);
// Data Types
let number = 42; // Number type
let string = "Hello"; // String type
let boolean = false; // Boolean type
let object = { key: "value" }; // Object type
let array = [1, 2, 3]; // Array type
let nullValue = null; // Null type
let undefinedValue; // Undefined type

console.log(typeof number, typeof string, typeof boolean, typeof object, typeof array, typeof nullValue, typeof undefinedValue);

// Operators
let a = 10;
let b = 5;
console.log(a + b); // Addition
console.log(a - b); // Subtraction
console.log(a * b); // Multiplication
console.log(a / b); // Division
console.log(a % b); // Modulus
console.log(a > b); // Greater than
console.log(a < b); // Less than
console.log(a === b); // Strict equality
console.log(a !== b); // Strict inequality
console.log(a && b); // Logical AND
console.log(a || b); // Logical OR
console.log(!a); // Logical NOT

// Control Structures
if (a > b) {
    console.log("a is greater than b");
}
else if (a < b) {
    console.log("a is less than b");
}
else {
    console.log("a is equal to b");
}

// Loops
for (let i = 0; i < 5; i++) {
    console.log("Iteration:", i);
}

while (a > 0) {
    console.log("a is:", a);
    a--; // Decrementing a
}

do {
    console.log("This will run at least once");
} while (false); // This will not run again since the condition is false

// Functions
function greet(name) {
    return "Hello, " + name + "!";
}
console.log(greet("Alice")); // Calling the function with an argument

// Arrow Functions
const add = (x, y) => x + y;
console.log(add(5, 3)); // Using an arrow function to add two numbers

// Classes
class Person {
    constructor(name, age) {
        this.name = name;
        this.age = age;
    }

    introduce() {
        return `My name is ${this.name} and I am ${this.age} years old.`;
    }
}
const person = new Person("Bob", 25);
console.log(person.introduce()); // Calling a method of the class

// Error Handling
try {
    let result = a / 0; // This will not throw an error, but let's simulate an error
    if (result === Infinity) {
        throw new Error("Division by zero is not allowed");
    }
} catch (error) {
    console.error("Error caught:", error.message); // Catching and logging the error
} finally {
    console.log("This will always run, regardless of an error");
}

// JSON Example
let jsonString = '{"name": "Alice", "age": 25, "isStudent": false}';
let jsonObject = JSON.parse(jsonString); // Parsing JSON string to an object
console.log(jsonObject.name, jsonObject.age, jsonObject.isStudent); // Accessing properties
let newJsonString = JSON.stringify(jsonObject); // Converting object back to JSON string
console.log(newJsonString); // Logging the JSON string

// Template Literals
let greeting = `Hello, ${name}! You are ${age} years old.`;
console.log(greeting); // Using template literals for string interpolation

// Spread and Rest Operators
let numbers = [1, 2, 3];
let moreNumbers = [...numbers, 4, 5]; // Spread operator to create a new array
console.log(moreNumbers); // Logging the new array  
let [first, second, ...rest] = numbers; // Rest operator to extract elements from an array
console.log(first, second, rest); // Logging the extracted elements

// Destructuring
let personInfo = { name: "Charlie", age: 28 };
let { name: personName, age: personAge } = personInfo; // Destructuring an object
console.log(personName, personAge); // Logging the destructured values

// Set and Map
let mySet = new Set([1, 2, 3, 4, 5]);
mySet.add(6); // Adding an element to the set
console.log(mySet.has(3)); // Checking if an element exists in the set
let myMap = new Map();
myMap.set("key1", "value1"); // Setting a key-value pair in the map
myMap.set("key2", "value2");
console.log(myMap.get("key1")); // Getting a value by key
console.log(myMap.has("key2")); // Checking if a key exists in the map

// Promises
let myPromise = new Promise((resolve, reject) => {
    setTimeout(() => {
        resolve("Promise resolved");
    }, 2000);
});
myPromise.then((result) => {
    console.log(result); // Logging the resolved value
});

// Async/Await
async function asyncFunction() {
    try {
        let result = await myPromise; // Waiting for the promise to resolve
        console.log(result); // Logging the resolved value
    } catch (error) {
        console.error("Error in async function:", error);
    }
}
asyncFunction(); // Calling the async function

// Modules (ES6)
// Assuming this code is in a module file, you can export and import functions or variables.
export function moduleFunction() {
    return "This is a module function";
}
import { moduleFunction } from './path-to-module-file.js'; // Importing the module function
console.log(moduleFunction()); // Calling the imported function
// Note: The above import statement will only work in a module environment.
// End of basic JavaScript syntax example
// This code covers basic syntax, data types, operators, control structures, functions, classes,
// error handling, JSON, template literals, spread/rest operators, destructuring, sets/maps,
// promises, async/await, and modules in JavaScript.
// Make sure to run this code in an environment that supports ES6 features, such as a
// modern web browser or Node.js.
// You can also use tools like Babel to transpile this code for older environments.
// Remember to test each section individually to understand how they work.
// Happy coding!

// Note: The above code is a comprehensive example of basic JavaScript syntax and features.
// It is designed to be run in a JavaScript environment that supports ES6 features.
// You can copy and paste this code into a JavaScript file and run it in your browser
// or Node.js to see the output in the console.
// Make sure to adjust the import paths if you are using modules in a different directory structure.
// This code serves as a good starting point for understanding the basic syntax and features of JavaScript.
// You can expand upon it by adding more complex examples or exploring additional JavaScript features.
// This code is intended for educational purposes and to help you get familiar with JavaScript syntax.
// Feel free to modify and experiment with the code to enhance your understanding of JavaScript.
// You can also refer to the official JavaScript documentation for more in-depth explanations and examples.
// For more advanced topics, consider exploring asynchronous programming, event handling,
// and working with APIs in JavaScript.
// Remember to practice regularly and build small projects to solidify your understanding of JavaScript.
// Happy coding and enjoy your journey into the world of JavaScript!
// This code is a basic introduction to JavaScript syntax and features.
// It is not exhaustive but covers fundamental concepts that are essential for beginners.
// You can use this code as a reference or starting point for your JavaScript learning journey.
// Make sure to explore each section and understand how they work.
// You can also find additional resources and tutorials online to further enhance your JavaScript skills.
// This code is structured to provide a clear understanding of basic JavaScript syntax and features.
// It is designed to be easy to read and understand for beginners.
// Feel free to modify and experiment with the code to see how different features work.
// You can also add more examples or expand upon the existing ones to deepen your understanding.
// Remember to keep practicing and building projects to apply what you've learned.
// This code is a great way to get started with JavaScript and build a solid foundation.
// You can also share this code with others who are learning JavaScript to help them understand the basics.
// Don't hesitate to ask questions or seek help from the JavaScript community if you encounter any challenges
