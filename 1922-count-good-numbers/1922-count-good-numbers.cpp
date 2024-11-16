class Solution {
public:
    const int mod = 1e9 + 7;
    long long modPow(long long base, long long exp) {
        long long result = 1;
        while (exp > 0) {
            if (exp % 2 == 1) { 
                result = (result * base) % mod;
            }
            base = (base * base) % mod;
            exp /= 2;
        }
        return result;
    }
    int countGoodNumbers(long long n) {
        //prime - 2,3,5,7
        //even - 0,2,4,6,8
        if(n==1) return 5;
        if(n%2==0) return (modPow(4,n/2)*modPow(5,n/2))%mod;
        else return (modPow(4,n/2)*modPow(5,(n/2)+1))%mod;
    }
};