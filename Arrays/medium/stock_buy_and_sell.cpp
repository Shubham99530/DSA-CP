class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int min_price = INT_MAX;
     int max_profit = INT_MIN;
     for(auto it : prices)
     {
        min_price = min(it,min_price);
        int diff = it - min_price;
        max_profit = max(max_profit, diff);
     }   
     return max_profit;
    }
};