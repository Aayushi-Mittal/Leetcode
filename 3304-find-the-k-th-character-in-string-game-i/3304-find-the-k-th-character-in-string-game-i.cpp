class Solution {
public:
    string word="a";
    string op(string word, int k){
        int curr=word.size();
        for(int n=0; n<curr; n++){
            word+=word[n]+1;
        }
        if(k<0) return word;
        return op(word, k-word.size());
    }
    char kthCharacter(int k) {
        int idx=k;
        word=op(word, k);
        return word[idx-1];
    }
};