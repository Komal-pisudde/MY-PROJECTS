# K-Means Clustering

from sklearn.datasets import load_iris
from sklearn.cluster import KMeans

# Load dataset
iris = load_iris()
X = iris.data

# Create K-Means model
kmeans = KMeans(n_clusters=3, random_state=42)

# Train model
kmeans.fit(X)

# Get cluster labels
labels = kmeans.labels_

# Print cluster labels
print("Cluster Labels:")
print(labels)

# Print cluster centers
print("\nCluster Centers:")
print(kmeans.cluster_centers_)