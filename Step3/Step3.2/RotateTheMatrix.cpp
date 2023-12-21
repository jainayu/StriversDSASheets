// https://www.codingninjas.com/studio/problems/rotate-the-matrix_6825090
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void rotateMatrix(vector<vector<int>> &mat) {
    int n = mat.size();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (i != j) {
                int temp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        reverse(mat[i].begin(), mat[i].end());
    }
}