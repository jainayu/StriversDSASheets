// https://www.codingninjas.com/studio/problems/893046
#include <bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> &permutation, int n) {
    int bp = -1;
    for (int i = n - 2; i >= 0; i--) {
        if (permutation[i] < permutation[i + 1]) {
            bp = i;
            break;
        }
    }

    if (bp == -1) {
        reverse(permutation.begin(), permutation.end());
        return permutation;
    }

    for (int i = n - 1; i > bp; i--) {
        if (permutation[i] > permutation[bp]) {
            swap(permutation[i], permutation[bp]);
            break;
        }
    }

    reverse(permutation.begin() + bp + 1, permutation.end());

    return permutation;
}