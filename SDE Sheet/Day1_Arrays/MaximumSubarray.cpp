// https://leetcode.com/problems/maximum-subarray/description/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Kadane's Algorithm
class Solution {
  public:
    int maxSubArray(vector<int> &nums) {
        int sum = 0;
        int maxS = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (sum >= maxS) {
                maxS = sum;
            }
            if (sum < 0) {
                sum = 0;
            }
        }
        return maxS;
    }
};