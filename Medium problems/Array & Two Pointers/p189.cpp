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
    reverse(nums, 0, nums.size() - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, nums.size() - 1);
}