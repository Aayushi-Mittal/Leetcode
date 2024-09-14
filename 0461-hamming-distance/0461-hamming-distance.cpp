class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans=0, xr=x^y;
        while(xr>0)
        {
            xr=xr&(xr-1);
            ans++;
        }
        return ans;
    }
};