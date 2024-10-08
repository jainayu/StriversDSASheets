// https://www.naukri.com/code360/problems/rotation_7449070
#include <limits.h>
int findKRotation(vector<int> &a) {
    int low = 0, high = a.size() - 1;
    int idx = -1;
    int min = INT_MAX;
    while (low <= high) {
        if (a[low] <= a[high]) {
            if (a[low] < min) {
                min = a[low];
                idx = low;
                break;
            }
        }
        int mid = low + (high - low) / 2;
        if (a[low] <= a[mid]) {
            if (a[low] < min) {
                min = a[low];
                idx = low;
            }
            low = mid + 1;
        } else {
            if (a[mid] < min) {
                min = a[mid];
                idx = mid;
            }
            high = mid - 1;
        }
    }

    return idx;
}