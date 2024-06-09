class Solution {
public:
    int minimumChairs(string s) {
        int ans=0, av=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='E') av++;
            if(s[i]=='L') av--;
            if(av>ans) ans=av;
        }
        return ans;
    }
};