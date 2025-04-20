#include <iostream>
#include <queue>
#include <vector>
/*
	Priority Queue is a container adaptor in C++ that provides fast access to the highest priority element.
	•	By default, it is a max-heap, meaning the largest element has the highest priority.
	•	You can also create a min-heap by specifying the comparator greater<int>.

Key Functions:
	•	push(x): Adds element x to the priority queue.
	•	pop(): Removes the top element (highest priority in a max-heap or lowest in a min-heap).
	•	top(): Returns the top element (highest or lowest based on the heap type).
	•	empty(): Returns true if the queue is empty.
	•	size(): Returns the number of elements in the queue.

Types of Priority Queues:
	1.	Max-Heap (default):
	•	The largest element is at the top.
	•	Operations (insert, remove) are O(log n) on average.
	2.	Min-Heap:
	•	The smallest element is at the top.
	•	We use the comparator greater<T> to change the default behavior of priority_queue from max-heap to min-heap.
*/

using namespace std;

int main() {
    // Max-heap priority queue (default behavior)
    priority_queue<int> maxHeap;

    // Inserting elements into the max-heap
    maxHeap.push(10);
    maxHeap.push(20);
    maxHeap.push(15);

    // Display the top element (highest priority)
    cout << "Top element (Max Heap): " << maxHeap.top() << endl;

    // Removing the top element
    maxHeap.pop();
    cout << "Top element after pop: " << maxHeap.top() << endl;

    // Min-heap priority queue
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Inserting elements into the min-heap
    minHeap.push(10);
    minHeap.push(20);
    minHeap.push(15);

    // Display the top element (lowest priority)
    cout << "Top element (Min Heap): " << minHeap.top() << endl;

    // Removing the top element
    minHeap.pop();
    cout << "Top element after pop: " << minHeap.top() << endl;

    return 0;
}