class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size(), ans=0;
        for(int i=0; i<n; i++)
        {
            if(nums[abs(nums[i])-1]<0)
            {
                ans=abs(nums[i]);
                break;
            }
            nums[abs(nums[i])-1]*=-1;
        }
        return ans;
    }
};