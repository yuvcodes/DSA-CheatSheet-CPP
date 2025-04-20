#include <iostream>
#include <set>
using namespace std;
/*
	1. insert(x): Adds element x to the set. If x is already present, it will be ignored (no duplicates in a set).
	2. erase(x): Removes element x from the set if it exists.
	3. find(x): Searches for element x. If found, returns an iterator to the element; otherwise, returns an iterator to end().
	4. begin(): Returns an iterator to the first element in the set.
	5. end(): Returns an iterator one past the last element (useful for iteration).
	6. size(): Returns the number of elements in the set.
	7. empty(): Returns true if the set is empty, otherwise false.
	8. Iteration: Use a range-based for loop or an iterator to traverse the set, as sets do not allow direct access via index.
	9. Sorted: The elements in a set are stored in a sorted order by default (ascending).
*/

int main() {
    // Create a set of integers
    set<int> s;

    // Adding elements to the set
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(10);  // Duplicate, will be ignored

    // Printing all elements (Set is automatically sorted)
    cout << "Elements in the set: ";
    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;

    // Accessing elements (no direct indexing, use iterator)
    cout << "First element (using iterator): " << *s.begin() << endl;

    // Check if an element exists
    if (s.find(20) != s.end()) {
        cout << "20 is in the set." << endl;
    } else {
        cout << "20 is NOT in the set." << endl;
    }

	 // Using iterator to access elements
       for (auto it = s.begin(); it != s.end(); ++it) {
           cout << *it << " ";
       }
        cout << endl;

    // Removing an element
    s.erase(20);  // Removes element 20
    cout << "After removing 20, elements: ";
    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;

    // Size of the set
    cout << "Size of the set: " << s.size() << endl;

    // Checking if the set is empty
    cout << "Is the set empty? " << (s.empty() ? "Yes" : "No") << endl;

    return 0;
}