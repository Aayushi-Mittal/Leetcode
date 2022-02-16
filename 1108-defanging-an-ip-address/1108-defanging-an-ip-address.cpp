class Solution {
public:
    string defangIPaddr(string address) {
        string ans="";
        for(char s:address) {
            if(s=='.')
                ans+="[.]";
            else
                ans+=s;
        }
        return ans;
    }
};