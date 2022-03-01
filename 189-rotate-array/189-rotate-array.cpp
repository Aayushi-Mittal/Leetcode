class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans;
        int n=nums.size();
        k=k%n;
        for(int i=n-k; i<nums.size(); i++)
            ans.push_back(nums[i]);
        for(int i=0; i<n-k; i++)
            ans.push_back(nums[i]);
        nums=ans;
    }
};