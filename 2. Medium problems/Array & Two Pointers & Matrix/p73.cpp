// 73. Set Matrix Zeroes
// Complete with 100% runtime and 100% memory
// With some help from ChatGPT to fix some issues
// But the idea and deployment are by myself, not from ChatGPT

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    bool flagT = false;
    bool flagB = false;

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            if (matrix[i][j] == 0) {
                if (i == 0) {
                    flagT = true;
                }
                if (j == 0) {
                    flagB = true;
                }
                if (i != 0 && j != 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
    }

    for (int i = 1; i < matrix[0].size(); i++) {
        if (matrix[0][i] == 0) {
            for (int j = 0; j < matrix.size(); j++) matrix[j][i] = 0;
        } 
    }

    for (int i = 1; i < matrix.size(); i++) {
        if (matrix[i][0] == 0) {
            for (int j = 0; j < matrix[0].size(); j++) matrix[i][j] = 0;
        }
    }

    if (flagT) {
        for (int j = 0; j < matrix[0].size(); j++) {
            matrix[0][j] = 0;
        }
    }
    if (flagB) {
        for (int i = 0; i < matrix.size(); i++) {
            matrix[i][0] = 0;
        }
    }
}