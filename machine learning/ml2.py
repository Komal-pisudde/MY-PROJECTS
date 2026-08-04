from sklearn.linear_model import LinearRegression
import numpy as np

# Independent Variables
X = np.array([
    [1, 2],
    [2, 1],
    [3, 4],
    [4, 3],
    [5, 5]
])

# Dependent Variable
Y = np.array([5, 6, 9, 10, 13])

# Create Model
model = LinearRegression()

# Train Model
model.fit(X, Y)

# Display Intercept
print("Intercept :", model.intercept_)

# Display Coefficients
print("Coefficients :", model.coef_)

# Predict New Data
new_data = np.array([[6, 4]])

prediction = model.predict(new_data)

print("Prediction for [6,4] :", prediction)