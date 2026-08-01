
# Type Conversion

a = "10"
b = "20"

print(int(a) + int(b))   # String to Integer
print(float(a))          # String to Float
print(str(100))          # Integer to String
print(bool(1))           # Integer to Boolean


# Type Casting

num = 25
print(float(num))

price = 99.99
print(int(price))

age = 20
print(str(age))


# Sum Program

num1 = int(input("Enter First Number: "))
num2 = int(input("Enter Second Number: "))

sum = num1 + num2

print("Sum =", sum)


# String Method

name = "Tony Stark"

print(name.upper())
print(name.lower())
print(name.capitalize())
print(name.title())
print(name.find("Stark"))
print(name.replace("Tony", "Iron"))
print(len(name))
print(name.count("t"))



# Keywords

import keyword

print(keyword.kwlist)
print("Total Keywords =", len(keyword.kwlist))