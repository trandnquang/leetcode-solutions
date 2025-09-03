// 3110. Score of a String
// Complete with 100% runtime and 91% memory

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int scoreOfString(string s) {
    int sum = 0;
    for (int i = 1; i < s.length(); i++) {
        sum += abs(s[i]-s[i-1]);
    }
    return sum;
}