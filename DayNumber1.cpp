#include <iostream>

std::string superReducedString(std::string s) {
    std::string result; // Acts as a stack
    
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
    std::string s;
    std::cin >> s;

    std::cout << superReducedString(s) << std::endl;
    return 0;
}
