class Solution {
public:
    int longestPalindrome(string s) {
        int ans=0, odd=0;
        unordered_map<char,int> count;
        for(int i=0; i<s.size(); i++)
            count[s[i]]++;
        for(auto n:count)
        {
            ans+=n.second;
            if(n.second%2==1) {
                odd=1;
                ans--;
            }
        }
        return ans+odd;
    }
};