// 13. Roman to Integer
// Complete with 100% runtime and 98.99% memory
#include <iostream>
#include <string>
using namespace std;

int romanToInt(string s) {
    int res = 0;
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] == 'I') {
            if (i < len - 1 && s[i + 1] == 'V' || s[i + 1] == 'X') 
                res -= 1;
            else 
                res += 1;
        }
        if (s[i] == 'V') res += 5;
        if (s[i] == 'X') {
            if (i < len - 1 && s[i + 1] == 'L' || s[i + 1] == 'C') 
                res -= 10;
            else 
                res += 10;
        }
        if (s[i] == 'L') res += 50;
        if (s[i] == 'C') {
            if (i < len - 1 && s[i + 1] == 'D' || s[i + 1] == 'M') 
                res -= 100;
            else 
                res += 100;
        }
        if (s[i] == 'D') res += 500;
        if (s[i] == 'M') res += 1000;
    }
    return res;
}

int main(void) {
    cout << romanToInt("III") << endl;
    cout << romanToInt("LVIII") << endl;
    cout << romanToInt("MCMXCIV") << endl;

}