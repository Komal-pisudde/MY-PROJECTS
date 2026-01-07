#include <iostream>
using namespace std;

// Define a Node
struct Node {
    int value;
    Node* left;
    Node* right;

    Node(int val) {
        value = val;
        left = nullptr;
        right = nullptr;
    }
};

// Function to calculate sum of all nodes in binary tree
int sum(Node* node) {
    if (node == nullptr) {
        return 0;  // base case
    }
    return sum(node->left) + node->value + sum(node->right);
}

int main() {
    // Create tree:
    //       5
    //      / \
    //     3   7
    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(7);

    int totalSum = sum(root);
    cout << "Sum of all nodes: " << totalSum << endl;

    return 0;
}

