// https://www.naukri.com/code360/problems/rotated-array_1093219
#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &a) {
    int low = 0;
    int high = a.size() - 1;

    int res = INT_MAX;

    while (low <= high) {

        if (a[low] <= a[high]) {
            res = min(res, a[low]);
            break;
        }

        int mid = low + (high - low) / 2;

        if (a[low] <= a[mid]) {
            res = min(res, a[low]);
            low = mid + 1;
        } else {
            res = min(res, a[mid]);
            high = mid - 1;
        }
    }
    return res;
}