// 238. Product of Array Except Self

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Complete with 21% runtime and 8% memory
// Bad solution
// vector<int> productExceptSelf(vector<int>& nums) {
//     vector<int> ans(nums.size());
//     vector<int> prefix(nums.size());
//     vector<int> suffix(nums.size());
//     prefix[0] = nums[0];
//     suffix[nums.size()-1] = nums[nums.size()-1];
//     for (int i = 1; i < nums.size(); i++) {
//         prefix[i] = prefix[i-1] *  nums[i];
//     }

//     for (int num : prefix) cout << num << " ";
//     cout << endl;

//     for (int i = nums.size() - 2; i >= 0; i--) {
//         suffix[i] = suffix[i+1] *  nums[i];
//     }

//     for (int num : suffix) cout << num << " ";
//     cout << endl;

//     ans[0] = suffix[1];
//     ans[nums.size()-1] = prefix[nums.size()-2];
//     for (int i = 1; i < nums.size() - 1; i++) {
//         ans[i] = prefix[i-1] * suffix[i+1];
//     }

//     return ans;
// }

// Complete with 100% runtime and 43% memory
// NeetCode explain: https://www.youtube.com/watch?v=bNvIQI2wAjk&t=6s
vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> ans(nums.size());
    ans[0] = 1;
    for (int i = 0; i < nums.size() - 1; i++) {
        ans[i+1] = ans[i] *  nums[i];
    }

    int postPrefixTemp = 1;

    for (int i = nums.size() - 2; i >= 0; i--) {
        postPrefixTemp *= nums[i+1];
        ans[i] *= postPrefixTemp;
    }

    return ans;
}


int main() {
    vector<int> nums = {1,2,3,4};
    vector<int> ans = productExceptSelf(nums);
    for (int num : ans) cout << num << " ";
    cout << endl;
}