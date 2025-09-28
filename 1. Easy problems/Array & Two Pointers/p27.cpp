// 27. Remove Element
// Complete with 100%runtime and 44% memory

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int k = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums.at(i) != val) {
            nums.at(k) = nums.at(i);
            k++;
        }
    }
    return k;
}

int main() {
    vector<int> arr = {3,2,2,3};
    int k = removeElement(arr, 3);
    cout << k;
    for (int i = 0; i < arr.size(); i++) cout << arr.at(i) << " ";
}