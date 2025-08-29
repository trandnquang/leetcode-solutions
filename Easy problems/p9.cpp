// 9. Palindrome Number
// Complete with 100% runtime and 14% memory

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) return false;

    string s = to_string(x);
    int len = s.length();
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) return false;
    }
    return true;
}

int main() {
    cout << isPalindrome(121);
}