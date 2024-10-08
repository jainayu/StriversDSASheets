// https://leetcode.com/problems/koko-eating-bananas/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int getMaxElement(vector<int> &piles) {
        int max = INT_MIN;

        for (int i = 0; i < piles.size(); i++) {
            max = max < piles[i] ? piles[i] : max;
        }

        return max;
    }
    long getTotalHour(vector<int> &piles, int hourly) {
        long totalHr = 0;
        int n = piles.size();

        for (int i = 0; i < n; i++) {
            totalHr += ceil((double)(piles[i]) / (double)(hourly));
        }
        return totalHr;
    }

    int minEatingSpeed(vector<int> &piles, int h) {
        int low = 1;
        int high = getMaxElement(piles);

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long totalHr = getTotalHour(piles, mid);
            if (totalHr <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};