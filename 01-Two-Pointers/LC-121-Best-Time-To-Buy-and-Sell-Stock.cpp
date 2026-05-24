/*
Problem: Best Time to Buy and Sell Stock
Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
Description:
Find the maximum profit by choosing one day to buy and a later day to sell the stock.
Approach:
Uses two pointers where the left pointer tracks the best buying day and the right pointer scans for potential selling days. If the selling price is higher than the buying price, the profit is calculated and the maximum profit is updated. If a lower price is found, the left pointer is moved to that day since it offers a better buying opportunity for future transactions.
Complexity:
- Time: O(N)
- Space: O(1)
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;
        int maxProfit = 0;

        while(right < prices.size()) {
            if(prices[left] < prices[right]) {
                int profit = prices[right] - prices[left];
                maxProfit = max(maxProfit, profit);
            } 
            else {
                left = right;
            }

            right++;
        }

        return maxProfit;
    }
};
