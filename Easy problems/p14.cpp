// 14. Longest Common Prefix
// Complete with 100% runtime and 67% memory

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string first = strs[0];
    int count = first.length();

    for (int i = 1; i < strs.size(); i++){
        if (count == 0) return "";
        if (count > strs[i].length()) count = strs[i].length();
        for (int j = 0; j < count; j++) {
            if (first[j] != strs[i][j]) {
                count = j;
            }
        }
    }
    return first.substr(0, count);
}

int main(void) {
    vector<string> strs1 = {"flower","flow","flight"};
    vector<string> strs2 = {"dog","racecar","car"};
    cout << longestCommonPrefix(strs1) << endl;
    cout << longestCommonPrefix(strs2) << endl;
}