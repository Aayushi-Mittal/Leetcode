class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        
        int n=words.size();
        vector<string> ans;
        unordered_map<char,int> m1;
        
        if(n==1) {
            for(int i=0; i<words[0].size(); i++) ans.push_back(string(1,words[0][i]));
            return ans;
        }
        
        for(char n:words[0]) m1[n]++;
        
        for(int i=0; i<n; i++)
        {
            unordered_map<char,int> m2;
            for(char n:words[i]) m2[n]++;
            for (auto it = m1.begin(); it != m1.end(); ) {
                if (m2.find(it->first) != m2.end()) {
                    it->second = min(it->second, m2[it->first]);
                    ++it;
                } else {
                    it = m1.erase(it);
                }
            }
        }
        for(auto m:m1)
            for(int i=0; i<m.second; i++)
                ans.push_back(string(1,m.first));
        return ans;
    }
};