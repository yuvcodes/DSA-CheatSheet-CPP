#include <bits/stdc++.h>
using namespace std;
/*
map<key, value> -> sorted with key
map<pair<>>		-> complex maps also exist
mp["x"] = y 	-> insertion in map
mp[x]			-> access
auto &pair		-> traverse map
mp.find(x) != mp.end() -> find an element
size()			-> size of map

--------------------------------
same syntax and functions below as ordered map
unordered_map<Key, Value>   → Key-value store (no order)

insert({key, value})        → Insert pair
map[key] = value            → Add or update value
map.at(key)                 → Access (throws error if not found)
map[key]                    → Access (creates key if not found)
find(key)                   → Returns iterator to key or map.end()
erase(key)                  → Deletes key
size()                      → Number of elements
empty()                     → Check if empty
begin(), end()              → Iterators for loop
Keys are not sorted         → Faster (Average O(1)), uses hashing
Needs hashable key type     → No complex keys like pair<int, pair<int,int>> (use map instead)
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

	// mixed maps

	// Define the map with pair of pairs as the key and an int as the value
        map<pair<int, pair<int, int>>, int> myMap;

        // Insert elements
        myMap[{1, {2, 3}}] = 100;  // key = {1, {2, 3}}, value = 100
        myMap[{2, {3, 4}}] = 200;  // key = {2, {3, 4}}, value = 200
        myMap[{1, {1, 1}}] = 300;  // key = {1, {1, 1}}, value = 300

        // Access and print elements
        // entire pair is the key (so unique otherwise will be overriden)
        for (auto &entry : myMap) {
            cout << "Key: {" << entry.first.first << ", {"
                 << entry.first.second.first << ", "
                 << entry.first.second.second << "}}, Value: "
                 << entry.second << endl;
        }

    return 0;
}