class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxp = 0;
        int bestbuy = prices[0];
        
        for(int i = 1; i < prices.size(); i++){
            
             if(bestbuy < prices[i]){
                int profit = prices[i] - bestbuy;
                maxp = max(maxp , profit);
             }

             bestbuy = min(prices[i] , bestbuy);

        }

        return maxp;

    }
};