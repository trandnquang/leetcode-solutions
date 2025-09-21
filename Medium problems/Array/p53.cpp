// 53. Maximum Subarray
// Complete with 100% runtime and 16% memory
// Using Kadane's Algorithm

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int max_num = nums[0], temp = 0;
    for (int num : nums) {
        temp += num;
        max_num = max(max_num, temp);
        if (temp < 0) temp = 0;
    }

    return max_num;
}