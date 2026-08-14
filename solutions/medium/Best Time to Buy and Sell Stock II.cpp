// Title: Best Time to Buy and Sell Stock II
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/


            // We can buy
            dp[i][1] = max(
                -prices[i] + dp[i + 1][0],
                dp[i + 1][1]
        for (int i = n - 1; i >= 0; i--) {

        vector<vector<int>> dp(n + 1, vector<int>(2, 0));

        // dp[i][1] = maximum profit when we hold/can buy stock
        // dp[i][0] = maximum profit when we don't hold stock

        int n = prices.size();

    int maxProfit(vector<int>& prices) {
public:
class Solution {
            );

