#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// Custom comparator to compare based on a pair of pairs
// Explanation:
// The custom comparator sorts primarily by the first element of the inner pair and secondarily by the second element.

struct CustomComparator {
    bool operator()(const pair<int, pair<int, int>>& p1, const pair<int, pair<int, int>>& p2) {
        if (p1.second.first != p2.second.first) {
            return p1.second.first > p2.second.first;  // Compare first elements of the pair
        }
        return p1.second.second > p2.second.second;  // Compare second elements of the pair
    }
};

int main() {
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, CustomComparator> minHeap;

    minHeap.push({1, {10, 20}});
    minHeap.push({2, {5, 25}});
    minHeap.push({3, {15, 30}});

    cout << "Top element (Min-Heap based on custom comparator): ("
         << minHeap.top().first << ", " << minHeap.top().second.first << ", "
         << minHeap.top().second.second << ")" << endl;

    return 0;
}

// output:
// Top element (Min-Heap based on custom comparator): (2, 5, 25)