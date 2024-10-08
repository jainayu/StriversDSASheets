// https://www.codingninjas.com/studio/problems/lower-bound_8165382

#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr, int n, int x) {
    int low = 0, high = n - 1;
    int idx = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            idx = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return idx;
}