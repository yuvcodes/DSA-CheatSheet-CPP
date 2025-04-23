#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

// Function to calculate the height of the tree
int height(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    return max(height(root->left), height(root->right)) + 1;
}

// Main function to test height calculation
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Height of the tree: " << height(root) << endl;  // Expected output: 3
    return 0;
}