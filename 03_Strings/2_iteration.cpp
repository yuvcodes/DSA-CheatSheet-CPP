#include <iostream>
#include <string>
using namespace std;

int main() {
    // Take user input for a string
    string userInput;
    cout << "Enter a string: ";
    getline(cin, userInput);  // Use getline to allow spaces in the string

    // Iterating through the string using a for loop
    cout << "Iterating through the string using a for loop:" << endl;
    for (int i = 0; i < userInput.length(); i++) {
        cout << userInput[i];  // Print each character
    }
    cout << endl;

    // Iterating using a range-based for loop (C++11 and above)
    cout << "Iterating through the string using a range-based for loop:" << endl;
    for (char ch : userInput) {
        cout << ch << " ";  // Print each character
    }
    cout << endl;

    // Iterating using an iterator
    cout << "Iterating through the string using an iterator:" << endl;
    for (auto it = userInput.begin(); it != userInput.end(); ++it) {
        cout << *it << " ";  // Dereference iterator to get character
    }
    cout << endl;

    return 0;
}