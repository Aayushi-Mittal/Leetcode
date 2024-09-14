class Solution {
public:
    vector<int> evenOddBit(int n) {
        int odd=0, even=0, i=0;
        while(n>0)
        {
            if(n%2==1) {
                (i%2==0) ? even++ : odd++;
            }
            n=n>>1; i++;
        }
        return {even, odd};
    }
};

// 01
// 10
// 11
// 100
// 101