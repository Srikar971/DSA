class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy=INT_MAX;
        int maxi=0;
        for(int i=0;i<n;i++){
            buy=min(buy,prices[i]);
            maxi=max(maxi,prices[i]-buy);
        }
        return maxi;
    }
};