#include <bits/stdc++.h>
using namespace std;

int main() {
    // 🔹 Declaration & Initialization
    pair<int, int> p1 = {1, 2};          // basic int pair
    pair<string, int> p2("age", 25);     // pair with string and int

    // 🔹 Access elements
    cout << p1.first << " " << p1.second << "\n"; // 1 2
    cout << p2.first << " " << p2.second << "\n"; // age 25

    // 🔹 Nested pair (pair inside pair)
    pair<int, pair<int, int>> p3 = {1, {2, 3}};
    cout << p3.first << " " << p3.second.first << " " << p3.second.second << "\n"; // 1 2 3

    // 🔹 Make pair (shortcut)
    auto p4 = make_pair(100, "Hello");
    cout << p4.first << " " << p4.second << "\n"; // 100 Hello

    // 🔹 Comparing pairs (compares first, then second)
    pair<int, int> a = {1, 5};
    pair<int, int> b = {1, 10};
    cout << (a < b) << "\n"; // true (1st elements equal, compares 5 < 10)

    // 🔹 Swapping pairs
    swap(a, b);
    cout << a.first << " " << a.second << "\n"; // 1 10

}