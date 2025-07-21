# let's learn python
# This file contains basic syntax examples in Python.

# Variables and Data Types
name = "Tanbir"
age = 25
height = 5.9
is_student = True

# Printing Variables
print("Name:", name)
print("Age:", age)
print("Height:", height)
print("Is Student:", is_student)

# Basic Arithmetic Operations
a = 10
b = 5
sum_result = a + b
difference_result = a - b
product_result = a * b
division_result = a / b
print("Sum:", sum_result)
print("Difference:", difference_result)
print("Product:", product_result)
print("Division:", division_result)

# Conditional Statements
if age < 18:
    print("You are a minor.")
elif age < 65:
    print("You are an adult.")
else:
    print("You are a senior citizen.")
    
# Loops
for i in range(5):
    print("Loop iteration:", i)
    
# Functions
def greet(name):
    return f"Hello, {name}!"
print(greet(name))

# Lists
fruits = ["apple", "banana", "cherry"]
fruits.append("orange")
print("Fruits:", fruits)

# Dictionaries
person = {"name": "Tanbir", "age": 25, "city": "Dhaka"}
print("Person:", person)
print("Name:", person["name"])  # Accessing a value by key

# Tuples
coordinates = (10.0, 20.0)
print("Coordinates:", coordinates)

# Sets
unique_numbers = {1, 2, 3, 4, 5}
unique_numbers.add(6)
print("Unique Numbers:", unique_numbers)

# Exception Handling
try:
    result = 10 / 0
except ZeroDivisionError:
    print("Error: Division by zero is not allowed.")
# Classes and Objects
class Dog:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def bark(self):
        return f"{self.name} says Woof!"

my_dog = Dog("Buddy", 3)
print(my_dog.bark())

# File I/O
with open("example.txt", "w") as file:
    file.write("Hello, this is a test file.\n")
with open("example.txt", "r") as file:
    content = file.read()
    print("File Content:", content)
# Importing Modules
import math
print("Square Root of 25:", math.sqrt(25)) 
# List Comprehensions
squares = [x**2 for x in range(10)]
print("Squares:", squares)
# Lambda Functions
multiply = lambda x, y: x * y
print("Multiplication Result:", multiply(5, 3))
# Advanced Topics
# Decorators
def decorator_function(original_function):
    def wrapper_function():
        print("Wrapper executed before {}".format(original_function.__name__))
        return original_function()
    return wrapper_function

@decorator_function
def display():
    print("Display function executed.")
display()
# Generators
def number_generator(n):
    for i in range(n):
        yield i * 2
gen = number_generator(5)
print("Generated Numbers:")
for number in gen:
    print(number)
# Context Managers
class FileHandler:
    def __enter__(self):
        self.file = open("context_example.txt", "w")
        return self.file

    def __exit__(self, exc_type, exc_value, traceback):
        self.file.close()
with FileHandler() as f:
    f.write("This is written using a context manager.\n")
with open("context_example.txt", "r") as f:
    content = f.read()
    print("Context Manager File Content:", content)
# Regular Expressions
import re
pattern = r"\d+"
text = "There are 123 apples and 456 oranges."
matches = re.findall(pattern, text)
print("Numbers found in text:", matches)
# Type Hinting
def add_numbers(x: int, y: int) -> int:
    return x + y
print("Type Hinting Result:", add_numbers(5, 10))
# Asyncio for Asynchronous Programming
import asyncio
async def async_function():
    print("Async function started.")
    await asyncio.sleep(1)
    print("Async function completed.")
asyncio.run(async_function())
# Type Aliases
from typing import List, Dict, Tuple
Vector = List[float]
def calculate_magnitude(vector: Vector) -> float:
    return sum(x**2 for x in vector) ** 0.5
vector_example: Vector = [3.0, 4.0]
print("Magnitude of vector:", calculate_magnitude(vector_example))
# Data Classes
from dataclasses import dataclass
@dataclass
class Point:
    x: float
    y: float
point = Point(3.0, 4.0)
print("Point:", point)
# Named Tuples
from collections import namedtuple
Point = namedtuple('Point', ['x', 'y'])
point = Point(3.0, 4.0)
print("Named Tuple Point:", point)
# Enumerations
from enum import Enum
class Color(Enum):
    RED = 1
    GREEN = 2
    BLUE = 3
print("Color Enum:", Color.RED)
# Function Annotations
def greet(name: str, age: int) -> str:
    """Greets a person with their name and age."""
    return f"Hello, {name}! You are {age} years old."
print(greet("Tanbir", 25))
# Assertions
assert age > 0, "Age must be a positive number."
# Global and Nonlocal Variables
def outer_function():
    global global_var
    global_var = "I am a global variable"
    
    def inner_function():
        nonlocal nonlocal_var
        nonlocal_var = "I am a nonlocal variable"
    
    nonlocal_var = "Initial nonlocal variable"
    inner_function()
    print("Global Variable:", global_var)
    print("Nonlocal Variable:", nonlocal_var)
outer_function()
# Iterators and Iterables
class MyIterator:
    def __init__(self, data):
        self.data = data
        self.index = 0

    def __iter__(self):
        return self

    def __next__(self):
        if self.index < len(self.data):
            result = self.data[self.index]
            self.index += 1
            return result
        else:
            raise StopIteration
data = [1, 2, 3, 4, 5]
my_iterator = MyIterator(data)
print("Iterating through MyIterator:")
for item in my_iterator:
    print(item)
# Context: Path: py-python/python-basics/python-basic-syntext.py
# This file contains basic syntax examples in Python.
# Variables and Data Types
name = "Tanbir"
age = 25
height = 5.9
is_student = True
print("Name:", name)
print("Age:", age)
print("Height:", height)
print("Is Student:", is_student)
# Control Structures
if age < 18:
    print("Minor")
else:
    print("Adult")
for i in range(5):
    print("Iteration:", i)
while age < 30:
    print("Still young!")
    age += 1
# Functions
def greet(name):
    return f"Hello, {name}!"
print(greet(name))
# Lists
fruits = ["apple", "banana", "cherry"]
fruits.append("orange")
print("Fruits:", fruits)
# Dictionaries
person = {"name": "Tanbir", "age": 25, "city": "Dhaka"}
print("Person:", person)
print("Name:", person["name"])  # Accessing a value by key

