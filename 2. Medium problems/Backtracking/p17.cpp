// 17. Letter Combinations of a Phone Number
// 2 solutions

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

// My solution: Complete with 16% runtime and 11% memory
// class Solution {
// public:
//     map<char, vector<char>> mp = {{'2', {'a', 'b', 'c'}}, {'3', {'d', 'e', 'f'}}, {'4', {'g', 'h', 'i'}}, 
//                                 {'5', {'j', 'k', 'l'}}, {'6', {'m', 'n', 'o'}}, {'7', {'p', 'q', 'r', 's'}}, 
//                                 {'8', {'t', 'u', 'v'}}, {'9', {'w', 'x', 'y','z'}}};
    
//     vector<string> backtracking(string digits, vector<string> strs) {
//         char ch = digits[0];
//         vector<string> newstrs;
        
//         if (strs.empty()) {
//             for (char c : mp[ch]) newstrs.push_back(string(1, c));
//         } else {
//             for (string str : strs) {
//                 for (char c : mp[ch]) {
//                     newstrs.push_back(str + c);
//                 }
//             } 
//         }

//         return (digits.size() > 1) ? backtracking(digits.substr(1), newstrs) : newstrs;
//     }

//     vector<string> letterCombinations(string digits) {
//         if (digits.empty()) return {};
//         vector<string> res = backtracking(digits, {});
//         return res;
//     }
// };

// Other solution: 100% runtime and 57% memory
// Direct link: https://leetcode.com/problems/letter-combinations-of-a-phone-number/solutions/5601412/easy-and-simple-c-solution-detailed-explanation-beats-100/

class Solution {
private:
    void solve(string digit, string output, int i, vector<string>& ans,
               string mapping[]) {
        if (i >= digit.length()) {
            ans.push_back(output);
            return;
        }

        int num = digit[i] - '0';
        string value = mapping[num];

        for (int j = 0; j < value.length(); j++) {
            output.push_back(value[j]);
            solve(digit, output, i + 1, ans, mapping);
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digit) {
        vector<string> ans;
        if (digit.length() == 0) {
            return ans;
        }
        int i = 0;
        string output;
        string mapping[10] = {"",    "",    "abc",  "def", "ghi",
                              "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digit, output, i, ans, mapping);
        return ans;
    }
};


int main() {
    Solution* obj = new Solution();
    for (string s : obj->letterCombinations("23")) cout << s << " ";
}