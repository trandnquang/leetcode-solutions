// 66. Plus One
// Complete with 100% runtime and 67% memory
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    vector<int> res(digits.size());
    int carry = 1;

    for (int i = digits.size() - 1; i >= 0; i--) {
        cout << digits[i] << endl;
        if (digits[i] + carry >= 10) {
            res[i] = 0;
            carry = 1;
            if (i == 0) {
                vector<int> newvec(digits.size() + 1);
                newvec[0] = 1;
                for (int i = 1; i < digits.size() + 1; i++) {
                    newvec[i] = res[i-1];
                }
                return newvec;
            }
        } else {
            res[i] = digits[i] + carry;
            carry = 0;
        }
    }

    return res;
}

int main() {
    vector<int> vec = {9, 9};
    for (int x : plusOne(vec)) cout << x << " ";
}