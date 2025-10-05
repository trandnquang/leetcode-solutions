// 125. Valid Palindrome
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define sz(x) ((int)(x).size())
#define endl '\n'

// Complete with 100% runtime and 87% memory
bool isPalindrome(string s) {
    int i = 0, j = s.size() - 1;
    char c1, c2;

    while (i < j) {
        while (i < j && !isalnum(s[i])) i++;
        while (i < j && !isalnum(s[j])) j--;
        if (i >= j) break;

        if (tolower(s[i]) != tolower(s[j])) return false;
        i++;j--;
    }

    return true;
}

int main() {
    fastio
    string s = "A man, a plan, a canal: Panama";
    isPalindrome(s);
}