class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(), xr=n;
        for(int i=0; i<n; i++)
            xr=xr^nums[i]^i;
        return xr;
    }
};