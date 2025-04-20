#include <iostream>
#include <queue>
#include <vector>
#include <functional> // for std::greater
using namespace std;

// The greater<int> comparator ensures that the smallest element has the highest priority.
int main() {
    // Min-heap using the greater<int> comparator
    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(10);
    minHeap.push(5);
    minHeap.push(20);
    minHeap.push(15);

    cout << "Top element (Min-Heap): " << minHeap.top() << endl;

    return 0;
}