class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0, count=0;
        int i=0, j=0;
        while(j<s.size())
        {
            set<char> st;
            while(st.find(s[j])==st.end() && j<s.size())
            {
                st.insert(s[j]);
                count++;
                j++;
            }
            ans=max(count,ans);
            count=0;
            j=i+1;
            i++;
        }
        return ans;
    }
};