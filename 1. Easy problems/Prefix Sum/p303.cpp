// 303. Range Sum Query - Immutable
// Complete with 100% runtime and 23% memory

#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

/* Note for Prefix Sum array

To find the sum of elements from index L to R (inclusive) in the original array:
- If L is 0, the sum is simply prefixSum[R].
- If L is greater than 0, the sum is prefixSum[R] - prefixSum[L-1].

Example: Find the sum of elements from index 1 to 3 using the prefix sum array?

    sum = prefixSum[3] - prefixSum[1-1] = prefixSum[3] - prefixSum[0] = 10 - 1 = 9.

*/

class NumArray {
public:
    vector<int> prefixSum;

    NumArray(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            prefixSum.push_back(sum);
        }            
    }

    /* Second way
    NumArray(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) 
            nums[i] += nums[i-1];
        prefixSum = nums;
    }
    */
    
    int sumRange(int left, int right) {
        if (left == 0) return prefixSum[right];
        else return prefixSum[right] - prefixSum[left - 1];
    }
};

int main() {
    vector<int> nums = {-2, 0, 3, -5, 2, -1};
    NumArray* obj = new NumArray(nums);
    int param_1 = obj->sumRange(2,5);
    cout << param_1;
}