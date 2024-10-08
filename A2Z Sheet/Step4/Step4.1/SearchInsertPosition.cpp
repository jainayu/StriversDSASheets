// https://www.codingninjas.com/studio/problems/algorithm-to-find-best-insert-position-in-sorted-array_839813
#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &arr, int m) {
    int n = arr.size();
    int low = 0, high = n - 1;
    int idx = n;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == m) {
            return mid;
        } else if (arr[mid] > m) {
            idx = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return idx;
}