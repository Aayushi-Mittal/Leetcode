class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> h1;
        for(int i=0; i<strs.size(); i++)
        {
            string sorted_word=strs[i];
            sort(sorted_word.begin(), sorted_word.end());
            h1[sorted_word].push_back(strs[i]);
        }
        for(auto h:h1){
            ans.push_back(h.second);
        }
        return ans;
    }
};