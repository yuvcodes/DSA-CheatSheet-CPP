#include <bits/stdc++.h>
using namespace std;

/*
Input string:        getline(cin, s);
Length:              s.length()
Access char:         s[i] or s.at(i)
Substring:           s.substr(start, len)
Concatenate:         s + "text" or s.append("text")
Insert:              s.insert(pos, "text")
Erase:               s.erase(pos, len)
Replace:             replace(s.begin(), s.end(), 'a', '@')
Find:                s.find("text")
Reverse:             reverse(s.begin(), s.end())
Compare:             s.compare("other") == 0 → equal
Check empty:         s.empty()
Transform case:      tolower(c), toupper(c)
Character checks:    isalpha(c), isdigit(c), isalnum(c), isspace(c)
*/
void stringFunctions(string &s) {
    cout << "Original string: " << s << "\n\n";

    // Initial buckets
    string alnum = "", alpha = "", digits = "", space = "", specialChar = "", lower = "", upper = "";

    for (char c : s) {
        if (isalnum(c)) alnum += c;
        if (isalpha(c)) alpha += c;
        if (isdigit(c)) digits += c;
        if (isspace(c)) space += c;
        if (!isalnum(c) && !isspace(c)) specialChar += c;
        lower += tolower(c); // Lowercase version
        upper += toupper(c); // Uppercase version
    }

    cout << "[1] Alphanumeric: " << alnum << '\n';
    cout << "[2] Alphabets only: " << alpha << '\n';
    cout << "[3] Digits only: " << digits << '\n';
    cout << "[4] Whitespaces: " << space << '\n';
    cout << "[5] Special characters: " << specialChar << '\n';
    cout << "[6] Lowercase version: " << lower << '\n';
    cout << "[7] Uppercase version: " << upper << "\n\n";

    // Common string operations
    cout << "🔹 Common String Operations 🔹\n";

    cout << "[8] Length: " << s.length() << '\n';
    cout << "[9] Substring (from 2, len 5): " << s.substr(2, 5) << '\n';
    cout << "[10] First word using find: " << s.substr(0, s.find(" ")) << '\n';

    string appended = s + " World";
    cout << "[11] Appended string (+): " << appended << '\n';

    s.append("!!!");
    cout << "[12] After append(): " << s << '\n';

    reverse(s.begin(), s.end());
    cout << "[13] Reversed string: " << s << '\n';
    reverse(s.begin(), s.end()); // Revert back

    cout << "[14] Is empty? " << (s.empty() ? "Yes" : "No") << '\n';

    string replaced = s;
    replace(replaced.begin(), replaced.end(), 'a', '@');
    cout << "[15] Replace 'a' with '@': " << replaced << '\n';

    string inserted = s;
    inserted.insert(3, "TEST");
    cout << "[16] After insert at pos 3: " << inserted << '\n';

    string erased = s;
    erased.erase(2, 4);
    cout << "[17] After erase from pos 2 (len 4): " << erased << '\n';

    cout << "[18] Compare with 'test': " << s.compare("test") << " (0 = equal)\n";

    cout << "\n🔚 End of String Functions Demo 🔚\n";
}

int main() {
    string s;
    cout << "Enter a string with mix of characters:\n";
    getline(cin, s);

    stringFunctions(s);
    return 0;
}