// 11. Find the Missing Number
// You are given an array of numbers from 1–n with one missing. Find the missing number.
// 👉 Example: [1, 2, 3, 5] → 4

let numbers = [1, 2, 3, 5, 6, 7, 8, 9, 10]; // Example array with missing number 5

// Loop through numbers from 1 to n (in this case, 10)
for (let i = 1; i <= 10; i++) {
	// Check if the number is missing
	if (!numbers.includes(i)) {
		// document.getElementById("one").innerHTML = i;
		// console.log(i);
	}
}
// Output: 4

// 12. Anagram Checker
// Check if two strings are anagrams (contain the same letters in different order).
// 👉 Example: "listen", "silent" → true

function normalize(s) {
	// remove non-letter/digit characters and lowercase
	return s
		.replace(/[^a-z0-9]/gi, "")
		.toLowerCase()
		.split("")
		.sort()
		.join("");
}

function isAnagram(s1, s2) {
	// normalize both strings and compare
	return normalize(s1) === normalize(s2);
}

// console.log(normalize("hello worlD 343 #@! 3"));
// console.log(isAnagram("listen", "silent")); // true
// console.log(isAnagram("hello", "world"));   // false

// 13. Sum of Digits
// Take a number and return the sum of its digits.
// 👉 Example: 1234 → 1+2+3+4 = 10

function sumOfDigits(num) {
	let sum = 0;
	// Convert number to string, split into digits, convert back to numbers and sum them
	for (let digit of num.toString()) {
		sum += parseInt(digit);
	}
	return sum;
}

// console.log(sumOfDigits(1234)); // 10
// console.log(sumOfDigits(5678)); // 26

// let str = "hello worlD 343 #@! 3";
// console.log(typeof(str.toString()));
// console.log(str.toUpperCase());
// console.log(str.toLowerCase());
// console.log(str.trim());
// console.log(str.split(" "));

// 14. Flatten an Array
// Convert a nested array into a single-level array.
// 👉 Example: [1, [2, [3, 4]], 5] → [1, 2, 3, 4, 5]

function flattenArray(arr) {
	let result = [];
	for (let item of arr) {
		if (Array.isArray(item)) {
			// Recursively flatten the nested array
			result = result.concat(flattenArray(item));
		} else {
			result.push(item);
		}
	}
	return result;
}

// let nestedArray = [1, [2, [3, 4]], 5];
// console.log(flattenArray(nestedArray)); // [1, 2, 3, 4, 5]

let arr1 = [1, 2, 3];
let arr2 = [4, 5, 6];

// Merging arrays using concat
let merged1 = arr1.concat(arr2);
// console.log(merged1); // [1, 2, 3, 4, 5, 6]

// Merging arrays using spread operator
let merged2 = [...arr1, ...arr2];
// console.log(merged2); // [1, 2, 3, 4, 5, 6]

// Merging arrays using push with spread operator
let merged3 = [];
merged3.push(...arr1, ...arr2);
// console.log(merged3); // [1, 2, 3, 4, 5, 6]

// 15. Find Prime Numbers
// Write a function to check if a number is prime. Then print all prime numbers up to n.

function isPrime(num) {
	if (num <= 1) return false; // 0 and 1 are not prime numbers
	for (let i = 2; i <= Math.sqrt(num); i++) {
		if (num % i === 0) return false; // Found a divisor, not prime
	}
	return true; // No divisors found, it's prime
}

function printPrimesUpTo(n) {
	let primes = [];
	for (let i = 2; i <= n; i++) {
		if (isPrime(i)) {
			primes.push(i);
		}
	}
	return primes;
}

// console.log(printPrimesUpTo(20)); // [2, 3, 5, 7, 11, 13, 17, 19]

// let num = 20;
// console.log(Math.sqrt(num)); // 4.47213595499958
// console.log(Math.floor(Math.sqrt(num))); // 4
// console.log(Math.ceil(Math.sqrt(num))); // 5
// console.log(Math.round(Math.sqrt(num))); // 4
// console.log(parseInt(Math.sqrt(num))); // 4
// console.log(Number(Math.sqrt(num))); // 4.47213595499958
// console.log(Number.isInteger(Math.sqrt(num))); // false
// console.log(Number.isInteger(4.0)); // true
// console.log(Number.isInteger(4.1)); // false
// console.log(Number.isInteger(4)); // true

// 16. Capitalize First Letter of Each Word
// 👉 Example: "hello world" → "Hello World"

function capitalizeFirstLetterOfEachWord(str) {
	return str
		.split(" ")
		.map((word) => word.charAt(0).toUpperCase() + word.slice(1))
		.join(" ");
}

// console.log(capitalizeFirstLetterOfEachWord("hello world, how are you?")); // "Hello World, How Are You?"

// 17. Object Key Frequency Counter
// Given an array of words, count how many times each word appears (return as an object).
// 👉 Example: ["apple", "banana", "apple"] → { apple: 2, banana: 1 }

function countWordFrequencies(words) {
	return words.reduce((acc, word) => {
		acc[word] = (acc[word] || 0) + 1;
		return acc;
	}, {});
}
// console.log(countWordFrequencies(["apple", "banana", "apple", "orange", "banana", "apple"])); // { apple: 3, banana: 2, orange: 1 }

// 18. Debounce Function
// Implement a simple debounce function (wait a set time before running the callback again).

function debounce(func, delay) {
	let timeoutId;
	return function(...args) {
		if (timeoutId) {
			clearTimeout(timeoutId);
		}
		timeoutId = setTimeout(() => {
			func.apply(this, args);
		}, delay);
	};
}

// Example usage:
const log = () => console.log("Debounced!");
const debouncedLog = debounce(log, 1000);

// Calling the debounced function multiple times
debouncedLog();
debouncedLog();
debouncedLog();
// Only one "Debounced!" will be logged after 1 second.

// 19. Countdown Timer (DOM)
// Build a countdown timer that starts from 10 and updates the DOM every second until 0.

function startCountdown() {
	let countdown = 10;
	const countdownElement = document.getElementById("countdown");
	countdownElement.textContent = countdown;

	const intervalId = setInterval(() => {
		countdown--;
		countdownElement.textContent = countdown;

		if (countdown <= 0) {
			clearInterval(intervalId);
		}
	}, 1000);
}

// Call startCountdown to initiate the timer
// startCountdown();

// 20. Dark Mode Toggle (DOM)
// Add a button that switches your webpage between light mode and dark mode.

function toggleDarkMode() {
	const body = document.body;
	body.classList.toggle("dark-mode");

	const isDarkMode = body.classList.contains("dark-mode");
	localStorage.setItem("dark-mode", isDarkMode);
}

const darkModeButton = document.createElement("button");
darkModeButton.textContent = "Toggle Dark Mode";
darkModeButton.addEventListener("click", toggleDarkMode);
document.body.appendChild(darkModeButton);

// Check for saved dark mode preference
const isDarkMode = localStorage.getItem("dark-mode") === "true";
if (isDarkMode) {
	document.body.classList.add("dark-mode");
}

// CSS for dark mode (you can add this to your CSS file or a <style> tag)
// const style = document.createElement("style");
// style.textContent = `
//   .dark-mode {
// 	background-color: #121212;
// 	color: #ffffff;
// 	  }
// `;
// document.head.appendChild(style);
// Note: Uncomment function calls to test individual functionalities.