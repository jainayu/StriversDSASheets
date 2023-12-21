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