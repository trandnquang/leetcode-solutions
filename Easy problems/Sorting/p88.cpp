// 88. Merge Sorted Array
// The direct solution link: https://leetcode.com/problems/merge-sorted-array/submissions/1758123723/
// Complete with 100% runtime and 39% memory 

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int midx = m - 1;
    int nidx = n - 1;
    int r = m + n - 1;

    while (nidx >= 0) {
        if (midx >= 0 && nums1[midx] > nums2[nidx]) {
            nums1[r] = nums1[midx];
            midx--;
        } else {
            nums1[r] = nums2[nidx];
            nidx--;
        }
        r --;
    }
}