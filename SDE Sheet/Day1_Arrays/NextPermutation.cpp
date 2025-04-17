// https://leetcode.com/problems/next-permutation/description/

/*
    1234
    1243
    1324
    1342
    1423
    1432
    2134
    2143
    2314
    2341
    2413
    2431
    3124
    3142
    3214
    3241
*/

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