// 26. Remove Duplicates from Sorted Array
// Complete with 100% runtime and 20% memory
#include <iostream>
#include <string>
#include <vector>
using namespace std;


int removeDuplicates(vector<int>& nums) {
    int k = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (i == 0) k++;
        else if (nums[i] != nums[i-1]) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main() {
    vector<int> arr = {0,0,1,1,1,2,2,3,3,4};
    cout << removeDuplicates(arr) << endl;

    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
}

