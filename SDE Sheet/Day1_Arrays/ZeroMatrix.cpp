// https://leetcode.com/problems/set-matrix-zeroes/description/
#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

// Optimal Approach
class Solution1 {
  public:
    vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
        int col0 = 1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;

                    if (j != 0) {
                        matrix[0][j] = 0;
                    } else {
                        col0 = 0;
                    }
                }
            }
        }

        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][j] != 0) {
                    if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                        matrix[i][j] = 0;
                    }
                }
            }
        }

        if (matrix[0][0] == 0) {
            for (int j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }

        if (col0 == 0) {
            for (int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }

        return matrix;
    }
};

// Good Approach
class Solution2 {
  public:
    vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
        set<int> rows;
        set<int> columns;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    rows.insert(i);
                    columns.insert(j);
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (rows.find(i) != rows.end() ||
                    columns.find(j) != columns.end()) {
                    matrix[i][j] = 0;
                }
            }
        }

        return matrix;
    }
};