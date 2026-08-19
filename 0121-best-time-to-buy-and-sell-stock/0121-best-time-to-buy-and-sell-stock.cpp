class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int prf = 0;
        for(int i = 1; i < prices.size(); i++){
            
            prf = max(prices[i]-buy,prf);
            buy= min(prices[i],buy);
        }
        return prf;
    }
};