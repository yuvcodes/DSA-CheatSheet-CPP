#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    // Max-heap priority queue (default behavior)
    priority_queue<int> maxHeap;

    // Inserting elements into the max-heap
    maxHeap.push(10);
    maxHeap.push(20);
    maxHeap.push(15);

    // Iterating through the priority queue by popping elements
    cout << "Iterating through Max-Heap by popping elements:\n";
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop(); // Remove the top element
    }

    cout << endl;

    return 0;
}