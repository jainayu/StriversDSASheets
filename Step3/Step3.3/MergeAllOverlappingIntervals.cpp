// https://www.codingninjas.com/studio/problems/merge-all-overlapping-intervals_6783452
#include <bits/stdc++.h>
using namespace std;

// Approach 01
vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());

    vector<vector<int>> res;

    for (int i = 0; i < n; i++) {
        if (res.empty() || arr[i][0] > res.back()[1]) {
            res.push_back(arr[i]);
        } else {
            res.back()[1] = max(res.back()[1], arr[i][1]);
        }
    }

    return res;
}

// Approach 00
vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr) {
    int n = arr.size();
    int left = arr[0][0];
    int right = arr[0][1];
    vector<vector<int>> res;
    for (int i = 1; i < n; i++) {
        if (left <= arr[i][0] && right >= arr[i][1]) {
            continue;
        } else if (left <= arr[i][0] && right >= arr[i][0] &&
                   right < arr[i][1]) {
            right = arr[i][1];
        } else if (right < arr[i][0]) {
            vector<int> temp = {left, right};
            res.push_back(temp);
            left = arr[i][0];
            right = arr[i][1];
        }
    }

    vector<int> temp = {left, right};
    res.push_back(temp);

    return res;
}