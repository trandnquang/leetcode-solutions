// 344. Reverse String
// Complete with 100% runtime and 54% memory

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
    int i = 0, j = s.size() - 1;

    while (i < j) {
        swap(s[i++], s[j--]);
    }
}


