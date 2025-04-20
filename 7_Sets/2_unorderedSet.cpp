#include <iostream>
#include <unordered_set>
using namespace std;

/*
1.	insert(x): Adds element x to the unordered set. If x is already present, it will be ignored (no duplicates in the set).
2.	erase(x): Removes element x from the unordered set if it exists.
3.	find(x): Searches for element x. If found, returns an iterator to the element; otherwise, returns an iterator to end().
4.	size(): Returns the number of elements in the unordered set.
5.	empty(): Returns true if the unordered set is empty, otherwise false.
6.	Iteration: Use a range-based for loop to traverse the unordered set. Note that unlike set, the elements in an unordered_set are not stored in any particular order.
7.	Fast Search: unordered_set uses a hash table for storing elements, providing average O(1) time complexity for search, insert, and delete operations.
8.	No Sorting: Unlike set, elements in an unordered_set are not sorted. The internal ordering of the elements is based on hash values.
*/

int main() {
    // Create an unordered set of integers
    unordered_set<int> us;

    // Adding elements to the unordered set
    us.insert(10);
    us.insert(20);
    us.insert(30);
    us.insert(10);  // Duplicate, will be ignored

    // Printing all elements (unordered, no specific order)
    cout << "Elements in the unordered set: ";
    for (int x : us) {
        cout << x << " ";
    }
    cout << endl;

    // Check if an element exists
    if (us.find(20) != us.end()) {
        cout << "20 is in the unordered set." << endl;
    } else {
        cout << "20 is NOT in the unordered set." << endl;
    }

    // Removing an element
    us.erase(20);  // Removes element 20
    cout << "After removing 20, elements: ";
    for (int x : us) {
        cout << x << " ";
    }
    cout << endl;

    // Size of the unordered set
    cout << "Size of the unordered set: " << us.size() << endl;

    // Checking if the unordered set is empty
    cout << "Is the unordered set empty? " << (us.empty() ? "Yes" : "No") << endl;

    return 0;
}