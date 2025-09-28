// 977. Squares of a Sorted Array
// Complete with 100% runtime and 98% memory

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    vector<int> res(nums.size());
    int i = 0;
    // find the first non-negative number
    while (i != nums.size() && nums[i] < 0) {
        i++;
    }

    // if all numbers are non-negative
    if (i == 0) {
        while (i < nums.size()) {
            res[i] = pow(nums[i], 2);
            i++;
        }
        
    } 
    // if all numbers are negative
    else if (i == nums.size()) {
        int j = 0;
        i = nums.size() - 1;
        while (i >= 0) {
            res[j] = pow(nums[i], 2);
            i--; j++;
        }
    } 
    // if there are both negative and non-negative numbers
    else {
        int j = i - 1;
        int t = 0;
        while (i < nums.size() && j >= 0) {
            if (nums[j] + nums[i] <= 0) {
                res[t] = pow(nums[i], 2);
                i++;
            } else {
                res[t] = pow(nums[j], 2);
                j--;
            }
            t++;
        }
        if (i == nums.size()) {
            while (j >= 0) {
                res[t] = pow(nums[j], 2);
                j--;
                t++;
            }
        } 
        if (j == -1) {
            while (i < nums.size()) {
                res[t] = pow(nums[i], 2);
                i++;
                t++;
            }
        }
    }
    
    return res;
}
