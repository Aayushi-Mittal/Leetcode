class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++)
        {
            if(mp.find(target-nums[i])!=mp.end())
                ans={i,mp[target-nums[i]]};
            mp[nums[i]]=i;
        }
        if(ans[0]>ans[1]) swap(ans[0], ans[1]);
        return ans;
    }
};