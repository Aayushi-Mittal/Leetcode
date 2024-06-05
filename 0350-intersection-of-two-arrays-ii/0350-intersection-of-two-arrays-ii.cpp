class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> cnt1, cnt2;
        vector<int> ans;
        for(int n:nums1) cnt1[n]++;
        for(int m:nums2) cnt2[m]++;
        for(auto itr=cnt1.begin(); itr!=cnt1.end(); itr++)
        {
            if(cnt2.find(itr->first)!=cnt2.end())
            {
                for(int i=0; i<min(cnt1[itr->first], cnt2[itr->first]); i++)
                    ans.push_back(itr->first);
            }
        }
        return ans;
    }
};