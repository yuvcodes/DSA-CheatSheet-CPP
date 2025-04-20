#include <iostream>
#include <queue>
#include <vector>
#include <functional> // for std::greater

using namespace std;
// The priority queue is ordered based on the second element of each pair.
// The largest second element will be at the top.

// Custom comparator to sort pairs based on the second element (descending order)
struct CustomComparator {
    bool operator()(const pair<int, int>& p1, const pair<int, int>& p2) {
        return p1.second < p2.second;  // Compare based on the second element
    }
};

int main() {
    priority_queue<pair<int, int>, vector<pair<int, int>>, CustomComparator> maxHeap;

    maxHeap.push({1, 10});
    maxHeap.push({2, 20});
    maxHeap.push({3, 15});

    cout << "Top element (Max-Heap based on second element): ("
         << maxHeap.top().first << ", " << maxHeap.top().second << ")" << endl;

    return 0;
}