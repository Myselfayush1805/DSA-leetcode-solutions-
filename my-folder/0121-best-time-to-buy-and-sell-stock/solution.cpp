class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest=INT_MAX;
        int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            lowest=min(prices[i],lowest);
            maxProfit=max(prices[i]-lowest,maxProfit);
        }
        return maxProfit;
    }
};
