// input the prompt
// Write a program that calculates the sum of all elements in an array using both a while loop and a for loop


let arr = [ 1, 2, 3, 4, 5 ];
let sum = 0;
let i = 0;

while (i < arr.length) {
    sum += arr[i];
    i++;
}
console.log(sum);

for (let j = 0; j < arr.length; j++) {
    sum += arr[j];
}
console.log(sum);
