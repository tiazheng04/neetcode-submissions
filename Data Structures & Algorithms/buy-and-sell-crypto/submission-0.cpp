class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int cur_min = prices[0];

        for(int i = 1; i < prices.size(); i++){
            if(cur_min > prices[i]){
                cur_min = prices[i]; 
                continue;
            }
            profit = max(profit, prices[i]-cur_min);

        }

        return profit;
    }
};
