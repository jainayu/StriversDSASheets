// Problem: https://leetcode.com/problems/search-a-2d-matrix/description/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Approach 2: Binary Search
class Solution02 {
  public:
    bool searchMatrix(vector<vector<int>> &matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int low = 0;
        int high = n * m - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int row = mid / m;
            int col = mid % m;

            if (target == matrix[row][col]) {
                return true;
            } else if (matrix[row][col] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return false;
    }
};

// Approach 1: Brute Force - Linear Search
class Solution01 {
  public:
    bool searchMatrix(vector<vector<int>> &matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0; i < n; i++) {
            if (matrix[i][0] <= target && matrix[i][m - 1] >= target) {
                for (int j = 0; j < m; j++) {
                    if (target == matrix[i][j]) {
                        return true;
                    }
                }
                return false;
            }
        }
        return false;
    }
};