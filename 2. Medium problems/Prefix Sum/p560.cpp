// 560. Subarray Sum Equals K
// Complete with 97.87% runtime and 43% memory
// The instruction video link : https://www.youtube.com/watch?v=yuws7YK0Yng

#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <unordered_map> // HashMap
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    int prefixSum = 0;
    int count = 0;    
    unordered_map<int,int> prefixSumFrequency;
    prefixSumFrequency.insert({0,1});
        
    for (int num : nums) {
        prefixSum += num;

        if (prefixSumFrequency.count(prefixSum - k)) {
            count += prefixSumFrequency[prefixSum - k];
        }

        prefixSumFrequency[prefixSum]++;
    }
    return count;
}

int main() {
    vector<int> nums = {1,2,3,-2,4};
    cout << subarraySum(nums, 2);
}