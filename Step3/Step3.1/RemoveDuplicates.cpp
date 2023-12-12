#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
    int length = 1;
    int prev = arr[0];
    for (int i = 1; i < n; i++) {
        if (prev != arr[i]) {
            prev = arr[i];
            length += 1;
        }
    }
    return length;
}