// let's understand var, let and const this is global scope
// Global scope
h = 'Hello, World!';
var h; // hoisting in action, h is available before declaration
var x = 10;
var x = 11; // re-declaration with var is allowed
let y = 20;
// let y = 21; // re-declaration with let is not allowed, but it works in some environments
const z = 30;

// x = 15; // reassigning var
y = 25; // reassigning let
// z = 35; // error: cannot reassign const

console.log('this output 1 global: ', x, y, z, h); // 15, 25, 30, Hello, World!

// and here is function scope behavior
function testScope() {
    h = 'Hello, from inner function Function!';
    x = 'Hello, from inner function! var 10';
    y = 'Hello, from inner function! let 20';
    // var x = 'i am inner 5'; // this is a new variable, not the global one
    // let y = "Hello, from inner function! let??";
    // const z = "Hello, from inner function! const";
    var a = 1;
    let b = 2;
    const c = 3;

    console.log('this output 1 inner: ', a, b, c);

    if (true) {
        var a = 4; // same variable
        let b = 5; // different variable
        const c = 6; // different variable
        console.log('this output 2 inner: ', a, b, c); // 4, 5, 6
    }

    console.log('this output 1 inner: ', a, b, c); // 4, 2, 3
}

// testScope();

// console.log('this output 2 global: ', x, y, z, h); // 15, 25, 30, Hello, World!?

// data types
let str = 'Hello, World!'; // string
let num = 42; // number
let isTrue = true; // boolean
let bigInt = 1234567890123456789012345678901234567890n; // bigint
let nullValue = null; // null
let undefinedValue = undefined; // undefined
let sym = Symbol('description'); // symbol

let arr = [1, 2, 3]; // array
let obj = { key: 'value' }; // object
let func = function () {
    return 'Hello, Function!';
}; // function

console.log(
    str,
    num,
    isTrue,
    bigInt,
    nullValue,
    undefinedValue,
    sym,
    arr,
    obj,
    func()
);
console.log(
    typeof str,
    typeof num,
    typeof isTrue,
    typeof bigInt,
    typeof nullValue,
    typeof undefinedValue,
    typeof sym,
    typeof arr,
    typeof obj,
    typeof func
);

// type conversion
let numToStr = String(num); // "42"
let boolToStr = String(isTrue); // "true"
let bigIntToStr = String(bigInt); // "1234567890123456789012345678901234567890"
let nullToStr = String(nullValue); // "null"
let undefinedToStr = String(undefinedValue); // "undefined"
let symToStr = String(sym); // "Symbol(description)"
let arrToStr = String(arr); // "1,2,3"
let objToStr = String(obj); // "[object Object]"
let funcToStr = String(func); // "function() { return "Hello, Function!"; }"

// converting to number
let strToNum = Number(str); // NaN
let bigIntToNum = Number(bigInt); // 1.2345678901234567e+36
let nullToNum = Number(nullValue); // 0
let undefinedToNum = Number(undefinedValue); // NaN
// let symToNum = Number(sym); // symbol cannot be converted to a number, so it results in NaN
let arrToNum = Number(arr); // NaN
let objToNum = Number(obj); // NaN

console.log(
    typeof numToStr,
    typeof boolToStr,
    typeof bigIntToStr,
    typeof nullToStr,
    typeof undefinedToStr,
    typeof symToStr,
    typeof arrToStr,
    typeof objToStr,
    typeof funcToStr,
    typeof strToNum,
    typeof bigIntToNum,
    typeof nullToNum,
    typeof undefinedToNum,
    typeof arrToNum,
    typeof objToNum
);

console.log(
    strToNum,
    numToStr,
    boolToStr,
    bigIntToStr,
    nullToStr,
    undefinedToStr,
    symToStr,
    arrToStr,
    objToStr,
    funcToStr,
    bigIntToNum,
    nullToNum,
    undefinedToNum,
    arrToNum,
    objToNum
);
