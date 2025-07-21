// let's explore some advanced JavaScript concepts
// Advanced JavaScript Concepts

// Maps
let myMap = new Map();
myMap.set("key1", "value1");
myMap.set("key2", "value2");
console.log(myMap.get("key1")); // Getting a value by key
console.log(myMap.has("key2")); // Checking if a key exists in the map

// sets
let mySet = new Set([1, 2, 3, 4, 5]);
mySet.add(6); // Adding an element to the set
console.log(mySet.has(3)); // Checking if an element exists in the set

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

// Modules
import { moduleFunction } from './path-to-module-file.js'; // Importing the module function
console.log(moduleFunction()); // Calling the imported function
// Note: Ensure that the file paths are correct based on your project structure.
// End of advanced JavaScript concepts example

// some more unique JavaScript concepts
// Unique JavaScript Concepts

// Template Literals
let name = "Alice";
let age = 30;
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

