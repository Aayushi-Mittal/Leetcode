class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        map<int,int> mp;
        for(int i=0; i<arr1.size(); i++) mp[arr1[i]]++;
        for(int i=0; i<arr2.size(); i++) {
            if(mp[arr2[i]]>0){
                while(mp[arr2[i]]--) ans.push_back(arr2[i]);
            }
        }
        for(auto m:mp){
            if(m.second>0) {
                while(m.second--) ans.push_back(m.first);
            }
        }
        return ans;
    }
};