class Solution {
public:
    string compressedString(string word) {
        string comp="";
        int cnt=0;
        for(int i=0; i<word.size(); i++)
        {
            cnt=1;
            while(word[i]==word[i+1] && cnt<9)
            {
                cnt++; i++;
            }
            comp += to_string(cnt) + word[i];
        }
        
        return comp;
    }
};