// 443. String Compression
// Complete with 100% runtime and 10% memory
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define sz(x) ((int)(x).size())
#define endl '\n'

int compress(vector<char>& chars) {
    char curr = chars[0];
    int count = 0, i = 0;
    for (int j = 0; j < chars.size(); j++) {
        if (chars[j] == curr) {
            count++;
        } else {
            chars[i++] = curr;
            if (count > 1) {
                string temp = to_string(count);
                for (char c : temp)
                    chars[i++] = c;
            }
            curr = chars[j];
            count = 1;
        }
    }
    
    chars[i++] = curr;
    if (count > 1) {
        string temp = to_string(count);
        for (char c : temp)
            chars[i++] = c;
    }

    return i;
}

int main() {
    fastio
    vector<char> chars = {'a','a','b','b','c','c','c'};
    cout << compress(chars);
}