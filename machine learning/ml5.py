import math

# Training Data
X = [1, 2, 3, 4, 5, 6]
Y = [2, 4, 6, 8, 10, 12]

# Value of K
k = 3

# Test Point
test = 4.5

# Calculate Distance
distances = []

for i in range(len(X)):
    distance = math.sqrt((X[i] - test) ** 2)
    distances.append((distance, Y[i]))

# Sort according to distance
distances.sort()

# Select K nearest neighbors
nearest = distances[:k]

# Predict using Average
prediction = 0

for d in nearest:
    prediction += d[1]

prediction = prediction / k

print("Nearest Neighbors:")
print(nearest)

print("\nPredicted Value =", prediction)