#include <bits/stdc++.h>
using namespace std;
/*
push_back(x)     → Add element to end
pop_back()       → Remove last element
back()           → Get last element
front()          → Get first element
vec[i] / at(i)   → Access element
size()           → Number of elements
empty()          → Check if empty
clear()          → Remove all elements
erase(pos)       → Remove element at position
insert(pos, x)   → Insert at any position
find() → Use loop or std::find from <algorithm>

*/
int main() {
    // Vector with predefined values
    vector<int> vec1;
    vec1.push_back(10);
    vec1.push_back(20);
    vec1.push_back(30);

    cout << "vec1 - Predefined Vector:\n";

    // Access elements
    cout << "First element: " << vec1[0] << endl;       // using []
    cout << "Second element: " << vec1.at(1) << endl;   // using at()

    // Last element
    cout << "Last element (back): " << vec1.back() << endl;

    // Size of vector
    cout << "Size: " << vec1.size() << endl;

    // Traversal
    cout << "All elements: ";
    for (int val : vec1) cout << val << " ";

    // Remove last element
    vec1.pop_back();

    // After removal
    cout << "\nAfter pop_back, elements: ";
    for (int val : vec1) cout << val << " ";

    cout << "\n\n";

    // Vector with user input
    vector<int> vec2;
    int n, x;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> x;
        vec2.push_back(x);
    }

    cout << "vec2 - User Input Vector:\n";
    cout << "All elements: ";
    for (int val : vec2) cout << val << " ";
}