// 11. Container With Most Water
// Complete with 100% runtime and 97% memory
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int maxArea(vector<int>& height) {
    int s = 0, e = height.size() - 1;
    int res = 0;
    while (s < e) {
        res = max(res, min(height[s], height[e]) * (e-s));
        if (height[s] < height[e]) s++;
        else e--;
    }
    return res;
}