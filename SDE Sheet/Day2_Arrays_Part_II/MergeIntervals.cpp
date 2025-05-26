// Problem: https://leetcode.com/problems/merge-intervals/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<vector<int>> merge(vector<vector<int>> &intervals) {
        sort(intervals.begin(), intervals.end(),
             [](const vector<int> &a, const vector<int> &b) {
                 return a[0] < b[0];
             });
        vector<vector<int>> res;
        for (auto interval : intervals) {
            // if the list of merged intervals is empty or if the current
            // interval does not overlap with the previous, simply append it.
            // otherwise, there is overlap, so we merge the current and previous
            // intervals.
            if (res.empty() || res.back()[1] < interval[0]) {
                res.push_back(interval);
            } else {
                res.back().back() = max(res.back().back(), interval[1]);
            }
        }
        return res;
    }
};