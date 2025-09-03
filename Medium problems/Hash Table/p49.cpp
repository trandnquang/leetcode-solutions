#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <map>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> res;
    map<int, map<int, int>> m;
    int i = 0;

    for (string str : strs) {
        map<int, int> mp;
        for (char c : str) mp[c - 'a']++; 

        auto it = m.begin();

        while (it != m.end()) {
            if (it->second.size() == mp.size()) {
                for (auto j = it->second.begin(); j != it->second.end(); ++j) {
                    if (j->second != mp[j->first]) break;
                }

            }

            it++;
        }

        if (it == m.end()) {
            res.push_back({str});
            m.insert({i++, mp});
        }
        
    }
}