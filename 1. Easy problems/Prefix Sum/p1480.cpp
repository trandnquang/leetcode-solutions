// 1480. Running Sum of 1d Array
// Complete with 100% runtime and 12% memory

#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    for (int i = 1; i < nums.size(); i++) 
        nums[i] += nums[i-1];
    
    return nums;
}

int main() {
    vector<int> nums = {3,1,2,10,1};
    for (int num : runningSum(nums)) cout << num << " ";
}