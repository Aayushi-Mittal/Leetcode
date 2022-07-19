class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++)
        {
            if(mp.find(target-nums[i])!=mp.end())
            {
                ans={mp[target-nums[i]], i};
                break;
            }
            mp[nums[i]]=i;
        }
        if(ans[0]>ans[1]) swap(ans[0], ans[1]);
        return ans;
    }
};