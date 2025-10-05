// 242. Valid Anagram
// Complete with 100% runtime and 91% memory

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define sz(x) ((int)(x).size())
#define endl '\n'

bool isAnagram(string s, string t) {
    int arr[26];

    for (char c : s) arr[c - 97]++;

    for (char c : t) {
        if (arr[c - 97] <= 0) return false;
        arr[c - 97]--;
    }

    for (int num : arr) 
        if (num > 0) return false;
    
    return true;
}

int main() {
    fastio
    string s = "rat", t = "cat";
    cout << isAnagram(s,t);
}