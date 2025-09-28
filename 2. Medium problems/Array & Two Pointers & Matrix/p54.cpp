// 54. Spiral Matrix
// Complete with 100% runtime and 13% memory

// Get some help from ChatGPT:
// Keep explicit boundary variables:
// - top = 0
// - bottom = matrix.size() - 1
// - left = 0
// - right = matrix[0].size() - 1
// Then spiral goes like this:
// - Traverse left → right across top, then top++.
// - Traverse top → bottom down right, then right--.
// - Traverse right → left across bottom, then bottom--.
// - Traverse bottom → top up left, then left++.
// - Repeat until all elements are added.

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> res(matrix.size() * matrix[0].size());
    int top = 0, bottom = matrix.size() - 1, left = 0, right = matrix[0].size() - 1, t = 0;

    while (t < res.size()) {
        // Left to Right 
        if (top <= bottom && left <= right) {
            for (int i = left; i <= right; i++) res[t++] = matrix[top][i];
            top++;
        }
        // Top to Bottom
        if (top <= bottom && left <= right) {
            for (int i = top; i <= bottom; i++) res[t++] = matrix[i][right];
            right--;
        }
        // Right to Left
        if (top <= bottom && left <= right) {
            for (int i = right; i >= left; i--) res[t++] = matrix[bottom][i];
            bottom--;
        }
        // Bottom to Top
        if (top <= bottom && left <= right) {
            for (int i = bottom; i >= top; i--) res[t++] = matrix[i][left];
            left++;
        }
    }
    
    
    return res;
}

int main() {
    // vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<int> res = spiralOrder(matrix);
    for (int n : res)
        cout << n << " ";
}