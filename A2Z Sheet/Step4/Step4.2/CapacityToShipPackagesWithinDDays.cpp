// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

class Solution {
  public:
    int totalDaysRequired(vector<int> &weights, int capacity) {
        int totalDays = 1, load = 0;
        for (int i = 0; i < weights.size(); i++) {
            if (load + weights[i] > capacity) {
                totalDays++;
                load = weights[i];
            } else {
                load += weights[i];
            }
        }
        return totalDays;
    }
    int shipWithinDays(vector<int> &weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int daysRequired = totalDaysRequired(weights, mid);

            if (daysRequired <= days) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};