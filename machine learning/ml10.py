
# Multi-Layer Feed Forward Neural Network (MLFFNN)

from sklearn.datasets import load_diabetes
from sklearn.model_selection import train_test_split
from sklearn.neural_network import MLPRegressor
from sklearn.pipeline import make_pipeline
from sklearn.preprocessing import StandardScaler

# Load dataset
data = load_diabetes()
X = data.data
y = data.target

# Split dataset
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.2, random_state=42
)

# Create MLFFNN model
model = make_pipeline(
    StandardScaler(),
    MLPRegressor(
        hidden_layer_sizes=(10,),
        solver="lbfgs",
        max_iter=2000,
        random_state=42
    )
)

# Train model
model.fit(X_train, y_train)

# Prediction
y_pred = model.predict(X_test)

# Display output
print("Actual Values:")
print(y_test[:10])

print("\nPredicted Values:")
print(y_pred[:10].round(2))
