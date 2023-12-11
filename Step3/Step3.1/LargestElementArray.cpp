#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int n) {
    int max = 0;

    for (int i = 0; i < n; i++) {
        max = arr[i] > max ? arr[i] : max;
    }

    return max;
}
