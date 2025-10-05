// 557. Reverse Words in a String III

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define sz(x) ((int)(x).size())
#define endl '\n'

// Complete with 5% runtime and 5% memory
// Too bad
// string swapstr(string s, int i, int j) {
//     string res = s.substr(0, j);
//     while (i < j) {
//         swap(res[i++], res[--j]);
//     }
//     return res;
// }

// string reverseWords(string s) {
//     int i = s.find(' ');
//     string res = "";
//     while (i != string::npos) {
//         res += swapstr(s, 0, i) + " ";
//         s = s.substr(i + 1);
//         i = s.find(' ');
//     }
//     res += swapstr(s, 0, s.size());
//     return res;
// }

// Using <sstream>
// Complete with 33% runtime and 25% memory
// string reverseWords(string s) {
//     stringstream ss(s);
//     string word, result;
//     while (ss >> word) {
//         reverse(word.begin(), word.end());
//         if (!result.empty()) result += " ";
//         result += word;
//     }
//     return result;
// }


// Using basic loop with O(1) espace
// Complete with 100% runtime and 90% memory
// Not my solution
string reverseWords(string s) {
    int n = s.size();
    int start = 0;
    for (int i = 0; i <= n; i++) {
        if (i == n || s[i] == ' ') {
            reverse(s.begin() + start, s.begin() + i);
            start = i + 1;
        }
    }
    return s;
}

int main() {
    fastio

    string s = "Let's take LeetCode contest";
    cout << reverseWords(s);
}