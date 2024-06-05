class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> ans;
        map<int,int> m1;
        
        for(int i=0; i<nums.size(); i++) 
            for(int j=0; j<nums[i].size(); j++) 
                m1[nums[i][j]]++;
        
        for(auto m:m1)
            if(m.second==nums.size()) ans.push_back(m.first);
        
        return ans;
    }
};