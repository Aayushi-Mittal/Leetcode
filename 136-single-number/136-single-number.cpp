class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xr=0;
        for(int x:nums) {
            xr^=x;
        }
        return xr;
    }
};