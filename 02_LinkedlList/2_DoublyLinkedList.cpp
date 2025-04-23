#include <bits/stdc++.h>
using namespace std;

/*
struct Node {
    int data;
    Node* prev;
    Node* next;
};

Create Node:         Node* n = new Node(data);
Insert at front:     newNode->next = head; head->prev = newNode; head = newNode;
Insert at end:       traverse to end, link both ways
Insert at pos:       same as singly, but set both next & prev
Delete at front:     head = head->next; head->prev = NULL;
Delete at end:       tail = tail->prev; tail->next = NULL;
Traverse forward:    while (head) { cout << head->data; head = head->next; }
Traverse backward:   while (tail) { cout << tail->data; tail = tail->prev; }
*/
// Node structure for Doubly Linked List
struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int val) {
        data = val;
        next = prev = nullptr;
    }
};

// Insert at the beginning
void insertAtHead(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

// Insert at the end
void insertAtTail(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

// Insert at a specific position (0-based)
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
    if (temp->next) temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

// Delete by value
void deleteNode(Node*& head, int val) {
    if (!head) return;
    Node* temp = head;
    while (temp && temp->data != val) {
        temp = temp->next;
    }
    if (!temp) {
        cout << "Value not found\n";
        return;
    }
    if (temp->prev) temp->prev->next = temp->next;
    if (temp->next) temp->next->prev = temp->prev;
    if (temp == head) head = temp->next;
    delete temp;
}

// Search element
bool search(Node* head, int key) {
    while (head) {
        if (head->data == key) return true;
        head = head->next;
    }
    return false;
}

// Print list (forward)
void printList(Node* head) {
    while (head) {
        cout << head->data << " <-> ";
        head = head->next;
    }
    cout << "NULL\n";
}

// Print list (backward)
void printListReverse(Node* head) {
    if (!head) return;
    Node* temp = head;
    while (temp->next) temp = temp->next;  // Traverse to the last node
    while (temp) {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = nullptr;

    // Manually adding elements to the doubly linked list
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);

    cout << "Initial doubly linked list (Forward): ";
    printList(head);
    cout << "Initial doubly linked list (Backward): ";
    printListReverse(head);

    // User input list
    int n, x;
    cout << "Enter number of elements to add: ";
    cin >> n;
    cout << "Enter " << n << " values:\n";
    for (int i = 0; i < n; i++) {
        cin >> x;
        insertAtTail(head, x);
    }

    cout << "List after user input (Forward): ";
    printList(head);
    cout << "List after user input (Backward): ";
    printListReverse(head);

    // Insert at position
    insertAtPosition(head, 2, 99);
    cout << "After inserting 99 at position 2 (Forward): ";
    printList(head);

    // Delete a value
    deleteNode(head, 99);
    cout << "After deleting 99 (Forward): ";
    printList(head);

    // Search element
    cout << "Search 20: " << (search(head, 20) ? "Found" : "Not Found") << endl;
    cout << "Search 100: " << (search(head, 100) ? "Found" : "Not Found") << endl;

    return 0;
}