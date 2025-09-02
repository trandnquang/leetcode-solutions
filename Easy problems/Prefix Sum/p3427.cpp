// 3427. Sum of Variable Length Subarrays

#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int subarraySum(vector<int>& nums) {
    // int res = nums[0];

    // for (int i = 1; i < nums.size(); i++) {
    //     nums[i] += nums[i-1];
    //     if (max(0, i - nums[i]) != 0) res += nums[i] - nums[i - nums[i] - 1];
    //     else res += nums[i];
    //     cout << res << endl;
    // }
    
    // return res;
}

int main() {
    vector<int> nums = {2,3,1};
    cout << subarraySum(nums);
}