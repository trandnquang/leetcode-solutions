// 38. Count and Say
// Complete with 83% runtime and 92% memory

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define sz(x) ((int)(x).size())
#define endl '\n'

string countAndSay(int n) {
    if (n == 1) return "1";
    string ans = "1", temp = "";
    int count = 0;
    char curr = ' ';
    while (n-- != 1) {
        for (char c : ans) {
            if (curr != ' ' && c != curr)  {
                temp += to_string(count) + curr;
                count = 0;
            }
            curr = c;
            count++;
        }
        temp += to_string(count) + curr;
        ans = temp;
        temp = "";
        count = 0;
        curr = ' ';
    }
    return ans;
}

int main() {
    fastio
    
    cout << countAndSay(4);
}