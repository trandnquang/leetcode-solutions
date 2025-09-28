// 189. Rotate Array
// 2 ways to solve

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 1st way: extra array | O(n) runtime 
// Complete with 100% runtime but 25% memory
void rotate1(vector<int>& nums, int k) {
    vector<int> res(nums.size());
    int i = 0, j = nums.size() - (k % nums.size());

    for (int i = 0; i < nums.size(); i++) {
        res[i] = nums[j % nums.size()];
        j++;
    }

    nums = res; 
}

// 2nd way: reverse method | O(1) memory 
// Complete with 100% runtime and 98% memory
// Note: This solution tricker to find
void reverse(vector<int>& nums, int start, int end) {
    while (start < end) {
        swap(nums[start], nums[end]);
        start++; end--;
    }
}

void rotate2(vector<int>& nums, int k) {
    k = k % nums.size();
    // First reverse the whole array:
    // [1,2,3,4,5,6,7] -> [7,6,5,4,3,2,1]
    reverse(nums, 0, nums.size() - 1); 

    // Then reverse the first k elements:
    // [7,6,5,4,3,2,1] -> [5,6,7,4,3,2,1]
    reverse(nums, 0, k - 1);

    // Finally reverse the rest:
    // [5,6,7,4,3,2,1] -> [5,6,7,1,2,3,4]
    reverse(nums, k, nums.size() - 1);
}