#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> arr, int k) {
    int n = arr.size();
    k = k % n;
    if (k == 0) {
        return arr;
    }

    while (k--) {
        int front = arr[0];
        for (int i = 1; i < n; i++) {
            arr[i - 1] = arr[i];
        }
        arr[n - 1] = front;
    }

    return arr;
}
