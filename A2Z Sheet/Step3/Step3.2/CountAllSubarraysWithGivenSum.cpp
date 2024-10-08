// https://www.codingninjas.com/studio/problems/subarray-sums-i_1467103
#include <bits/stdc++.h>
using namespace std;

// Approach 01
int findAllSubarraysWithGivenSum(vector<int> &arr, int k) {
    int start = 0;
    int end = 0;
    int size = arr.size();
    int sum = 0;
    int cnt = 0;

    while (end < size) {
        sum += arr[end];

        while (start <= end && sum > k) {
            sum -= arr[start++];
        }

        if (sum == k) {
            cnt++;
        }

        end++;
    }

    return cnt;
}

// Approach 02: Prefix Sum

int findAllSubarraysWithGivenSum(vector<int> &arr, int k) {
    int n = arr.size();
    map<int, int> preSumMap;
    int preSum = 0, cnt = 0;

    preSumMap[0] = 1;
    for (int i = 0; i < n; i++) {
        preSum += arr[i];
        int rem = preSum - k;
        cnt += preSumMap[rem];
        preSumMap[preSum] += 1;
    }

    return cnt;
}