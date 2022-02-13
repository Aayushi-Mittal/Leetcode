class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // priority_queue<int, vector<int>, greater<int>> pq;
        vector<int> ans;
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++)
            mp[nums[i]]++;
        map<int,vector<int>> freq;
        for(auto itr:mp){
            freq[itr.second].push_back(itr.first);
        }
        for(auto itr=freq.rbegin(); itr!=freq.rend(); itr++)
        {
            int count=itr->second.size(), i=0;
            while(i<count && k>0){
                ans.push_back(itr->second[i]);
                i++; k--;
            }
        }
        return ans;
    }
};