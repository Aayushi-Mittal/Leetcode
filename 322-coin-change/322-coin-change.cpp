class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,-1);
        dp[0]=0;
        int ans=min_coins(coins, amount, dp);
        if(ans==INT_MAX) return -1;
        return ans;
    }
    int min_coins(vector<int> &coins, int amount, vector<int> &dp)
    {
        if(amount==0) return 0;
        if(amount<0) return INT_MAX;
        if(dp[amount]!=-1) return dp[amount];
        int ans=INT_MAX;
        for(int i=0; i<coins.size(); i++)
        {
            int subans=0;
            subans=min_coins(coins, amount-coins[i], dp);
            if(subans!=INT_MAX && subans+1<ans) ans=subans+1;
        }
        dp[amount]=ans;
        return ans;
    }
};