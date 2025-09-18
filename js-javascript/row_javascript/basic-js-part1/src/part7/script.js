// first tusk revers the string
// let strRevers = "hello world";

// let reversedStr = strRevers.split("").reverse().join("");
// console.log(reversedStr);

// second task palindrom chaker

// let str = "madam";
// let reversStr = str.split("").reverse().join("");

// console.log(str === reversStr);

// 3 FizzBuzz
// for (let i = 1; i <= 100; i++) {
//   if (i % 3 === 0 && i % 5 === 0) {
//     console.log("FizzBuzz");
//   } else if (i % 3 === 0) {
//     console.log("Fizz");
//   } else if (i % 5 === 0) {
//     console.log("Buzz");
//   } else {
//     console.log(i);
//   }
// }

// 4 Find the largest number from an array
let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 0];

let largestNum = arr[0];
for (let i = 1; i < arr.length; i++) {
	if (arr[i] > largestNum) {
		largestNum = arr[i];
	}
}
// console.log(largestNum);

// Another method using Math.max and spread operator
// let largestNum = Math.max(...arr);
// console.log(largestNum);

// 5. Factorial of a Number
// Write a function to calculate the factorial of a number.
// function factorial(n) {
//     if (n === 0 || n === 1) {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }
// console.log(factorial(5)); // Output: 120

// 6. Count Vowels in a String
// Write a function that counts how many vowels (a, e, i, o, u) appear in a string.
// function countVowels(str) {
//     let count = 0;
//     const vowels = 'aeiouAEIOU';
//     for (let char of str) {
//         if (vowels.includes(char)) {
//             count++;
//         }
//     }
//     return count;
// }
// console.log(countVowels("hello world")); // Output: 3

// 7. Remove Duplicates from an Array
// Given [1, 2, 2, 3, 4, 4, 5], return [1, 2, 3, 4, 5].

let arrayWithDuplicates = [1, 2, 2, 3, 4, 4, 5];
let uniqueArray = [...new Set(arrayWithDuplicates)];
// console.log(uniqueArray); // Output: [1, 2, 3, 4, 5]

// 8. Find the Second Largest Number in an Array
// Given [1, 2, 3, 4, 5], return 4.
let numbers = [1, 2, 3, 4, 5];
// numbers.sort((a, b) => b - a);
// let secondLargest = numbers[1];
// console.log(secondLargest); // Output: 4

// another way to do this
// let largest = 2;
// let secondLargest = 2;
// console.log(largest, secondLargest);

// for (let num of numbers) {
//     if (num > largest) {
//         secondLargest = largest;
//         largest = num;
//     } else if (num > secondLargest && num !== largest) {
//         secondLargest = num;
//     }
// }
// console.log(secondLargest); // Output: 4

// 9. Check if a Number is Prime
// Write a function that checks if a number is prime.
// function isPrime(num) {
//     if (num <= 1) return false;
//     for (let i = 2; i <= Math.sqrt(num); i++) {
//         if (num % i === 0) return false;
//     }
//     return true;
// }
// console.log(isPrime(7)); // Output: true
// console.log(isPrime(10)); // Output: false

// 10. Remove Duplicates from an Array
// Given [1, 2, 2, 3, 4, 4, 5], return [1, 2, 3, 4, 5].
let arrayWithDuplicates2 = [1, 2, 2, 3, 4, 4, 5];
// let uniqueArray2 = arrayWithDuplicates2.filter((item, index) => {
//     return arrayWithDuplicates2.indexOf(item) === index;
// });
// console.log(uniqueArray2); // Output: [1, 2, 3, 4, 5]

// Another method using reduce
let uniqueArray2 = arrayWithDuplicates2.reduce((acc, curr) => {
    if (!acc.includes(curr)) {
        acc.push(curr);
    }
    return acc;
}, []);
console.log(uniqueArray2); // Output: [1, 2, 3, 4, 5]

// 11. Simple Calculator (with Functions)
// Make a calculator function that takes 3 arguments: number1, operator (+, -, *, /), number2.
// 👉 Example: calc(5, "*", 3) → 15

function calc(number1, operator, number2) {
    switch (operator) {
        case '+':
            return number1 + number2;
        case '-':
            return number1 - number2;
        case '*':
            return number1 * number2;
        case '/':
            return number1 / number2;
        default:
            return 'Invalid operator';
    }
}
// console.log(calc(5, "+", 3));

// 12. Random Password Generator
// Generate a random password of given length using letters, numbers, and special characters.

function generatePassword(length) {
    const chars = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+[]{}|;:,.<>?';
    let password = '';
    for (let i = 0; i < length; i++) {
        const randomIndex = Math.floor(Math.random() * chars.length);
        password += chars[randomIndex];
    }
    return password;
}
// console.log(generatePassword(10)); // Example output: "aB3$dE1@fG"

// 13. To-Do List (DOM Challenge)
// Using HTML + JS, create a simple to-do app where you can:
// Add tasks
// Mark them as complete
// Delete tasks

document.getElementById('addTaskBtn').addEventListener('click', function() {
    const taskInput = document.getElementById('taskInput');
    const taskList = document.getElementById('taskList');

    if (taskInput.value.trim() !== '') {
        const listItem = document.createElement('li');
        listItem.className = 'task-item';
        // listItem.textContent = taskInput.value;

        const taskText = document.createElement('span');
        taskText.textContent = taskInput.value;

        const completeBtn = document.createElement('button');
        completeBtn.textContent = 'Complete';
        completeBtn.addEventListener('click', function() {
            taskText.classList.toggle("complited");
        });

        const deleteBtn = document.createElement('button');
        deleteBtn.textContent = 'Delete';
        deleteBtn.addEventListener('click', function() {
            taskList.removeChild(listItem);
        });

        listItem.appendChild(taskText);
        listItem.appendChild(completeBtn);
        listItem.appendChild(deleteBtn);
        taskList.appendChild(listItem);

        taskInput.value = '';
    }
});
