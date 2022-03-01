class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        if(nums.size()==1) return {nums[0]*nums[0]};
        vector<int> ans;
        int i=0, j=0;
        while(j<nums.size() && nums[j]<0)
            j++;
        i=j-1;
        while(i>=0 && j<nums.size())
        {
            if(nums[j]<abs(nums[i])) {
                ans.push_back(nums[j]*nums[j]);
                j++;
            }
            else {
                ans.push_back(nums[i]*nums[i]);
                i--;
            }
        }
        
        while(i>=0)
        {
            ans.push_back(nums[i]*nums[i]);
            i--;
        }
        while(j<nums.size())
        {
            ans.push_back(nums[j]*nums[j]);
            j++;
        }
        return ans;
    }
};