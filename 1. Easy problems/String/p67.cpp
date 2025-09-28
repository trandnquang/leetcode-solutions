// 67. Add Binary
// Complete with 2 ways
// - First way have 100% runtime and 11% memory
// - Second way have 24% runtime and 22% memory

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// First way 
string addBinary1(string a, string b) {
    string res = "";
    bool carry = 0;
    
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 && j >= 0) {
        int sum = (a[i] - '0') + (b[j] - '0') + carry;
        res = char((sum % 2) + '0') + res;
        carry = sum / 2;
        i--;j--;
    }

    while (i >= 0) {
        int sum = (a[i] - '0') + carry;
        res = char((sum % 2) + '0') + res;
        carry = sum / 2;
        i--;
    }

    while (j >= 0) {
        int sum = (b[j] - '0') + carry;
        res = char((sum % 2) + '0') + res;
        carry = sum / 2;
        j--;
    }

    if(carry) res = '1' + res;

    return res;
}

// Second way
string addBinary2(string a, string b) {
    string res = "";
    int carry = 0;
    
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 ||  j >= 0 || carry) {
        if (i >= 0) carry += a[i--] - '0';
        if (j >= 0) carry += b[j--] - '0';
        res = char(carry % 2 + '0') + res;
        carry /= 2;
    }   

    return res;
}

int main() {
    cout << addBinary1("1010", "1011") << endl;
    cout << addBinary2("1010", "1011");
}