// 2574. Left and Right Sum Differences
// Complete with 100% runtime and 95% memory

#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> leftRightDifference(vector<int>& nums) {
    vector<int> res(nums.size());

    int sum = 0;
    for (int i = 1; i < nums.size(); i++) {
        sum = nums[i - 1] + sum;
        res[i] = sum;
    }

    sum = 0;
    for (int i = nums.size() - 2; i >= 0; i--) {
        sum = nums[i + 1] + sum;
        res[i] = abs(res[i] - sum);
    }

    return res;
}

int main() {
    vector<int> nums = {10,4,8,3};
    for (int num : leftRightDifference(nums)) cout << num << " ";
}