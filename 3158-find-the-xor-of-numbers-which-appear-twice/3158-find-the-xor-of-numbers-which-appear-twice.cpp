class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_set<int> s;
        int ans=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(s.find(nums[i])!=s.end()) ans^=nums[i];
            else s.insert(nums[i]);
        }
        return ans;
    }
};