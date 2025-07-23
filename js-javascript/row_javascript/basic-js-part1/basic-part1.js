// basic part 1 of JavaScript

// Basic JavaScript Syntax Example
let name = "Alice";
let age = 25;
console.log("Name:", name); // Logging the name
console.log("Age:", age); // Logging the age

let isStudent = true; // Boolean variable
console.log(name, age, isStudent); // Logging multiple variables
let person = { name: "Bob", age: 30 }; // Object with properties
console.log(person.name, person.age); // Accessing object properties
console.log(person["name"]); // Accessing object property using bracket notation
let numbers = [1, 2, 3, 4, 5]; // Array of numbers
console.log(numbers[0]); // Accessing the first element of the array
// Conditional Statements
if (age > 18) {
    console.log(name + " is an adult."); // Logging if the person is an adult
}
else {
    console.log(name + " is a minor."); // Logging if the person is a minor
}
// Loops
for (let i = 0; i < numbers.length; i++) {
    console.log("Number:", numbers[i]); // Logging each number in the array
}
// while loop example
let count = 0;
while (count < 5) {
    console.log("Count:", count); // Logging the current count
    count++; // Incrementing the count
}
// do while loop example
do {
    console.log("Count in do-while:", count); // Logging the count in do-while
    count++;
} while (count < 10); // Continue until count is less than 10
// for...of loop example
for (let number of numbers) {
    console.log("Number in for...of loop:", number); // Logging each number using for...of
}
// for...in loop example
for (let key in person) {
    console.log("Key:", key, "Value:", person[key]); // Logging key-value pairs using for...in
}
// Functions
function add(a, b) {
    return a + b; // Function to add two numbers
}
console.log("Sum:", add(5, 10)); // Calling the function and logging the
// result
// Arrow Functions
const multiply = (x, y) => x * y; // Arrow function to multiply two numbers
console.log("Product:", multiply(4, 5)); // Calling the arrow function and
// logging the result
// String Manipulation
let greeting = "Hello, " + name + "!"; // Concatenating strings
console.log(greeting); // Logging the greeting message
let uppercaseGreeting = greeting.toUpperCase(); // Converting greeting to uppercase
console.log(uppercaseGreeting); // Logging the uppercase greeting message
// Array Methods
let filteredNumbers = numbers.filter(num => num > 2); // Filtering numbers greater than 2
console.log("Filtered Numbers:", filteredNumbers); // Logging the filtered numbers
let mappedNumbers = numbers.map(num => num * 2); // Mapping numbers to double their value
console.log("Mapped Numbers:", mappedNumbers); // Logging the mapped numbers
let reducedSum = numbers.reduce((acc, num) => acc + num, 0); // Reducing the array to a sum
console.log("Reduced Sum:", reducedSum); // Logging the reduced sum

