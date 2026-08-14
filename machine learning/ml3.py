from sklearn.linear_model import Perceptron
import numpy as np

# Training Data
X = np.array([
    [2, 3],
    [3, 4],
    [4, 5],
    [6, 7],
    [7, 8],
    [8, 9]
])

# Class Labels
Y = np.array([0, 0, 0, 1, 1, 1])

# Create Linear Classifier
classifier = Perceptron()

# Train Model
classifier.fit(X, Y)

# Test Data
test = np.array([
    [5, 6],
    [2, 2],
    [8, 8]
])

# Prediction
prediction = classifier.predict(test)

print("Predicted Classes:")
print(prediction)