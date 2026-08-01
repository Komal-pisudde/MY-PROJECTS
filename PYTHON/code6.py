# Mini Project - Calculator

a = float(input("Enter the 1st number: "))
b = float(input("Enter the 2nd number: "))

op = input("Enter operator (+, -, *, /, %, **): ")

if op == "+":
    print("Result =", a + b)

elif op == "-":
    print("Result =", a - b)

elif op == "*":
    print("Result =", a * b)

elif op == "/":
    if b != 0:
        print("Result =", a / b)
    else:
        print("Division by zero is not allowed.")

elif op == "%":
    print("Result =", a % b)

elif op == "**":
    print("Result =", a ** b)

else:
    print("Invalid Operator")