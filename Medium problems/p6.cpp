// 6. Zigzag Conversion
// Complete with 76% runtime and 88% memory

#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

string convert(string s, int numRows) {
    if (numRows <= 1) return s;
    string res = "";
    int i = 0, j = 0;
    int gap = numRows - 2;
    
    while(i != numRows) {
        j = i;
        while (j < s.length()) {
            res += s[j];
            if (i != 0 && i != numRows - 1) {
                int temp = j + (numRows - i - 1) * 2;
                if (temp < s.length())
                    res += s[temp];
            }
            j = j + numRows + gap;
        }

        i++;
    }

    return res;
}

int main() {
    cout << convert("PAYPALISHIRING", 4);
}