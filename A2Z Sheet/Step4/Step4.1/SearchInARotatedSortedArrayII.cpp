// https://www.codingninjas.com/studio/problems/search-in-a-rotated-sorted-array-ii_7449547

#include <bits/stdc++.h>
using namespace std;

bool searchInARotatedSortedArrayII(vector<int> &a, int k) {
    int low = 0;
    int high = a.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] == k) {
            return true;
        }

        if (a[low] == a[mid] && a[mid] == a[high]) { // Edge case:
            low = low + 1;
            high = high - 1;
            continue;
        }

        if (a[low] <= a[mid]) {
            if (a[low] <= k && k <= a[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } else {
            if (a[mid] <= k && k <= a[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }

    return false;
}
