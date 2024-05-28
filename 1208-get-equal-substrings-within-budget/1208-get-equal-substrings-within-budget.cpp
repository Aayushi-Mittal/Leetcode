class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n=s.size();
        int start=0, end=0, currsum=0, ans=0;

        for(end=0; end<n; end++)
        {
            currsum+=abs(s[end]-t[end]);
            while(currsum>maxCost)
            {
                currsum-=abs(s[start]-t[start]);
                start++;
            }
            ans=max(ans, end-start+1);
        }
        return ans;

    }
};