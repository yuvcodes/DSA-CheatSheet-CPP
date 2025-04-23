#include <iostream>
#include <unordered_map>
using namespace std;
/*

unordered_map<Key, Value>   → Key-value store (no order)
(same functions as map)

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
    unordered_map<string, int> umap;

    // Insert values
    umap["apple"] = 10;
    umap["banana"] = 20;
    umap.insert({"cherry", 30});
    umap["banana"] = 25;  // Overwrites existing value

    // Access elements
    cout << "apple -> " << umap["apple"] << endl;
    cout << "banana -> " << umap["banana"] << endl;

    // Check existence
    if (umap.find("cherry") != umap.end())
        cout << "cherry is present with value " << umap["cherry"] << endl;

    // Iterate
    cout << "All elements:\n";
    for (auto &pair : umap)
        cout << pair.first << " => " << pair.second << endl;

    // Erase
    umap.erase("banana");

    // After deletion
    cout << "\nAfter deleting banana:\n";
    for (auto &pair : umap)
        cout << pair.first << " => " << pair.second << endl;

    return 0;
}