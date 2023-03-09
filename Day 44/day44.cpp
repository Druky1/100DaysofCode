// Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum = INT_MAX;
        int n = prices.size();
        int profit = 0;
        for(int i = 0; i<n; i++){
            minimum = min(minimum, prices[i]);
            profit = max(profit, prices[i] - minimum);
        }
        return profit;
        
    }
};
