# List
fruits = ["apple", "banana", "mango"]
print("List:")
print(fruits)
print(fruits[1])
fruits.append("orange")
print(fruits)

# Tuple
numbers = (10, 20, 30, 40)
print("\nTuple:")
print(numbers)
print(numbers[2])

# Set
colors = {"red", "green", "blue", "red"}
print("\nSet:")
print(colors)
colors.add("yellow")
print(colors)

# Dictionary
student = {
    "name": "Komal",
    "age": 20,
    "city": "Nagpur"
}

print("\nDictionary:")
print(student)
print(student["name"])

student["age"] = 21
student["course"] = "B.Tech"

print(student)