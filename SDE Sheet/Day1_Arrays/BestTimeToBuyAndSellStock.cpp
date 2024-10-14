// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Optimal Approach
class Solution1 {
  public:
    int maxProfit(vector<int> &prices) {
        int minPrice = INT_MAX;
        int profit = 0;
        for (int i = 0; i < prices.size(); i++) {
            minPrice = min(minPrice, prices[i]);
            profit = max(profit, prices[i] - minPrice);
        }
        return profit;
    }
};

// Brute Force Approach
class Solution2 {
  public:
    int maxProfit(vector<int> &prices) {
        int n = prices.size();
        int profit = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (prices[j] > prices[i]) {
                    profit = max(prices[j] - prices[i], profit);
                }
            }
        }

        return profit;
    }
};