class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,-1);
        int ans=min_coins(coins, amount, dp);
        if(ans==INT_MAX) return -1;
        else return ans;
    }
    int min_coins(vector<int> &coins, int amount, vector<int> &dp)
    {
        // if(amount==0) return 0;
        // if(amount<0) return INT_MAX;
        // if(dp[amount]!=-1) return dp[amount];
        // dp[amount]=INT_MAX;
        // for(int i=0; i<coins.size(); i++)
        // {
        //     int subans=min_coins(coins, amount-coins[i], dp);
        //     // if(dp[amount-coins[i]]!=-1)
        //     //     ans=dp[amount-coins[i]];
        //     // else
        //     if(subans!=INT_MAX)
        //     dp[amount]=min(subans+1, dp[amount]);
        //     // if(ans!=INT_MAX) ans+=1;
        // }
        // return dp[amount];
        
        //Base Case
        if(amount == 0)
            return 0;
        if(amount < 0)
            return INT_MAX;
        
        if(dp[amount] != -1) return dp[amount];
        
        int ans = INT_MAX;
        for(int i = 0; i < coins.size(); i++){
            int cur =min_coins(coins, amount - coins[i], dp);
            if(cur != INT_MAX)
                ans = min(ans, 1 + cur);
        }
        return dp[amount]=ans;
    }
    
};