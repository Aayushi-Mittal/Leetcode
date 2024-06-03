class Solution {
public:
    int appendCharacters(string s, string t) {
        int k=0;
        for(int i=0; i<s.size(); i++)
            if(k<t.size() && s[i]==t[k])  k++;
        return t.size()-k;
        
        // coachincodachging
        // coding
    }
};