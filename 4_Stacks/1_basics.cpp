#include <iostream>
#include <stack>
using namespace std;

/*
push(x)     → Add element on top
pop()       → Remove top element
top()       → Access top element (does NOT remove)
empty()     → Returns true if stack is empty
size()      → Number of elements
No find()   → Use loop to check manually
*/

// Function to find an element in stack
bool findInStack(stack<int> st, int target) {
    while (!st.empty()) {
        if (st.top() == target)
            return true;
        st.pop();  // remove top and check next
    }
    return false;
}

int main() {
    stack<int> st;

    // Add elements manually
    st.push(10);
    st.push(20);
    st.push(30);

	cout <<"Total elements present in stack : " <<  st.size() << endl;

    // Add elements from user
    int n;
    cout << "How many numbers to push? ";
    cin >> n;
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        st.push(val);
    }

    // Top element
    if (!st.empty())
        cout << "Top element: " << st.top() << endl;

    // Size of stack
    cout << "Stack size: " << st.size() << endl;

    // Search element in stack
    int x;
    cout << "Enter number to search: ";
    cin >> x;
    if (findInStack(st, x)) cout << x << " is in the stack\n";
    else cout << x << " is NOT in the stack\n";

    // Traverse stack (print and remove)
    cout << "Stack elements (LIFO): ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

	cout << endl;
    cout << "Popped all stack elements" << endl;

    cout << "\nIs stack empty? " << (st.empty() ? "Yes" : "No") << endl;

    return 0;
}