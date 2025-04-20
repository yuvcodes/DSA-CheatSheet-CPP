#include <iostream>
#include <queue>
using namespace std;
/*
push(x)   → Add to end
pop()     → Remove from front
front()   → First element
back()    → Last element
size()    → Number of elements
empty()   → Check if queue is empty
No direct find() → use while loop

*/
int main() {
    queue<int> q;

    // Add elements manually
    q.push(100);
    q.push(200);
    q.push(300);

    // Add from user
    int n;
    cout << "How many numbers to enqueue? ";
    cin >> n;
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        q.push(val);
    }

    // Front and Back
    if (!q.empty()) {
        cout << "Front: " << q.front() << endl;
        cout << "Back: " << q.back() << endl;
    }

    // Size
    cout << "Queue size: " << q.size() << endl;

    // Traverse and remove
    cout << "Queue elements (FIFO): ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    cout << "\nIs queue empty? " << (q.empty() ? "Yes" : "No") << endl;

    return 0;
}