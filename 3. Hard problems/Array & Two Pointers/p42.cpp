// 42. Trapping Rain Water
// 

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

// Solved by NeetCode: https://www.youtube.com/watch?v=ZI2z5pq0TqA
// Using left-right max arrays
// O(n) memory
// Complete with 10% runtime and 19% memory (Very bad)
// int trap(vector<int>& height) {
//     vector<int> maxLeft(height.size());
//     vector<int> maxRight(height.size());
//     int ans = 0;
//     maxLeft[0] = 0;

//     for (int i = 0; i < height.size() - 1; i++) {
//         maxLeft[i+1] = max(maxLeft[i], height[i]);
//     }

//     for (int i = height.size() - 1; i > 0; i--) {
//         maxRight[i-1] = max(maxRight[i], height[i]);
//     }

//     for (int i = 0; i < height.size(); i++) {
//         int temp = min(maxLeft[i], maxRight[i]);
//         if (temp > height[i])
//             ans += temp - height[i];
//     }

//     return ans;
// }


// Solved by NeetCode: https://www.youtube.com/watch?v=ZI2z5pq0TqA
// Using 2 pointers
// O(1) memory
// Complete with 100% runtime and 80% memory
int trap(vector<int>& height) {
    int l = 0, r = height.size() - 1;
    int maxL = height[l], maxR = height[r];
    int ans = 0;

    while (l < r) {
        if (maxL < maxR) {
            l++;
            maxL = max(height[l], maxL);
            ans += maxL - height[l];
        } else {
            r--;
            maxR = max(height[r], maxR);
            ans += maxR - height[r];
        }
    }

    return ans;
}

int main() {
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << trap(height);
}