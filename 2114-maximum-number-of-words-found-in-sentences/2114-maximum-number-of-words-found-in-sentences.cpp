class Solution {
public:
    int split(string s){
        int count=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==' ')
                count++;
        }
        return count+1;
    }
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        for(string s:sentences){
            ans=max(ans, split(s));
        }
        return ans;
    }
};