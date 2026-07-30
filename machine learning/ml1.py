# Linear Univariate Regression using OLS (From Scratch)

# Independent Variable
X = [1, 2, 3, 4, 5]

# Dependent Variable
Y = [2, 4, 5, 4, 5]

n = len(X)

sumX = sum(X)
sumY = sum(Y)

sumXY = 0
sumX2 = 0

for i in range(n):
    sumXY += X[i] * Y[i]
    sumX2 += X[i] * X[i]

# Calculate Slope
m = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX)

# Calculate Intercept
c = (sumY - m * sumX) / n

print("Slope (m):", m)
print("Intercept (c):", c)

print("\nRegression Equation")
print("Y =", round(m, 2), "X +", round(c, 2))

print("\nPredicted Values")
for x in X:
    y_pred = m * x + c
    print("X =", x, "Predicted Y =", round(y_pred, 2))