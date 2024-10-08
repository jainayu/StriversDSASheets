// https://www.codingninjas.com/studio/problems/ceiling-in-a-sorted-array_1825401
#include <bits/stdc++.h>
using namespace std;

int getCeil(vector<int> &a, int n, int x) {
    int low = 0, high = n - 1;
    int c = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] >= x) {
            c = a[mid];
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return c;
}

int getFloor(vector<int> &a, int n, int x) {
    int low = 0, high = n - 1;
    int f = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] <= x) {
            f = a[mid];
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return f;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
    int c = getCeil(a, n, x);
    int f = getFloor(a, n, x);

    return make_pair(f, c);
}