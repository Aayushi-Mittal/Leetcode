class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size()%k!=0) return false;
        sort(nums.begin(), nums.end());
        map<int,int> mp;
        for(int i=0; i<nums.size(); i++)
            mp[nums[i]]++;
        //nums = [3,2,1,2,3,4,3,4,5,9,10,11], k = 3
        //mp   = [1:1, 2:2, 3:3, 4:2, 3:1, 9:1 10:1, 11:1]
        for(auto itr=mp.begin(); itr!=mp.end();)
        {
            if(itr->second>0)
            {
                for(int i=0; i<k; i++)
                {
                    if(mp[itr->first+i]>0) mp[itr->first+i]--;
                    else return false;
                }
            }
            else itr++;
        }
        return true;
    }
};