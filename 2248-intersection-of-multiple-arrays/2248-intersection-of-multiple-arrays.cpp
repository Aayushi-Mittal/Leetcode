class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int n=nums.size();
        vector<int> ans;
        map<int,int> m1;
        
        for(int n:nums[0]) m1[n]++;
        
        for(int i=0; i<n; i++)
        {
            map<int,int> m2;
            for(int n:nums[i]) m2[n]++;
            for (auto it = m1.begin(); it != m1.end();) {
                if (m2[it->first]>0) {
                    it->second = min(it->second, m2[it->first]); it++;
                } else {
                    it = m1.erase(it);
                }
            }
        }
        for(auto m:m1)
            for(int i=0; i<m.second; i++)
                ans.push_back(m.first);
        return ans;
    }
};