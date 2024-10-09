// https://leetcode.com/problems/pascals-triangle/description/
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution1 {
  public:
    int nCr(int n, int r) {
        long long res = 1;

        for (int i = 0; i < r; i++) {
            res = res * (n - i);
            res = res / (i + 1);
        }

        return (int)(res);
    }
    vector<vector<int>> pascalTriangle(int n) {
        vector<vector<int>> ans;

        for (int row = 1; row <= n; row++) {
            vector<int> tempLst;
            for (int col = 1; col <= row; col++) {
                tempLst.push_back(nCr(row - 1, col - 1));
            }
            ans.push_back(tempLst);
        }
        return ans;
    }
};

class Solution2 {
  public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pTriangle;
        for (int i = 0; i < numRows; i++) {
            vector<int> row(i + 1, 1);
            for (int j = 1; j < i; j++) {
                row[j] = pTriangle[i - 1][j - 1] + pTriangle[i - 1][j];
            }
            pTriangle.push_back(row);
        }
        return pTriangle;
    }
};