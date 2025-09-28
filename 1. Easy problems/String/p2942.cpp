// 2942. Find Words Containing Character
// Complete with 100% runtime and 11% memory
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> findWordsContaining(vector<string>& words, char x) {
    vector<int> ans;
    int i = 0;
    for (string s : words) {
        if (s.find(x) != string::npos) {
            ans.push_back(i);
        }
        i++;
    }
    return ans;
}