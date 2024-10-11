// https://leetcode.com/problems/next-permutation/description/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void nextPermutation(vector<int> &nums) {
        int n = nums.size();
        int bIdx = n - 2;

        while (bIdx >= 0) {
            if (nums[bIdx] < nums[bIdx + 1]) {
                break;
            }
            bIdx--;
        }
        if (bIdx == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        for (int i = n - 1; i > bIdx; i--) {
            if (nums[i] > nums[bIdx]) {
                swap(nums[i], nums[bIdx]);
                break;
            }
        }
        reverse(nums.begin() + bIdx + 1, nums.end());
        return;
    }
};