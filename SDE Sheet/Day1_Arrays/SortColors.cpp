// https://leetcode.com/problems/sort-colors/description/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void sortColors(vector<int> &nums) {
        int red = 0, white = 0, blue = nums.size() - 1;

        while (white <= blue) {
            if (nums[white] == 0) {
                swap(nums[white], nums[red]);
                white++;
                red++;
            } else if (nums[white] == 1) {
                white++;
            } else {
                swap(nums[blue], nums[white]);
                blue--;
            }
        }
    }
};
