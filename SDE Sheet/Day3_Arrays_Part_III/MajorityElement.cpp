// Problem: https://leetcode.com/problems/majority-element/description/

#include <vector>
using namespace std;

class Solution {
  public:
    int majorityElement(vector<int> &nums) {
        int cnt = 0;
        int majorityElement;
        for (int i = 0; i < nums.size(); i++) {
            if (cnt == 0) {
                majorityElement = nums[i];
            }
            cnt += (majorityElement == nums[i] ? 1 : (-1));
        }
        return majorityElement;
    }
};