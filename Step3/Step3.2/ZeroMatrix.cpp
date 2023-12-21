#include <bits/stdc++.h>
using namespace std;

// Optimal Approach

// Good Approach
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