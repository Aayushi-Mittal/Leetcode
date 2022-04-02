class Solution {
public:
    bool validPalindrome(string s) {
        int i=0, j=s.size()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
                break;
            i++; j--;
        }
        int st=i+1, en=j-1;
        while(st<j)
        {
            if(s[st]!=s[j])
                break;
            st++; j--;
        }
        if(st>=j) return true;
        while(i<en)
        {
            if(s[i]!=s[en])
                break;
            i++; en--;
        }
        if(i>=en) return true;
        return false;
    }
};