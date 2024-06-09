class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> sums(k, 0);
        sums[0]++;
        int cnt = 0;
        int currSum = 0;
        for(int i = 0; i<n; i++) {
            currSum = (currSum + nums[i]%k + k)%k;
            cnt += sums[currSum];
            sums[currSum]++;
            cout<<currSum<<" ";
        }
        return cnt;
        
        // [4,5,0,-2,-3,1]
        // [4,9,9,7,4,5] pref sum 
        // [4 4 4 2 4 0 ] curr sum
        // [4:4, 2:1, 0:1]
    }
};