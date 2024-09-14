class Solution {
public:
    bool hasAlternatingBits(int n) {
        int start=n%2;
        while(n>0){
            n=n>>1;
            if(n%2!=1-start) return false;
            else start=n%2;
        }
        return true;
    }
};