#include <iostream>
#include <queue>
using namespace std;

// Node structure representing each element of the tree
struct Node {
    int data;       // The value stored in the node
    Node* left;     // Pointer to the left child
    Node* right;    // Pointer to the right child

    // Constructor to create a new node
    Node(int value) {
        data = value;
        left = right = nullptr;  // Initially no children
    }
};

// Function to create a new node
Node* createNode(int value) {
    return new Node(value);
}

// Preorder Traversal (Root -> Left -> Right)
void preorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    // Print the data of the node
    cout << root->data << " ";
    // Recur on the left child
    preorderTraversal(root->left);
    // Recur on the right child
    preorderTraversal(root->right);
}

// Inorder Traversal (Left -> Root -> Right)
void inorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    // Recur on the left child
    inorderTraversal(root->left);
    // Print the data of the node
    cout << root->data << " ";
    // Recur on the right child
    inorderTraversal(root->right);
}

// Postorder Traversal (Left -> Right -> Root)
void postorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    // Recur on the left child
    postorderTraversal(root->left);
    // Recur on the right child
    postorderTraversal(root->right);
    // Print the data of the node
    cout << root->data << " ";
}

// BFS (Level Order) Traversal using a queue
void bfsTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }

    // Create a queue for BFS
    queue<Node*> q;
    // Start by pushing the root into the queue
    q.push(root);

    while (!q.empty()) {
        // Get the front node of the queue
        Node* current = q.front();
        q.pop();

        // Print the data of the node
        cout << current->data << " ";

        // If left child exists, push it to the queue
        if (current->left != nullptr) {
            q.push(current->left);
        }

        // If right child exists, push it to the queue
        if (current->right != nullptr) {
            q.push(current->right);
        }
    }
}

// Main function to test tree traversal
int main() {
    // Create a simple binary tree
    /*			1
               /  \
    		  2    3
    		 / \
    		4   5

    */

    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    cout << "Preorder Traversal: ";
    preorderTraversal(root);  // Expected Output: 1 2 4 5 3
    cout << endl;

    cout << "Inorder Traversal: ";
    inorderTraversal(root);   // Expected Output: 4 2 5 1 3
    cout << endl;

    cout << "Postorder Traversal: ";
    postorderTraversal(root); // Expected Output: 4 5 2 3 1
    cout << endl;

    cout << "BFS (Level Order) Traversal: ";
    bfsTraversal(root);       // Expected Output: 1 2 3 4 5
    cout << endl;

    return 0;
}