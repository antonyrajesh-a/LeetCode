class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit = 0;
        int buydayprice = prices[0];
        
        for(int i = 0; i < prices.size() ; i++){
            
            if( prices[i] < buydayprice) {
                buydayprice = prices[i];
                continue;
            }
            
            profit = max(prices[i] - buydayprice, profit);
            
            
            
        }
        return profit;
        
    }
};