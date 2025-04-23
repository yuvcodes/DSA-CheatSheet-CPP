#include <iostream>
#include <string>
using namespace std;
/*
getline(cin, str)     → Take full line input
str.length() / size() → Get length
str[i] / str.at(i)    → Access character
+ or append()         → Add to end
substr(pos, len)      → Extract part of string
find("text")          → Find substring, returns index or npos (string::npos)
compare(s2)           → Compare strings

*/
int main() {
    // Declare a string
    string str = "Hello, World!";

    // Output the string
    cout << "Original String: " << str << endl;

    // Append to string
    str += " Welcome to C++!";
    cout << "After append: " << str << endl;

    // Access a specific character using indexing
    cout << "Character at index 0: " << str[0] << endl;

    // Use the at() method (bounds checking)
    cout << "Character at index 1: " << str.at(1) << endl;

    // Get string length
    cout << "Length of string: " << str.length() << endl;

    // Substring: Get a part of the string
    string subStr = str.substr(7, 5); // starts at index 7, length 5
    cout << "Substring: " << subStr << endl;

    // Find a substring in a string
    size_t found = str.find("World");
    if (found != string::npos) {
        cout << "'World' found at index: " << found << endl;
    } else {
        cout << "'World' not found!" << endl;
    }

    // Replace part of the string
    str.replace(7, 5, "Universe"); // at 7th position replace 5 len word with "Universe"
    cout << "After replacement: " << str << endl;

    // Erase part of the string
    str.erase(5, 2); // Erase from index 5, remove 2 characters
    cout << "After erase: " << str << endl;

    // Check if string is empty
    if (str.empty()) {
        cout << "String is empty!" << endl;
    } else {
        cout << "String is not empty!" << endl;
    }

    // Clear the string
    str.clear();
    cout << "After clear, string length: " << str.length() << endl;

    return 0;
}