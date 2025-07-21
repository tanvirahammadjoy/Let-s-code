// intermediate JavaScript concepts
// This code snippet demonstrates some intermediate JavaScript concepts such as Maps, Promises, Async/Await, and Modules.
// Maps
let myMap = new Map();
myMap.set("key1", "value1");
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

export function anotherModuleFunction() {
    return "This is another module function";
}

// Importing the module function in another file would look like this:
import { anotherModuleFunction } from './path-to-another-module-file.js'; // Importing
// the module function
// Note: Ensure that the file paths are correct based on your project structure.
// Logging the result of the imported function
console.log(anotherModuleFunction()); // Calling the imported function
// End of intermediate JavaScript concepts example

// Basic JavaScript Syntax Example
let name = "Alice";
let age = 30;
let isStudent = true;
let jsonObject = { name, age, isStudent }; // Creating a JSON object
console.log(jsonObject); // Logging the JSON object
// Accessing properties of the JSON object
console.log(jsonObject.name); // Logging the name property
console.log(jsonObject.age); // Logging the age property
console.log(jsonObject.isStudent); // Logging the isStudent property

// Converting JSON object to JSON string
let jsonString = JSON.stringify(jsonObject); // Converting object to JSON string
console.log(jsonString); // Logging the JSON string representation

// Accessing properties of the JSON object
console.log(jsonObject.name, jsonObject.age, jsonObject.isStudent); // Accessing properties
let newJsonString = JSON.stringify(jsonObject); // Converting object back to JSON string
console.log(newJsonString); // Logging the JSON string representation

// Template Literals
let greeting = `Hello, ${name}! You are ${age} years old.`; // Using template literals for string interpolation
console.log(greeting); // Logging the greeting message

// Spread and Rest Operators
let numbers = [1, 2, 3];
let moreNumbers = [...numbers, 4, 5]; // Spread operator to create a new array
console.log(moreNumbers); // Logging the new array
let [first, second, ...rest] = numbers; // Rest operator to extract elements from an array
console.log(first, second, rest); // Logging the extracted elements and the remaining elements

// Destructuring
let personInfo = { name: "Charlie", age: 28 };
let { name: personName, age: personAge } = personInfo; // Destructuring an object
console.log(personName, personAge); // Logging the destructured values

