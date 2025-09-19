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
	return s.replace(/[^a-z0-9]/gi, '').toLowerCase().split('').sort().join('');
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

console.log(sumOfDigits(1234)); // 10
console.log(sumOfDigits(5678)); // 26

let str = "hello worlD 343 #@! 3";
console.log(typeof(str.toString()));
console.log(str.toUpperCase());
console.log(str.toLowerCase());
console.log(str.trim());
console.log(str.split(" "));
