#include <bits/stdc++.h>
using namespace std;

int main () {
    // 🔹 Pair in vector
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});

    vec.push_back(make_pair(3, 4));

    for (auto &p : vec)
        cout << p.first << "," << p.second << " "; // 1,2 3,4
        cout << endl;

    // 🔹 Array of pairs
    pair<int, int> arr[] = {{5, 10}, {15, 20}, {25, 30}};
    for (auto &x : arr)
        cout << "(" << x.first << "," << x.second << ") "; // (5,10) (15,20) (25,30)
	cout << endl;

    // 🔹 Unpack using structured bindings (C++17+)
     pair<int, int> p1 = {1, 2};
    auto [x, y] = p1; // x = p1.first, y = p1.second
    cout << x << " " << y << "\n";

    // 🔹 Sorting vector of pairs (by first, then second)
    vector<pair<int, int>> vp = {{3, 9}, {1, 7}, {1, 2}};
    sort(vp.begin(), vp.end()); // default sorts by .first, then .second

    for (auto [a, b] : vp)
        cout << "(" << a << "," << b << ") "; // (1,2) (1,7) (3,9)

    return 0;
 }