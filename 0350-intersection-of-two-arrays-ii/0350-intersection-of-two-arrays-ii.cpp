class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> cnt;
        vector<int> ans;
        for(int n:nums1) cnt[n]++;
        for(int m:nums2){
            if (cnt[m] > 0){
                cnt[m]--; 
                ans.push_back(m);
            }
        }
        return ans;
    }
};