# Built-in Function
name = input("Enter your name: ")
print("Hello", name)

# User-defined Function
def add(a, b):
    return a + b

result = add(10, 20)
print("Addition =", result)

# Module Function
import math

num = 25
print("Square Root =", math.sqrt(num))
print("Power =", math.pow(2, 3))
print("Factorial =", math.factorial(5))