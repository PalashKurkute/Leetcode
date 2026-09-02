class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min,profit=0;
        min=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            if(min>prices[i])
                min=prices[i];
            if(profit<prices[i]-min)
                profit=prices[i]-min;
        }
        return profit;
    }
};