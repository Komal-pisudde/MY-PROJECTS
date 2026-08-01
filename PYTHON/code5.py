
# Arithmetic, Comparison,
# Logical Operators & If-Else
# *******************************

a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

# Arithmetic Operators
print("\nArithmetic Operators")
print("Addition =", a + b)
print("Subtraction =", a - b)
print("Multiplication =", a * b)
print("Division =", a / b)
print("Floor Division =", a // b)
print("Modulus =", a % b)
print("Power =", a ** b)

# Comparison Operators
print("\nComparison Operators")
print("a == b :", a == b)
print("a != b :", a != b)
print("a > b :", a > b)
print("a < b :", a < b)
print("a >= b :", a >= b)
print("a <= b :", a <= b)

# Logical Operators
print("\nLogical Operators")
print((a > 0) and (b > 0))
print((a > 0) or (b > 0))
print(not (a > b))

# If-Else Condition
print("\nIf-Else")

if a > b:
    print("a is Greater")
elif a < b:
    print("b is Greater")
else:
    print("Both are Equal")