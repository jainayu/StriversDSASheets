#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> &arr, int n) {
    int front = arr[0];

    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = front;
    return arr;
}
