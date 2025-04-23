#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;

// Custom comparator to prioritize longer strings (max-heap)
struct CustomComparator {
    bool operator()(const string& s1, const string& s2) {
        return s1.size() < s2.size();  // Longer strings have higher priority
    }
};

int main() {
	//  But in the case of strings, the ordering isn’t by length,
	// it’s by lexicographical order (dictionary order), which is the default comparison for strings in C++.
	// hence we write a custom comparator
    priority_queue<string, vector<string>, CustomComparator> maxHeap;

    maxHeap.push("short");
    maxHeap.push("longer");
    maxHeap.push("longest");

    cout << "Top element (Max-Heap based on string length): " << maxHeap.top() << endl;

    return 0;
}

// output: Top element (Max-Heap based on string length): longest
