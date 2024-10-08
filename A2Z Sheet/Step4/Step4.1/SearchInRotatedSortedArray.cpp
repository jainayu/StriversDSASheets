// https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_1082554
#include <bits/stdc++.h>
using namespace std;

// optimal
int search(vector<int> &arr, int n, int k) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == k) {
            return mid;
        }

        if (arr[low] <= arr[mid]) { // left half sorted
            if (arr[low] <= k && k <= arr[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } else { // right half sorted
            if (arr[mid] <= k && k <= arr[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }
    return -1;
}

// my brute
int getPivotIndex(vector<int> &arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return i + 1;
        }
    }
    return 0;
}
int search(vector<int> &arr, int n, int k) {
    int pIdx = getPivotIndex(arr, n);

    int low = pIdx;
    int high = n + pIdx - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid % n] == k) {
            return mid % n;
        } else if (k > arr[mid % n]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}
