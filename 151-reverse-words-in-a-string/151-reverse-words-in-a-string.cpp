class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string str="", ans="";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==' ' || s[i]=='\t'){
                if(str!="" && str!=" "){
                    v.push_back(str);
                }
                str="";
            } else {
                str+=s[i];
            }
        }
        v.push_back(str);
        for(int i=v.size()-1; i>0; i--){
            if(v[i]!="") ans+=v[i]+' ';
        }
        ans+=v[0];
        return ans;
    }
};