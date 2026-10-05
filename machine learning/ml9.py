# SVM Classification with K-Fold Cross Validation

from sklearn.datasets import load_iris
from sklearn.svm import SVC
from sklearn.model_selection import cross_val_score

# Load dataset
iris = load_iris()

X = iris.data
y = iris.target

# Create SVM model
model = SVC(kernel='linear')

# Perform 5-Fold Cross Validation
scores = cross_val_score(model, X, y, cv=5)

print("Accuracy of each fold:")
print(scores)

print("\nAverage Accuracy = {:.2f}%".format(scores.mean() * 100))
