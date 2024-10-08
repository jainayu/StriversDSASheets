// https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    bool isPossible(vector<int> &bloomDay, int day, int m, int k) {
        int n = bloomDay.size(); // size of the array
        int cnt = 0;
        int totalBouq = 0;
        // count the number of bouquets:
        for (int i = 0; i < n; i++) {
            if (bloomDay[i] <= day) {
                cnt++;
            } else {
                totalBouq += (cnt / k);
                cnt = 0;
            }
        }
        totalBouq += (cnt / k);
        return totalBouq >= m;
    }

    int minDays(vector<int> &bloomDay, int m, int k) {
        long long val = m * 1ll * k * 1ll;
        int n = bloomDay.size();
        if (val > n) {
            return -1;
        }

        int low = INT_MAX, high = INT_MIN;

        for (int i = 0; i < n; i++) {
            low = min(bloomDay[i], low);
            high = max(bloomDay[i], high);
        }

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (isPossible(bloomDay, mid, m, k)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};