class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t num=n, ans=0;
        int x=31;
        while(num>0)
        {
            if(num%2==1) ans+=pow(2,x);
            x--; num/=2;
        }
        return ans;
    }
};