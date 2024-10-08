// https://www.codingninjas.com/studio/problems/implement-upper-bound_8165383
#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &arr, int x, int n) {
    int low = 0, high = n - 1;
    int idx = n;
    if (arr[0] > x) {
        return 0;
    }

    if (x >= arr[n - 1]) {
        return idx;
    }

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] > x) {
            idx = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return idx;
}