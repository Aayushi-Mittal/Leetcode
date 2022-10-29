class Solution {
public:
    string oddString(vector<string>& words) {
        vector<int> target;
        vector<vector<int>> temp;
        for(int i=0; i<3; i++)
        {
            vector<int> v;
            for(int j=1; j<words[i].size(); j++)
                v.push_back(words[i][j]-'a'-(words[i][j-1]-'a'));
            temp.push_back(v);
        }
        if(temp[0]==temp[1]) target=temp[0];
        if(temp[0]==temp[2]) target=temp[0];
        if(temp[1]==temp[2]) target=temp[1];
        
        for(int i=0; i<words.size(); i++)
        {
            vector<int> v;
            for(int j=1; j<words[i].size(); j++)
                v.push_back(words[i][j]-'a'-(words[i][j-1]-'a'));
            if(v!=target) return words[i];
        }
        return words[0];
    }
};