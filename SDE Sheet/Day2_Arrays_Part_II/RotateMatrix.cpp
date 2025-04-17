// https://leetcode.com/problems/rotate-image/description/
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void rotate(vector<vector<int>> &matrix) {
        int n = matrix.size();
        int i = 0, j = 0;
        while (i < n) {
            if (i == j) {
                i += 1;
                j = 0;
            } else {
                swap(matrix[i][j], matrix[j][i]);
                j++;
            }
        }

        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < i; j++) {
        //         swap(matrix[i][j], matrix[j][i]);
        //     }
        // }

        i = 0;
        while (i < n) {
            reverse(matrix[i].begin(), matrix[i].end());
            i++;
        }
    }
};