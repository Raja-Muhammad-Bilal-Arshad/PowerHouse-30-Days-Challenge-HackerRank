#include <iostream>
using namespace std;
string superReducedString(string s) {
    string result; // Acts as a stack
    
    for (char c : s) {
        if (!result.empty() && result.back() == c) {
            result.pop_back(); // Remove adjacent duplicate
        } else {
            result.push_back(c);
        }
    }

    return result.empty() ? "Empty String" : result;
}

int main() {
    string s;
    cin >> s;

    cout << superReducedString(s) << endl;
    return 0;
}
