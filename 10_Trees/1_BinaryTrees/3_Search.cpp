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

// Function to search for a value in a binary tree (linear search)
bool search(Node* root, int target) {
    if (root == nullptr) {
        return false;
    }

    if (root->data == target) {
        return true;
    }

    return search(root->left, target) || search(root->right, target);
}

// Main function to test search
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    int target = 5;
    if (search(root, target)) {
        cout << "Node " << target << " found in the tree!" << endl;
    } else {
        cout << "Node " << target << " not found in the tree." << endl;
    }

    return 0;
}