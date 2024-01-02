// https://www.codingninjas.com/studio/problems/longest-subarray-with-zero-sum_6783450

#include <bits/stdc++.h>
using namespace std;

int getLongestZeroSumSubarrayLength(vector<int> &arr) {
    int size = arr.size();
    int sum = 0;
    int maxLen = 0;
    unordered_map<int, int> ump;

    for (int i = 0; i < size; i++) {
        sum += arr[i];

        if (sum == 0) {
            maxLen = i + 1;
        } else {
            if (ump.find(sum) != ump.end()) {
                maxLen = max(maxLen, i - ump[sum]);
            } else {
                ump[sum] = i;
            }
        }
    }

    return maxLen;
}