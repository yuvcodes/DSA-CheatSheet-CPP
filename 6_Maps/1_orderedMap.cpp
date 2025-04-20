#include <bits/stdc++.h>
using namespace std;
/*
map<Key, Value>             → Key-value store (sorted by keys)

insert({key, value})        → Insert pair
map[key] = value            → Add or update value
map.at(key)                 → Access (throws error if not found)
map[key]                    → Access (creates key if not found)
find(key)                   → Returns iterator to key or map.end()
erase(key)                  → Deletes key
size()                      → Number of elements
empty()                     → Check if empty
begin(), end()              → Iterators for loop
Keys are sorted             → Slower (Average O(log n)), uses balanced BST
No need for hashable key    → Works with complex types (e.g., pair<int, pair<int, int>>)
*/

int main() {
    // Declare an ordered map
    map<string, int> mp;

    // Insert elements
    mp["apple"] = 3;
    mp["banana"] = 5;
    mp["cherry"] = 2;

    // Update value
    mp["banana"] = 7;

    // Access value
    cout << "Banana count: " << mp["banana"] << endl;

    // Traversal (auto picks pair<string, int>)
    cout << "All elements:\n";
    for (auto &pair : mp) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Check existence
    if (mp.find("apple") != mp.end()) {
        cout << "Apple exists in map.\n";
    }

    // Erase an element
    mp.erase("cherry");

    // Size
    cout << "Size of map: " << mp.size() << endl;

    // Clear entire map
    mp.clear();

    cout << "Is map empty? " << (mp.empty() ? "Yes" : "No") << endl;

	// complex maps
 	// Define the map (unordered_map wont work) with pair of pairs as the key and an int as the value
    map<pair<int, pair<int, int>>, int> myMap;

        // Insert elements
        myMap[{1, {2, 3}}] = 100;  // key = {1, {2, 3}}, value = 100
        myMap[{2, {3, 4}}] = 200;  // key = {2, {3, 4}}, value = 200
        myMap[{1, {1, 1}}] = 300;  // key = {1, {1, 1}}, value = 300

        // Access and print elements
        // entire pair is the key (so unique otherwise will be overriden)
        for (auto &entry v: myMap) {
            cout << "Key: {" << entry.first.first << ", {"
                 << entry.first.second.first << ", "
                 << entry.first.second.second << "}}, Value: "
                 << entry.second << endl;
        }

    return 0;
}