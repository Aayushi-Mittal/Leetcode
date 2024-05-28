class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        vector<int> diff;
        int n=s.size();

        for(int i=0; i<n; i++)
        {
            diff.push_back(abs(s[i]-t[i]));
        }

        int start=0, end=0, currsum=0, ans=0;

        for(end=0; end<n; end++)
        {
            currsum+=diff[end];
            while(currsum>maxCost)
            {
                currsum-=diff[start];
                start++;
            }
            ans=max(ans, end-start+1);
        }
        return ans;

    }
};