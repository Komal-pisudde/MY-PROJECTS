# 1. Print all odd numbers from 1 to 20
print("Odd Numbers from 1 to 20:")
for i in range(1, 21):
    if i % 2 != 0:
        print(i)

# --------------------------

# 2. Print the table of 57
print("\nTable of 57:")
for i in range(1, 11):
    print(f"57 x {i} = {57 * i}")

# --------------------------

# 3. Print all multiples of 3 from 1 to 50 but skip 15
print("\nMultiples of 3 (Skip 15):")
for i in range(3, 51, 3):
    if i == 15:
        continue
    print(i)

# --------------------------

# 4. Find the first number divisible by both a and b
print("\nFirst Number Divisible by Both:")

a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

for i in range(1, 1001):
    if i % a == 0 and i % b == 0:
        print("Answer =", i)
        break