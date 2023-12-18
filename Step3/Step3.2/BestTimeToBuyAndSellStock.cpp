// https://www.codingninjas.com/studio/problems/best-time-to-buy-and-sell-stock_6194560
#include <bits/stdc++.h>
using namespace std;

int bestTimeToBuyAndSellStock(vector<int> &prices) {
    int maxProfit = 0;
    int minPrice = INT_MAX;
    int size = prices.size();

    for (int i = 0; i < size; i++) {
        minPrice = min(minPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }

    return maxProfit;
}
