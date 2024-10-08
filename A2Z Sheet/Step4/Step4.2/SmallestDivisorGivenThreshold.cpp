// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int findSum(vector<int> &nums, int divisor) {
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += ceil((double)nums[i] / (double)divisor);
        }

        return sum;
    }
    int smallestDivisor(vector<int> &nums, int threshold) {
        int n = nums.size();
        if (n > threshold) {
            return -1;
        }
        int low = 1, high = *max_element(nums.begin(), nums.end());
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (findSum(nums, mid) <= threshold) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};