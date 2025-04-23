#include <bits/stdc++.h>
using namespace std;

/*
struct Node {
    int data;
    Node* next;
};

Create Node:         Node* n = new Node(data);
Insert at front:     newNode->next = head; head = newNode;
Insert at end:       traverse till NULL, then last->next = newNode;
Insert at pos:       traverse to pos-1, adjust pointers
Delete at front:     head = head->next;
Delete at end:       traverse till second-last, last->next = NULL;
Delete at pos:       same as insert, but free unwanted node
Traverse:            while (head) { cout << head->data; head = head->next; }

*/
// Node structure
struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Insert at beginning
void insertAtHead(Node* &head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

// Insert at end
void insertAtTail(Node* &head, int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

// Insert at specific position (0-based index)
void insertAtPosition(Node*& head, int pos, int val) {
    if (pos == 0) {
        insertAtHead(head, val);
        return;
    }

    Node* newNode = new Node(val);
    Node* temp = head;
    for (int i = 0; i < pos - 1 && temp; i++) {
        temp = temp->next;
    }
    if (!temp) {
        cout << "Position out of range\n";
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

// Delete a node by value
void deleteNode(Node*& head, int val) {
    if (!head) return;
    if (head->data == val) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }
    Node* temp = head;
    while (temp->next && temp->next->data != val)
        temp = temp->next;
    if (temp->next) {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
}

// Search value in list
bool search(Node* head, int key) {
    while (head) {
        if (head->data == key) return true;
        head = head->next;
    }
    return false;
}

// Print the list
void printList(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = nullptr;
    int n, x;

    // Take user input
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter values:\n";
    for (int i = 0; i < n; i++) {
        cin >> x;
        insertAtTail(head, x);
    }
    // Manual hardcoded list
    // insertAtTail(head, 10);
    // insertAtTail(head, 20);
    // insertAtTail(head, 30);


    // Print full list
    cout << "Linked List: ";
    printList(head);

    // Insert at position
    insertAtPosition(head, 2, 99);
    cout << "After inserting 99 at position 2: ";
    printList(head);

    // Delete a value
    deleteNode(head, 99);
    cout << "After deleting 99: ";
    printList(head);

    // Search values
    cout << "Search 20: " << (search(head, 20) ? "Found" : "Not Found") << endl;
    cout << "Search 100: " << (search(head, 100) ? "Found" : "Not Found") << endl;

    return 0;
}