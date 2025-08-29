// 35. Search Insert Position
// Complete with 100% runtime and 41% memory

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    int mid = 0;
    while (low <= high) {
        mid = low + (high - low) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[mid] < target)
            low = mid + 1;

        else
            high = mid - 1;
    }
    if (nums[mid] < target) return mid + 1;
    return mid;
}

int main() {
    vector<int> arr = {2,4,6,8};
    cout << searchInsert(arr, 1) << endl;
    cout << searchInsert(arr, 6) << endl;
    cout << searchInsert(arr, 3) << endl;
    cout << searchInsert(arr, 9) << endl;
}