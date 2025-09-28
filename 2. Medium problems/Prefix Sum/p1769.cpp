// 1769. Minimum Number of Operations to Move All Balls to Each Box
// Complete with 52% runtime and 96% memory
#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

// O(n^2)
vector<int> minOperations(string boxes) {
    vector<int> res(boxes.length());

    for (int i = 0; i < boxes.length(); i++) {
        if (boxes[i] == '1') {
            for (int j = 0; j < boxes.length(); j++) {
                res[j] += abs(i-j);
            }
        }
    }

    return res;
}

// O(n) Prefix Sum