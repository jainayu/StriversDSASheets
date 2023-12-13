#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b) {
    vector<int> uni;
    int i = 0;
    int j = 0;
    int n = a.size();
    int m = b.size();
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            if (uni.size() == 0 || uni.back() != a[i]) {
                uni.push_back(a[i]);
            }
            i++;
        } else {
            if (uni.size() == 0 || uni.back() != b[j]) {
                uni.push_back(b[j]);
            }
            j++;
        }
    }

    while (i < n) {
        if (uni.back() != a[i]) {
            uni.push_back(a[i]);
        }
        i++;
    }

    while (j < m) {
        if (uni.back() != b[j]) {
            uni.push_back(b[j]);
        }
        j++;
    }

    return uni;
}