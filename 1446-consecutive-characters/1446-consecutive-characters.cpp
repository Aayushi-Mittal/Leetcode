class Solution {
public:
    int maxPower(string s) {
        int ans=1, temp=1;
        for(int i=1; i<s.size(); i++)
        {
            if(s[i-1]==s[i]) temp++;
            else {
                ans=max(temp,ans);
                temp=1;
            }
        }
        ans=max(temp,ans);
        return ans;
    }
};