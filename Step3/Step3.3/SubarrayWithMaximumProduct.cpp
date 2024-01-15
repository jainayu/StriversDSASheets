// https://www.codingninjas.com/studio/problems/subarray-with-maximum-product_6890008
#include <bits/stdc++.h>
using namespace std;

// Optimal Solution
int subarrayWithMaxProduct(vector<int> &arr) {
    int maxP = INT_MIN;
    int prefix = 1;
    int suffix = 1;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (prefix == 0) {
            prefix = 1;
        }
        if (suffix == 0) {
            suffix = 1;
        }

        prefix *= arr[i];
        suffix *= arr[n - i - 1];
        maxP = max(maxP, max(prefix, suffix));
    }

    return maxP;
}

// Brute Force
int subarrayWithMaxProduct(vector<int> &arr) {
    int maxP = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        int prod = 1;
        for (int j = i; j < arr.size(); j++) {
            prod *= arr[j];
            maxP = max(maxP, prod);
        }
    }
    return maxP;
}