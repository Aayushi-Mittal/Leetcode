class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> helper(256,-1);
        int n=s.size(), l=0, r=0, ans=0;
        for(int r=0; r<n; r++)
        {
            if(helper[s[r]]!=-1)
                l=max(l,helper[s[r]]+1);
            helper[s[r]]=r;
            ans=max(ans, r-l+1);
        }
        return ans;
    }
};