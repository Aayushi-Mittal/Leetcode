class Solution {
public:
    int maxProduct(vector<string>& words) {
        int ans=0;
        for(int i=0; i<words.size(); i++) sort(words[i].begin(), words[i].end());
        
        for(int i=0; i<words.size(); i++)
        {
            for(int j=i+1; j<words.size(); j++)
            {
                int a=0, b=0;
                while(a<words[i].size() && b<words[j].size())
                {
                    if(words[i][a]==words[j][b]) break;
                    else if(words[i][a]<words[j][b]) a++;
                    else b++;
                }
                if((a==words[i].size() || b==words[j].size()) && words[i][a]!=words[j][b]){
                    int x=words[i].size()*words[j].size();
                    ans = max(ans, x);
                }
            }
        }
        return ans;
    }
};