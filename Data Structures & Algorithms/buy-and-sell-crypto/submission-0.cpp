class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int buy=0;
        int mini=INT_MAX;
        for(int i=0;i<prices.size();i++){
            buy=prices[i];
            mini=min(mini,buy);
            profit=max(profit,prices[i]-mini);
        }
        return profit;
    }

};
