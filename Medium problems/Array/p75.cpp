// 75. Sort Colors

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// This complete with 100% runtime but only 11% runtime | O(n) memory
// void sortColors(vector<int>& nums) {
//     vector<int> arr(nums.size());
//     int i = 0, j = nums.size() - 1;

//     for (int num : nums) {
//         if (num == 0) {
//             arr[i] = 0;
//             i++;
//         }
//         if (num == 2) {
//             arr[j] = 2;
//             j--;
//         }
//     }

//     while (i <= j) {
//         arr[i] = 1;
//         i++;
//     }   
// }

// We want one-part solution and O(1) memory
// NeetCode explain: https://www.youtube.com/watch?v=4xbWSRZHqac
// Complete with 100% runtime and 50% memory
void sortColors(vector<int>& nums) {
    int l = 0, r = nums.size() - 1, i = 0;
    while (i <= r) {
        if (nums[i] == 0) {
            swap(nums[l], nums[i]);
            l++;
        } else if (nums[i] == 2) {
            swap(nums[r], nums[i]);
            r--;
            i--; // in the video mention why we don't shift i to right
        } 
        i++;
    }
}
